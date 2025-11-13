// 函数: sub_1419667a0
// 地址: 0x1419667a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** r9_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax = &r9_2[4]

if (rax u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x28)
    r9_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax = &r9_2[4]

*(arg1 + 0x30) = rax
int64_t* rax_1 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_1 = r9_2
*(arg1 + 8) = &r9_2[1]
r9_2[1] = 0
*r9_2 = &data_143000d18
r9_2[2] = arg2
r9_2[3] = arg3

if (data_143f01c92 != 0)
    return &data_143000d18

int32_t rbx_1 = data_143f029c8
sub_140b34200("BeginDrawingViewport", rbx_1)
int32_t rdi_1 = data_143f029c8
sub_140b34200("FlushRHIThreadTotal", rdi_1)

if (data_143f02bac u> 0)
    sub_14196ef60(&data_143f02b88, &data_143f02b98, arg5, arg4)

sub_14198b230()

if (data_143f01c92 != 0)
    sub_14198b3f0()

int64_t rdx_2
rdx_2.b = 1
sub_14198b7d0()
sub_140b38680("FlushRHIThreadTotal", rdi_1)
return sub_140b38680("BeginDrawingViewport", rbx_1)
