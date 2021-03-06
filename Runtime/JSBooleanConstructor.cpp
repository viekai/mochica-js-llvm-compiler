#include "Runtime/JSBooleanConstructor.h"
#include "Runtime/JSGlobalObject.h"
#include "Runtime/JSStackFrame.h"

namespace MoEnjin
{
	JS_DEFINE_AS_NAKED_SUBCLASS(JSBooleanConstructor, Function, JSConstructorFunction);

	JSBooleanConstructor::JSBooleanConstructor(JSGlobalObject* globalObject)
		: JSConstructorFunction(globalObject, globalObject->GetFunctionPrototype(), &ClassInfo, "Boolean") { }
}