// 函数: sub_142b98790
// 地址: 0x142b98790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0x40)

if (i == 0)
    return 0

for (void* rsi = &i[sx.q(*(arg1 + 0x38))]; i u< rsi; i = &i[1])
    int64_t* rbx_1 = *i
    
    if (*(rbx_1 + 0xc) == 0 && *(rbx_1 + 0xe) == 5 && rbx_1 != 0)
        void* rax_2 = *rbx_1
        
        if (rax_2 != 0)
            int64_t* rcx = *(rax_2 + 0x90)
            int64_t r8_1 = *(*rcx + 0x30)
            
            if (r8_1 != 0)
                int64_t rax_4 = r8_1(rcx, "tt-cmaps")
                void arg_8
                
                if (rax_4 != 0 && (*rax_4)(rbx_1, &arg_8) == 0 && arg2 == 0xe)
                    return *i

return 0
