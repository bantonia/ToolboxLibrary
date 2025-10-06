#ifndef __cplusplus
#error Header file "ToolboxToolAction.h" may only be used from C++
#endif
#pragma force_top_level
#pragma include_only_once

#ifndef __ToolboxToolAction_h
#define __ToolboxToolAction_h

#include "ClassType.h"
#include "ToolboxGadget.h"

class ToolboxToolAction : public ToolboxGadget {
  public:
    ToolboxToolAction();
    ToolboxToolAction(ObjectId windowId, ComponentId gadgetId)
    ToolboxToolAction(ObjectId windowId, ComponentId gadgetId, unsigned int flags);
    ToolboxToolAction& setIdent(char *ident);
    ToolboxToolAction& getIdent(char *ident, int size, int *nchar);
    ToolboxToolAction& setAction(unsigned int select, unsigned int adjust);
    ToolboxToolAction& setClickShow(ObjectId selectObj, ObjectId adjustObj);
    ToolboxToolAction& getClickShow(ObjectId *selectObj, ObjectId *adjustObj);
    ToolboxToolAction& setState(unsigned int state);
    unsigned int getState();
    ToolboxToolAction& setPressed(unsigned int pressed);
    unsigned int getPressed();
};
#endif
