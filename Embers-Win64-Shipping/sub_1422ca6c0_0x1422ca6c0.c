// 函数: sub_1422ca6c0
// 地址: 0x1422ca6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2[1].d)
int32_t rax = *(arg1 + 0x24)

if (rax s> rdi.d)
    arg2[1].d = rax
    
    if (rax s> *(arg2 + 0xc))
        sub_14085a250(arg2)
    
    memset(rdi + *arg2, 0, sx.q(rax - rdi.d))
else if (rax s< rdi.d && rax != rdi.d)
    arg2[1].d = rax
    sub_14085a6a0(arg2)

int64_t* rdi_1 = *(arg1 + 0x28)
uint64_t rcx_4 = sx.q(*(arg1 + 0x30))
int64_t r14 = *arg2
void* rbp_5 = &rdi_1[rcx_4 * 6]

if (rdi_1 != rbp_5)
    do
        if (rdi_1[2].d == 0)
            int64_t* rcx_5 = *rdi_1
            int64_t r9_2 = sx.q(rdi_1[3].d) + r14
            
            if (not(test_bit(zx.q(rcx_5[8].d), 9)))
                (*(*rcx_5 + 0xf0))(rcx_5, r9_2)
            else
                memset(r9_2, 0, sx.q(*(rcx_5 + 0x3c) * rcx_5[7].d))
        
        rdi_1 = &rdi_1[6]
    while (rdi_1 != rbp_5)
    
    r14 = *arg2
    rcx_4 = zx.q(*(arg1 + 0x30))

int64_t** i = *(arg1 + 0x28)
int64_t result = sx.q(rcx_4.d)

for (void* rsi_3 = &i[result * 6]; i != rsi_3; i = &i[6])
    if (i[2].d == 0)
        int64_t rdx_3 = sx.q(*(i + 0x14)) + arg3
        int64_t* rcx_7 = *i
        int64_t r10_2 = sx.q(i[3].d) + r14
        
        if (r10_2 != rdx_3)
            if (not(test_bit(zx.q(rcx_7[8].d), 0x1e)))
                result = (*(*rcx_7 + 0xb0))(rcx_7, r10_2, rdx_3, zx.q(rcx_7[7].d))
            else
                result = memcpy(r10_2, rdx_3, *(rcx_7 + 0x3c) * rcx_7[7].d)

return result
