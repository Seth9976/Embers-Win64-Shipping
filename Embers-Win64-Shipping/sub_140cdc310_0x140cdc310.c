// 函数: sub_140cdc310
// 地址: 0x140cdc310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
void* rax_2 = *(arg1 + 0x10)
int64_t var_88
__builtin_memset(&var_88, 0, 0x2c)
int32_t var_5c = 0x80
int32_t var_58 = 0xffffffff
int32_t var_54 = 0
int64_t var_48 = 0
int32_t var_40 = 0
void* var_a8 = rax_2
int64_t* i_4

if (rax_2 == 0)
    i_4 = nullptr
else
    i_4 = *(rax_2 + 0x50)

int32_t var_98 = 0xffffffff
int16_t var_94 = 0x101
char var_92 = 0
sub_1406328d0(&var_a8)
int64_t* i_2

for (int64_t* i = i_4; i != 0; i = i_2)
    int64_t* i_6 = i
    
    if (((zx.q(*(i[1] + 0x10)) u>> 0xf).b & 1) == 0)
        i_6 = nullptr
    
    sub_140cdbbb0(arg1, arg1, i_6, &var_88, arg2)
    i_2 = i[4]
    sub_1406328d0(&var_a8)

int64_t* rcx_5 = *(arg1 + 0x10)
void* rax_5 = (*(*rcx_5 + 0x148))(rcx_5)

if (rax_5 != 0)
    int64_t* rcx_6 = *(arg1 + 0x10)
    int64_t rsi_1 = rcx_6[0x24]
    
    if (rsi_1 == 0)
        rsi_1 = sub_140bda730(rcx_6)
    
    int64_t* i_5 = *(rax_5 + 0x50)
    var_a8 = rax_5
    int32_t var_98_1 = 0xffffffff
    int16_t var_94_1 = 0x101
    char var_92_1 = 0
    sub_1406328d0(&var_a8)
    int64_t* i_3
    
    for (int64_t* i_1 = i_5; i_1 != 0; i_1 = i_3)
        int64_t* i_7 = i_1
        
        if (((zx.q(*(i_1[1] + 0x10)) u>> 0xf).b & 1) == 0)
            i_7 = nullptr
        
        sub_140cdbbb0(rsi_1, arg1, i_7, &var_88, arg2)
        i_3 = i_1[4]
        sub_1406328d0(&var_a8)

int32_t var_40_1 = 0

if (var_48 != 0)
    sub_140a74f90(var_48)

int64_t var_80
var_80.d = 0
int32_t var_58_1 = 0xffffffff
int32_t var_54_1 = 0
int64_t var_78
void* result = sub_14059a8e0(&var_78, 0)
int64_t var_68

if (var_68 != 0)
    result = sub_140a74f90(var_68)

int64_t rcx_16 = var_88

if (rcx_16 != 0)
    result = sub_140a74f90(rcx_16)

__security_check_cookie(rax_1 ^ &var_d8)
return result
