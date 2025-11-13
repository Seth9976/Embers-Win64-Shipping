// 函数: sub_142c3c440
// 地址: 0x142c3c440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r13 = *(arg1 + 0x70)
int32_t r14 = -1
int32_t r15 = *(arg1 + 0x60)
uint64_t rsi = 0
uint64_t rdi = 0
uint64_t rax

if (*(arg1 + 0xb4) u> 0)
    do
        void* rax_1 = *(arg1 + 0x10)
        int64_t rbx_1 = rdi << 2
        int32_t rax_2 = (*(rax_1 + 0x28))(rax_1, zx.q(*(rbx_1 + arg1 + 0x8c)), *(rax_1 + 0x68))
        rax = sub_142c3c700(*(rbx_1 + arg1 + 0x8c))
        
        if (rax.d == 8)
            int32_t rax_3
            
            if (rax_2 u>= 0x20)
                rax_3 = 0
            else
                rax_3 = 1 << rax_2.b
            
            int32_t rax_4 = rax_3 & 0x1802
            int32_t rax_5 = neg.d(rax_4)
            rax = zx.q(sbb.d(rax_5, rax_5, rax_4 != 0)) & 7
        
        if (rax.d != 7)
            rsi = zx.q(*((zx.q(rax.d) << 2) + 0x1436a12e2))
            break
        
        rdi = zx.q(rdi.d + 1)
    while (rdi.d u< *(arg1 + 0xb4))

int32_t rdi_1 = 0

if (r15 != 0)
    char* rbx_2 = r13 + 0x12
    
    do
        rax = sub_142c3c700(*(rbx_2 - 0x12))
        int32_t r9_2 = rax.d
        
        if (rax.d == 8)
            r9_2 = sbb.d(r9_2, r9_2, (1 << ((*(rbx_2 - 2)).b & 0x1f) & 0x1802) != 0) & 7
        
        if (r9_2 != 7)
            uint64_t rdx_5 = zx.q(r9_2) + rsi * 6
            char rdx_6 = *(&data_1436a12e0 + (rdx_5 << 2))
            
            if (rdx_6 != 7 && r14 != 0xffffffff)
                *(r13 + zx.q(r14) * 0x14 + 0x12) = rdx_6
                
                if (rdi_1 - r14 + 1 u>= 2)
                    sub_142bf5c70(arg1, r14, rdi_1 + 1)
            
            r14 = rdi_1
            *rbx_2 = *((rdx_5 << 2) + 0x1436a12e1)
            rsi = zx.q(*((rdx_5 << 2) + 0x1436a12e2))
        else
            *rbx_2 = r9_2.b
        
        rdi_1 += 1
        rbx_2 = &rbx_2[0x14]
    while (rdi_1 u< r15)

uint64_t rdi_2 = 0

if (*(arg1 + 0xb8) u<= 0)
    return 

do
    void* rax_12 = *(arg1 + 0x10)
    int64_t rbx_3 = rdi_2 << 2
    int32_t rax_13 = (*(rax_12 + 0x28))(rax_12, zx.q(*(rbx_3 + arg1 + 0xa0)), *(rax_12 + 0x68))
    rax = sub_142c3c700(*(rbx_3 + arg1 + 0xa0))
    int32_t r9_4 = rax.d
    
    if (rax.d == 8)
        int32_t rax_14
        
        if (rax_13 u>= 0x20)
            rax_14 = 0
        else
            rax_14 = 1 << rax_13.b
        
        r9_4 = sbb.d(r9_4, r9_4, (rax_14 & 0x1802) != 0) & 7
    
    if (r9_4 != 7)
        char r8_4 = *(&data_1436a12e0 + ((zx.q(r9_4) + rsi * 6) << 2))
        
        if (r8_4 != 7 && r14 != 0xffffffff)
            *(r13 + zx.q(r14) * 0x14 + 0x12) = r8_4
        
        break
    
    rdi_2 = zx.q(rdi_2.d + 1)
while (rdi_2.d u< *(arg1 + 0xb8))
