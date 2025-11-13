// 函数: sub_1422c0340
// 地址: 0x1422c0340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 + 0x30 != arg1 + 0x430)
    int32_t* rdi_1 = arg1 + 0x40
    
    do
        (*(*arg2 + 8))(arg2, sx.q(*rdi_1) * 2, sx.q(rdi_1[1]) * 2)
        rdi_1 = &rdi_1[8]
    while (&rdi_1[-4] != arg1 + 0x430)

(*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0x448)) << 5, sx.q(*(arg1 + 0x44c)) << 5)
void* i = *(arg1 + 0x440)

for (void* rbp_3 = (sx.q(*(arg1 + 0x448)) << 5) + i; i != rbp_3; i += 0x20)
    (*(*arg2 + 8))(arg2, sx.q(*(i + 0x10)) * 2, sx.q(*(i + 0x14)) * 2)

(*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0x458)) * 2, sx.q(*(arg1 + 0x45c)) * 2)
(*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0x468)) * 2, sx.q(*(arg1 + 0x46c)) * 2)
int64_t r9 = *arg2
(*(r9 + 8))(arg2, zx.q(*(arg1 + 0x488) + 0x1f) u>> 5 << 2, zx.q(*(arg1 + 0x48c) + 0x1f) u>> 5 << 2, 
    r9)
(*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0x438)) << 5, sx.q(*(arg1 + 0x43c)) << 5)
(*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0x498)) << 4, sx.q(*(arg1 + 0x49c)) << 4)
int64_t* i_1 = *(arg1 + 0x490)

for (void* rbp_6 = &i_1[sx.q(*(arg1 + 0x498)) * 2]; i_1 != rbp_6; i_1 = &i_1[2])
    int64_t* rcx_8 = *i_1
    
    if (rcx_8 != 0)
        (*(*rcx_8 + 0x10))(rcx_8, arg2)

(*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0x4a8)) << 4, sx.q(*(arg1 + 0x4ac)) << 4)
int64_t* i_2 = *(arg1 + 0x4a0)

for (void* rbp_9 = &i_2[sx.q(*(arg1 + 0x4a8)) * 2]; i_2 != rbp_9; i_2 = &i_2[2])
    int64_t* rcx_10 = *i_2
    
    if (rcx_10 != 0)
        (*(*rcx_10 + 0x10))(rcx_10, arg2)

int64_t result = (*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0x4b8)) << 4, sx.q(*(arg1 + 0x4bc)) << 4)
int64_t* i_3 = *(arg1 + 0x4b0)

for (void* rsi_3 = &i_3[sx.q(*(arg1 + 0x4b8)) * 2]; i_3 != rsi_3; i_3 = &i_3[2])
    int64_t* rcx_12 = *i_3
    
    if (rcx_12 != 0)
        result = (*(*rcx_12 + 0x10))(rcx_12, arg2)

return result
