// 函数: sub_140501b10
// 地址: 0x140501b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int32_t var_104 = 1
int64_t var_f8
__builtin_memset(&var_f8, 0, 0x18)
int32_t var_108 = 0
int32_t var_e0 = 2
uint64_t var_e8
sub_1405c4a90(&var_e8, 2, 0)
uint128_t zmm1 = data_14320b200
*var_e8 = var_108.q
uint64_t var_d8 = 0
int32_t var_d0 = 4
sub_1405c4a90(&var_d8, 4, 0)
int64_t i_1 = 6
*var_d8 = zmm1
int128_t var_98
__builtin_memcpy(&var_98, 
    "\x00\x00\x00\x00\x01\x00\x00\x00\x02\x00\x00\x00\x03\x00\x00\x00\x09\x00\x00\x00\x0a\x00\x00\x00", 
    0x18)
uint64_t var_c8 = 0
int32_t var_c0 = 6
sub_1405c4a90(&var_c8, 6, 0)
uint64_t rax_4 = var_c8
*rax_4 = var_98
int32_t var_88
*(rax_4 + 0x10) = var_88.q
uint64_t var_b8 = 0
int128_t var_70
__builtin_memcpy(&var_70, 
    "\x00\x00\x00\x00\x01\x00\x00\x00\x02\x00\x00\x00\x03\x00\x00\x00\x04\x00\x00\x00\x05\x00\x00\x00\x"
"09\x00\x00\x00\x0a\x00\x00\x00", 
    0x20)
int32_t var_b0 = 8
sub_1405c4a90(&var_b8, 8, 0)
uint64_t rax_5 = var_b8
*rax_5 = var_70
uint128_t var_60
*(rax_5 + 0x10) = var_60
uint64_t var_a8 = 0
int32_t var_a0 = 8
int128_t var_50
__builtin_memcpy(&var_50, 
    "\x00\x00\x00\x00\x01\x00\x00\x00\x02\x00\x00\x00\x03\x00\x00\x00\x04\x00\x00\x00\x05\x00\x00\x00\x"
"09\x00\x00\x00\x0a\x00\x00\x00", 
    0x20)
sub_1405c4a90(&var_a8, 8, 0)
int128_t* rax_6 = var_a8
*rax_6 = var_50
uint128_t var_40
rax_6[1] = var_40
data_143f34df0 = 0
data_143f34df8 = 6
sub_1405a4be0(&data_143f34df0, 6, 0)
void* rbx = data_143f34df0
int64_t* rsi = &var_f8
int32_t i_2 = 6
int32_t i

do
    *rbx = 0
    int64_t rdi_1 = sx.q(rsi[1].d)
    int64_t r12_1 = *rsi
    *(rbx + 8) = rdi_1.d
    
    if (rdi_1.d != 0)
        sub_1405c4a90(rbx, rdi_1.d, 0)
        memcpy(*rbx, r12_1, (rdi_1 << 2).d)
    else
        *(rbx + 0xc) = 0
    
    rbx += 0x10
    rsi = &rsi[2]
    i = i_2
    i_2 -= 1
while (i != 1)
int128_t* rbx_1 = &var_98

do
    int64_t rcx_7 = rbx_1[-1].q
    rbx_1 = &rbx_1[-1]
    i_1 -= 1
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
while (i_1 != 0)

uint64_t result = atexit(sub_142cf7230)
__security_check_cookie(rax_1 ^ &var_128)
return result
