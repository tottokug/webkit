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

#pragma once

#include "JSDOMWrapper.h"
#include "JSEventTarget.h"
#include "TestEventTarget.h"

namespace WebCore {

class JSTestEventTarget : public JSEventTarget {
public:
    using Base = JSEventTarget;
    using DOMWrapped = TestEventTarget;
    static JSTestEventTarget* create(JSC::Structure* structure, JSDOMGlobalObject* globalObject, Ref<TestEventTarget>&& impl)
    {
        globalObject->masqueradesAsUndefinedWatchpoint()->fireAll(globalObject->vm(), "Allocated masquerading object");
        JSTestEventTarget* ptr = new (NotNull, JSC::allocateCell<JSTestEventTarget>(globalObject->vm().heap)) JSTestEventTarget(structure, *globalObject, WTFMove(impl));
        ptr->finishCreation(globalObject->vm());
        return ptr;
    }

    static JSC::JSObject* createPrototype(JSC::VM&, JSDOMGlobalObject&);
    static JSC::JSObject* prototype(JSC::VM&, JSDOMGlobalObject&);
    static TestEventTarget* toWrapped(JSC::VM&, JSC::JSValue);
    static bool getOwnPropertySlot(JSC::JSObject*, JSC::ExecState*, JSC::PropertyName, JSC::PropertySlot&);
    static bool getOwnPropertySlotByIndex(JSC::JSObject*, JSC::ExecState*, unsigned propertyName, JSC::PropertySlot&);
    static void getOwnPropertyNames(JSC::JSObject*, JSC::ExecState*, JSC::PropertyNameArray&, JSC::EnumerationMode = JSC::EnumerationMode());

    DECLARE_INFO;

    static JSC::Structure* createStructure(JSC::VM& vm, JSC::JSGlobalObject* globalObject, JSC::JSValue prototype)
    {
        return JSC::Structure::create(vm, globalObject, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), info());
    }

    static JSC::JSValue getConstructor(JSC::VM&, const JSC::JSGlobalObject*);
    static void heapSnapshot(JSCell*, JSC::HeapSnapshotBuilder&);
    TestEventTarget& wrapped() const
    {
        return static_cast<TestEventTarget&>(Base::wrapped());
    }
public:
    static const unsigned StructureFlags = Base::StructureFlags | JSC::GetOwnPropertySlotIsImpureForPropertyAbsence | JSC::InterceptsGetOwnPropertySlotByIndexEvenWhenLengthIsNotZero | JSC::MasqueradesAsUndefined | JSC::OverridesGetOwnPropertySlot | JSC::OverridesGetPropertyNames;
protected:
    JSTestEventTarget(JSC::Structure*, JSDOMGlobalObject&, Ref<TestEventTarget>&&);

    void finishCreation(JSC::VM&);
};

JSC::JSValue toJS(JSC::ExecState*, JSDOMGlobalObject*, TestEventTarget&);
inline JSC::JSValue toJS(JSC::ExecState* state, JSDOMGlobalObject* globalObject, TestEventTarget* impl) { return impl ? toJS(state, globalObject, *impl) : JSC::jsNull(); }
JSC::JSValue toJSNewlyCreated(JSC::ExecState*, JSDOMGlobalObject*, Ref<TestEventTarget>&&);
inline JSC::JSValue toJSNewlyCreated(JSC::ExecState* state, JSDOMGlobalObject* globalObject, RefPtr<TestEventTarget>&& impl) { return impl ? toJSNewlyCreated(state, globalObject, impl.releaseNonNull()) : JSC::jsNull(); }

template<> struct JSDOMWrapperConverterTraits<TestEventTarget> {
    using WrapperClass = JSTestEventTarget;
    using ToWrappedReturnType = TestEventTarget*;
};

} // namespace WebCore
