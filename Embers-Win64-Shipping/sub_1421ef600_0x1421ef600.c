// 函数: sub_1421ef600
// 地址: 0x1421ef600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0xc) & 2) == 0 || (arg1[0x20].d == 0 && *(arg1 + 0x104) == 0))
    return 

int32_t rax_1 = *(arg7 + 0x130)
int32_t r15_1 = 0
int32_t arg_8 = 0
int64_t rbx_1 = 0
int32_t r14_1 = 0
int32_t var_188
int32_t var_180
int64_t* var_178
int128_t* var_170
int128_t* var_168
int64_t* var_160
int128_t* var_158
void* var_150
int32_t r13_1

if (rax_1 == 0xffffffff || arg4 != *(arg7 + 0x138) || *(arg4 + 0x3c) != rax_1
        || *(arg4 + 0x38) f!= *(arg7 + 0x140))
    *(arg7 + 0x130) = *(arg4 + 0x3c)
    *(arg7 + 0x140) = *(arg4 + 0x38)
    *(arg7 + 0x138) = arg4
    int128_t var_148
    __builtin_memset(&var_148, 0, 0x14)
    int128_t var_130
    __builtin_memset(&var_130, 0, 0x14)
    int128_t var_118
    __builtin_memset(&var_118, 0, 0x14)
    void var_f8
    memset(&var_f8, 0, 0xc0)
    var_150 = &var_f8
    var_158 = &var_118
    var_160 = &var_130
    var_168 = &var_148
    var_170 = arg6[0x1b]
    var_178 = arg6[0x1a]
    var_180 = 0
    var_188 = 0x50
    sub_1421daed0(arg1, arg2, arg3, arg1[0x20].d, 0x50, 0, var_178, var_170, var_168, var_160, 
        var_158)
    (*(*arg1 + 0x78))(arg1, &var_f8)
    int32_t var_50
    r13_1 = var_50
    
    if (arg1[0x1c].b == 0)
        sub_142208cb0(arg2)
    
    if (r13_1 s> 0)
        sub_1421d5180(arg6)[1] = arg7
        int64_t* rax_8 = sub_1421e0ad0(&arg_8, arg2, &arg1[6], arg3)
        sub_1405d16e0(arg7 + 0x150, *rax_8)
        sub_1405d1550(rax_8)
        int16_t rax_10 = (*(*arg1 + 0x50))(arg1, zx.q(*(arg3 + 0x1548)))
        int32_t var_138
        sub_14219ee00(arg7, var_148:8.q, var_138, rax_10)
        sub_14219db90(arg7, nullptr, 0, 0)
        int32_t var_120
        r14_1 = var_120
        rbx_1 = var_130:8.q
        arg_8 = r14_1
    
    *(arg7 + 0x158) = rbx_1
    *(arg7 + 0x160) = r14_1
    *(arg7 + 0x164) = r13_1
else
    rbx_1 = *(arg7 + 0x158)
    r13_1 = *(arg7 + 0x164)
    arg_8 = *(arg7 + 0x160)

if (r13_1 == 0)
    return 

int64_t* rax_11 = sub_140820290(arg6)
int64_t* rdx_6 = rax_11
int64_t* rcx_12 = rax_11[0xd]
int32_t rax_12 = arg_8

if (rcx_12 != 0)
    rdx_6 = rcx_12

rdx_6[2] = rbx_1
rdx_6[8].d = rax_12
rax_11[0xf] = arg7
rax_11[0x11] = 0
int64_t rax_13

if (arg1[0x1c].b != 1)
    rax_13 = *(arg2 + 0x360)
else
    rax_13 = *(arg2 + 0x140)

*rdx_6 = rax_13
int32_t rax_14 = r13_1 - 1

if ((r13_1.b & 1) == 0)
    rax_14 = r13_1

rdx_6[0xa].d = 0
*(rdx_6 + 0x44) = rax_14
*(rdx_6 + 0x54) = arg1[0x20].d - 1
*(rax_11 + 0x9c) ^= (zx.d(*(arg2 + 0x35)) ^ *(rax_11 + 0x9c)) & 1
int32_t rax_20 = *(rax_11 + 0x9c)
int32_t rbx_7 = ((zx.d(*(arg2 + 0x168)) << 2 ^ rax_20) & 4) ^ rax_20
*(rax_11 + 0x9c) = rbx_7
*(rax_11 + 0x9c) = ((zx.d(sub_14082c3b0(arg2, arg3)) << 0xd ^ rbx_7) & 0xe000) ^ rbx_7
sub_1419c6730()
rax_11[0x10] = arg1[4]
int32_t rax_30 = (*(rax_11 + 0x9c) & 0xffffe0ff) | 0x10080
*(rax_11 + 0x9c) = rax_30

if (*(arg2 + 0x35) s< 0 || (*(arg2 + 0x36) & 1) != 0)
    r15_1 = 0x20000

int64_t rbx_8 = sx.q(arg5)
*(rax_11 + 0x9c) = (rax_30 & 0xfffdffff) | r15_1
sub_1422dd2a0(arg6, rbx_8.d, rax_11)

if (*(arg1 + 0x189) == 1)
    void* rax_33 = arg6[0xc]
    void* rcx_15 = &arg6[0xa]
    
    if (rax_33 != 0)
        rcx_15 = rax_33
    
    (*(*arg1 + 0x80))(arg1, arg2, *(rcx_15 + (rbx_8 << 3)), arg3, var_188, var_180, var_178, 
        var_170, var_168, var_160, var_158, var_150)

if (*(arg1 + 0x18a) != 1 && *(arg1 + 0x18b) != 1)
    return 

void* rax_34 = arg6[0xc]
void* rcx_17 = &arg6[0xa]

if (rax_34 != 0)
    rcx_17 = rax_34

(*(*arg1 + 0x88))(arg1, arg2, *(rcx_17 + (rbx_8 << 3)), arg3, var_188, var_180, var_178, var_170, 
    var_168, var_160, var_158, var_150)
