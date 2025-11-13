// 函数: sub_14196d540
// 地址: 0x14196d540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rdx_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax = &rdx_2[2]

if (rax u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x18)
    rdx_2 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax = &rdx_2[2]

*(arg1 + 0x30) = rax
int64_t* rax_1 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_1 = rdx_2
*(arg1 + 8) = &rdx_2[1]
rdx_2[1] = 0
*rdx_2 = &data_143000ce8

if (data_143f01c92 != 0)
    return &data_143000ce8

int32_t rbx_1 = data_143f029c8
sub_140b34200("EndScene", rbx_1)
int32_t rdi_1 = data_143f029c8
sub_140b34200("FlushRHIThreadTotal", rdi_1)
int128_t entry_zmm2
int128_t entry_zmm3

if (data_143f02bac u> 0)
    sub_14196ef60(&data_143f02b88, &data_143f02b98, entry_zmm2, entry_zmm3)
sub_14198b230()

if (data_143f01c92 != 0)
    sub_14198b3f0()

int64_t rdx_7
rdx_7.b = 1
sub_14198b7d0()
sub_140b38680("FlushRHIThreadTotal", rdi_1)
return sub_140b38680("EndScene", rbx_1)
