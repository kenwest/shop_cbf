#!/bin/bash
#
# Run this after recreating the feature.
# Restore the permissions before committing changes to Git.
#

chmod g-w -R .
grep private -r * | grep -v "post\.sh"
