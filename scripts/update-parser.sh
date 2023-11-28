#!/bin/bash

npm update tree-sitter-css
npm ci

npm run generate
npm install

git submodule init
git submodule update

cd tree-sitter-css && git checkout origin/master && cd ..
cp tree-sitter-css/test/corpus/* test/corpus
