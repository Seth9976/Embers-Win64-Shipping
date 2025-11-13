// 函数: sub_1426ed4a0
// 地址: 0x1426ed4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((arg3[9].b & 1) == 0 || (*(*arg2 + 0x428))(arg2).b != 0)
    return 

void* rcx_1 = arg2[0x18]

if (rcx_1 == 0)
    return 

int32_t rax
char r9_1
rax, r9_1 = (*(*(rcx_1 + 0x220) + 0x40))(rcx_1 + 0x220)

if (rax.b != 0)
    return 

arg3[9].b &= 0xfe
int512_t zmm2_1
rax, zmm2_1 = sub_1426e6600(arg1, arg2, arg3, r9_1)

if (rax != 3)
    sub_1426b08f0(arg1, arg2, rax, zmm2_1)
