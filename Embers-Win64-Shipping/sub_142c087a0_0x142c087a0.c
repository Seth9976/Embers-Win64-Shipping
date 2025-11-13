// 函数: sub_142c087a0
// 地址: 0x142c087a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x28) & 0x10) == 0)
    return 

int32_t i_2 = 0
int32_t rbx_1 = *(arg1 + 0x60)
void* rsi_1 = *(arg1 + 0x70)

if (rbx_1 == 0)
    return 

uint64_t rax = 0

do
    rax = zx.q(rax.d + 1)
    
    if (rax.d u>= rbx_1)
        break
while (*(rsi_1 + 8) == *(rsi_1 + rax * 0x14 + 8))

if (rbx_1 == 0)
    return 

do
    int32_t i = i_2
    
    if (i_2 u< rax.d)
        void* r8_4 = rsi_1 + ((zx.q(i_2) * 5 + 1) << 2)
        void* rcx_1 = r8_4
        
        do
            if ((*rcx_1 & 1) != 0)
                uint64_t j_1 = zx.q(rax.d - i_2)
                uint64_t j
                
                do
                    *r8_4 |= 1
                    r8_4 += 0x14
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                break
            
            i += 1
            rcx_1 += 0x14
        while (i u< rax.d)
    
    int64_t r9_1 = *(arg1 + 0x70)
    i_2 = rax.d
    int32_t i_1 = *(r9_1 + rax * 0x14 + 8)
    
    do
        rax = zx.q(rax.d + 1)
        
        if (rax.d u>= *(arg1 + 0x60))
            break
    while (i_1 == *(r9_1 + rax * 0x14 + 8))
while (i_2 u< rbx_1)
