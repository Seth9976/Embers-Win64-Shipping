// 函数: sub_142022ad0
// 地址: 0x142022ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_18 = arg2
void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8

if ((*(*arg1 + 0x6b0))() != 0)
    arg1[0x50].d += 1
    
    if (sub_141dcdc50(arg1) != 1)
        (*(*arg1 + 0x6e8))(arg1)

int64_t* rax_6
int128_t zmm0
rax_6, zmm0 = sub_141dcc7c0(arg1)
int64_t rdx = *rax_6
(*(rdx + 0x638))(rax_6, rdx)
arg2.d = zmm0.d f/ *(sub_141dcc7c0(arg1) + 0x2f0)
void* rax_8 = sub_141dcc7f0(arg1)
void*** rax_9 = sub_140a84c80(0, 0x30, 0)

if (rax_9 != 0)
    *rax_9 = &data_142d57800
    sub_140d3a3a0(&rax_9[1], arg1)
    rax_9[2] = sub_14201b3f8
    rax_9[4] = sub_140a387b0()
    *rax_9 = &data_142d57858

int64_t var_88 = 0
int32_t var_80 = 0

if (rax_9 != 0)
    (*rax_9)[8](rax_9, &var_88)

void var_78
sub_140d3a3a0(&var_78, nullptr)
int64_t var_70 = 0
int64_t var_68 = 0
void* var_58 = nullptr
sub_1423e6200(rax_8, &arg1[0x51], &var_88, arg2, 1, 0xbf800000)

if (var_68 != 0)
    void var_48
    void* rcx_10 = &var_48
    
    if (var_58 != 0)
        rcx_10 = var_58
    
    (*(*rcx_10 + 0x10))(rcx_10)

uint64_t result = sub_140745b20(&var_88)

if (rax_9 != 0)
    (*rax_9)[7](rax_9, 0)
    result = sub_140a84c80(rax_9, 0, 0)
    
    if (result != 0)
        result = sub_140a74f90(result)

__security_check_cookie(rax_1 ^ &var_b8)
int512_t zmm6
zmm6.o = var_18
return result
