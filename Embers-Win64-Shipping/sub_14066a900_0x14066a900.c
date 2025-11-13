// 函数: sub_14066a900
// 地址: 0x14066a900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rdi = arg1[0x10]

if (rdi != 0)
    bool cond:0_1 = rdi[0x15].b == 0
    *rdi = &data_142d84578
    
    if (not(cond:0_1))
        sub_140a74f90(rdi[0x12])
        rdi[0x12] = 0
    
    sub_140b4cb40(rdi)
    j_sub_140a74f90(rdi)

int64_t rcx_3 = arg1[0xe]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

*arg1 = &data_142d84e98
int64_t rcx_4 = arg1[9]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[7]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = arg1[5]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = arg1[1]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
