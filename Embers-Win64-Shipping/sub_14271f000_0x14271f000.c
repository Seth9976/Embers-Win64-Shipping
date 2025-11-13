// 函数: sub_14271f000
// 地址: 0x14271f000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
void* rax_2 = sub_140d3c6e0(arg2)
char var_98 = *(arg1 + 0x44)
int64_t rcx_2 = *(arg1 + 0x48)
void* rax_3 = sub_142702010(rax_2, &var_98)
void* const rbx = rax_3
void* rax_4
int64_t rax_5
void* rdx_1

if (rax_3 != 0)
    rax_4 = sub_14272a9f0()
    rdx_1 = *(rbx + 0x10)
    rax_5 = sx.q(*(rax_4 + 0x38))

if (rax_3 == 0 || rax_5.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
    rbx = nullptr

int128_t var_80
sub_14271a2c0(&var_80, rbx)
int32_t rbx_1 = arg2[0xb]
sub_140de7870(arg1 + 0xd0, &var_98)
int32_t* r8_2 = rcx_2
int128_t zmm0 = var_80
char* var_a0 = nullptr
*r8_2 = rbx_1
*(r8_2 + 4) = zmm0
int32_t var_70
r8_2[5] = var_70
int32_t rax_8 = var_98.d
r8_2[6] = 0xffffffff
void var_88
sub_1409b8650(arg1 + 0xd0, &var_88, *r8_2, r8_2, rax_8, var_a0)
int64_t var_68[0x2]
var_68[0] = 0
void* var_58 = nullptr
void* result = sub_14271cfe0(arg1, arg2, &var_80, &var_68)

if (var_68[0] != 0)
    void var_48
    void* rcx_9 = &var_48
    
    if (var_58 != 0)
        rcx_9 = var_58
    
    result = (*(*rcx_9 + 0x10))(rcx_9)

__security_check_cookie(rax_1 ^ &var_c8)
return result
