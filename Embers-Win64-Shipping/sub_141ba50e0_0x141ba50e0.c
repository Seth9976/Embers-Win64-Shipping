// 函数: sub_141ba50e0
// 地址: 0x141ba50e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = arg7
void var_48
sub_140dd8910(&var_48, 0, arg3, data_143dbb1f0, data_143dbb3b8, zmm6.d)
uint128_t var_98 = *arg6
uint128_t zmm0_1 = arg5[1]
int128_t var_88 = *arg5
int128_t zmm1 = arg5[2]
uint128_t var_78 = zmm0_1
zmm0_1 = zx.o(arg5[3].q)
int64_t var_a8 = *arg4
void* rax_3 = arg4[1]
int128_t var_68 = zmm1
uint64_t var_58 = zmm0_1.q
void* var_a0 = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

char var_b0 = arg8
int32_t var_c0
var_c0.q = &var_98
int64_t result = sub_141ba4a80(arg1, &var_48, arg2, &var_a8, zmm0_1, &var_88, var_c0, zmm6.b)
int64_t* rbx_1 = arg4[1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_1 + 8))(rbx_1, 1)

return result
