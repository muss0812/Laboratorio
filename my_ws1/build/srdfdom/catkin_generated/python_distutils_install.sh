#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/junior/my_ws1/src/srdfdom"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/junior/my_ws1/install/lib/python3/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/junior/my_ws1/install/lib/python3/dist-packages:/home/junior/my_ws1/build/srdfdom/lib/python3/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/junior/my_ws1/build/srdfdom" \
    "/usr/bin/python3" \
    "/home/junior/my_ws1/src/srdfdom/setup.py" \
    egg_info --egg-base /home/junior/my_ws1/build/srdfdom \
    build --build-base "/home/junior/my_ws1/build/srdfdom" \
    install \
    --root="${DESTDIR-/}" \
    --install-layout=deb --prefix="/home/junior/my_ws1/install" --install-scripts="/home/junior/my_ws1/install/bin"
