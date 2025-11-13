// 函数: sub_140cff010
// 地址: 0x140cff010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

wchar16 const* const rdx_1
uint32_t r8

if (*(arg1 + 0x7b) != 0xff)
    int32_t rcx_2 = *(arg1 + 0x3c)
    
    if (rcx_2 == 1)
        *arg2 = 0
        arg2[1] = 0
        sub_1405947f0(arg2, 7)
        int32_t rax_6 = arg2[1].d + 7
        arg2[1].d = rax_6
        
        if (rax_6 s> *(arg2 + 0xc))
            sub_140594770(arg2)
        
        r8 = 0xe
        rdx_1 = u"UBOOL8"
    else if (rcx_2 == 2)
        *arg2 = 0
        arg2[1] = 0
        sub_1405947f0(arg2, 8)
        int32_t rax_5 = arg2[1].d + 8
        arg2[1].d = rax_5
        
        if (rax_5 s> *(arg2 + 0xc))
            sub_140594770(arg2)
        
        r8 = 0x10
        rdx_1 = u"UBOOL16"
    else if (rcx_2 == 4)
        *arg2 = 0
        arg2[1] = 0
    label_140cff0ed:
        sub_1405947f0(arg2, 8)
        int32_t rax_3 = arg2[1].d + 8
        arg2[1].d = rax_3
        
        if (rax_3 s> *(arg2 + 0xc))
            sub_140594770(arg2)
        
        r8 = 0x10
        rdx_1 = u"UBOOL32"
    else
        if (rcx_2 != 8)
            int16_t* var_18
            sub_140b63b70(arg1 + 0x28, &var_18)
            int16_t* const r9_1 = &data_142d40450
            int32_t var_10
            
            if (var_10 != 0)
                r9_1 = var_18
            
            int32_t var_28_1 = *(arg1 + 0x3c)
            sub_140af98a0("Unknown", 0xd1, u"Unsupported FBoolProperty %s size %d.", r9_1)
            int16_t* rcx_7 = var_18
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
            
            sub_140afbb40()
            *arg2 = 0
            arg2[1] = 0
            goto label_140cff0ed
        
        *arg2 = 0
        arg2[1] = 0
        sub_1405947f0(arg2, 8)
        int32_t rax_4 = arg2[1].d + 8
        arg2[1].d = rax_4
        
        if (rax_4 s> *(arg2 + 0xc))
            sub_140594770(arg2)
        
        r8 = 0x10
        rdx_1 = u"UBOOL64"
else
    *arg2 = 0
    arg2[1] = 0
    sub_1405947f0(arg2, 6)
    int32_t rax_1 = arg2[1].d + 6
    arg2[1].d = rax_1
    
    if (rax_1 s> *(arg2 + 0xc))
        sub_140594770(arg2)
    
    r8 = 0xc
    rdx_1 = u"UBOOL"

UnDecorator::getReferenceType(*arg2, rdx_1, r8)
return arg2
