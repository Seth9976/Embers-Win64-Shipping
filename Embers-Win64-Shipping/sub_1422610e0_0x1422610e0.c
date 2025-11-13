// 函数: sub_1422610e0
// 地址: 0x1422610e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
void* rax_2 = arg1[0x4a]

if (rax_2 != 0 && *(rax_2 + 0x258) == arg1)
    *(rax_2 + 0x258) = 0

(*(*arg1 + 0x690))(arg2, 0)
int32_t var_90 = 0
int64_t (* var_98)(int64_t* arg1) = sub_14225cb68
(*(*arg1 + 0xa30))(arg1)
void* rax_5 = sub_141dcc7f0(arg1)
void*** rax_6 = sub_140a84c80(0, 0x30, 0)

if (rax_6 != 0)
    *rax_6 = &data_142e33ea8
    sub_140d3a3a0(&rax_6[1], arg1)
    *(rax_6 + 0x10) = var_98.o
    rax_6[5] = sub_140a387b0()
    *rax_6 = &data_142e33f00

int64_t var_88 = 0
int32_t var_80 = 0

if (rax_6 != 0)
    (*rax_6)[8](rax_6, &var_88)

void var_78
sub_140d3a3a0(&var_78, nullptr)
int64_t var_70 = 0
int64_t var_68 = 0
void* var_58 = nullptr
sub_1423e6200(rax_5, &arg1[0x9f], &var_88, arg2, 0, 0xbf800000)

if (var_68 != 0)
    void var_48
    void* rcx_6 = &var_48
    
    if (var_58 != 0)
        rcx_6 = var_58
    
    (*(*rcx_6 + 0x10))(rcx_6)

uint64_t result = sub_140745b20(&var_88)

if (rax_6 != 0)
    (*rax_6)[7](rax_6, 0)
    result = sub_140a84c80(rax_6, 0, 0)
    
    if (result != 0)
        result = sub_140a74f90(result)

__security_check_cookie(rax_1 ^ &var_c8)
return result
