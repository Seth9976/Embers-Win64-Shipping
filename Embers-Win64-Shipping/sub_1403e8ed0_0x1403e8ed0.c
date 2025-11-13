// 函数: sub_1403e8ed0
// 地址: 0x1403e8ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = 1
int64_t rdi = sx.q(arg2)

if (1 s>= rdi)
    return 

int32_t rbx_1 = 0

do
    int32_t r11_1 = sx.d(*(arg1 + (r10 << 1)))
    int32_t rdx = rbx_1
    int64_t rax = r10 - 1
    
    if (rbx_1 s>= 0)
        int32_t temp0_1
        
        do
            int32_t r8_1 = sx.d(*(arg1 + (rax << 1)))
            
            if (r11_1 s>= r8_1)
                break
            
            *(arg1 + (rax << 1) + 2) = r8_1.w
            rax -= 1
            temp0_1 = rdx
            rdx -= 1
        while (temp0_1 - 1 s>= 0)
    
    r10 += 1
    rbx_1 += 1
    *(arg1 + (rax << 1) + 2) = r11_1.w
while (r10 s< rdi)
