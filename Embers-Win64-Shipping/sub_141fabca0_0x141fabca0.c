// 函数: sub_141fabca0
// 地址: 0x141fabca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x30) != 0)
    (*(*arg2 + 8))(arg2, 0x10, 0x10)
    sub_1422c01b0(*(arg1 + 0x30), arg2)

int64_t r9 = *arg2
(*(r9 + 8))(arg2, sx.q(*(arg1 + 0x90)) * 0xc, sx.q(*(arg1 + 0x94)) * 0xc, r9)
int64_t r9_1 = *arg2
(*(r9_1 + 8))(arg2, zx.q(*(arg1 + 0xb0) + 0x1f) u>> 5 << 2, zx.q(*(arg1 + 0xb4) + 0x1f) u>> 5 << 2, 
    r9_1)
int64_t rdx_8 = sx.q(*(arg1 + 0xd0)) << 2
(*(*arg2 + 8))(arg2, rdx_8, rdx_8)
int64_t r9_2 = *arg2
(*(r9_2 + 8))(arg2, sx.q(*(arg1 + 0x70)) * 0x18, sx.q(*(arg1 + 0x74)) * 0x18, r9_2)
int64_t* rcx_6 = *(arg1 + 0x60)

if (rcx_6 != 0)
    (*(*rcx_6 + 0x210))(rcx_6, arg2)

int64_t r9_3 = *arg2
(*(r9_3 + 8))(arg2, sx.q(*(arg1 + 0x80)) * 0x70, sx.q(*(arg1 + 0x84)) * 0x70, r9_3)
void* rsi = *(arg1 + 0x78)
int64_t result = sx.q(*(arg1 + 0x80))
void* rbp_1 = result * 0x70 + rsi

if (rsi != rbp_1)
    void* rdi_1 = rsi + 0x48
    
    do
        (*(*arg2 + 8))(arg2, sx.q(*(rdi_1 - 0x38)), sx.q(*(rdi_1 - 0x34)))
        int64_t r9_4 = *arg2
        (*(r9_4 + 8))(arg2, sx.q(*(rdi_1 - 0x20)) * 0xc, sx.q(*(rdi_1 - 0x1c)) * 0xc, r9_4)
        int64_t r9_5 = *arg2
        (*(r9_5 + 8))(arg2, zx.q(*rdi_1 + 0x1f) u>> 5 << 2, zx.q(*(rdi_1 + 4) + 0x1f) u>> 5 << 2, 
            r9_5)
        int64_t rdx_21 = sx.q(*(rdi_1 + 0x20)) << 2
        result = (*(*arg2 + 8))(arg2, rdx_21, rdx_21)
        rsi += 0x70
        rdi_1 += 0x70
    while (rsi != rbp_1)

return result
