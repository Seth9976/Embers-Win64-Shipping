// 函数: sub_141976960
// 地址: 0x141976960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)

if (rdi.d u> 0x30)
label_1419770d1:
    
    if ((rdi - 0x20).d u> 0xf)
        goto label_141977107
    
    sub_141971cf0()
    uint64_t rcx_72 = zx.q((rdi - 0x20).d)
    sub_140b63b70(&data_143f0f2a0 + (((rcx_72 << 1) + 1 + zx.q(rcx_72.d)) << 3), arg1)
    return arg1

switch (rdi)
    case 0
        *arg1 = 0
        arg1[1] = 0
        sub_1405947f0(arg1, 0xa)
        int32_t rax_2 = arg1[1].d + 0xa
        arg1[1].d = rax_2
        
        if (rax_2 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        UnDecorator::getReferenceType(*arg1, u"PCD3D_SM5", 0x14)
        return arg1
    case 1, 3, 5, 7, 8, 9, 0xa, 0x13, 0x17
    label_141977107:
        *arg1 = 0
        arg1[1] = 0
        return arg1
    case 2
        *arg1 = 0
        arg1[1] = 0
        sub_1405947f0(arg1, 4)
        int32_t rax_14 = arg1[1].d + 4
        arg1[1].d = rax_14
        
        if (rax_14 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        UnDecorator::getReferenceType(*arg1, &data_142e2ecf0, 8)
        return arg1
    case 4
        *arg1 = 0
        arg1[1] = 0
        sub_1405947f0(arg1, 0xe)
        int32_t rax_16 = arg1[1].d + 0xe
        arg1[1].d = rax_16
        
        if (rax_16 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        UnDecorator::getReferenceType(*arg1, u"XBOXONE_D3D12", 0x1c)
        return arg1
    case 6
        *arg1 = 0
        arg1[1] = 0
        sub_1405947f0(arg1, 0xb)
        int32_t rax_6 = arg1[1].d + 0xb
        arg1[1].d = rax_6
        
        if (rax_6 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        UnDecorator::getReferenceType(*arg1, u"OPENGL_SM5", 0x16)
        return arg1
    case 0xb
        *arg1 = 0
        arg1[1] = 0
        sub_1405947f0(arg1, 6)
        int32_t rax_22 = arg1[1].d + 6
        arg1[1].d = rax_22
        
        if (rax_22 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        UnDecorator::getReferenceType(*arg1, u"METAL", 0xc)
        return arg1
    case 0xc
        *arg1 = 0
        arg1[1] = 0
        sub_1405947f0(arg1, 0xa)
        int32_t rax_24 = arg1[1].d + 0xa
        arg1[1].d = rax_24
        
        if (rax_24 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        UnDecorator::getReferenceType(*arg1, u"METAL_MRT", 0x14)
        return arg1
    case 0xd
        *arg1 = 0
        arg1[1] = 0
        sub_1405947f0(arg1, 0x10)
        int32_t rax_10 = arg1[1].d + 0x10
        arg1[1].d = rax_10
        
        if (rax_10 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        UnDecorator::getReferenceType(*arg1, u"OPENGL_ES31_EXT", 0x20)
        return arg1
    case 0xe
        *arg1 = 0
        arg1[1] = 0
        sub_1405947f0(arg1, 0xc)
        int32_t rax_4 = arg1[1].d + 0xc
        arg1[1].d = rax_4
        
        if (rax_4 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        UnDecorator::getReferenceType(*arg1, u"PCD3D_ES3_1", 0x18)
        return arg1
    case 0xf
        *arg1 = 0
        arg1[1] = 0
        sub_1405947f0(arg1, 0xf)
        int32_t rax_8 = arg1[1].d + 0xf
        arg1[1].d = rax_8
        
        if (rax_8 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        UnDecorator::getReferenceType(*arg1, u"OPENGL_PCES3_1", 0x1e)
        return arg1
    case 0x10
        *arg1 = 0
        arg1[1] = 0
        sub_1405947f0(arg1, 0xa)
        int32_t rax_32 = arg1[1].d + 0xa
        arg1[1].d = rax_32
        
        if (rax_32 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        UnDecorator::getReferenceType(*arg1, u"METAL_SM5", 0x14)
        return arg1
    case 0x11
        *arg1 = 0
        arg1[1] = 0
        sub_1405947f0(arg1, 0xf)
        int32_t rax_42 = arg1[1].d + 0xf
        arg1[1].d = rax_42
        
        if (rax_42 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        UnDecorator::getReferenceType(*arg1, u"VULKAN_PCES3_1", 0x1e)
        return arg1
    case 0x12
        *arg1 = 0
        arg1[1] = 0
        sub_1405947f0(arg1, 0x11)
        int32_t rax_34 = arg1[1].d + 0x11
        arg1[1].d = rax_34
        
        if (rax_34 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        UnDecorator::getReferenceType(*arg1, u"METAL_SM5_NOTESS", 0x22)
        return arg1
    case 0x14
        *arg1 = 0
        arg1[1] = 0
        sub_1405947f0(arg1, 0xb)
        int32_t rax_44 = arg1[1].d + 0xb
        arg1[1].d = rax_44
        
        if (rax_44 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        UnDecorator::getReferenceType(*arg1, u"VULKAN_SM5", 0x16)
        return arg1
    case 0x15
        *arg1 = 0
        arg1[1] = 0
        sub_1405947f0(arg1, 0x15)
        int32_t rax_38 = arg1[1].d + 0x15
        arg1[1].d = rax_38
        
        if (rax_38 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        UnDecorator::getReferenceType(*arg1, u"VULKAN_ES3_1_ANDROID", 0x2a)
        return arg1
    case 0x16
        *arg1 = 0
        arg1[1] = 0
        sub_1405947f0(arg1, 0xf)
        int32_t rax_36 = arg1[1].d + 0xf
        arg1[1].d = rax_36
        
        if (rax_36 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        UnDecorator::getReferenceType(*arg1, u"METAL_MACES3_1", 0x1e)
        return arg1
    case 0x18
        *arg1 = 0
        arg1[1] = 0
        sub_1405947f0(arg1, 0x15)
        int32_t rax_12 = arg1[1].d + 0x15
        arg1[1].d = rax_12
        
        if (rax_12 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        UnDecorator::getReferenceType(*arg1, u"OPENGL_ES3_1_ANDROID", 0x2a)
        return arg1
    case 0x19
        *arg1 = 0
        arg1[1] = 0
        sub_1405947f0(arg1, 7)
        int32_t rax_18 = arg1[1].d + 7
        arg1[1].d = rax_18
        
        if (rax_18 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        UnDecorator::getReferenceType(*arg1, u"SWITCH", 0xe)
        return arg1
    case 0x1a
        *arg1 = 0
        arg1[1] = 0
        sub_1405947f0(arg1, 0xf)
        int32_t rax_20 = arg1[1].d + 0xf
        arg1[1].d = rax_20
        
        if (rax_20 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        UnDecorator::getReferenceType(*arg1, u"SWITCH_FORWARD", 0x1e)
        return arg1
    case 0x1b
        *arg1 = 0
        arg1[1] = 0
        sub_1405947f0(arg1, 0xe)
        int32_t rax_30 = arg1[1].d + 0xe
        arg1[1].d = rax_30
        
        if (rax_30 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        UnDecorator::getReferenceType(*arg1, u"METAL_MRT_MAC", 0x1c)
        return arg1
    case 0x1c
        *arg1 = 0
        arg1[1] = 0
        sub_1405947f0(arg1, 0x11)
        int32_t rax_46 = arg1[1].d + 0x11
        arg1[1].d = rax_46
        
        if (rax_46 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        UnDecorator::getReferenceType(*arg1, u"VULKAN_SM5_LUMIN", 0x22)
        return arg1
    case 0x1d
        *arg1 = 0
        arg1[1] = 0
        sub_1405947f0(arg1, 0x13)
        int32_t rax_40 = arg1[1].d + 0x13
        arg1[1].d = rax_40
        
        if (rax_40 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        UnDecorator::getReferenceType(*arg1, u"VULKAN_ES3_1_LUMIN", 0x26)
        return arg1
    case 0x1e
        *arg1 = 0
        arg1[1] = 0
        sub_1405947f0(arg1, 0xb)
        int32_t rax_26 = arg1[1].d + 0xb
        arg1[1].d = rax_26
        
        if (rax_26 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        UnDecorator::getReferenceType(*arg1, u"METAL_TVOS", 0x16)
        return arg1
    case 0x1f
        *arg1 = 0
        arg1[1] = 0
        sub_1405947f0(arg1, 0xf)
        int32_t rax_28 = arg1[1].d + 0xf
        arg1[1].d = rax_28
        
        if (rax_28 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        UnDecorator::getReferenceType(*arg1, u"METAL_MRT_TVOS", 0x1e)
        return arg1
    case 0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 
            0x2f
        goto label_1419770d1
    case 0x30
        *arg1 = 0
        arg1[1] = 0
        sub_1405947f0(arg1, 0x13)
        int32_t rax_48 = arg1[1].d + 0x13
        arg1[1].d = rax_48
        
        if (rax_48 s> *(arg1 + 0xc))
            sub_140594770(arg1)
        
        UnDecorator::getReferenceType(*arg1, u"VULKAN_SM5_ANDROID", 0x26)
        return arg1
