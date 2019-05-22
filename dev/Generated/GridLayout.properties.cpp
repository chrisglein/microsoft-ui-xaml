// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "GridLayout.h"

CppWinRTActivatableClassWithDPFactory(GridLayout)

GlobalDependencyProperty GridLayoutProperties::s_AlignSelfProperty{ nullptr };
GlobalDependencyProperty GridLayoutProperties::s_ColumnEndProperty{ nullptr };
GlobalDependencyProperty GridLayoutProperties::s_ColumnStartProperty{ nullptr };
GlobalDependencyProperty GridLayoutProperties::s_JustifySelfProperty{ nullptr };
GlobalDependencyProperty GridLayoutProperties::s_RowEndProperty{ nullptr };
GlobalDependencyProperty GridLayoutProperties::s_RowStartProperty{ nullptr };

GridLayoutProperties::GridLayoutProperties()
{
    EnsureProperties();
}

void GridLayoutProperties::EnsureProperties()
{
    if (!s_AlignSelfProperty)
    {
        s_AlignSelfProperty =
            InitializeDependencyProperty(
                L"AlignSelf",
                winrt::name_of<winrt::GridAlignSelf>(),
                winrt::name_of<winrt::GridLayout>(),
                true /* isAttached */,
                ValueHelper<winrt::GridAlignSelf>::BoxValueIfNecessary(winrt::GridAlignSelf::Unset),
                &GridLayout::OnChildPropertyChanged);
    }
    if (!s_ColumnEndProperty)
    {
        s_ColumnEndProperty =
            InitializeDependencyProperty(
                L"ColumnEnd",
                winrt::name_of<winrt::GridLocation>(),
                winrt::name_of<winrt::GridLayout>(),
                true /* isAttached */,
                ValueHelper<winrt::GridLocation>::BoxedDefaultValue(),
                &GridLayout::OnChildPropertyChanged);
    }
    if (!s_ColumnStartProperty)
    {
        s_ColumnStartProperty =
            InitializeDependencyProperty(
                L"ColumnStart",
                winrt::name_of<winrt::GridLocation>(),
                winrt::name_of<winrt::GridLayout>(),
                true /* isAttached */,
                ValueHelper<winrt::GridLocation>::BoxedDefaultValue(),
                &GridLayout::OnChildPropertyChanged);
    }
    if (!s_JustifySelfProperty)
    {
        s_JustifySelfProperty =
            InitializeDependencyProperty(
                L"JustifySelf",
                winrt::name_of<winrt::GridJustifySelf>(),
                winrt::name_of<winrt::GridLayout>(),
                true /* isAttached */,
                ValueHelper<winrt::GridJustifySelf>::BoxedDefaultValue(),
                &GridLayout::OnChildPropertyChanged);
    }
    if (!s_RowEndProperty)
    {
        s_RowEndProperty =
            InitializeDependencyProperty(
                L"RowEnd",
                winrt::name_of<winrt::GridLocation>(),
                winrt::name_of<winrt::GridLayout>(),
                true /* isAttached */,
                ValueHelper<winrt::GridLocation>::BoxedDefaultValue(),
                &GridLayout::OnChildPropertyChanged);
    }
    if (!s_RowStartProperty)
    {
        s_RowStartProperty =
            InitializeDependencyProperty(
                L"RowStart",
                winrt::name_of<winrt::GridLocation>(),
                winrt::name_of<winrt::GridLayout>(),
                true /* isAttached */,
                ValueHelper<winrt::GridLocation>::BoxedDefaultValue(),
                &GridLayout::OnChildPropertyChanged);
    }
}

void GridLayoutProperties::ClearProperties()
{
    s_AlignSelfProperty = nullptr;
    s_ColumnEndProperty = nullptr;
    s_ColumnStartProperty = nullptr;
    s_JustifySelfProperty = nullptr;
    s_RowEndProperty = nullptr;
    s_RowStartProperty = nullptr;
}


void GridLayoutProperties::SetAlignSelf(winrt::UIElement const& target, winrt::GridAlignSelf const& value)
{
    target.SetValue(s_AlignSelfProperty, ValueHelper<winrt::GridAlignSelf>::BoxValueIfNecessary(value));
}

winrt::GridAlignSelf GridLayoutProperties::GetAlignSelf(winrt::UIElement const& target)
{
    return ValueHelper<winrt::GridAlignSelf>::CastOrUnbox(target.GetValue(s_AlignSelfProperty));
}


void GridLayoutProperties::SetColumnEnd(winrt::UIElement const& target, winrt::GridLocation const& value)
{
    target.SetValue(s_ColumnEndProperty, ValueHelper<winrt::GridLocation>::BoxValueIfNecessary(value));
}

winrt::GridLocation GridLayoutProperties::GetColumnEnd(winrt::UIElement const& target)
{
    return ValueHelper<winrt::GridLocation>::CastOrUnbox(target.GetValue(s_ColumnEndProperty));
}


void GridLayoutProperties::SetColumnStart(winrt::UIElement const& target, winrt::GridLocation const& value)
{
    target.SetValue(s_ColumnStartProperty, ValueHelper<winrt::GridLocation>::BoxValueIfNecessary(value));
}

winrt::GridLocation GridLayoutProperties::GetColumnStart(winrt::UIElement const& target)
{
    return ValueHelper<winrt::GridLocation>::CastOrUnbox(target.GetValue(s_ColumnStartProperty));
}


void GridLayoutProperties::SetJustifySelf(winrt::UIElement const& target, winrt::GridJustifySelf const& value)
{
    target.SetValue(s_JustifySelfProperty, ValueHelper<winrt::GridJustifySelf>::BoxValueIfNecessary(value));
}

winrt::GridJustifySelf GridLayoutProperties::GetJustifySelf(winrt::UIElement const& target)
{
    return ValueHelper<winrt::GridJustifySelf>::CastOrUnbox(target.GetValue(s_JustifySelfProperty));
}


void GridLayoutProperties::SetRowEnd(winrt::UIElement const& target, winrt::GridLocation const& value)
{
    target.SetValue(s_RowEndProperty, ValueHelper<winrt::GridLocation>::BoxValueIfNecessary(value));
}

winrt::GridLocation GridLayoutProperties::GetRowEnd(winrt::UIElement const& target)
{
    return ValueHelper<winrt::GridLocation>::CastOrUnbox(target.GetValue(s_RowEndProperty));
}


void GridLayoutProperties::SetRowStart(winrt::UIElement const& target, winrt::GridLocation const& value)
{
    target.SetValue(s_RowStartProperty, ValueHelper<winrt::GridLocation>::BoxValueIfNecessary(value));
}

winrt::GridLocation GridLayoutProperties::GetRowStart(winrt::UIElement const& target)
{
    return ValueHelper<winrt::GridLocation>::CastOrUnbox(target.GetValue(s_RowStartProperty));
}
