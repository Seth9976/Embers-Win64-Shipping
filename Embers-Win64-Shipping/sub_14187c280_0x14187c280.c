// 函数: sub_14187c280
// 地址: 0x14187c280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x230)
void*** result

if (rax == 0)
    result = nullptr
else
    int64_t rcx = *arg1
    *arg1 = 0
    int64_t var_c8 = rcx
    int32_t var_c0_1 = arg1[1].d
    int32_t rcx_2 = *(arg1 + 0xc)
    arg1[1] = 0
    int32_t var_b8_1 = arg1[2].d
    int32_t var_b4_1 = *(arg1 + 0x14)
    int32_t var_b0_1 = arg1[3].d
    int64_t rax_4 = arg1[4]
    __builtin_memset(&arg1[4], 0, 0x20)
    int64_t var_a8_1 = rax_4
    int32_t var_a0_1 = arg1[5].d
    int32_t var_9c_1 = *(arg1 + 0x2c)
    int64_t var_98_1 = arg1[6]
    int32_t var_90_1 = arg1[7].d
    int32_t var_88_1 = arg1[8].d
    int32_t var_8c_1 = *(arg1 + 0x3c)
    int32_t var_bc_1 = rcx_2
    int32_t var_80_1 = arg1[9].d
    char var_84_1 = *(arg1 + 0x44)
    void var_78
    result = sub_141860890(rax, &var_c8, arg2, arg3, arg5, arg6, arg4, arg7, arg8, arg9, arg10, 
        arg11, arg12, arg13, sub_14077e140(&var_78, arg14))

sub_141822a10(arg1)
arg14[9].d = 0
int64_t rcx_6 = arg14[8]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

arg14[1].d = 0

if (*(arg14 + 0xc) != 0)
    sub_1405a5130(arg14, 0)

arg14[6].d = 0xffffffff
*(arg14 + 0x34) = 0
sub_14059a8e0(&arg14[2], 0)
int64_t rcx_9 = arg14[4]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t rcx_10 = *arg14

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

return result
