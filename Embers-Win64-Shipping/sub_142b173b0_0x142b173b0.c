// 函数: sub_142b173b0
// 地址: 0x142b173b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
int32_t rsi = arg3
int64_t r12 = *(arg1 + 0xe0)
void* rbx = arg2
int64_t r10 = sx.q(*(*(arg1 + 0xd0) + 8))

if (*(arg1 + 0xfc) != 0)
    r12 += sx.q((r10 * 2).d)

while (true)
    int32_t rax_2
    rax_2, arg4 = sub_142aa0ce0(*(arg1 + 0xc8), sx.q(rbp) + rbx, rsi, 0, arg4)
    
    if (rax_2 == rsi)
        return zx.q(arg3)
    
    int32_t rbp_1 = rbp + rax_2
    int32_t rsi_1 = rsi - rax_2
    int64_t r13_1 = sx.q(rbp_1)
    int32_t rax_3 = sub_142b176a0(arg1, rbx + r13_1, rsi_1, arg4)
    
    if (rax_3 s> 0)
        return zx.q(rbp_1)
    
    char* rbx_1 = *(arg1 + 0xe8)
    char* r11_1 = nullptr
    
    if (r10 s> 0)
        int32_t* rdi_1 = *(arg1 + 0xd8)
        
        do
            int64_t r9_2 = sx.q(*rdi_1)
            
            if (r9_2.d != 0 && r11_1[r12] != 0xff && r9_2.d s<= rsi_1)
                int32_t rax_4 = r9_2.d
                char* r8_2 = rbx_1
                
                while (true)
                    char rdx_3 = *(r13_1 - rbx_1 + arg2 + r8_2)
                    char rcx_2 = *r8_2
                    r8_2 = &r8_2[1]
                    
                    if (rdx_3 != rcx_2)
                        break
                    
                    rax_4 -= 1
                    
                    if (rax_4 s<= 0)
                        return zx.q(rbp_1)
            
            rbx_1 = &rbx_1[r9_2]
            r11_1 = &r11_1[1]
            rdi_1 = &rdi_1[1]
        while (r11_1 s< r10)
    
    rbp = rbp_1 - rax_3
    rsi = rsi_1 + rax_3
    
    if (rsi_1 == neg.d(rax_3))
        return zx.q(arg3)
    
    rbx = arg2
