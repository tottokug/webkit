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
#include "JSTestIterable.h"

#include "JSDOMBinding.h"
#include "JSDOMConstructorNotConstructable.h"
#include "JSDOMExceptionHandling.h"
#include "JSDOMIterator.h"
#include "JSDOMOperation.h"
#include "JSDOMWrapperCache.h"
#include "ScriptExecutionContext.h"
#include <JavaScriptCore/BuiltinNames.h>
#include <JavaScriptCore/FunctionPrototype.h>
#include <JavaScriptCore/HeapSnapshotBuilder.h>
#include <JavaScriptCore/JSCInlines.h>
#include <wtf/GetPtr.h>
#include <wtf/PointerPreparations.h>
#include <wtf/URL.h>


namespace WebCore {
using namespace JSC;

// Functions

JSC::EncodedJSValue JSC_HOST_CALL jsTestIterablePrototypeFunctionSymbolIterator(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestIterablePrototypeFunctionEntries(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestIterablePrototypeFunctionKeys(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestIterablePrototypeFunctionValues(JSC::ExecState*);
JSC::EncodedJSValue JSC_HOST_CALL jsTestIterablePrototypeFunctionForEach(JSC::ExecState*);

// Attributes

JSC::EncodedJSValue jsTestIterableConstructor(JSC::ExecState*, JSC::EncodedJSValue, JSC::PropertyName);
bool setJSTestIterableConstructor(JSC::ExecState*, JSC::EncodedJSValue, JSC::EncodedJSValue);

class JSTestIterablePrototype : public JSC::JSNonFinalObject {
public:
    using Base = JSC::JSNonFinalObject;
    static JSTestIterablePrototype* create(JSC::VM& vm, JSDOMGlobalObject* globalObject, JSC::Structure* structure)
    {
        JSTestIterablePrototype* ptr = new (NotNull, JSC::allocateCell<JSTestIterablePrototype>(vm.heap)) JSTestIterablePrototype(vm, globalObject, structure);
        ptr->finishCreation(vm);
        return ptr;
    }

    DECLARE_INFO;
    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

private:
    JSTestIterablePrototype(JSC::VM& vm, JSC::JSGlobalObject*, JSC::Structure* structure)
        : JSC::JSNonFinalObject(vm, structure)
    {
    }

    void finishCreation(JSC::VM&);
};

using JSTestIterableConstructor = JSDOMConstructorNotConstructable<JSTestIterable>;

template<> JSValue JSTestIterableConstructor::prototypeForStructure(JSC::VM& vm, const JSDOMGlobalObject& globalObject)
{
    UNUSED_PARAM(vm);
    return globalObject.functionPrototype();
}

template<> void JSTestIterableConstructor::initializeProperties(VM& vm, JSDOMGlobalObject& globalObject)
{
    putDirect(vm, vm.propertyNames->prototype, JSTestIterable::prototype(vm, globalObject), JSC::PropertyAttribute::DontDelete | JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    putDirect(vm, vm.propertyNames->name, jsNontrivialString(&vm, String("TestIterable"_s)), JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), JSC::PropertyAttribute::ReadOnly | JSC::PropertyAttribute::DontEnum);
}

template<> const ClassInfo JSTestIterableConstructor::s_info = { "TestIterable", &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSTestIterableConstructor) };

/* Hash table for prototype */

static const HashTableValue JSTestIterablePrototypeTableValues[] =
{
    { "constructor", static_cast<unsigned>(JSC::PropertyAttribute::DontEnum), NoIntrinsic, { (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsTestIterableConstructor), (intptr_t) static_cast<PutPropertySlot::PutValueFunc>(setJSTestIterableConstructor) } },
    { "entries", static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(jsTestIterablePrototypeFunctionEntries), (intptr_t) (0) } },
    { "keys", static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(jsTestIterablePrototypeFunctionKeys), (intptr_t) (0) } },
    { "values", static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(jsTestIterablePrototypeFunctionValues), (intptr_t) (0) } },
    { "forEach", static_cast<unsigned>(JSC::PropertyAttribute::Function), NoIntrinsic, { (intptr_t)static_cast<RawNativeFunction>(jsTestIterablePrototypeFunctionForEach), (intptr_t) (1) } },
};

