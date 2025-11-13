// 函数: sub_14106ed40
// 地址: 0x14106ed40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
void* var_98 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_98, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

int64_t var_90 = 0
int64_t var_88 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_90, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_90)

char var_78 = 3
void var_74
sub_140d3a3a0(&var_74, nullptr)
int64_t var_6c = 0
int16_t var_60 = 0x101
int64_t var_58 = 0
void* var_48 = nullptr
int32_t var_64 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_78, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

char* rax_5 = *(arg2 + 0x38)
char* r8_6 = &var_78
void* rcx_4 = var_98

if (rax_5 != 0)
    r8_6 = rax_5

int64_t rax_6 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_6 != 0
*(arg2 + 0x20) = rdi + rax_6
uint64_t result = sub_14106c8e0(rcx_4, &var_90, r8_6)

if (var_58 != 0)
    void var_38
    void* rcx_5 = &var_38
    
    if (var_48 != 0)
        rcx_5 = var_48
    
    result = (*(*rcx_5 + 0x10))(rcx_5)

int64_t rcx_6 = var_90

if (rcx_6 != 0)
    result = sub_140a74f90(rcx_6)

__security_check_cookie(rax_1 ^ &var_b8)
return result
