// 函数: sub_1418c8b70
// 地址: 0x1418c8b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg1[1].d
int32_t rbx_1 = rbx - 1

if (rbx - 1 s< 0)
    return 

int64_t rax = sx.q(rbx_1)
int64_t rsi_1 = rax << 3
int64_t r15_1 = rsi_1
int64_t rdi_1 = rax - 1
int32_t temp1_1

do
    int64_t r9_1 = rdi_1
    
    if (rdi_1 s>= 0)
        int64_t r10_1 = *arg1
        int64_t r11_1 = *(rsi_1 + r10_1)
        int64_t temp3_1
        
        do
            rax = r11_1
            uint32_t i
            uint32_t rdx_1
            
            do
                rdx_1 = zx.d(*rax)
                i = zx.d(*(rax + *(r10_1 + (r9_1 << 3)) - r11_1))
                
                if (rdx_1 != i)
                    break
                
                rax += 1
            while (i != 0)
            
            if (rdx_1 - i == 0)
                int32_t rcx = arg1[1].d
                int32_t rax_3 = rcx - rbx_1 - 1
                
                if (rax_3 s>= 1)
                    rax_3 = 1
                
                if (rax_3 != 0)
                    memcpy(r15_1 + r10_1, r10_1 + (sx.q(rcx - rax_3) << 3), rax_3 << 3)
                    rcx = arg1[1].d
                
                arg1[1].d = rcx - 1
                break
            
            temp3_1 = r9_1
            r9_1 -= 1
        while (temp3_1 - 1 s>= 0)
    
    r15_1 -= 8
    rdi_1 -= 1
    rsi_1 -= 8
    temp1_1 = rbx_1
    rbx_1 -= 1
while (temp1_1 - 1 s>= 0)
