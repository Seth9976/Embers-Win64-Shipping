// 函数: sub_141018b50
// 地址: 0x141018b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t* rsi = *(arg2 + 0x20)
int64_t var_e0 = 0x40
int32_t var_e8 = 1
int32_t rax_3 = (*(*(arg1 + 0x40) + 0x18))(arg1 + 0x40)
int512_t zmm0
zmm0.o = var_e8.o
char rcx_1 = (*(arg2 + 0x18)).b
uint64_t rdx = zx.q(rax_3)
int128_t var_68 = zmm0.o
int64_t var_cc = 0x10001
int64_t var_bc = 1
int32_t var_84 = 1 << rcx_1
int64_t var_a8
int64_t* var_f0 = &var_a8
int32_t var_f8 = 1
int32_t var_100 = rdx.d
int32_t var_108 = 0
var_a8 = 0
char var_80 = 0
int64_t var_78 = 0
int32_t var_70 = 0
int64_t var_c4 = 1
zmm0.o = var_cc:4.o
int32_t var_d0 = 1
int32_t var_98 = 1
int128_t var_48 = zmm0.o
void* var_a0 = arg1 + 0x40
zmm0.o = data_143dbb1e0
uint128_t var_58 = rdx.o
int128_t var_94 = zmm0.o
uint64_t var_38 = var_bc
uint64_t result = sub_1410004f0(rsi, nullptr, &var_68, 0x40, zmm0, var_108, var_100, var_f8, var_f0)
void* rbx_1 = *(arg1 + 0x68)
*(arg1 + 0x68) = result

if (result != 0)
    result = (*(*(result + 0x20) + 8))(result + 0x20)

if (rbx_1 != 0)
    result = (*(*(rbx_1 + 0x20) + 0x10))(rbx_1 + 0x20)

*(*(arg1 + 0x68) + 0x78)
*(arg1 + 0x60) = 0
__security_check_cookie(rax_1 ^ &var_128)
return result
