// 函数: sub_1421bc990
// 地址: 0x1421bc990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *(arg1 + 0x118)

if (rdi s<= 0)
    return 

uint64_t rsi_1 = 0
void* r15_1 = *(arg1 + 0x28)
int64_t rdx_1 = *(r15_1 + 0x58)

if (rdx_1 != 0)
    uint64_t rax = sub_1421b7c40(arg1, rdx_1)
    rsi_1 = rax
    
    if (rax != 0 && (*rax & 2) == 0)
        rsi_1 = 0

int64_t r14
r14.b = 0
int64_t rdi_1 = sx.q(rdi - 1)

if (rdi - 1 s< 0)
    return 

int64_t temp0_1

do
    int64_t rdx_3 = *(arg1 + 0xf8)
    uint32_t rbp_1 = zx.d(*(rdx_3 + (rdi_1 << 1)))
    
    if (rbp_1 s>= *(arg1 + 0x120))
        r14.b = 1
    else
        void* r9_2 = sx.q(*(arg1 + 0x114) * rbp_1) + *(arg1 + 0xf0)
        
        if (not(1f f>= *(r9_2 + 0xc)))
            if (rsi_1 != 0)
                int64_t* rcx_1 = *(r15_1 + 0x58)
                (*(*rcx_1 + 0x350))(rcx_1, arg1, rsi_1, r9_2, arg2)
                rdx_3 = *(arg1 + 0xf8)
            
            *(rdx_3 + (rdi_1 << 1)) = *(rdx_3 + (sx.q(*(arg1 + 0x118)) << 1) - 2)
            *(*(arg1 + 0xf8) + (sx.q(*(arg1 + 0x118)) << 1) - 2) = rbp_1.w
            *(arg1 + 0x118) -= 1
    
    temp0_1 = rdi_1
    rdi_1 -= 1
while (temp0_1 - 1 s>= 0)

if (r14.b != 0)
    sub_1421b4060(arg1)
