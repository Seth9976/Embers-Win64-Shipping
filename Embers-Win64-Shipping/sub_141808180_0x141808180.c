// 函数: sub_141808180
// 地址: 0x141808180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int16_t* const rdx

if (arg2[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg2

void var_c8
sub_140685ed0(&var_c8, rdx)
int64_t rbx = sx.q(*(arg1 + 0x80))
int32_t var_38

if (var_38 s> rbx.d)
    *(arg1 + 0x80) = var_38
    
    if (var_38 s> *(arg1 + 0x84))
        sub_1405daba0(arg1 + 0x78)
    
    memset(rbx + *(arg1 + 0x78), 0, sx.q(var_38 - rbx.d))
else if (var_38 s< rbx.d)
    int32_t rcx_4 = rbx.d
    
    if (rcx_4 != var_38)
        *(arg1 + 0x80) = rbx.d - (rcx_4 - var_38)
        sub_1405dac10(arg1 + 0x78)

int64_t var_40
int64_t result = memcpy(*(arg1 + 0x78), var_40, *(arg1 + 0x80))
int64_t var_48

if (var_48 != 0)
    result = sub_140a74f90(var_48)

__security_check_cookie(rax_1 ^ &var_e8)
return result
