// 函数: sub_1419ebbd0
// 地址: 0x1419ebbd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg1[6] == 0
*arg1 = &data_14301a028

if (not(cond:0))
    int64_t rdi_1 = sx.q(data_143f52618)
    int32_t rax_1 = (rdi_1 + 1).d
    bool cond:1_1 = rax_1 s<= data_143f5261c
    data_143f52618 = rax_1
    
    if (not(cond:1_1))
        sub_1405a4d70(&data_143f52610)
    
    *(data_143f52610 + (rdi_1 << 3)) = arg1[6]
    arg1[6] = 0

sub_140ccd8d0(&data_1439cbf00, &arg1[2])
int64_t rcx_1 = arg1[4]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

*arg1 = &data_142d5a028

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
