// 函数: sub_140cbb510
// 地址: 0x140cbb510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg3

if (arg3 != 0)
    if (*arg3 != &data_142ea00e8)
        int32_t rdx = 0
        arg3[1].d = 0
        
        if (*(arg3 + 0xc) != 3)
            sub_1405947f0(rbx, 3)
            rdx = rbx[1].d
        
        rbx[1].d = rdx + 3
        
        if (rdx + 3 s> *(rbx + 0xc))
            sub_140594770(rbx)
        
        int32_t* rcx_2 = *rbx
        *rcx_2 = 0x46003c
        rcx_2[1].w = 0
    
    int64_t var_18
    sub_140b63b70(*(arg1 + 0x78), &var_18)
    int32_t var_10
    int32_t r8_1
    
    if (var_10 == 0)
        r8_1 = 0
    else
        r8_1 = var_10 - 1
    
    sub_140a20ba0(rbx, var_18, r8_1)
    int64_t rcx_5 = var_18
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    sub_140a20ba0(rbx, &data_142e5cee4, 1)

*arg2 = 0
arg2[1] = 0
sub_1405947f0(arg2, 0xb)
int32_t rax_2 = arg2[1].d + 0xb
arg2[1].d = rax_2

if (rax_2 s> *(arg2 + 0xc))
    sub_140594770(arg2)

UnDecorator::getReferenceType(*arg2, u"TFieldPath", 0x16)
return arg2
