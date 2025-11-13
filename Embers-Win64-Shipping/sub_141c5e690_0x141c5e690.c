// 函数: sub_141c5e690
// 地址: 0x141c5e690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    int64_t* rax_1 = sub_141c5d7c0(arg1)
    
    if (rax_1 != 0)
        int64_t r9 = *rax_1
        uint64_t rdx = zx.q(*(arg2 + 0xc))
        int64_t var_18 = 0
        int64_t var_10 = 0
        int32_t rbx_1
        
        if ((*(r9 + 0xf0))(rax_1, rdx, &var_18, r9, var_18, var_10) != 0)
            rbx_1 = var_10.d
        else
            rbx_1 = *(arg2 + 0x30)
        
        int64_t rcx_1 = var_18
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        return zx.q(rbx_1)

return 0
