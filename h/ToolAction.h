#ifndef __cplusplus
#error Header file "ToolboxAction.h" may only be used from C++
#endif
#pragma force_top_level
#pragma include_only_once

#ifndef __ToolboxAction_h
#define __ToolboxAction_h

#include "ClassType.h"
#include "ToolboxGadget.h"

class ToolAction : public ToolboxGadget {
  public:
    ToolAction();
    ToolAction(ObjectId windowId, ComponentId gadgetId)
    ToolAction(ObjectId windowId, ComponentId gadgetId, unsigned int flags);
    ToolAction& setIdent(char *ident);
    ToolAction& getIdent(char *ident, int size, int *nchar);
    ToolAction& setAction(unsigned int select, unsigned int adjust);
    ToolAction& setClickShow(ObjectId selectObj, ObjectId adjustObj);
    ToolAction& getClickShow(ObjectId *selectObj, ObjectId *adjustObj);
    ToolAction& setState(unsigned int state);
    unsigned int getState();
    ToolAction& setPressed(unsigned int pressed);
    unsigned int getPressed();
};
#endif
