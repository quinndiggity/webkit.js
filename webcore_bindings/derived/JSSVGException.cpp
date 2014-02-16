/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"

#if ENABLE(SVG)

#include "JSSVGException.h"

#include "ExceptionCode.h"
#include "JSDOMBinding.h"
#include "SVGException.h"
#include "URL.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSSVGExceptionTableValues[] =
{
    { "code", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGExceptionCode), (intptr_t)0 },
    { "name", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGExceptionName), (intptr_t)0 },
    { "message", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGExceptionMessage), (intptr_t)0 },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGExceptionConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGExceptionTable = { 10, 7, JSSVGExceptionTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSSVGExceptionConstructorTableValues[] =
{
    { "SVG_WRONG_TYPE_ERR", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGExceptionSVG_WRONG_TYPE_ERR), (intptr_t)0 },
    { "SVG_INVALID_VALUE_ERR", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGExceptionSVG_INVALID_VALUE_ERR), (intptr_t)0 },
    { "SVG_MATRIX_NOT_INVERTABLE", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGExceptionSVG_MATRIX_NOT_INVERTABLE), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGExceptionConstructorTable = { 9, 7, JSSVGExceptionConstructorTableValues, 0 };
const ClassInfo JSSVGExceptionConstructor::s_info = { "SVGExceptionConstructor", &Base::s_info, &JSSVGExceptionConstructorTable, 0, CREATE_METHOD_TABLE(JSSVGExceptionConstructor) };

JSSVGExceptionConstructor::JSSVGExceptionConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSSVGExceptionConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSSVGExceptionPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSSVGExceptionConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGExceptionConstructor, JSDOMWrapper>(exec, JSSVGExceptionConstructorTable, jsCast<JSSVGExceptionConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSSVGExceptionPrototypeTableValues[] =
{
    { "SVG_WRONG_TYPE_ERR", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGExceptionSVG_WRONG_TYPE_ERR), (intptr_t)0 },
    { "SVG_INVALID_VALUE_ERR", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGExceptionSVG_INVALID_VALUE_ERR), (intptr_t)0 },
    { "SVG_MATRIX_NOT_INVERTABLE", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGExceptionSVG_MATRIX_NOT_INVERTABLE), (intptr_t)0 },
    { "toString", DontEnum | JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsSVGExceptionPrototypeFunctionToString), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSSVGExceptionPrototypeTable = { 9, 7, JSSVGExceptionPrototypeTableValues, 0 };
const ClassInfo JSSVGExceptionPrototype::s_info = { "SVGExceptionPrototype", &Base::s_info, &JSSVGExceptionPrototypeTable, 0, CREATE_METHOD_TABLE(JSSVGExceptionPrototype) };

JSObject* JSSVGExceptionPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGException>(vm, globalObject);
}

bool JSSVGExceptionPrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGExceptionPrototype* thisObject = jsCast<JSSVGExceptionPrototype*>(object);
    return getStaticPropertySlot<JSSVGExceptionPrototype, JSObject>(exec, JSSVGExceptionPrototypeTable, thisObject, propertyName, slot);
}

const ClassInfo JSSVGException::s_info = { "SVGException", &Base::s_info, &JSSVGExceptionTable, 0 , CREATE_METHOD_TABLE(JSSVGException) };

JSSVGException::JSSVGException(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGException> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSSVGException::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSSVGException::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSSVGExceptionPrototype::create(vm, globalObject, JSSVGExceptionPrototype::createStructure(vm, globalObject, globalObject->errorPrototype()));
}

void JSSVGException::destroy(JSC::JSCell* cell)
{
    JSSVGException* thisObject = static_cast<JSSVGException*>(cell);
    thisObject->JSSVGException::~JSSVGException();
}

JSSVGException::~JSSVGException()
{
    releaseImplIfNotNull();
}

bool JSSVGException::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSSVGException* thisObject = jsCast<JSSVGException*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSSVGException, Base>(exec, JSSVGExceptionTable, thisObject, propertyName, slot);
}

EncodedJSValue jsSVGExceptionCode(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSSVGException* castedThis = jsDynamicCast<JSSVGException*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    SVGException& impl = castedThis->impl();
    JSValue result = jsNumber(impl.code());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGExceptionName(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSSVGException* castedThis = jsDynamicCast<JSSVGException*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    SVGException& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.name());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGExceptionMessage(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSSVGException* castedThis = jsDynamicCast<JSSVGException*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    SVGException& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.message());
    return JSValue::encode(result);
}


EncodedJSValue jsSVGExceptionConstructor(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue, PropertyName)
{
    JSSVGException* domObject = jsDynamicCast<JSSVGException*>(JSValue::decode(thisValue));
    if (!domObject)
        return throwVMTypeError(exec);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSSVGException::getConstructor(exec->vm(), domObject->globalObject()));
}

JSValue JSSVGException::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGExceptionConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsSVGExceptionPrototypeFunctionToString(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSSVGException* castedThis = jsDynamicCast<JSSVGException*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSSVGException::info());
    SVGException& impl = castedThis->impl();

    JSC::JSValue result = jsStringWithCache(exec, impl.toString());
    return JSValue::encode(result);
}

// Constant getters

EncodedJSValue jsSVGExceptionSVG_WRONG_TYPE_ERR(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(0)));
}

EncodedJSValue jsSVGExceptionSVG_INVALID_VALUE_ERR(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(1)));
}

EncodedJSValue jsSVGExceptionSVG_MATRIX_NOT_INVERTABLE(ExecState* exec, EncodedJSValue, EncodedJSValue, PropertyName)
{
    UNUSED_PARAM(exec);
    return JSValue::encode(jsNumber(static_cast<int>(2)));
}

bool JSSVGExceptionOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    return false;
}

void JSSVGExceptionOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSSVGException* jsSVGException = jsCast<JSSVGException*>(handle.get().asCell());
    DOMWrapperWorld& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsSVGException->impl(), jsSVGException);
    jsSVGException->releaseImpl();
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, SVGException* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSSVGException>(exec, impl))
        return result;
#if COMPILER(CLANG)
    // If you hit this failure the interface definition has the ImplementationLacksVTable
    // attribute. You should remove that attribute. If the class has subclasses
    // that may be passed through this toJS() function you should use the SkipVTableValidation
    // attribute to SVGException.
    COMPILE_ASSERT(!__is_polymorphic(SVGException), SVGException_is_polymorphic_but_idl_claims_not_to_be);
#endif
    ReportMemoryCost<SVGException>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSSVGException>(exec, globalObject, impl);
}

SVGException* toSVGException(JSC::JSValue value)
{
    return value.inherits(JSSVGException::info()) ? &jsCast<JSSVGException*>(value)->impl() : 0;
}

}

#endif // ENABLE(SVG)