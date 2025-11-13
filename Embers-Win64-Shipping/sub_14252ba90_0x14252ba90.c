// 函数: sub_14252ba90
// 地址: 0x14252ba90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int32_t var_74 = 0x80
int64_t var_e0
__builtin_memset(&var_e0, 0, 0x6c)
int32_t var_70 = 0xffffffff
int32_t var_6c = 0
int64_t var_60 = 0
int32_t var_58 = 0
char var_50 = 0
void var_48
sub_140a96170(&var_48)
*(arg2 + 0x38) = 0
void var_e8

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_e8, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_e8)

void* rax_3 = *(arg2 + 0x38)
void* r14 = &var_e8
char var_108 = 0
*(arg2 + 0x38) = 0

if (rax_3 != 0)
    r14 = rax_3

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_108, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_108)

char* rax_5 = *(arg2 + 0x38)
char* r15 = &var_108

if (rax_5 != 0)
    r15 = rax_5

void var_100
sub_140a96170(&var_100)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_100, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_100)

int64_t* rax_7 = *(arg2 + 0x38)
int64_t* r8_6 = &var_100

if (rax_7 != 0)
    r8_6 = rax_7

int64_t rax_8 = *(arg2 + 0x20)
int64_t rbx
rbx.b = rax_8 != 0
*(arg2 + 0x20) = rbx + rax_8
sub_1420c82d0(r14, r15, r8_6)
int64_t* var_f8

if (var_f8 != 0)
    var_f8[1].d -= 1
    
    if (var_f8[1].d == 1)
        (**var_f8)(var_f8)
        int32_t rsi_1 = *(var_f8 + 0xc)
        *(var_f8 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*var_f8 + 8))(var_f8, zx.q(rsi_1))

void* result = sub_140a63910(&var_e8)
__security_check_cookie(rax_1 ^ &var_128)
return result
