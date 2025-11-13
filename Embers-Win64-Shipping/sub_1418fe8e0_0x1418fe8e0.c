// 函数: sub_1418fe8e0
// 地址: 0x1418fe8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_1439c7188 != 1)
    if (data_143f02ba8 == 0)
        void*** rcx_2 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        void* rax_2 = &rcx_2[3]
        
        if (rax_2 u> data_143f02bd0)
            sub_140b0e3d0(&data_143f02bc8, 0x20)
            rcx_2 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
            rax_2 = &rcx_2[3]
        
        data_143f02bac += 1
        data_143f02bc8 = rax_2
        *data_143f02ba0 = rcx_2
        data_143f02ba0 = &rcx_2[1]
        rcx_2[1] = 0
        *rcx_2 = &data_142ff3dc0
        rcx_2[2] = arg2
    else
        void* rax_1 = *(arg2 + 0x140)
        *(rax_1 + 0xe8) = 0
        *(rax_1 + 0xf8) = 0
        *(rax_1 + 0x80) = 0

if (data_143f01c92 == 0)
    return sub_1418c57f0(*(arg1 + 0x58) + 0x3b0, 0) __tailcall

void*** rdx_2 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
void* rax_5 = &rdx_2[3]

if (rax_5 u> data_143f02bd0)
    sub_140b0e3d0(&data_143f02bc8, 0x20)
    rdx_2 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    rax_5 = &rdx_2[3]

data_143f02bac += 1
data_143f02bc8 = rax_5
*data_143f02ba0 = rdx_2
data_143f02ba0 = &rdx_2[1]
int64_t rcx_5 = *(arg1 + 0x58)
rdx_2[1] = 0
*rdx_2 = &data_142ff2748
rdx_2[2] = rcx_5
return &data_142ff2748
