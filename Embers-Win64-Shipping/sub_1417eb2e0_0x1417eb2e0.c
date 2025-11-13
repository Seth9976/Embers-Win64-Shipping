// 函数: sub_1417eb2e0
// 地址: 0x1417eb2e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x160)

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t i_1 = 2
*(arg1 + 0x10) = &data_142fdd538
void* rdi = arg1 + 0x170
int64_t i

do
    rdi -= 0x90
    sub_1405ae080(rdi)
    i = i_1
    i_1 -= 1
while (i != 1)
int64_t* rcx_2 = *(arg1 + 8)

if (rcx_2 != 0)
    int32_t rax_1 = *(rcx_2 + 0xc)
    *(rcx_2 + 0xc) -= 1
    
    if (rax_1 == 1 && rcx_2 != 0)
        (*(*rcx_2 + 8))(rcx_2, zx.q((i_1 + 1).d))

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
