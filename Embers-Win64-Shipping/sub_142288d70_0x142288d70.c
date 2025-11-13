// 函数: sub_142288d70
// 地址: 0x142288d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3a8
int64_t rax_1 = __security_cookie ^ &var_3a8
*(arg1 + 0xc) = 0x3f800000
*arg1 = 0
arg1[1].d = 0
*(arg1 + 0x14) = 0
*(arg1 + 0x1c) = 0x3f800000
*(arg1 + 0x24) = 0
*(arg1 + 0x2c) = 0x3f800000
*(arg1 + 0x34) = 0
*(arg1 + 0x3c) = 0x3f800000
*(arg1 + 0x44) = 0
*(arg1 + 0x4c) = 0x3f800000
*(arg1 + 0x54) = 0
*(arg1 + 0x5c) = 0x3f800000
*(arg1 + 0x64) = 0
*(arg1 + 0x6c) = 0x3f800000
*(arg1 + 0x74) = 0
*(arg1 + 0x7c) = 0x3f800000
*(arg1 + 0x84) = 0
*(arg1 + 0x8c) = 0x3f800000
*(arg1 + 0x94) = 0
*(arg1 + 0x9c) = 0x3f800000
*(arg1 + 0xa4) = 0
*(arg1 + 0xac) = 0x3f800000
*(arg1 + 0xb4) = 0
*(arg1 + 0xbc) = 0x3f800000
*(arg1 + 0xc4) = 0
*(arg1 + 0xcc) = 0x3f800000
*(arg1 + 0xd4) = 0
*(arg1 + 0xdc) = 0x3f800000
*(arg1 + 0xe4) = 0
*(arg1 + 0xec) = 0x3f800000
*(arg1 + 0xf4) = 0
*(arg1 + 0xfc) = 0x3f800000
*(arg1 + 0x104) = 0
*(arg1 + 0x10c) = 0x3f800000
*(arg1 + 0x114) = 0
*(arg1 + 0x11c) = 0x3f800000
*(arg1 + 0x124) = 0
*(arg1 + 0x12c) = 0x3f800000
*(arg1 + 0x134) = 0
*(arg1 + 0x13c) = 0x3f800000
*(arg1 + 0x144) = 0
*(arg1 + 0x14c) = 0x3f800000
*(arg1 + 0x154) = 0
*(arg1 + 0x15c) = 0x3f800000
*(arg1 + 0x164) = 0
*(arg1 + 0x16c) = 0x3f800000
*(arg1 + 0x174) = 0
*(arg1 + 0x17c) = 0x3f800000
*(arg1 + 0x184) = 0
*(arg1 + 0x18c) = 0x3f800000
*(arg1 + 0x194) = 0
*(arg1 + 0x19c) = 0x3f800000
*(arg1 + 0x1a4) = 0
*(arg1 + 0x1ac) = 0x3f800000
*(arg1 + 0x1b4) = 0
*(arg1 + 0x1bc) = 0x3f800000
*(arg1 + 0x1c4) = 0
*(arg1 + 0x1cc) = 0x3f800000
*(arg1 + 0x1d4) = 0
*(arg1 + 0x1dc) = 0x3f800000
*(arg1 + 0x1e4) = 0
*(arg1 + 0x1ec) = 0x3f800000
*(arg1 + 0x1f4) = 0
*(arg1 + 0x1fc) = 0x3f800000
*(arg1 + 0x204) = 0
*(arg1 + 0x20c) = 0x3f800000
*(arg1 + 0x214) = 0
*(arg1 + 0x21c) = 0x3f800000
*(arg1 + 0x224) = 0
*(arg1 + 0x22c) = 0x3f800000
int64_t* rcx = arg2[0x21]
char var_308
char var_306
int32_t var_304
void var_2c8
(*(*rcx + 0x150))(rcx, arg2[0x22], &var_306, &var_2c8, &var_304, &var_308)
float var_2e8[0x2][0x4]
(*(*arg2 + 0x100))(arg2, &var_2e8)
int128_t zmm6 = *(arg2 + 0x44)
int32_t var_2f0 = arg2[0x20].d
void* rax_5 = arg2[0x22]
int64_t var_2f8 = arg2[0x1f]
int32_t r13 = *(rax_5 + 0x124)
bool var_307 = *(arg2 + 0x32) - 1 u<= 1
int64_t r12

if (*(arg2 + 0x3a) s< 0 || *(data_143f52da8 + 4) != 0 || *(arg2 + 0x33) == 2)
    r12.b = 1
else
    r12.b = 0

uint32_t rdi = zx.d(*(arg2 + 0x3f))
uint8_t rbp = *(arg2 + 0x35) u>> 3 & 1
char rax_9 = (*(*arg2 + 0x128))(arg2)
void var_288
int128_t* rax_16 = sub_14075e140(&var_288, &arg2[0x10], &var_2c8, &var_2f8, &arg2[0x18], 
    arg2 + 0xdc, &var_2e8, rbp, (*(*arg2 + 0x120))(arg2), rax_9, r12.b, var_306, var_307, rdi, 
    zmm6.d, r13, var_304, var_308, &arg2[4])
sub_1422ad010(arg1, rax_16)
__security_check_cookie(rax_1 ^ &var_3a8)
return arg1
