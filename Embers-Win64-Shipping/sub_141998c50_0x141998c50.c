// 函数: sub_141998c50
// 地址: 0x141998c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = sx.q(*(arg2 + 0x40))
int32_t r11 = 0
int32_t rbx = 0
int32_t rdi = 0

if (r15 s<= 0)
    return 

int64_t r10_1 = 0
int64_t rbp_1 = 0
int64_t rsi_1 = 0
int64_t r14_1 = 0

do
    void* rdx_1 = *(arg2 + 0x38)
    int64_t rax_2 = rdx_1 s>> 1
    char r8 = *(arg2 + 0x38) & 1
    void* rcx_1
    
    if (r8 == 0)
        rcx_1 = rdx_1
    else
        rcx_1 = arg2 + 0x38 + rax_2
    
    uint32_t rcx_3 = zx.d(*(rcx_1 + (r10_1 << 2) + 2))
    
    if (r8 != 0)
        rdx_1 = arg2 + 0x38 + rax_2
    
    int16_t r8_1 = *(rdx_1 + (r10_1 << 2))
    uint64_t rax
    
    if (rcx_3.b != 9)
        if (((rcx_3 - 0xa).b & 0xfb) != 0)
            rcx_3.b -= 0xb
            
            if ((rcx_3.b & 0xfb) == 0)
                if (rdi s>= *(arg1 + 0x78))
                    *(zx.q(r8_1) + arg3) = 0
                else
                    rax = *(arg1 + 0x70)
                    
                    if ((rax.b & 1) != 0)
                        rax = (rax s>> 1) + arg1 + 0x70
                    
                    if (r8_1 != *(rax + rbp_1 + 2))
                        *(zx.q(r8_1) + arg3) = 0
                    else
                        rdi += 1
                        rbp_1 += 4
        else if (rbx s>= *(arg1 + 0x68))
            *(zx.q(r8_1) + arg3) = 0
        else
            rax = *(arg1 + 0x60)
            
            if ((rax.b & 1) != 0)
                rax = (rax s>> 1) + arg1 + 0x60
            
            if (r8_1 != *(rsi_1 + rax + 2))
                *(zx.q(r8_1) + arg3) = 0
            else
                rbx += 1
                rsi_1 += 4
    else if (r11 s>= *(arg1 + 0x58))
        *(zx.q(r8_1) + arg3) = 0
    else
        rax = *(arg1 + 0x50)
        
        if ((rax.b & 1) != 0)
            rax = (rax s>> 1) + arg1 + 0x50
        
        if (r8_1 != *(r14_1 + rax + 2))
            *(zx.q(r8_1) + arg3) = 0
        else
            r11 += 1
            r14_1 += 4
    r10_1 += 1
while (r10_1 s< r15)