const ClassInfo JSTestIterablePrototype::s_info = { "TestIterablePrototype", &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSTestIterablePrototype) };

void JSTestIterablePrototype::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    reifyStaticProperties(vm, JSTestIterable::info(), JSTestIterablePrototypeTableValues, *this);
    putDirect(vm, vm.propertyNames->iteratorSymbol, getDirect(vm, vm.propertyNames->builtinNames().entriesPublicName()), static_cast<unsigned>(JSC::PropertyAttribute::DontEnum));
}

const ClassInfo JSTestIterable::s_info = { "TestIterable", &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(JSTestIterable) };

JSTestIterable::JSTestIterable(Structure* structure, JSDOMGlobalObject& globalObject, Ref<TestIterable>&& impl)
    : JSDOMWrapper<TestIterable>(structure, globalObject, WTFMove(impl))
{
}

void JSTestIterable::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(vm, info()));

}

JSObject* JSTestIterable::createPrototype(VM& vm, JSDOMGlobalObject& globalObject)
{
    return JSTestIterablePrototype::create(vm, &globalObject, JSTestIterablePrototype::createStructure(vm, &globalObject, globalObject.objectPrototype()));
}

JSObject* JSTestIterable::prototype(VM& vm, JSDOMGlobalObject& globalObject)
{
    return getDOMPrototype<JSTestIterable>(vm, globalObject);
}

JSValue JSTestIterable::getConstructor(VM& vm, const JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSTestIterableConstructor>(vm, *jsCast<const JSDOMGlobalObject*>(globalObject));
}

void JSTestIterable::destroy(JSC::JSCell* cell)
{
    JSTestIterable* thisObject = static_cast<JSTestIterable*>(cell);
    thisObject->JSTestIterable::~JSTestIterable();
}

template<> inline JSTestIterable* IDLOperation<JSTestIterable>::cast(ExecState& state)
{
    return jsDynamicCast<JSTestIterable*>(state.vm(), state.thisValue());
}

EncodedJSValue jsTestIterableConstructor(ExecState* state, EncodedJSValue thisValue, PropertyName)
{
    VM& vm = state->vm();
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto* prototype = jsDynamicCast<JSTestIterablePrototype*>(vm, JSValue::decode(thisValue));
    if (UNLIKELY(!prototype))
        return throwVMTypeError(state, throwScope);
    return JSValue::encode(JSTestIterable::getConstructor(state->vm(), prototype->globalObject()));
}

bool setJSTestIterableConstructor(ExecState* state, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    VM& vm = state->vm();
    auto throwScope = DECLARE_THROW_SCOPE(vm);
    auto* prototype = jsDynamicCast<JSTestIterablePrototype*>(vm, JSValue::decode(thisValue));
    if (UNLIKELY(!prototype)) {
        throwVMTypeError(state, throwScope);
        return false;
    }
    // Shadowing a built-in constructor
    return prototype->putDirect(vm, vm.propertyNames->constructor, JSValue::decode(encodedValue));
}

struct TestIterableIteratorTraits {
    static constexpr JSDOMIteratorType type = JSDOMIteratorType::Set;
    using KeyType = void;
    using ValueType = IDLInterface<TestNode>;
};

using TestIterableIterator = JSDOMIterator<JSTestIterable, TestIterableIteratorTraits>;
using TestIterableIteratorPrototype = JSDOMIteratorPrototype<JSTestIterable, TestIterableIteratorTraits>;

template<>
const JSC::ClassInfo TestIterableIterator::s_info = { "TestIterable Iterator", &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(TestIterableIterator) };

template<>
const JSC::ClassInfo TestIterableIteratorPrototype::s_info = { "TestIterable Iterator", &Base::s_info, nullptr, nullptr, CREATE_METHOD_TABLE(TestIterableIteratorPrototype) };

static inline EncodedJSValue jsTestIterablePrototypeFunctionEntriesCaller(ExecState*, JSTestIterable* thisObject, JSC::ThrowScope&)
{
    return JSValue::encode(iteratorCreate<TestIterableIterator>(*thisObject, IterationKind::Value));
}

