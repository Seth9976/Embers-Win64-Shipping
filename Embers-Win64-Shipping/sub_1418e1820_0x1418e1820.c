// 函数: sub_1418e1820
// 地址: 0x1418e1820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_6 = sx.q(*(arg1 + 0x38))
int32_t rbp = 0
*(arg1 + 0x40) = sub_140b21160(arg1 + 0x44, 4, i_6.d)
int64_t i_4 = i_6

if (i_6.d s> 0)
    int64_t rsi_1 = 0
    int64_t i
    
    do
        int64_t* rdi = *(arg1 + 0x30)
        *(rdi + rsi_1 + 0x10) = sub_140b21160(*(rdi + rsi_1), *(rdi + rsi_1 + 8) * 0x18, 0)
        int64_t rax_3 = sx.q(rbp)
        rbp += 1
        *(arg1 + 0x40) =
            sub_140b21160(*(arg1 + 0x30) + ((rax_3 + ((rax_3 + 1) << 1)) << 3), 4, *(arg1 + 0x40))
        rsi_1 += 0x18
        i = i_4
        i_4 -= 1
    while (i != 1)

void* rdi_1 = arg1 + 0x70
void* rbp_1 = arg1 + 0x8a
int64_t i_5 = 5
int32_t rax_9
int64_t i_1

do
    int32_t rax_5 = sub_140b21160(rbp_1 - 2, 2, *(arg1 + 0x40))
    *(arg1 + 0x40) = rax_5
    int32_t rax_6 = sub_140b21160(rbp_1, 2, rax_5)
    *(arg1 + 0x40) = rax_6
    int32_t rax_7 = sub_140b21160(*(rdi_1 - 0x18), *(rdi_1 - 0x10) << 2, rax_6)
    *(arg1 + 0x40) = rax_7
    int32_t rax_8 = sub_140b21160(*(rdi_1 - 8), *rdi_1 * 6, rax_7)
    *(arg1 + 0x40) = rax_8
    rax_9 = sub_140b21160(*(rdi_1 + 8), *(rdi_1 + 0x10) * 2, rax_8)
    rbp_1 += 0x38
    *(arg1 + 0x40) = rax_9
    rdi_1 += 0x38
    i_1 = i_5
    i_5 -= 1
while (i_1 != 1)
int64_t i_7 = sx.q(arg2[1].d)
void var_28
void* rcx_10 = &var_28
int64_t i_3 = i_7

if (i_7.d s> 0)
    int64_t* rdx_10 = *arg2
    int64_t i_2
    
    do
        void* rax_10 = *rdx_10
        int64_t r8_7
        
        if (rax_10 == 0)
            r8_7 = 0
        else
            r8_7 = *(rax_10 + 0x18)
        
        *rcx_10 = r8_7
        rdx_10 = &rdx_10[1]
        rcx_10 += 8
        i_2 = i_3
        i_3 -= 1
    while (i_2 != 1)

memset(rcx_10, 0, sx.q(2 - i_7.d))
int32_t result = sub_140b21160(&var_28, 0x10, rax_9)
*(arg1 + 0x40) = result
return result
