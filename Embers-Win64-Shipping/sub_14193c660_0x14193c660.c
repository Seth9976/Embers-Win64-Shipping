// 函数: sub_14193c660
// 地址: 0x14193c660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_518
int64_t rax_1 = __security_cookie ^ &var_518
void* const rbx

if (arg2 == 0)
    rbx = nullptr
else
    if (data_143f01c92 != 0)
        sub_140a80f40()
    
    rbx = *(arg2 + 0x40)

void var_4e8
sub_14192a540(&var_4e8)
int32_t var_a0 = *(rbx + 0x10)
void var_150
sub_14192bc70(&var_150, rbx + 0x18)
int32_t var_24 = *(arg2 + 0x28)
int128_t var_34 = *(arg2 + 0x18)
sub_14193d1f0()
void var_98
void* result

if (data_1439c77d0 == 0)
    int32_t var_4f8
    sub_14193a5e0(&data_1439c7780, &var_4f8, &var_98)
    int64_t rax_5 = sx.q(var_4f8)
    void* const rax_7
    
    if (rax_5.d == 0xffffffff)
        rax_7 = nullptr
    else
        rax_7 = rax_5 * 0x88 + data_1439c7780
    
    void** rsi = rax_7 + 0x78
    
    if (rax_7 == 0)
        rsi = nullptr
    
    if (rsi != 0)
        result = *rsi
        goto label_14193c753
    
    sub_14193f230(arg2, rbx)
    result = *(rbx + 0xe8)
else
    result = sub_14193a110(&data_1439c76c0, &var_98, 1)
label_14193c753:
    
    if (result == 0)
        sub_14193f230(arg2, rbx)
        result = *(rbx + 0xe8)
    else if (*(result + 0x5ee) == 0)
        sub_14194d8f0(result, &var_4e8)
        sub_141934b30(result)

int64_t i_1 = 6
void* rdi_1 = &var_98
int64_t i

do
    rdi_1 -= 0xb8
    sub_14192b980(rdi_1)
    i = i_1
    i_1 -= 1
while (i != 1)
__security_check_cookie(rax_1 ^ &var_518)
return result
