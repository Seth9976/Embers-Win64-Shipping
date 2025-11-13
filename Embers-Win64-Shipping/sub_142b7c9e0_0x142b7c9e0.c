// 函数: sub_142b7c9e0
// 地址: 0x142b7c9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)
int64_t rdi = rbx * 2

while (true)
    void* rax_1 = *(arg1 + 0x10)
    int16_t rdx = *(rax_1 + 8)
    int32_t rcx_1
    
    if (rdx s< 0)
        rcx_1 = *(rax_1 + 0xc)
    else
        rcx_1 = sx.d(rdx) s>> 5
    
    char rax_4
    
    if (rbx.d s< rcx_1)
        int16_t rdx_1 = *(rax_1 + 8)
        int32_t rcx_3
        
        if (rdx_1 s< 0)
            rcx_3 = *(rax_1 + 0xc)
        else
            rcx_3 = sx.d(rdx_1) s>> 5
        
        int16_t rcx_4
        
        if (rbx.d u>= rcx_3)
            rcx_4 = -1
        else if ((rdx_1.b & 2) == 0)
            rcx_4 = *(rdi + *(rax_1 + 0x18))
        else
            rcx_4 = *(rdi + rax_1 + 0xa)
        
        rax_4 = sub_142b13730(zx.d(rcx_4))
    
    if (rbx.d s>= rcx_1 || rax_4 == 0)
        return zx.q(rbx.d)
    
    rbx = zx.q(rbx.d + 1)
    rdi += 2
