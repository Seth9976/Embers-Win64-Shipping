// 函数: sub_142b712e0
// 地址: 0x142b712e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = *(arg1 + 0x40) - 1
int64_t* r15 = *(arg1 + ((sx.q(i) + 3) << 3))
void* rsi_2 = arg1 + ((sx.q(i) + 3) << 3)
int32_t rbp

if (r15 != 0)
    rbp = *(r15 + 0xc)
else
    rbp = *(arg1 + 0x10)

do
    int64_t* rcx = *(rsi_2 - 8)
    rsi_2 -= 8
    i -= 1
    
    if (rcx != 0)
        int32_t rax_1 = *(rcx + 0xc)
        
        if (rax_1 s< 0 && (rax_1 s< rbp || *(arg1 + 0x10) s< rax_1))
            (*(*rcx + 0x20))(rcx, arg2)
while (i s> 0)

int32_t rdi_2 = *(arg1 + 0x40) - 1

if (r15 != 0)
    (*(*r15 + 0x20))(r15, arg2)
else
    int64_t r9_1 = *arg2
    int64_t r8
    r8.b = 1
    (*(r9_1 + 0x80))(arg2, zx.q(*(arg1 + (sx.q(rdi_2) << 2) + 0x44)), r8, r9_1)

int64_t r8_1 = *arg2
int32_t result
int64_t r8_2
result, r8_2 = (*(r8_1 + 0x70))(arg2, zx.q(*(arg1 + (sx.q(rdi_2) << 1) + 0x58)), r8_1)
int32_t rdi_3 = rdi_2 - 1
*(arg1 + 0xc) = result

if (rdi_2 - 1 s>= 0)
    int64_t rax_6 = sx.q(rdi_3)
    void* rbp_2 = arg1 + 0x58 + (rax_6 << 1)
    void* r15_2 = arg1 + 0x44 + (rax_6 << 2)
    void* rsi_4 = arg1 + 0x18 + (rax_6 << 3)
    int32_t temp1_1
    
    do
        void* rax_7 = *rsi_4
        uint64_t rdx_4
        
        if (rax_7 != 0)
            rdx_4 = zx.q(*(arg1 + 0xc) - *(rax_7 + 0xc))
            r8_2.b = 0
        else
            rdx_4 = zx.q(*r15_2)
            r8_2.b = 1
        
        (*(*arg2 + 0x80))(arg2, rdx_4, r8_2)
        result, r8_2 = (*(*arg2 + 0x70))(arg2, zx.q(*rbp_2))
        rsi_4 -= 8
        r15_2 -= 4
        rbp_2 -= 2
        *(arg1 + 0xc) = result
        temp1_1 = rdi_3
        rdi_3 -= 1
    while (temp1_1 - 1 s>= 0)

return result
