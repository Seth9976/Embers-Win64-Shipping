// 函数: sub_14262b110
// 地址: 0x14262b110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *(arg1 + 0x24)
int32_t r9 = 0
int32_t r10 = *(arg1 + 0x20)

if (rbx s<= 0)
    return 

do
    int32_t rax = 0
    
    if (r10 s> 0)
        int32_t rdi_2 = r9 * r10
        
        do
            int64_t r8_1 = *(arg1 + 0x50)
            char r11_1 = *(sx.q(rdi_2 + rax) + r8_1)
            
            if ((r11_1 & 1) == 0 && rax - 1 s>= 0 && r9 s>= 0 && rax - 1 s< r10 && r9 s< rbx)
                int64_t rdx_2 = sx.q(rax - 1 + rdi_2)
                *(rdx_2 + r8_1) &= 0xfb
            
            if ((r11_1 & 2) == 0 && rax s>= 0 && r9 + 1 s>= 0 && rax s< r10 && r9 + 1 s< rbx)
                char* r8_3 = sx.q((r9 + 1) * r10 + rax) + *(arg1 + 0x50)
                *r8_3 &= 0xf7
            
            if ((r11_1 & 4) == 0 && rax + 1 s>= 0 && r9 s>= 0 && rax + 1 s< r10 && r9 s< rbx)
                char* r8_5 = sx.q(rax + 1 + rdi_2) + *(arg1 + 0x50)
                *r8_5 &= 0xfe
            
            if ((r11_1 & 8) == 0 && rax s>= 0 && r9 - 1 s>= 0 && rax s< r10 && r9 - 1 s< rbx)
                char* r8_7 = sx.q((r9 - 1) * r10 + rax) + *(arg1 + 0x50)
                *r8_7 &= 0xfd
            
            rax += 1
        while (rax s< r10)
    
    r9 += 1
while (r9 s< rbx)
