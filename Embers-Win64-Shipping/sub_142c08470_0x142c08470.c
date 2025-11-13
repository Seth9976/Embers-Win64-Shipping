// 函数: sub_142c08470
// 地址: 0x142c08470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = arg1[3]
int64_t* r10 = arg1
void* arg_18 = r9

if ((*(r9 + 0x28) & 1) == 0)
    return 

void* rdx_1 = *arg1

if ((*(rdx_1 + 0xb8) & 4) == 0)
    return 

uint64_t rax = zx.q(*(rdx_1 + 0xa0))
int32_t r12_1
int32_t r14_1

if ((*(r9 + 0x38) & 0xfffffffd) != 4)
    r12_1 = *(rdx_1 + 0xa8)
    r14_1 = *(rdx_1 + 0xa4)
else
    r12_1 = *(rdx_1 + 0xa4)
    r14_1 = *(rdx_1 + 0xa8)

int32_t i = *(r9 + 0x60)
int32_t r12_2 = r12_1 | rax.d
int64_t r15_1 = *(r9 + 0x70)
int32_t r14_2 = r14_1 | rax.d
uint64_t rsi_1 = 0

if (i == 0)
    return 

do
    uint64_t rcx = rsi_1 * 5
    void* r8_1 = r15_1 + (rcx << 2)
    
    if (*(r15_1 + (rcx << 2)) == 0x2044)
        uint64_t r13_1 = zx.q((rsi_1 + 1).d)
        int32_t rdi_1 = rsi_1.d
        int32_t rbx_1 = r13_1.d
        
        if (rsi_1.d != 0)
            uint64_t rdx_2
            
            do
                rdx_2 = zx.q(rdi_1 - 1)
                
                if ((*(r15_1 + rdx_2 * 0x14 + 0x10) & 0x1f) != 0xd)
                    break
                
                rdi_1 = rdx_2.d
            while (rdx_2.d != 0)
        
        if (rbx_1 u< i)
            char* rdx_5 = r15_1 + ((r13_1 * 5 + 4) << 2)
            
            while ((*rdx_5 & 0x1f) == 0xd)
                rbx_1 += 1
                rdx_5 = &rdx_5[0x14]
                
                if (rbx_1 u>= i)
                    break
        
        if (rbx_1 - rdi_1 u>= 2)
            sub_142bf5c70(r9, rdi_1, rbx_1)
            r9 = arg_18
            r10 = arg1
        
        if (rdi_1 u< rsi_1.d)
            int32_t* rax_8 = r15_1 + ((zx.q(rdi_1) * 5 + 1) << 2)
            uint64_t j_2 = zx.q(rsi_1.d - rdi_1)
            uint64_t j
            
            do
                *rax_8 |= r12_2
                rax_8 = &rax_8[5]
                j = j_2
                j_2 -= 1
            while (j != 1)
        
        *(r8_1 + 4) |= *(*r10 + 0xa0)
        
        if (r13_1.d u< rbx_1)
            uint64_t j_3 = zx.q(rbx_1 - r13_1.d)
            rax = r15_1 + ((r13_1 * 5 + 1) << 2)
            uint64_t j_1
            
            do
                *rax |= r14_2
                rax += 0x14
                j_1 = j_3
                j_3 -= 1
            while (j_1 != 1)
        
        rsi_1 = zx.q(rbx_1 - 1)
    
    rsi_1 = zx.q(rsi_1.d + 1)
while (rsi_1.d u< i)
