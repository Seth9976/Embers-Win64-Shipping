// 函数: sub_1423a4f80
// 地址: 0x1423a4f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1].b = 0
__builtin_memset(arg1 + 0xc, 0, 0x1c)
arg1[5].d = arg2
*(arg1 + 0x2c) = data_1439c7a08

if (arg3 != 0)
    void* rax_1 = Concurrency::details::_CancellationTokenRegistration::_GetToken(arg3)
    
    if (rax_1 != 0)
        *(arg1 + 0x2c) = zx.d(*(rax_1 + 0x118))
    
    if (arg4 != 0)
        int32_t rcx_1 = *(arg3 + 0x130)
        
        if (rcx_1 s> 0 && rcx_1 == *(arg4 + 8) - *(arg4 + 0x34))
            uint8_t rax_5 = *(arg3 + 0x1f4) u>> 3
            *arg1 = arg4
            arg1[1].b = not.b(rax_5) & 1
            int64_t rbp_1 = sx.q(*(arg3 + 0x130))
            int64_t rsi_1 = sx.q(arg1[4].d)
            int32_t rax_6 = (rsi_1 + rbp_1).d
            arg1[4].d = rax_6
            
            if (rax_6 s> *(arg1 + 0x24))
                sub_1405a4f90(&arg1[3])
            
            memset((rsi_1 << 4) + arg1[3], 0, rbp_1 << 4)

return arg1
