// 函数: sub_141c66180
// 地址: 0x141c66180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140d3c6e0(arg1 + 0x4c)
EnterCriticalSection(rax + 0x40)
uint128_t var_c8 = *(rax + 0x68)
uint128_t var_b8 = *(rax + 0x78)
uint64_t var_98 = *(rax + 0x98)
uint128_t var_a8 = *(rax + 0x88)

if (rax != -0x40)
    LeaveCriticalSection(rax + 0x40)

void** var_88
sub_141e712f0(&var_88)
char rbx_1 = var_c8.b
uint128_t zmm6 = zx.o(0)
uint128_t zmm7 = var_98.d
int32_t var_50 = var_a8:8.d.d
int32_t var_48 = 0
uint128_t var_74 = var_c8
uint128_t var_64 = var_b8
int32_t var_54 = var_a8:4.d.d
int32_t var_4c = var_a8:0xc.d.d

if (rbx_1 != 0 || zmm7.d f< 0f)
    int32_t var_78_1 = 0
else
    int32_t var_78 = __minss_xmmss_memss(zmm7.d, 0x41200000).d

(*(*arg1 + 0x10))(arg1, &var_88)
int128_t zmm8

if (rbx_1 == 0)
    zmm8 = var_98:4.d
    
    if (not(zmm7.d f< 0f))
        zmm6 = __minss_xmmss_memss(zmm7.d, 0x41200000)
else
    zmm8 = 0x3f800000

int64_t result = EnterCriticalSection(&arg1[0x1d])
*(arg1 + 0xdc) = zmm6.d
arg1[0x1c].d = zmm8.d
arg1[0x1b].b = 1

if (arg1 == -0xe8)
    return result

return LeaveCriticalSection(&arg1[0x1d])
