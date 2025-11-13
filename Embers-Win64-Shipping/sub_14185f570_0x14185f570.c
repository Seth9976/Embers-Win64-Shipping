// 函数: sub_14185f570
// 地址: 0x14185f570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fe6aa0
arg1[4] = arg7
arg1[5] = arg8
arg1[1] = arg2
arg1[2] = arg3
arg1[3] = arg4
arg1[6] = 0
arg1[6] = *arg9
*arg9 = 0
arg1[7].d = arg9[1].d
*(arg1 + 0x3c) = *(arg9 + 0xc)
arg9[1] = 0
arg1[8] = *arg10
arg1[0xa] = arg10[2]
arg10[2] = 0
*(arg1 + 0x60) = *(arg10 + 0x20)
*(arg1 + 0x70) = *(arg10 + 0x30)

if (arg1[8] != 0)
    *arg10 = 0

arg1[0x10] = 0
arg1[0x11] = 0
arg1[0x12] = nullptr
arg1[0x13] = 0
arg1[0x14].d = 0
*(arg1 + 0xa4) = 0
int64_t rax_7 = j_sub_140a82f30(0x18)

if (rax_7 == 0)
    rax_7 = 0
else
    __builtin_memset(rax_7, 0, 0x18)

arg1[0x17] = rax_7
arg1[0x16] = rax_7
arg1[0x18] = sub_140a491d0(1)
int64_t var_a8[0x2]
var_a8[0] = 0
int64_t var_98 = 0
void*** var_d8 = arg1
void* var_c8
int64_t* rax_9
int128_t zmm2
int128_t zmm3
rax_9, zmm2, zmm3 = sub_141857b70(&var_c8, 2, &var_d8, &var_a8, arg5, arg6)

if (&arg1[0x10] != rax_9)
    arg1[0x10] = *rax_9
    *rax_9 = 0
    sub_1405aeff0(&arg1[0x11], &rax_9[1])

int64_t* var_c0

if (var_c0 != 0)
    var_c0[1].d -= 1
    
    if (var_c0[1].d == 1)
        (**var_c0)(var_c0)
        int32_t rax_13 = *(var_c0 + 0xc)
        *(var_c0 + 0xc) -= 1
        
        if (rax_13 == 1)
            (*(*var_c0 + 8))(var_c0, 1)

int64_t var_68[0x2]
var_68[0] = 0
int64_t var_58 = 0
void*** var_d0 = arg1
void* var_b8
void** rax_15 = sub_141855720(&var_b8, 2, &var_d0, &var_68, zmm2, zmm3)

if (&arg1[0x12] != rax_15)
    arg1[0x12] = *rax_15
    *rax_15 = nullptr
    sub_1405aeff0(&arg1[0x13], &rax_15[1])

int64_t* var_b0

if (var_b0 != 0)
    var_b0[1].d -= 1
    
    if (var_b0[1].d == 1)
        (**var_b0)(var_b0)
        int32_t rsi_1 = *(var_b0 + 0xc)
        *(var_b0 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*var_b0 + 8))(var_b0, zx.q(rsi_1))

sub_140846380(arg9)

if (*arg10 != 0)
    void* rdx_5 = arg10[2]
    void* rcx_10 = &arg10[4]
    
    if (rdx_5 != 0)
        rcx_10 = rdx_5
    
    int64_t rdx_6 = *rcx_10
    (*(rdx_6 + 0x10))(rcx_10, rdx_6)

return arg1
