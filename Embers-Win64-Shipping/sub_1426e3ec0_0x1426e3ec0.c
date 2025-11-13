// 函数: sub_1426e3ec0
// 地址: 0x1426e3ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 != 0)
    return 

*(arg3 + 8) = *arg5
int32_t rcx = *arg5

if (rcx != 3)
    uint32_t rax = zx.d(*(arg3 + 9))
    
    if ((rax.b & 1) != 0)
        int32_t var_28
        int32_t var_28_1 = var_28 & 0xfffffff0
        rax.b &= 0xfe
        *(arg3 + 9) = rax.b
        void* var_68 = arg2
        int64_t var_60
        __builtin_memset(&var_60, 0, 0x20)
        int64_t var_40_1 = -1
        int32_t var_38_1 = 0xffffffff
        int64_t var_30_1 = -1
        sub_1426b7930(arg1, &var_68, 0, arg5)
        int32_t rax_3 = sub_1426b0430(arg2, arg1)
        sub_1426c20c0(arg2, *(*(arg1 + 0x58) + 8), rax_3.w)
        rax = *arg5
        
        if (rax != 2 && (*(arg3 + 9) & 4) == 0 && *(arg1 + 0x90) == 0)
            char var_78_1 = 1
            sub_1426bcb00(arg2, arg1, rax_3, *(*(arg1 + 0x58) + 8), 0, rax)
        
        int64_t var_50
        
        if (var_50 != 0)
            sub_140a74f90(var_50)
        
        int64_t rcx_8 = var_60
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
    else if (rcx == 0 && *(arg1 + 0x90) == 1)
        rax.b |= 2
        *(arg3 + 9) = rax.b
        sub_1426bcaf0(arg1, arg2, 0)
else if (sub_1426b39d0(arg2, *(*(arg1 + 0x58) + 8)) == 0)
    *(arg3 + 9) = (*(arg3 + 9) & 0xfd) | 1
    sub_1426bc100(arg2, *(*(arg1 + 0x58) + 8))
    sub_1426bcaf0(arg1, arg2, 0)
