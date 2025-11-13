// 函数: sub_141c1ca00
// 地址: 0x141c1ca00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t rax_1 = __security_cookie ^ &var_208
int32_t var_f4
int32_t var_f4_1 = var_f4 & 0xffffff00
char var_1a8 = 0
int64_t var_1a0 = 0
int64_t var_198 = 0
char var_188 = 0
int64_t var_180
__builtin_memset(&var_180, 0, 0x88)
int32_t var_f8 = 0x20702
void var_e8
sub_140e51550(&var_e8, &var_1a8)
sub_140597700(&var_1a8)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_e8, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_e8)

void* rax_3 = *(arg2 + 0x38)
void* rsi = &var_e8
void* var_1e8 = nullptr

if (rax_3 != 0)
    rsi = rax_3

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_1e8, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_1e8)

int64_t var_1e0
__builtin_memset(&var_1e0, 0, 0x18)

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_1e0, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_1e0)

int64_t rax_6 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_6 != 0
int64_t var_1c8 = var_1e0
int128_t var_1d8
int64_t var_1c0 = var_1d8.q
void* rax_9 = var_1d8:8.q
*(arg2 + 0x20) = rdi + rax_6
void* var_1b8 = rax_9

if (rax_9 != 0)
    *(rax_9 + 8) += 1

sub_1405979f0(arg3, sub_141ba2d60(&var_1a8, rsi, var_1e8, &var_1c8, zx.o(0)))
sub_140597700(&var_1a8)
int64_t* rbx_1 = var_1d8:8.q

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t result = sub_140597700(&var_e8)
__security_check_cookie(rax_1 ^ &var_208)
return result
