// 函数: sub_140d85da0
// 地址: 0x140d85da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = 0
int64_t rsi = arg4
int32_t arg_18 = 0

if (arg3 != 0)
    int32_t r11_1 = 0
    
    do
        void* rbx_1 = *(arg1 + 0x28)
        void* rcx = rbx_1
        void* r9 = rbx_1 + sx.q(*(arg1 + 0x30)) * 0x28
        
        if (rbx_1 != r9)
            uint64_t r8_1 = zx.q(r11_1) * 2
            
            do
                int64_t* rdx_1 = *(rcx + 8)
                
                if (*rdx_1 == *(rsi + (r8_1 << 3)) && rdx_1[1] == *(rsi + (r8_1 << 3) + 8))
                    int32_t rdx_4 = ((rcx - rbx_1) s/ 0x28).d
                    
                    if (rdx_4 != 0xffffffff)
                        *(rbx_1 + sx.q(rdx_4) * 0x28) = 1
                        rsi = arg4
                        r10 = arg_18
                    
                    break
                
                rcx += 0x28
            while (rcx != r9)
        
        r10 += 1
        arg_18 = r10
        r11_1 = r10
    while (r10 u< arg3)

return 0
