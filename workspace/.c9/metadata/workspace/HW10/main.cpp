{"changed":true,"filter":false,"title":"main.cpp","tooltip":"/HW10/main.cpp","value":"//This program genreates interesting view and colors of the mandelbrot set\n#include <iostream>\n#include <cmath>\n#include <fstream>\n#include <iomanip>\n#include <string>\n#include \"ppmToBmp.hpp\"\nusing namespace std;\n\n//a structure for the rgb colors\nstruct Color {\n    int r;\n    int g;\n    int b;\n};\n\n\n\nint main() {\n    \n}","undoManager":{"mark":-2,"position":100,"stack":[[{"start":{"row":5,"column":12},"end":{"row":5,"column":13},"action":"insert","lines":["r"],"id":242}],[{"start":{"row":5,"column":13},"end":{"row":5,"column":14},"action":"insert","lines":["i"],"id":243}],[{"start":{"row":5,"column":14},"end":{"row":5,"column":15},"action":"insert","lines":["n"],"id":244}],[{"start":{"row":5,"column":15},"end":{"row":5,"column":16},"action":"insert","lines":["g"],"id":245}],[{"start":{"row":5,"column":16},"end":{"row":5,"column":17},"action":"insert","lines":[">"],"id":246}],[{"start":{"row":5,"column":17},"end":{"row":6,"column":0},"action":"insert","lines":["",""],"id":247}],[{"start":{"row":6,"column":0},"end":{"row":6,"column":1},"action":"insert","lines":["#"],"id":248}],[{"start":{"row":6,"column":1},"end":{"row":6,"column":2},"action":"insert","lines":["i"],"id":249}],[{"start":{"row":6,"column":2},"end":{"row":6,"column":3},"action":"insert","lines":["n"],"id":250}],[{"start":{"row":6,"column":3},"end":{"row":6,"column":4},"action":"insert","lines":["c"],"id":251}],[{"start":{"row":6,"column":4},"end":{"row":6,"column":5},"action":"insert","lines":["l"],"id":252}],[{"start":{"row":6,"column":5},"end":{"row":6,"column":6},"action":"insert","lines":["u"],"id":253}],[{"start":{"row":6,"column":6},"end":{"row":6,"column":7},"action":"insert","lines":["d"],"id":254}],[{"start":{"row":6,"column":7},"end":{"row":6,"column":8},"action":"insert","lines":["e"],"id":255}],[{"start":{"row":6,"column":8},"end":{"row":6,"column":9},"action":"insert","lines":[" "],"id":256}],[{"start":{"row":6,"column":9},"end":{"row":6,"column":11},"action":"insert","lines":["\"\""],"id":257}],[{"start":{"row":6,"column":10},"end":{"row":6,"column":11},"action":"insert","lines":["p"],"id":258}],[{"start":{"row":6,"column":11},"end":{"row":6,"column":12},"action":"insert","lines":["p"],"id":259}],[{"start":{"row":6,"column":12},"end":{"row":6,"column":13},"action":"insert","lines":["m"],"id":260}],[{"start":{"row":6,"column":13},"end":{"row":6,"column":14},"action":"insert","lines":["T"],"id":261}],[{"start":{"row":6,"column":14},"end":{"row":6,"column":15},"action":"insert","lines":["o"],"id":262}],[{"start":{"row":6,"column":15},"end":{"row":6,"column":16},"action":"insert","lines":["B"],"id":263}],[{"start":{"row":6,"column":16},"end":{"row":6,"column":17},"action":"insert","lines":["m"],"id":264}],[{"start":{"row":6,"column":17},"end":{"row":6,"column":18},"action":"insert","lines":["p"],"id":265}],[{"start":{"row":6,"column":18},"end":{"row":6,"column":19},"action":"insert","lines":["."],"id":266}],[{"start":{"row":6,"column":19},"end":{"row":6,"column":20},"action":"insert","lines":["h"],"id":267}],[{"start":{"row":6,"column":20},"end":{"row":6,"column":21},"action":"insert","lines":["p"],"id":268}],[{"start":{"row":6,"column":21},"end":{"row":6,"column":22},"action":"insert","lines":["p"],"id":269}],[{"start":{"row":8,"column":0},"end":{"row":9,"column":0},"action":"insert","lines":["",""],"id":270}],[{"start":{"row":9,"column":0},"end":{"row":10,"column":0},"action":"insert","lines":["",""],"id":271}],[{"start":{"row":9,"column":0},"end":{"row":10,"column":0},"action":"insert","lines":["",""],"id":272}],[{"start":{"row":10,"column":0},"end":{"row":11,"column":0},"action":"insert","lines":["",""],"id":273}],[{"start":{"row":9,"column":0},"end":{"row":9,"column":1},"action":"insert","lines":["/"],"id":274}],[{"start":{"row":9,"column":1},"end":{"row":9,"column":2},"action":"insert","lines":["/"],"id":275}],[{"start":{"row":9,"column":2},"end":{"row":9,"column":3},"action":"insert","lines":["a"],"id":276}],[{"start":{"row":9,"column":3},"end":{"row":9,"column":4},"action":"insert","lines":[" "],"id":277}],[{"start":{"row":9,"column":4},"end":{"row":9,"column":5},"action":"insert","lines":["s"],"id":278}],[{"start":{"row":9,"column":5},"end":{"row":9,"column":6},"action":"insert","lines":["t"],"id":279}],[{"start":{"row":9,"column":6},"end":{"row":9,"column":7},"action":"insert","lines":["r"],"id":280}],[{"start":{"row":9,"column":7},"end":{"row":9,"column":8},"action":"insert","lines":["u"],"id":281}],[{"start":{"row":9,"column":8},"end":{"row":9,"column":9},"action":"insert","lines":["c"],"id":282}],[{"start":{"row":9,"column":9},"end":{"row":9,"column":10},"action":"insert","lines":["t"],"id":283}],[{"start":{"row":9,"column":10},"end":{"row":9,"column":11},"action":"insert","lines":["u"],"id":284}],[{"start":{"row":9,"column":11},"end":{"row":9,"column":12},"action":"insert","lines":["r"],"id":285}],[{"start":{"row":9,"column":12},"end":{"row":9,"column":13},"action":"insert","lines":["e"],"id":286}],[{"start":{"row":9,"column":13},"end":{"row":9,"column":14},"action":"insert","lines":[" "],"id":287}],[{"start":{"row":9,"column":14},"end":{"row":9,"column":15},"action":"insert","lines":["f"],"id":288}],[{"start":{"row":9,"column":15},"end":{"row":9,"column":16},"action":"insert","lines":["o"],"id":289}],[{"start":{"row":9,"column":16},"end":{"row":9,"column":17},"action":"insert","lines":["r"],"id":290}],[{"start":{"row":9,"column":17},"end":{"row":9,"column":18},"action":"insert","lines":[" "],"id":291}],[{"start":{"row":9,"column":18},"end":{"row":9,"column":19},"action":"insert","lines":["t"],"id":292}],[{"start":{"row":9,"column":19},"end":{"row":9,"column":20},"action":"insert","lines":["h"],"id":293}],[{"start":{"row":9,"column":20},"end":{"row":9,"column":21},"action":"insert","lines":["e"],"id":294}],[{"start":{"row":9,"column":21},"end":{"row":9,"column":22},"action":"insert","lines":[" "],"id":295}],[{"start":{"row":9,"column":22},"end":{"row":9,"column":23},"action":"insert","lines":["r"],"id":296}],[{"start":{"row":9,"column":23},"end":{"row":9,"column":24},"action":"insert","lines":["g"],"id":297}],[{"start":{"row":9,"column":24},"end":{"row":9,"column":25},"action":"insert","lines":["b"],"id":298}],[{"start":{"row":9,"column":25},"end":{"row":9,"column":26},"action":"insert","lines":[" "],"id":299}],[{"start":{"row":9,"column":26},"end":{"row":9,"column":27},"action":"insert","lines":["c"],"id":300}],[{"start":{"row":9,"column":27},"end":{"row":9,"column":28},"action":"insert","lines":["o"],"id":301}],[{"start":{"row":9,"column":28},"end":{"row":9,"column":29},"action":"insert","lines":["l"],"id":302}],[{"start":{"row":9,"column":29},"end":{"row":9,"column":30},"action":"insert","lines":["o"],"id":303}],[{"start":{"row":9,"column":30},"end":{"row":9,"column":31},"action":"insert","lines":["r"],"id":304}],[{"start":{"row":9,"column":31},"end":{"row":9,"column":32},"action":"insert","lines":["s"],"id":305}],[{"start":{"row":9,"column":32},"end":{"row":10,"column":0},"action":"insert","lines":["",""],"id":306}],[{"start":{"row":10,"column":0},"end":{"row":10,"column":1},"action":"insert","lines":["s"],"id":307}],[{"start":{"row":10,"column":1},"end":{"row":10,"column":2},"action":"insert","lines":["t"],"id":308}],[{"start":{"row":10,"column":2},"end":{"row":10,"column":3},"action":"insert","lines":["r"],"id":309}],[{"start":{"row":10,"column":3},"end":{"row":10,"column":4},"action":"insert","lines":["u"],"id":310}],[{"start":{"row":10,"column":4},"end":{"row":10,"column":5},"action":"insert","lines":["c"],"id":311}],[{"start":{"row":10,"column":5},"end":{"row":10,"column":6},"action":"insert","lines":["t"],"id":312}],[{"start":{"row":10,"column":6},"end":{"row":10,"column":7},"action":"insert","lines":[" "],"id":313}],[{"start":{"row":10,"column":7},"end":{"row":10,"column":8},"action":"insert","lines":["C"],"id":314}],[{"start":{"row":10,"column":8},"end":{"row":10,"column":9},"action":"insert","lines":["o"],"id":315}],[{"start":{"row":10,"column":9},"end":{"row":10,"column":10},"action":"insert","lines":["l"],"id":316}],[{"start":{"row":10,"column":10},"end":{"row":10,"column":11},"action":"insert","lines":["o"],"id":317}],[{"start":{"row":10,"column":11},"end":{"row":10,"column":12},"action":"insert","lines":["r"],"id":318}],[{"start":{"row":10,"column":12},"end":{"row":10,"column":13},"action":"insert","lines":[" "],"id":319}],[{"start":{"row":10,"column":13},"end":{"row":10,"column":14},"action":"insert","lines":["{"],"id":320}],[{"start":{"row":10,"column":14},"end":{"row":12,"column":1},"action":"insert","lines":["","    ","}"],"id":321}],[{"start":{"row":11,"column":4},"end":{"row":11,"column":5},"action":"insert","lines":["i"],"id":322}],[{"start":{"row":11,"column":5},"end":{"row":11,"column":6},"action":"insert","lines":["n"],"id":323}],[{"start":{"row":11,"column":6},"end":{"row":11,"column":7},"action":"insert","lines":["t"],"id":324}],[{"start":{"row":11,"column":7},"end":{"row":11,"column":8},"action":"insert","lines":[" "],"id":325}],[{"start":{"row":11,"column":8},"end":{"row":11,"column":9},"action":"insert","lines":["r"],"id":326}],[{"start":{"row":11,"column":9},"end":{"row":11,"column":10},"action":"insert","lines":[";"],"id":327}],[{"start":{"row":11,"column":10},"end":{"row":12,"column":0},"action":"insert","lines":["",""],"id":328},{"start":{"row":12,"column":0},"end":{"row":12,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":12,"column":4},"end":{"row":12,"column":5},"action":"insert","lines":["i"],"id":329}],[{"start":{"row":12,"column":5},"end":{"row":12,"column":6},"action":"insert","lines":["n"],"id":330}],[{"start":{"row":12,"column":6},"end":{"row":12,"column":7},"action":"insert","lines":["t"],"id":331}],[{"start":{"row":12,"column":7},"end":{"row":12,"column":8},"action":"insert","lines":[" "],"id":332}],[{"start":{"row":12,"column":8},"end":{"row":12,"column":9},"action":"insert","lines":["g"],"id":333}],[{"start":{"row":12,"column":9},"end":{"row":12,"column":10},"action":"insert","lines":[";"],"id":334}],[{"start":{"row":12,"column":10},"end":{"row":13,"column":0},"action":"insert","lines":["",""],"id":335},{"start":{"row":13,"column":0},"end":{"row":13,"column":4},"action":"insert","lines":["    "]}],[{"start":{"row":13,"column":4},"end":{"row":13,"column":5},"action":"insert","lines":["i"],"id":336}],[{"start":{"row":13,"column":5},"end":{"row":13,"column":6},"action":"insert","lines":["n"],"id":337}],[{"start":{"row":13,"column":6},"end":{"row":13,"column":7},"action":"insert","lines":["t"],"id":338}],[{"start":{"row":13,"column":7},"end":{"row":13,"column":8},"action":"insert","lines":[" "],"id":339}],[{"start":{"row":13,"column":8},"end":{"row":13,"column":9},"action":"insert","lines":["b"],"id":340}],[{"start":{"row":13,"column":9},"end":{"row":13,"column":10},"action":"insert","lines":[";"],"id":341}],[{"start":{"row":14,"column":1},"end":{"row":14,"column":2},"action":"insert","lines":[";"],"id":342}]]},"ace":{"folds":[],"scrolltop":0,"scrollleft":0,"selection":{"start":{"row":19,"column":4},"end":{"row":19,"column":4},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1509823248659}