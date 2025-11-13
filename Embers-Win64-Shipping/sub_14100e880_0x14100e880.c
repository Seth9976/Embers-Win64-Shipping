// 函数: sub_14100e880
// 地址: 0x14100e880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142efcc30
int64_t r8 = 0
int64_t* rax = arg1[7]
void* rdx_1 = &rax[arg1[8]]
uint64_t r9_1 = sx.q(arg1[8].d) << 3 u>> 3

if (rax u> rdx_1)
    r9_1 = 0

if (r9_1 != 0)
    do
        int64_t* rcx = *rax
        rax = &rax[1]
        r8 += 1
        *rcx = 0
    while (r8 != r9_1)

j_sub_141059a80(&arg1[9], arg2, rdx_1, r8, r9_1)
int64_t rcx_2 = arg1[7]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

DeleteCriticalSection(&arg1[2])
*arg1 = &data_142dd6680
return &data_142dd6680
