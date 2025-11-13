// 函数: sub_142293280
// 地址: 0x142293280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int64_t var_108
sub_140b6c480(&var_108)
int64_t rax_2 = var_108
int32_t zmm0 = float.s(rax_2)

if (rax_2 s< 0)
    zmm0 = zmm0 f+ 1.84467441e+19f

int64_t var_b8
int32_t zmm1 = float.s(var_b8)
*(arg1 + 0x20) = zmm0 f* 9.53674316e-07f

if (var_b8 s< 0)
    zmm1 = zmm1 f+ 1.84467441e+19f

int64_t var_b0
zmm0 = float.s(var_b0)
*(arg1 + 0x24) = zmm1 f* 9.53674316e-07f

if (var_b0 s< 0)
    zmm0 = zmm0 f+ 1.84467441e+19f

int64_t var_88
__builtin_memset(&var_88, 0, 0x2c)
*(arg1 + 0x28) = zmm0 f* 9.53674316e-07f
int64_t* rcx_1 = data_143ddb3f0
int32_t var_5c = 0x80
int32_t var_58 = 0xffffffff
int32_t var_54 = 0
int64_t var_48 = 0
int32_t var_40 = 0

if (rcx_1 != 0)
    (*(*rcx_1 + 0x70))(rcx_1, &var_88)
    int64_t var_128 = 0
    int32_t var_120_1 = 0
    sub_1405947f0(&var_128, 0xf)
    int32_t rax_6 = var_120_1 + 0xf
    var_120_1 = rax_6
    
    if (rax_6 s> 0)
        sub_140594770(&var_128)
    
    sub_1405a7220(var_128, 0xf, "TotalAllocated", 0xf, 0x3f)
    int32_t var_118
    sub_1408f1b50(&var_88, &var_118, &var_128)
    int64_t rax_7 = sx.q(var_118)
    void* const rcx_8
    
    if (rax_7.d == 0xffffffff)
        rcx_8 = nullptr
    else
        rcx_8 = (rax_7 << 5) + var_88
    
    int64_t* rdi_1 = rcx_8 + 0x10
    
    if (rcx_8 == 0)
        rdi_1 = nullptr
    
    if (var_128 != 0)
        sub_140a74f90(var_128)
    
    if (rdi_1 != 0)
        int64_t rcx_10 = *rdi_1
        
        if (rcx_10 != 0)
            int64_t rdx_4 = rcx_10
            
            if (data_143f53558 u>= rcx_10)
                rdx_4 = data_143f53558
            
            data_143f53558 = rdx_4
            int32_t zmm0_1 = float.s(rcx_10)
            
            if (rcx_10 s< 0)
                zmm0_1 = zmm0_1 f+ 1.84467441e+19f
            
            *(arg1 + 0xc) = zmm0_1 f* 9.53674316e-07f
            zmm0_1 = float.s(rdx_4)
            
            if (rdx_4 s< 0)
                zmm0_1 = zmm0_1 f+ 1.84467441e+19f
            
            *(arg1 + 0x10) = zmm0_1 f* 9.53674316e-07f

if (DBIQueryItsmForTi(sub_141f88540()) != 0)
    void*** rax_10
    float zmm7_1
    rax_10, zmm7_1 = sub_141f88540()
    int64_t* rax_11 = sub_140963350(rax_10)
    int64_t rdx_5 = *rax_11
    *(arg1 + 0x14) = float.s((*(rdx_5 + 0xe0))(rax_11, rdx_5)) f* zmm7_1
    void*** rax_13
    float zmm7_2
    rax_13, zmm7_2 = sub_141f88540()
    int64_t* rax_14 = sub_140963350(rax_13)
    int64_t rdx_6 = *rax_14
    *(arg1 + 0x1c) = float.s((*(rdx_6 + 0xe8))(rax_14, rdx_6)) f* zmm7_2

int32_t var_40_1 = 0

if (var_48 != 0)
    sub_140a74f90(var_48)

void* result = sub_1405df330(&var_88)
__security_check_cookie(rax_1 ^ &var_158)
return result
