// 函数: sub_140add5c0
// 地址: 0x140add5c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
sub_140a783c0()
void* rax_2 = sub_140ad7b30()
int64_t rdi = arg2[1]
void* rbx = arg2[2]
int32_t var_84 = 0
int32_t* var_90 = &var_84
int64_t var_80
int64_t* var_98 = &var_80
var_80 = (zx.o(0)).q
sub_140a8d5f0(rbx, ((rdi - rbx) s>> 1).d, rax_2, &data_143db9e14, var_98, var_90)
int64_t rbx_1 = arg2[1]
void* rdi_3 = arg2[2]
int32_t var_88 = 0
int64_t var_78 = (zx.o(0)).q
sub_140a8d5f0(rdi_3, ((rbx_1 - rdi_3) s>> 1).d, &data_143db9690, &data_143db9e14, &var_78, &var_88)
int32_t r8_1 = var_88
int32_t rax_3 = var_84
int128_t* rax_4
void var_70
char var_58_1

if (r8_1 s> rax_3)
    if (arg4 != 0)
        *arg4 = var_78
    
    if (r8_1 s<= 0)
        var_58_1 = 0
        rax_4 = &var_70
    else
        rax_4 = sub_140b17bd0(arg2, &var_70, r8_1, nullptr)
else
    if (arg4 != 0)
        *arg4 = var_80
    
    if (rax_3 s<= 0)
        var_58_1 = 0
        rax_4 = &var_70
    else
        rax_4 = sub_140b17bd0(arg2, &var_70, rax_3, nullptr)
*(arg1 + 0x18) = 0

if (*(rax_4 + 0x18) != 0)
    *arg1 = *rax_4
    arg1[1].q = rax_4[1].q
    *(arg1 + 0x18) = 1

__security_check_cookie(rax_1 ^ &var_b8)
return arg1
