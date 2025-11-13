// 函数: sub_1421bc890
// 地址: 0x1421bc890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = *(arg1 + 0x118)
int64_t rdi = sx.q(arg2)

if (rdi.d s>= rbp)
    return 

char* r8_1 = nullptr
int64_t* r14_1 = *(*(arg1 + 0x28) + 0x58)

if (r14_1 != 0)
    char* rax_2 = sub_1421b7c40(arg1, r14_1)
    r8_1 = rax_2
    
    if (rax_2 != 0 && (*rax_2 & 2) == 0)
        r8_1 = nullptr

int64_t rdx_4 = *(arg1 + 0xf8)
int64_t rsi_1 = rdi * 2
int16_t r15_1 = *(rsi_1 + rdx_4)

if (r8_1 != 0)
    (*(*r14_1 + 0x350))(r14_1, arg1, r8_1, sx.q(*(arg1 + 0x114) * zx.d(r15_1)) + *(arg1 + 0xf0))
    rdx_4 = *(arg1 + 0xf8)
    rbp = *(arg1 + 0x118)

if (rdi.d s< rbp - 1)
    do
        int16_t* rcx_1 = *(arg1 + 0xf8)
        rsi_1 += 2
        rdi = zx.q(rdi.d + 1)
        *(rcx_1 + rsi_1 - 2) = *(rcx_1 + rsi_1)
        rbp = *(arg1 + 0x118)
    while (rdi.d s< rbp - 1)
    
    rdx_4 = *(arg1 + 0xf8)

*(rdx_4 + (sx.q(rbp) << 1) - 2) = r15_1
*(arg1 + 0x118) -= 1
