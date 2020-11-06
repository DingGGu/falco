/*
Copyright (C) 2020 The Falco Authors.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/
#ifndef HAWK_API_H
#define HAWK_API_H

#ifdef __cplusplus
#define HAWK_EXTERNAL extern "C"
#else
#define HAWK_EXTERNAL extern
#endif

HAWK_EXTERNAL int hawk_rules_commit();
HAWK_EXTERNAL int hawk_rules_load(char* rules_content);

#endif //HAWK_API_H

// class rules_manager
// {
// public:
// 	bool append(std::string rules);
// 	bool commit();

// private:
// 	hawk_engine* engine;
// }

// extern int hawk_commit_rules() {};
// questo metodo deve semplicemente prendere il campo di istanza "engine" corrente della classe
// e mandarlo allo scheduler (che si occupera di sostituirlo all'engine in uso in falco, ogni tot secondi)
// da errore se l'engine non ha mai avuto un load_rules a buon fine!

// extern int hawk_load_rules(); // dentro per fare il load gli serve un engine
// se questo fosse un metodo di una class, l'engine potremmo crearlo/clonarlo a constructor time
// e il load farlo su tale engine
// cosicche non dobbiamo parrare un engine su questo metodo/funzione

// classe rules_manager()