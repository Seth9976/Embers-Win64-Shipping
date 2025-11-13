// 函数: sub_142639930
// 地址: 0x142639930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
void* rax_3 = (*(*arg1 + 0x150))()
int32_t var_98 = 0
*(arg1 + 0x7c) = *(rax_3 + 0x520)
int64_t var_a8 = 0
void* rsi = *(rax_3 + 0x188)
uint8_t (* var_a0)(int64_t* arg1) = sub_14263c250
void* rsi_1

if (rsi == 0)
    rsi_1 = *(rax_3 + 0x300)
else
    rsi_1 = *(rsi + 0xc0)

int128_t zmm6 = arg1[0xf].d
void*** rax_4 = sub_140a84c80(0, 0x30, 0)

if (rax_4 != 0)
    *rax_4 = &data_142e33ea8
    sub_140d3a3a0(&rax_4[1], arg1)
    *(rax_4 + 0x10) = var_a0.o
    rax_4[5] = sub_140a387b0()
    *rax_4 = &data_142e33f00

int64_t var_88 = 0
int32_t var_80 = 0

if (rax_4 != 0)
    (*rax_4)[8](rax_4, &var_88)

void var_78
sub_140d3a3a0(&var_78, nullptr)
int64_t var_70 = 0
int64_t var_68 = 0
void* var_58 = nullptr
sub_1423e6200(rsi_1, &var_a8, &var_88, zmm6, 0, 0xbf800000)

if (var_68 != 0)
    void var_48
    void* rcx_5 = &var_48
    
    if (var_58 != 0)
        rcx_5 = var_58
    
    (*(*rcx_5 + 0x10))(rcx_5)

uint64_t result = sub_140745b20(&var_88)

if (rax_4 != 0)
    (*rax_4)[7](rax_4, 0)
    result = sub_140a84c80(rax_4, 0, 0)
    
    if (result != 0)
        result = sub_140a74f90(result)

__security_check_cookie(rax_1 ^ &var_d8)
return result
