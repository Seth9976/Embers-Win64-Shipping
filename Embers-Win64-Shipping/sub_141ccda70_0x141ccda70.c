// 函数: sub_141ccda70
// 地址: 0x141ccda70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg2 + 8))(arg2, 0x2c0, 0x2c0)
(*(*(arg1 + 0x90) + 0x210))(arg1 + 0x90, arg2)
(*(*(arg1 + 0x148) + 0x210))(arg1 + 0x148, arg2)
(*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0x200)) << 4, sx.q(*(arg1 + 0x204)) << 4)
int64_t* i = *(arg1 + 0x1f8)

for (void* rsi_2 = &i[sx.q(*(arg1 + 0x200)) * 2]; i != rsi_2; i = &i[2])
    int64_t* rcx_4 = *i
    
    if (rcx_4 != 0)
        (*(*rcx_4 + 0x98))(rcx_4, arg2)

(*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0x228)) << 3, sx.q(*(arg1 + 0x22c)) << 3)
int64_t rsi_3 = 0
int64_t* rdi = *(arg1 + 0x220)
int64_t rbp = 0
uint64_t r15_1 = sx.q(*(arg1 + 0x228)) << 3 u>> 3

if (rdi u> &rdi[sx.q(*(arg1 + 0x228))])
    r15_1 = 0

if (r15_1 != 0)
    do
        void* r14_1 = *rdi
        
        if (r14_1 != 0)
            (*(*arg2 + 8))(arg2, 0x48, 0x48)
            uint64_t rdx_9 = zx.q(*(r14_1 + 8) + 7) u>> 3
            (*(*arg2 + 8))(arg2, rdx_9, rdx_9)
        
        rdi = &rdi[1]
        rbp += 1
    while (rbp != r15_1)

(*(*arg2 + 8))(arg2, sx.q(*(arg1 + 0x268)) << 3, sx.q(*(arg1 + 0x26c)) << 3)
int64_t* rdi_1 = *(arg1 + 0x260)
void* result = &rdi_1[sx.q(*(arg1 + 0x268))]
uint64_t r14_3 = sx.q(*(arg1 + 0x268)) << 3 u>> 3

if (rdi_1 u> result)
    r14_3 = 0

if (r14_3 != 0)
    do
        void* rbp_1 = *rdi_1
        
        if (rbp_1 != 0)
            (*(*arg2 + 8))(arg2, 0x48, 0x48)
            uint64_t rdx_14 = zx.q(*(rbp_1 + 8) + 7) u>> 3
            result = (*(*arg2 + 8))(arg2, rdx_14, rdx_14)
        
        rdi_1 = &rdi_1[1]
        rsi_3 += 1
    while (rsi_3 != r14_3)

return result
