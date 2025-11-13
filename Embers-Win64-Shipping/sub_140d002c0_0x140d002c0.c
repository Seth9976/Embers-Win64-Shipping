// 函数: sub_140d002c0
// 地址: 0x140d002c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

wchar16 const* const rdx_2
uint32_t r8

if (*(arg1 + 0x7b) == 0xff || ((arg4 & 0x80) == 0 & (arg4 & 6) != 6) == 0)
    *arg2 = 0
    arg2[1] = 0
    sub_1405947f0(arg2, 5)
    int32_t rax_8 = arg2[1].d + 5
    arg2[1].d = rax_8
    
    if (rax_8 s> *(arg2 + 0xc))
        sub_140594770(arg2)
    
    r8 = 0xa
    rdx_2 = u"bool"
else
    int32_t rcx = *(arg1 + 0x3c)
    
    if (rcx == 1)
        *arg2 = 0
        arg2[1] = 0
        sub_1405947f0(arg2, 6)
        int32_t rax_7 = arg2[1].d + 6
        arg2[1].d = rax_7
        
        if (rax_7 s> *(arg2 + 0xc))
            sub_140594770(arg2)
        
        r8 = 0xc
        rdx_2 = u"uint8"
    else if (rcx == 2)
        *arg2 = 0
        arg2[1] = 0
        sub_1405947f0(arg2, 7)
        int32_t rax_6 = arg2[1].d + 7
        arg2[1].d = rax_6
        
        if (rax_6 s> *(arg2 + 0xc))
            sub_140594770(arg2)
        
        r8 = 0xe
        rdx_2 = u"uint16"
    else if (rcx == 4)
        *arg2 = 0
        arg2[1] = 0
    label_140d00381:
        sub_1405947f0(arg2, 7)
        int32_t rax_4 = arg2[1].d + 7
        arg2[1].d = rax_4
        
        if (rax_4 s> *(arg2 + 0xc))
            sub_140594770(arg2)
        
        r8 = 0xe
        rdx_2 = u"uint32"
    else
        if (rcx != 8)
            int16_t* var_18
            sub_140b63b70(arg1 + 0x28, &var_18)
            int16_t* const r9 = &data_142d40450
            int32_t var_10
            
            if (var_10 != 0)
                r9 = var_18
            
            int32_t var_28_1 = *(arg1 + 0x3c)
            sub_140af98a0("Unknown", 0xb1, u"Unsupported FBoolProperty %s size %d.", r9)
            int16_t* rcx_5 = var_18
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            sub_140afbb40()
            *arg2 = 0
            arg2[1] = 0
            goto label_140d00381
        
        *arg2 = 0
        arg2[1] = 0
        sub_1405947f0(arg2, 7)
        int32_t rax_5 = arg2[1].d + 7
        arg2[1].d = rax_5
        
        if (rax_5 s> *(arg2 + 0xc))
            sub_140594770(arg2)
        
        r8 = 0xe
        rdx_2 = u"uint64"

UnDecorator::getReferenceType(*arg2, rdx_2, r8)
return arg2
