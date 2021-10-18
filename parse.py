from yaml import load
try:
    from yaml import CLoader as Loader
except:
    from yaml import Loader


def main():
    with open('example.yml') as fd:
        data = load(fd, Loader)
        print(data)


if __name__ == '__main__':
    main()
