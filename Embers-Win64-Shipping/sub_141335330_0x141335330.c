// 函数: sub_141335330
// 地址: 0x141335330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_98 = sub_14135a730(arg1.b)
sub_141998c50(*arg6, &data_143ec1df0, arg7)
*arg5
uint64_t var_70 = arg4[1].q
uint128_t zmm1 = *arg6
int64_t var_40 = arg7
uint128_t var_80 = *arg4
uint64_t var_58 = arg5[1].q
void*** rax_2
char rcx_1
rax_2, rcx_1 = sub_14081d830(0x90, *(arg1 + 8), 1, 0)
void*** rbx_1 = rax_2

if (rax_2 == 0)
    rbx_1 = nullptr
else
    var_98.q = arg7
    int128_t zmm6_2 = sub_14135a730(rcx_1)
    var_98:8.q = &data_143ec1e20
    var_98 = var_98
    sub_141992bd0(rbx_1, arg2, &var_98, 1)
    *rbx_1 = &data_142f64cd0
    *(rbx_1 + 0x38) = arg3.o
    *(rbx_1 + 0x48) = var_80
    *(rbx_1 + 0x58) = zmm6_2
    *(rbx_1 + 0x68) = var_58.o
    *(rbx_1 + 0x78) = zmm1
    rbx_1[0x11] = arg8.q

return sub_1419968d0(arg1, rbx_1) __tailcall
