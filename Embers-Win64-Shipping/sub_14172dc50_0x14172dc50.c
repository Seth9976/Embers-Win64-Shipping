// 函数: sub_14172dc50
// 地址: 0x14172dc50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fc4bb0
sub_1417053d0(&arg1[0x16])
int64_t* rdi = arg1[0x14]

if (rdi != 0)
    int64_t rcx_1 = *rdi
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    j_sub_140a74f90(rdi)

int64_t rcx_3 = arg1[0x12]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1[0xc]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[0xa]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

arg1[2] = &data_142fc4250
arg1[6] = &data_142fc4220
int64_t rcx_6 = arg1[7]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

arg1[2] = &data_142fc4068
int64_t rcx_7 = arg1[3]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

*arg1 = &data_142fc3cd0

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
