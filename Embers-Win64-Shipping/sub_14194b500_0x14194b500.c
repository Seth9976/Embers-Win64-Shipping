// 函数: sub_14194b500
// 地址: 0x14194b500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0x18)
int64_t rsi = 0
uint64_t r14_1 = sx.q(*(arg1 + 0x20)) << 3 u>> 3

if (rdi u> &rdi[sx.q(*(arg1 + 0x20))])
    r14_1 = 0

if (r14_1 != 0)
    do
        int64_t rbx_1 = sx.q(data_143eff6f8)
        int64_t rbp_1 = *rdi
        int32_t rax_2 = (rbx_1 + 1).d
        bool cond:1_1 = rax_2 s<= data_143eff6fc
        data_143eff6f8 = rax_2
        
        if (not(cond:1_1))
            sub_1405a4d70(&data_143eff6f0)
        
        rdi = &rdi[1]
        rsi += 1
        *(data_143eff6f0 + (rbx_1 << 3)) = rbp_1
    while (rsi != r14_1)

int64_t* rdi_1 = *(arg1 + 0x28)
int64_t rsi_1 = 0
uint64_t r15_2 = sx.q(*(arg1 + 0x30)) << 3 u>> 3

if (rdi_1 u> &rdi_1[sx.q(*(arg1 + 0x30))])
    r15_2 = 0

if (r15_2 != 0)
    do
        int64_t rbx_2 = sx.q(data_143eff6f8)
        int64_t rbp_2 = *rdi_1
        int32_t rax_6 = (rbx_2 + 1).d
        bool cond:2_1 = rax_6 s<= data_143eff6fc
        data_143eff6f8 = rax_6
        
        if (not(cond:2_1))
            sub_1405a4d70(&data_143eff6f0)
        
        rdi_1 = &rdi_1[1]
        rsi_1 += 1
        *(data_143eff6f0 + (rbx_2 << 3)) = rbp_2
    while (rsi_1 != r15_2)

*(arg1 + 0x20) = 0

if (*(arg1 + 0x24) s<= 0xffffffff)
    sub_1405c5570(arg1 + 0x18, 0)

int32_t result = *(arg1 + 0x34)
*(arg1 + 0x30) = 0

if (result s< 0 && result != 0)
    return sub_1405c5570(arg1 + 0x28, 0) __tailcall

return result
