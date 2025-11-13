// 函数: sub_141a19a10
// 地址: 0x141a19a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(*(arg1 + 0x80))

if (rbx.d == 0)
    return 

void* rsi_1 = **(arg1 + 0x78)
int32_t r12_1 = 0
int32_t rdi_1 = 0
int64_t* rax
int64_t rbp

if (rsi_1 == 0)
    rbp.b = 1
else
    void* rax_1 = sub_141a22c50()
    void* rdx_1 = *(rsi_1 + 0x10)
    rax = sx.q(*(rax_1 + 0x38))
    
    if (rax.d s> *(rdx_1 + 0x38))
        rbp.b = 1
    else if ((*(rdx_1 + 0x30))[rax] != rax_1 + 0x30)
        rbp.b = 1
    else
        rbp.b = 0

int64_t i = 0

do
    int64_t r13_1 = sx.q(rdi_1)
    i += 1
    rdi_1 += 1
    
    for (; i s< rbx; i += 1)
        void* rsi_2 = (*(arg1 + 0x78))[i]
        
        if (rsi_2 == 0)
            rax.b = 1
        else
            void* rax_2 = sub_141a22c50()
            void* rdx_2 = *(rsi_2 + 0x10)
            rax = sx.q(*(rax_2 + 0x38))
            
            if (rax.d s> *(rdx_2 + 0x38))
                rax.b = 1
            else if ((*(rdx_2 + 0x30))[rax] != rax_2 + 0x30)
                rax.b = 1
            else
                rax.b = 0
        
        if (rbp.b != rax.b)
            break
        
        rdi_1 += 1
    
    int32_t rsi_4 = rdi_1 - r13_1.d
    
    if (rbp.b != 0)
        if (r12_1 != r13_1.d)
            int64_t rcx_2 = *(arg1 + 0x78)
            memmove(rcx_2 + (sx.q(r12_1) << 3), rcx_2 + (r13_1 << 3), rsi_4 << 3)
        
        r12_1 += rsi_4
    
    rbp.b ^= 1
while (i s< rbx)

*(arg1 + 0x80) = r12_1
