#!/usr/bin/python3
""" lockboxes algorithm """


def canUnlockAll(boxes):
    """ Check to see if it's possible to unlock all these boxes """
    keys, search = [], []

    keys.append(0)  # we have the 0th key
    if not boxes:
        return False
    while keys:  # get the next key
        current = keys.pop()

        if current not in search:
            search.append(current)  # add current to list searched
            for key in boxes[current]:  # add keys to our keys list
                keys.append(key)

    return len(search) == len(boxes)  # have we searched all the rooms? T/F
