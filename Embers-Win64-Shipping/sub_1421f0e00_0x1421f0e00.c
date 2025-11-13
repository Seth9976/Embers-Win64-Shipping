// 函数: sub_1421f0e00
// 地址: 0x1421f0e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0xc) & 2) == 0 || arg7 == 0)
    return 

void* rax = arg1[6]

if (*(rax + 0xd4) s<= 0 || *(rax + 0xc) s<= 0 || *(rax + 0xd8) s< 3)
    return 

int32_t rbp_1 = 0
int64_t r12_1 = 0
int64_t var_148_1 = 0
int32_t arg_8 = 0
int32_t var_180
int64_t* var_178
int128_t* var_170
int128_t* var_168
int64_t* var_160
int128_t* var_158
void* var_150
int64_t rbx_5
int32_t r15_2

if (sub_1421df8c0(arg7, arg4) == 0)
    rbx_5 = *(arg7 + 0x158)
    r15_2 = *(arg7 + 0x164)
    arg_8 = *(arg7 + 0x160)
else
    int128_t var_128
    __builtin_memset(&var_128, 0, 0x14)
    int128_t var_110
    __builtin_memset(&var_110, 0, 0x14)
    int128_t var_140
    __builtin_memset(&var_140, 0, 0x14)
    void var_f8
    memset(&var_f8, 0, 0xc0)
    int32_t rax_3 = (*(*arg1 + 0x50))(arg1, zx.q(sub_1422e48a0(arg4)))
    int32_t rbx_2
    
    if ((arg1[5].b & 1) == 0)
        rbx_2 = 0
    else
        int64_t rdx_2 = *arg1
        rbx_2 = (*(rdx_2 + 0x58))(arg1, rdx_2)
    
    (*(*arg1 + 0x78))(arg1, &var_f8)
    var_150 = &var_f8
    var_158 = &var_140
    var_160 = &var_110
    var_168 = &var_128
    var_170 = arg6[0x1b]
    var_178 = arg6[0x1a]
    var_180 = rbx_2
    sub_1421daed0(arg1, arg2, arg3, *(arg1[6] + 0xd4), rax_3, var_180, var_178, var_170, var_168, 
        var_160, var_158)
    (*(*arg1 + 0x78))(arg1, &var_f8)
    int32_t var_50
    r15_2 = var_50
    
    if (*(arg1[6] + 0xb0) == 0)
        sub_142208cb0(arg2)
    
    int32_t rax_17
    
    if (r15_2 s<= 0 || (*(arg1 + 0x3c) & 2) == 0)
        rax_17 = 0
    else
        sub_1421d5180(arg6)[1] = arg7
        int64_t* rax_11 = sub_1421e0ad0(&arg_8, arg2, arg1[6], arg3)
        sub_1405d16e0(arg7 + 0x150, *rax_11)
        sub_1405d1550(rax_11)
        int16_t rax_13 = (*(*arg1 + 0x50))(arg1, zx.q(*(arg3 + 0x1548)))
        int32_t var_118
        sub_14219ee00(arg7, var_128:8.q, var_118, rax_13)
        int16_t rax_15 = (*(*arg1 + 0x58))(arg1)
        int32_t r8_3 = 0
        void** rdx_10 = nullptr
        int64_t rax_16 = var_140.q
        int32_t var_130
        
        if (rax_16 != 0)
            r8_3 = var_130
        
        if (rax_16 != 0)
            rdx_10 = var_140:8.q
        
        sub_14219db90(arg7, rdx_10, r8_3, rax_15)
        r12_1 = var_110:8.q
        int32_t var_100
        rax_17 = var_100
        var_148_1 = r12_1
        arg_8 = rax_17
    
    rbx_5 = var_148_1
    *(arg7 + 0x158) = r12_1
    *(arg7 + 0x160) = rax_17
    *(arg7 + 0x164) = r15_2

int32_t rbx_11

if (r15_2 s<= 0 || (*(arg1 + 0x3c) & 2) == 0)
    rbx_11 = arg5
else
    int64_t* rax_19 = sub_140820290(arg6)
    int64_t* rdx_11 = rax_19
    int64_t* rcx_20 = rax_19[0xd]
    int32_t rax_20 = arg_8
    
    if (rcx_20 != 0)
        rdx_11 = rcx_20
    
    rdx_11[2] = rbx_5
    rdx_11[8].d = rax_20
    rax_19[0xf] = arg7
    rax_19[0x11] = 0
    *rdx_11 = *(arg2 + 0x360)
    *(rdx_11 + 0x44) = r15_2
    rdx_11[0xa].d = 0
    *(rdx_11 + 0x54) = *(arg1[6] + 0xd4) - 1
    *(rax_19 + 0x9c) ^= (zx.d(*(arg2 + 0x35)) ^ *(rax_19 + 0x9c)) & 1
    int32_t rax_25 = *(rax_19 + 0x9c)
    int32_t rbx_10 = ((zx.d(*(arg2 + 0x168)) << 2 ^ rax_25) & 4) ^ rax_25
    *(rax_19 + 0x9c) = rbx_10
    *(rax_19 + 0x9c) = ((zx.d(sub_14082c3b0(arg2, arg3)) << 0xd ^ rbx_10) & 0xe000) ^ rbx_10
    sub_1419c6730()
    int64_t rcx_25 = arg1[4]
    int32_t rax_34 = (*(rax_19 + 0x9c) & 0xffffe0ff) | 0x10080
    rax_19[0x10] = rcx_25
    *(rax_19 + 0x9c) = rax_34
    
    if (*(arg2 + 0x35) s< 0 || (*(arg2 + 0x36) & 1) != 0)
        rbp_1 = 0x20000
    
    rbx_11 = arg5
    *(rax_19 + 0x9c) = (rax_34 & 0xfffdffff) | rbp_1
    
    if (rcx_25 != 0)
        sub_1422dd2a0(arg6, rbx_11, rax_19)

void* rax_37 = arg6[0xc]
void* rcx_27 = &arg6[0xa]

if (rax_37 != 0)
    rcx_27 = rax_37

(*(*arg1 + 0x70))(arg1, arg2, *(rcx_27 + (sx.q(rbx_11) << 3)), arg3, 0, var_180, var_178, var_170, 
    var_168, var_160, var_158, var_150, var_148_1)
