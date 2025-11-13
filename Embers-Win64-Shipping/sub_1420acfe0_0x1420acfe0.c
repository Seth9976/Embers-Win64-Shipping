// 函数: sub_1420acfe0
// 地址: 0x1420acfe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg3 + 0x20)

if (rcx == 0)
    return 

void* rax = (*(*rcx + 0x260))(rcx)

if (rax == 0)
    return 

void* rax_2 = sub_1424a23e0()
void* rcx_1 = *(rax + 0x10)
int64_t rdx_1 = sx.q(*(rax_2 + 0x38))

if (rdx_1.d s> *(rcx_1 + 0x38) || *(*(rcx_1 + 0x30) + (rdx_1 << 3)) != rax_2 + 0x30)
    return 

int64_t* rbx_2 = *(rax + 0x220)
int32_t arg_18 = 0
int64_t rdi_1 = *rbx_2
int128_t zmm0_1
int512_t zmm2_1
zmm0_1, zmm2_1 = sub_141f5bc90(arg1 + 0x70, arg2, &arg_18)
zmm2_1.o = zmm0_1
(*(rdi_1 + 0x868))(rbx_2, *(arg1 + 0x90), zmm2_1)
