// 函数: sub_14061dde0
// 地址: 0x14061dde0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int32_t var_88 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_2 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_2[4]
    sub_140d30490(arg2, &var_88, r8_2)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

int64_t rax_3 = *(arg2 + 0x20)
bool cond:0 = var_88 != 0
int64_t rdx_2
rdx_2.b = rax_3 != 0
*(arg2 + 0x20) = rdx_2 + rax_3
int64_t var_78
int64_t* rax_4 = sub_14061a3a0(arg1, &var_78, cond:0)

if (arg3 != rax_4)
    sub_140618af0(arg3, rax_4)
    
    if (rax_4[8] == 0)
        arg3[7].d = rax_4[7].d
    
    int64_t rcx_4 = arg3[8]
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    arg3[8] = rax_4[8]
    rax_4[8] = 0
    arg3[9].d = rax_4[9].d
    rax_4[9].d = 0

int32_t var_30 = 0
int64_t var_38

if (var_38 != 0)
    sub_140a74f90(var_38)

int64_t result = sub_140619f90(&var_78, 0)
int64_t var_58

if (var_58 != 0)
    result = sub_140a74f90(var_58)

int64_t rcx_8 = var_78

if (rcx_8 != 0)
    result = sub_140a74f90(rcx_8)

__security_check_cookie(rax_1 ^ &var_a8)
return result
