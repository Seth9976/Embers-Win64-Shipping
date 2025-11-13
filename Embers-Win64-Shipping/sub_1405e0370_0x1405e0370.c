// 函数: sub_1405e0370
// 地址: 0x1405e0370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d5a508
int64_t* rcx = arg1[0x11]

if (rcx != 0)
    rcx[9].d -= 1
    
    if (rcx[9].d == 1)
        sub_140a2f6e0(rcx)

int32_t i_1 = arg1[0xc].d
void*** rdi = arg1[0xb]

if (i_1 != 0)
    int32_t i
    
    do
        sub_1405df6f0(rdi)
        rdi = &rdi[0x15]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rdi = arg1[0xb]

if (rdi != 0)
    sub_140a74f90(rdi)

int64_t* rcx_3 = arg1[0xa]

if (rcx_3 != 0)
    (**rcx_3)(rcx_3, 1)

int64_t rcx_4 = arg1[8]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[6]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
