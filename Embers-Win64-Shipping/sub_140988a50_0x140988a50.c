// 函数: sub_140988a50
// 地址: 0x140988a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t var_e0 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_e0, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_e0)

void* var_e8 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_e8, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_e8)

void** var_d8
sub_1409198b0(&var_d8)
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_d8, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_d8)

void*** rax_5 = *(arg2 + 0x38)
void*** r8_6 = &var_d8
void* rdx_6 = var_e8
int64_t rcx_4 = var_e0

if (rax_5 != 0)
    r8_6 = rax_5

int64_t rax_6 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_6 != 0
*(arg2 + 0x20) = rdi + rax_6
*arg3 = sub_1409680c0(rcx_4, rdx_6, r8_6)
int64_t result = sub_14091b530(&var_d8)
__security_check_cookie(rax_1 ^ &var_108)
return result
