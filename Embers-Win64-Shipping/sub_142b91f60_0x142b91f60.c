// 函数: sub_142b91f60
// 地址: 0x142b91f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
    void* rax_1 = *arg1
    
    if (rax_1 != 0)
        int64_t* rcx = *(rax_1 + 0x90)
        int64_t r8_1 = *(*rcx + 0x30)
        
        if (r8_1 != 0)
            int64_t rax_3 = r8_1(rcx, "tt-cmaps")
            
            if (rax_3 != 0)
                int32_t rcx_2 = arg2
                void arg_8
                
                if ((*rax_3)(arg1, &arg_8) != 0)
                    rcx_2 = -1
                
                return zx.q(rcx_2)

return 0xffffffff
