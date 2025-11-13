// 函数: sub_1420361c0
// 地址: 0x1420361c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
sub_142036360(arg1)
void* rax_2 = sub_141dcc7f0(arg1)
int64_t* rax_3
int128_t zmm0
rax_3, zmm0 = sub_141dcc7c0(arg1)
int64_t rdx = *rax_3
(*(rdx + 0x638))(rax_3, rdx)
int128_t zmm6
zmm6.d = zmm0.d f/ *(sub_141dcc7c0(arg1) + 0x2f0)
void*** rax_5 = sub_140a84c80(0, 0x30, 0)

if (rax_5 != 0)
    *rax_5 = &data_142d57800
    sub_140d3a3a0(&rax_5[1], arg1)
    rax_5[2] = sub_14201b3f8
    rax_5[4] = sub_140a387b0()
    *rax_5 = &data_142d57858

int64_t var_88 = 0
int32_t var_80 = 0

if (rax_5 != 0)
    (*rax_5)[8](rax_5, &var_88)

void var_78
sub_140d3a3a0(&var_78, nullptr)
int64_t var_70 = 0
int64_t var_68 = 0
void* var_58 = nullptr
sub_1423e6200(rax_2, &arg1[0x51], &var_88, zmm6, 1, 0xbf800000)

if (var_68 != 0)
    void var_48
    void* rcx_8 = &var_48
    
    if (var_58 != 0)
        rcx_8 = var_58
    
    (*(*rcx_8 + 0x10))(rcx_8)

uint64_t result = sub_140745b20(&var_88)

if (rax_5 != 0)
    (*rax_5)[7](rax_5, 0)
    result = sub_140a84c80(rax_5, 0, 0)
    
    if (result != 0)
        result = sub_140a74f90(result)

__security_check_cookie(rax_1 ^ &var_b8)
return result
