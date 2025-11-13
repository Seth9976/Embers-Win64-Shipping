// 函数: sub_140cffbc0
// 地址: 0x140cffbc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_28
int64_t* rdx = &var_28
int64_t arg_8 = *(*(arg1 + 0x78) + 0x18)
int32_t* rcx_1 = &arg_8
wchar16 const* const rdx_2
uint32_t r8_2
int64_t var_38
int32_t var_30
int32_t var_2c

if ((*(arg1 + 0x40) & 0x4000000000) == 0)
    sub_140b63b70(rcx_1, rdx)
    int64_t* rcx_9 = *(arg1 + 0x78)
    sub_140a2e390(&var_38, u"TWeakObjectPtr<%s%s>", (*(*rcx_9 + 0x2c0))(rcx_9))
    
    if (arg3 == &var_38)
        int64_t rcx_12 = var_38
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
    else
        int64_t rcx_11 = *arg3
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        *arg3 = var_38
        arg3[1].d = var_30
        *(arg3 + 0xc) = var_2c
        var_30.q = 0
        var_38 = 0
    
    int16_t* rcx_13 = var_28
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    *arg2 = 0
    arg2[1] = 0
    sub_1405947f0(arg2, 0xb)
    int32_t rax_12 = arg2[1].d + 0xb
    arg2[1].d = rax_12
    
    if (rax_12 s> *(arg2 + 0xc))
        sub_140594770(arg2)
    
    r8_2 = 0x16
    rdx_2 = u"WEAKOBJECT"
else
    sub_140b63b70(rcx_1, rdx)
    int64_t* rcx_2 = *(arg1 + 0x78)
    sub_140a2e390(&var_38, u"TAutoWeakObjectPtr<%s%s>", (*(*rcx_2 + 0x2c0))(rcx_2))
    
    if (arg3 == &var_38)
        int64_t rcx_5 = var_38
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
    else
        int64_t rcx_4 = *arg3
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        *arg3 = var_38
        arg3[1].d = var_30
        *(arg3 + 0xc) = var_2c
        var_30.q = 0
        var_38 = 0
    
    int16_t* rcx_6 = var_28
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    *arg2 = 0
    arg2[1] = 0
    sub_1405947f0(arg2, 0xf)
    int32_t rax_6 = arg2[1].d + 0xf
    arg2[1].d = rax_6
    
    if (rax_6 s> *(arg2 + 0xc))
        sub_140594770(arg2)
    
    r8_2 = 0x1e
    rdx_2 = u"AUTOWEAKOBJECT"
UnDecorator::getReferenceType(*arg2, rdx_2, r8_2)
return arg2
