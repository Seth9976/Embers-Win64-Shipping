// 函数: sub_14211d910
// 地址: 0x14211d910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg1[0x17].b == 0
*arg1 = &data_1432d58e8

if (cond:0)
    int64_t rdx = arg1[0x16]
    
    if (rdx != -1)
        int64_t* rcx_1 = arg1[0x12]
        (*(*rcx_1 + 0x178))(rcx_1, rdx)
else
    int64_t* rcx = arg1[0x12]
    
    if (rcx != 0)
        (**rcx)(rcx, 1)

int64_t rcx_2 = arg1[0x13]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_140b4cb40(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
