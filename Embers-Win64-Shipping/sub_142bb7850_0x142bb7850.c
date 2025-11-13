// 函数: sub_142bb7850
// 地址: 0x142bb7850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *(arg1 + 0x2a8)

if (rbp == 0)
    return zx.q((rbp + 6).d)

uint64_t rsi = 0

if (*(rbp + 0x28) u> 0)
    do
        int64_t rbx_1 = *(rbp + 0x20)
        uint64_t rdi_1 = rsi * 5
        
        if (*(rbx_1 + (rdi_1 << 2)) == arg3)
            int32_t rax_2 = *(rbx_1 + (rdi_1 << 2) + 4)
            int32_t rax_3
            
            if (arg2 s>= rax_2)
                int32_t r8 = *(rbx_1 + (rdi_1 << 2) + 0xc)
                
                if (arg2 s<= r8)
                    rax_3 = sub_142b93dd0(arg2 - rax_2, 
                        *(rbx_1 + (rdi_1 << 2) + 0x10) - *(rbx_1 + (rdi_1 << 2) + 8), r8 - rax_2)
                        + *(rbx_1 + (rdi_1 << 2) + 8)
                else
                    rax_3 = *(rbx_1 + (rdi_1 << 2) + 0x10)
            else
                rax_3 = *(rbx_1 + (rdi_1 << 2) + 8)
            
            *arg4 = rax_3
        
        rsi = zx.q(rsi.d + 1)
    while (rsi.d u< *(rbp + 0x28))

return 0
