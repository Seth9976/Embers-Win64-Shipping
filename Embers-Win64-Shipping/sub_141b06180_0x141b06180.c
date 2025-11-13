// 函数: sub_141b06180
// 地址: 0x141b06180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(*(arg2 + 0x48))

if (rbx.d == 0)
    return 

uint64_t i_1 = *(arg2 + 0x40)
void* i = arg2
int32_t i_2 = 0x7fffffff

if (i_1 != 0)
    i = i_1

for (void* r8_3 = (rbx << 4) + i; i != r8_3; i += 0x10)
    void* rdx = *i
    i_1.w = *(rdx + 0xc9) u>> 8
    
    if (i_1.b == 0 && (*(i + 0xc) & 3) == 0)
        i_1 = zx.q(*(rdx + 0xa8))
        
        if (i_2 s<= i_1.d)
            i_1 = zx.q(i_2)
        
        i_2 = i_1.d

int32_t rbx_1 = rbx.d - 1

if (rbx.d - 1 s< 0)
    return 

int64_t rsi_2 = sx.q(rbx_1) << 4
int64_t r15_1 = rsi_2
int64_t r14_2 = sx.q(rbx_1 + 1) << 4
int32_t temp1_1

do
    void* rax_1 = *(arg2 + 0x40)
    void* rcx = arg2
    
    if (rax_1 != 0)
        rcx = rax_1
    
    i_1 = *(rsi_2 + rcx)
    
    if (*(i_1 + 0xa8) s> i_2)
        i_1.w = *(i_1 + 0xc9) u>> 8
        
        if (i_1.b == 0 && (*(rsi_2 + rcx + 0xc) & 3) == 0)
            int32_t rdx_1 = *(arg2 + 0x48)
            int32_t rax_3 = rdx_1 - rbx_1
            
            if (rax_3 != 1)
                memmove(rcx + r15_1, r14_2 + rcx, (rax_3 - 1) << 4)
                rdx_1 = *(arg2 + 0x48)
            
            *(arg2 + 0x48) = rdx_1 - 1
    
    r14_2 -= 0x10
    r15_1 -= 0x10
    rsi_2 -= 0x10
    temp1_1 = rbx_1
    rbx_1 -= 1
while (temp1_1 - 1 s>= 0)
