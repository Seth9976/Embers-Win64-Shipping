// 函数: sub_141735580
// 地址: 0x141735580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rbx = *(arg1 + 0x10)

if (rbx == 0)
    return 

rbx[4] = &data_142fc4250
rbx[8] = &data_142fc4220
int64_t rcx = rbx[9]

if (rcx != 0)
    sub_140a74f90(rcx)

rbx[4] = &data_142fc4068
int64_t rcx_1 = rbx[5]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = rbx[2]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

*rbx = &data_142fc3cd0
return j_sub_140a74f90(rbx) __tailcall
