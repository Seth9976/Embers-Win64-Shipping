// 函数: sub_142195500
// 地址: 0x142195500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x118) s<= 0)
    return 

char* rsi_1 = nullptr
void* r14_1 = *(arg1 + 0x28)
int64_t rdx_1 = *(r14_1 + 0x58)

if (rdx_1 != 0)
    char* rax = sub_1421b7c40(arg1, rdx_1)
    rsi_1 = rax
    
    if (rax != 0 && (*rax & 2) == 0)
        rsi_1 = nullptr

int32_t rcx = *(arg1 + 0x118)
int64_t rdi_1 = sx.q(rcx - 1)

if (rcx - 1 s< 0)
    return 

int64_t temp1_1

do
    int64_t rdx_3 = *(arg1 + 0xf8)
    uint32_t rbp_1 = zx.d(*(rdx_3 + (rdi_1 << 1)))
    void* r9_2 = sx.q(rbp_1 * *(arg1 + 0x114)) + *(arg1 + 0xf0)
    
    if (not(1f f>= *(r9_2 + 0xc)))
        if (rsi_1 != 0)
            int64_t* rcx_2 = *(r14_1 + 0x58)
            (*(*rcx_2 + 0x350))(rcx_2, arg1, rsi_1, r9_2, arg2)
            rdx_3 = *(arg1 + 0xf8)
        
        *(rdx_3 + (rdi_1 << 1)) = *(rdx_3 + (sx.q(*(arg1 + 0x118)) << 1) - 2)
        *(*(arg1 + 0xf8) + (sx.q(*(arg1 + 0x118)) << 1) - 2) = rbp_1.w
        *(arg1 + 0x118) -= 1
    
    temp1_1 = rdi_1
    rdi_1 -= 1
while (temp1_1 - 1 s>= 0)
