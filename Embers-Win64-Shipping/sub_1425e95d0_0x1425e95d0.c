// 函数: sub_1425e95d0
// 地址: 0x1425e95d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143449f10
InitializeCriticalSection(&arg1[1])
SetCriticalSectionSpinCount(&arg1[1], 0xfa0)
arg1[6] = 0
arg1[7] = 0
*arg1 = &data_14344a748
arg1[8].d = arg2
arg1[9] = 0
arg1[0xa] = 0
arg1[0xb] = 0
arg1[0xc] = 0
arg1[0xd] = 0
arg1[0xe].d = 0
__builtin_memset(&arg1[0xf], 0, 0x44)
__builtin_memset(&arg1[0x18], 0, 0x24)

if (arg2 == 0)
    int64_t var_38 = 0
    int64_t var_30_1 = 0
    sub_1405947f0(&var_38, 8)
    int32_t r12_1 = var_30_1:4.d
    int32_t r15_1 = var_30_1.d + 8
    var_30_1.d = r15_1
    
    if (r15_1 s> r12_1)
        sub_140594770(&var_38)
        r12_1 = var_30_1:4.d
        r15_1 = var_30_1.d
    
    int64_t rdi_1 = var_38
    sub_1405a7220(rdi_1, 8, "aac.wmf", 8, 0x3f)
    
    if (&arg1[9] != &var_38)
        int64_t rcx_5 = arg1[9]
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        arg1[9] = rdi_1
        arg1[0xa].d = r15_1
        *(arg1 + 0x54) = r12_1
    else if (rdi_1 != 0)
        sub_140a74f90(rdi_1)
    
    var_38 = 0
    int64_t var_30_2 = 0
    sub_1405947f0(&var_38, 4)
    int32_t r15_2 = var_30_2:4.d
    int32_t r14_1 = var_30_2.d + 4
    var_30_2.d = r14_1
    
    if (r14_1 s> r15_2)
        sub_140594770(&var_38)
        r15_2 = var_30_2:4.d
        r14_1 = var_30_2.d
    
    int64_t rdi_2 = var_38
    sub_1405a7220(rdi_2, 4, "aac", 4, 0x3f)
    
    if (&arg1[0xb] != &var_38)
        int64_t rcx_10 = arg1[0xb]
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        arg1[0xb] = rdi_2
        arg1[0xc].d = r14_1
        *(arg1 + 0x64) = r15_2
    else if (rdi_2 != 0)
        sub_140a74f90(rdi_2)

return arg1
