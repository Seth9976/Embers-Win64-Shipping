// 函数: sub_142b91640
// 地址: 0x142b91640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0

if (arg1 != 0 && arg3 != 0)
    void* rdi_1 = *arg3
    
    if (rdi_1 != 0)
        int64_t r13 = *(rdi_1 + 0x98)
        int128_t* rax = sub_142b99860(r13, *arg1, &arg_8)
        int32_t rsi = arg_8
        int128_t* rbx = rax
        
        if (rsi == 0)
            rax[1].q = arg1
            *rax = *arg3
            int64_t rax_1 = *(arg1 + 8)
            int32_t rax_2
            
            if (rax_1 != 0)
                rax_2 = rax_1(rbx, arg2)
                arg_8 = rax_2
                rsi = rax_2
            
            int64_t rax_4
            
            if (rax_1 == 0 || rax_2 == 0)
                int32_t r8_1 = *(rdi_1 + 0x38)
                rax_4 = sub_142b99a90(r13, 8, r8_1, r8_1 + 1, *(rdi_1 + 0x40), &arg_8)
                rsi = arg_8
                *(rdi_1 + 0x40) = rax_4
            
            if ((rax_1 == 0 || rax_2 == 0) && rsi == 0)
                *(rax_4 + (sx.q(*(rdi_1 + 0x38)) << 3)) = rbx
                *(rdi_1 + 0x38) += 1
            else
                sub_142b98990(rbx)
                rbx = nullptr
        
        if (arg4 != 0)
            *arg4 = rbx
        
        return zx.q(rsi)

return 6
