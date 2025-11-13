// 函数: sub_142a36790
// 地址: 0x142a36790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = -2
int64_t result = j_sub_140a74f90(*arg1)
*arg1 = 0

while (*(arg1 + 0x2c) s> 0)
    *(arg1 + 0x2c) -= 1
    int64_t* rdi_1 = arg1[4] + sx.q(*(arg1 + 0x2c)) * 0x18
    j_sub_140a74f90(*rdi_1)
    *rdi_1 = 0
    j_sub_140a74f90(rdi_1[1])
    rdi_1[1] = 0
    result = j_sub_140a74f90(rdi_1[2])
    rdi_1[2] = 0

void* rcx_5 = arg1[4]

if (rcx_5 != 0)
    `eh vector vbase constructor iterator'(rcx_5, 0x18, *(rcx_5 - 8))
    result = j_sub_140a74f90(rcx_5 - 8)

arg1[5].d = 0
arg1[4] = 0
return result
