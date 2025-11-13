// 函数: sub_14081ed00
// 地址: 0x14081ed00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0xf]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = arg1[0xd]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = arg1[0xb]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[9]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = arg1[7]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[5]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

bool cond:0 = arg1[2].b != 0
*arg1 = &data_142dd6c10

if (not(cond:0))
    void* rax_1 = arg1[3]
    *(rax_1 + 8) -= 1

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
