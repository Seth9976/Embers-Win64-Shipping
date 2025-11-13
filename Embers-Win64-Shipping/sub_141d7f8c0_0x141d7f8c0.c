// 函数: sub_141d7f8c0
// 地址: 0x141d7f8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x20) == 0)
    return 

*(arg3 + 0x14a8) = 1
*(arg3 + 0x1488) = 0

if (*(arg3 + 0x148c) != 0)
    sub_1405c5570(arg3 + 0x1480, 0)

if (arg3 + 0x14b0 != arg1 + 0x28)
    int64_t rcx_1 = *(arg3 + 0x14b0)
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    *(arg3 + 0x14b0) = *(arg1 + 0x28)
    *(arg1 + 0x28) = 0
    *(arg3 + 0x14b8) = *(arg1 + 0x30)
    *(arg3 + 0x14bc) = *(arg1 + 0x34)
    *(arg1 + 0x30) = 0

void* var_18 = arg3 + 0xde0
int64_t var_10_1 = *(arg1 + 0x18)
sub_141ea17d0()
void* rax
int512_t zmm2_1
rax, zmm2_1 = sub_141d736b0(&data_143a2d550, &var_18)
void* rcx_2 = *(arg1 + 0x48)

if (rcx_2 != 0)
    zmm2_1.o = 0x3f800000
    (*(*(rcx_2 + 0x28) + 0x10))(rcx_2 + 0x28, arg3, zmm2_1)

*(arg1 + 0x20) = 0
