// 函数: sub_14088bf20
// 地址: 0x14088bf20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2[2] u<= 0)
    return 

void* r10_1 = *arg1
int32_t rax_1 = *(r10_1 + 0x28)
int32_t temp0_1
int32_t temp1_1
temp0_1:temp1_1 = sx.q(rax_1 + 7)
int64_t rax = sx.q(*(r10_1 + 0x38))
int64_t rsi_2 =
    zx.q(((temp1_1 + (temp0_1 & 7)) s>> 3) + ((*(r10_1 + 0x18) + *(r10_1 + 8) + rax_1) << 3))
    + arg1[1]

if (rax.d s<= 0)
    return 

int64_t r8 = 0
void* rcx = nullptr

do
    void* rax_7 = *(r10_1 + 0x30)
    
    if ((*(r10_1 + 0x30) & 1) != 0)
        rax_7 = (rax_7 s>> 1) + r10_1 + 0x30
    
    void* rdx_2 = rcx + rax_7
    
    if (*(rcx + rax_7) == *arg2)
        rax = sx.q(*(rdx_2 + 0x10))
        
        if (rax.d s> 0)
            int64_t rcx_1 = 0
            
            do
                void* rax_9 = *(rdx_2 + 8)
                
                if ((*(rdx_2 + 8) & 1) != 0)
                    rax_9 = (rax_9 s>> 1) + rdx_2 + 8
                
                int32_t rdx_3 = *(rax_9 + (rcx_1 << 2))
                
                if (arg2[1] == rdx_3.w)
                    uint32_t count_2 = zx.d(arg2[2])
                    uint32_t count = count_2
                    
                    if (count_2 u>= 4)
                        count = 4
                    
                    uint64_t count_1 = zx.q(count)
                    memcpy(rsi_2, arg3, count)
                    int32_t rdi_2 = count_2 - count_1.d
                    
                    if (count_2 - count_1.d s>= 0)
                        rdi_2 = 0
                    
                    memset(count_1 + rsi_2, 0, sx.q(rdi_2))
                    break
                
                rcx_1 += 1
                rsi_2 += zx.q(rdx_3) u>> 0x10
            while (rcx_1 s< rax)
        
        break
    
    r8 += 1
    rsi_2 += zx.q(*(rdx_2 + 2))
    rcx += 0x18
while (r8 s< rax)