JSC::EncodedJSValue JSC_HOST_CALL jsTestIterablePrototypeFunctionEntries(JSC::ExecState* state)
{
    return IDLOperation<JSTestIterable>::call<jsTestIterablePrototypeFunctionEntriesCaller>(*state, "entries");
}

static inline EncodedJSValue jsTestIterablePrototypeFunctionKeysCaller(ExecState*, JSTestIterable* thisObject, JSC::ThrowScope&)
{
    return JSValue::encode(iteratorCreate<TestIterableIterator>(*thisObject, IterationKind::Key));
}

JSC::EncodedJSValue JSC_HOST_CALL jsTestIterablePrototypeFunctionKeys(JSC::ExecState* state)
{
    return IDLOperation<JSTestIterable>::call<jsTestIterablePrototypeFunctionKeysCaller>(*state, "keys");
}

static inline EncodedJSValue jsTestIterablePrototypeFunctionValuesCaller(ExecState*, JSTestIterable* thisObject, JSC::ThrowScope&)
{
    return JSValue::encode(iteratorCreate<TestIterableIterator>(*thisObject, IterationKind::Value));
}

JSC::EncodedJSValue JSC_HOST_CALL jsTestIterablePrototypeFunctionValues(JSC::ExecState* state)
{
    return IDLOperation<JSTestIterable>::call<jsTestIterablePrototypeFunctionValuesCaller>(*state, "values");
}

static inline EncodedJSValue jsTestIterablePrototypeFunctionForEachCaller(ExecState* state, JSTestIterable* thisObject, JSC::ThrowScope& throwScope)
{
    return JSValue::encode(iteratorForEach<TestIterableIterator>(*state, *thisObject, throwScope));
}

JSC::EncodedJSValue JSC_HOST_CALL jsTestIterablePrototypeFunctionForEach(JSC::ExecState* state)
{
    return IDLOperation<JSTestIterable>::call<jsTestIterablePrototypeFunctionForEachCaller>(*state, "forEach");
}

void JSTestIterable::heapSnapshot(JSCell* cell, HeapSnapshotBuilder& builder)
{
    auto* thisObject = jsCast<JSTestIterable*>(cell);
    builder.setWrappedObjectForCell(cell, &thisObject->wrapped());
    if (thisObject->scriptExecutionContext())
        builder.setLabelForCell(cell, String::format("url %s", thisObject->scriptExecutionContext()->url().string().utf8().data()));
    Base::heapSnapshot(cell, builder);
}

bool JSTestIterableOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor, const char** reason)
{
    UNUSED_PARAM(handle);
    UNUSED_PARAM(visitor);
    UNUSED_PARAM(reason);
    return false;
}

void JSTestIterableOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    auto* jsTestIterable = static_cast<JSTestIterable*>(handle.slot()->asCell());
    auto& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsTestIterable->wrapped(), jsTestIterable);
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7TestIterable@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore12TestIterableE[]; }
#endif
#endif

JSC::JSValue toJSNewlyCreated(JSC::ExecState*, JSDOMGlobalObject* globalObject, Ref<TestIterable>&& impl)
{

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl.ptr()));
#if PLATFORM(WIN)
    void* expectedVTablePointer = WTF_PREPARE_VTBL_POINTER_FOR_INSPECTION(__identifier("??_7TestIterable@WebCore@@6B@"));
#else
    void* expectedVTablePointer = WTF_PREPARE_VTBL_POINTER_FOR_INSPECTION(&_ZTVN7WebCore12TestIterableE[2]);
#endif

    // If this fails TestIterable does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    static_assert(std::is_polymorphic<TestIterable>::value, "TestIterable is not polymorphic");

    // If you hit this assertion you either have a use after free bug, or
    // TestIterable has subclasses. If TestIterable has subclasses that get passed
    // to toJS() we currently require TestIterable you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    return createWrapper<TestIterable>(globalObject, WTFMove(impl));
}

JSC::JSValue toJS(JSC::ExecState* state, JSDOMGlobalObject* globalObject, TestIterable& impl)
{
    return wrap(state, globalObject, impl);
}

TestIterable* JSTestIterable::toWrapped(JSC::VM& vm, JSC::JSValue value)
{
    if (auto* wrapper = jsDynamicCast<JSTestIterable*>(vm, value))
        return &wrapper->wrapped();
    return nullptr;
}

}
