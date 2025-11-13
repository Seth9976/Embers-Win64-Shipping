// 函数: sub_140b93e30
// 地址: 0x140b93e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
sub_140b4c2a0(arg1)
void*** rdi = nullptr
arg1[0x12] = 0
arg1[0x13] = 0
*arg1 = &data_142e839b0
int64_t rsi = -1
__builtin_memset(&arg1[0x14], 0, 0x30)
arg1[0x1a] = -1
__builtin_memset(&arg1[0x1b], 0, 0x3d)
arg1[0x24] = 0
arg1[0x26] = 0
arg1[0x2c] = 0
arg1[0x2d] = 0

if (arg2 != 0 && *arg2 != 0)
    do
        rsi += 1
    while (arg2[rsi] != 0)
    
    int32_t rdx = 0
    
    if (rsi.d + 1 s> 0)
        sub_1405947f0(&arg1[0x2c], rsi.d + 1)
        rdx = arg1[0x2d].d
    
    int32_t rax_2 = rdx + rsi.d + 1
    arg1[0x2d].d = rax_2
    
    if (rax_2 s> *(arg1 + 0x16c))
        sub_140594770(&arg1[0x2c])
    
    UnDecorator::getReferenceType(arg1[0x2c], arg2, (rsi.d + 1) * 2)

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int128_t zmm0
zmm0.q = float.d(performanceCount)
zmm0.q = zmm0.q f* data_143d796f8
arg1[0x2f] = 0
arg1[0x30] = 0
zmm0.q = zmm0.q f+ 16777216.0
arg1[0x2e] = zmm0.q
arg1[0x32] = *arg4
arg1[0x34] = arg4[2]
arg4[2] = 0
*(arg1 + 0x1b0) = *(arg4 + 0x20)
int128_t zmm1 = *(arg4 + 0x30)
*(arg1 + 0x1c0) = zmm1

if (arg1[0x32] != 0)
    *arg4 = 0

arg1[0x3a] = 0
arg1[0x3c] = 0
arg1[0x42] = arg3
int64_t* rax_6 = __crt_deferred_errno_cache::get(&data_143db7b00)
int64_t r8_2 = *rax_6
int64_t rax_7 = (*(r8_2 + 0x118))(rax_6, arg2, r8_2)
void*** var_60 = arg1
void** const var_68 = &data_142da2668
arg1[0x12] = rax_7
int64_t (* rcx_5)(int64_t* arg1, char* arg2, int64_t* arg3, int512_t arg4 @ zmm1) = sub_140b9be40
int64_t (* var_88)(int64_t* arg1, char* arg2, int64_t* arg3, int512_t arg4 @ zmm1) = sub_140b9be40
void*** rax_8 = nullptr
int128_t var_58
int128_t zmm0_1
int128_t zmm4_1
int128_t zmm5_1

if (&arg1[0x24] != &var_88)
    arg5 = *(arg1 + 0x120)
    arg6 = *(arg1 + 0x130)
    zmm4_1 = *(arg1 + 0x140)
    zmm5_1 = *(arg1 + 0x150)
    *(arg1 + 0x120) = var_88.o
    zmm0_1 = var_68.o
    *(arg1 + 0x130) = nullptr.o
    zmm1 = var_58
    *(arg1 + 0x140) = zmm0_1
    var_88.o = arg5
    rcx_5 = var_88
    void*** var_78
    var_78.o = arg6
    rax_8 = var_78
    *(arg1 + 0x150) = zmm1
    var_68.o = zmm4_1
    var_58 = zmm5_1

if (rcx_5 != 0)
    void** const* rcx_6 = &var_68
    
    if (rax_8 != 0)
        rcx_6 = rax_8
    
    (*rcx_6)[2](rcx_6, zmm1, arg5, arg6)

if (data_143de5452 != 0)
    void*** var_78_1 = nullptr
    var_68 = &data_142da2668
    void*** var_60_1 = arg1
    int64_t (* rax_10)(int64_t* arg1, char* arg2, int64_t* arg3, int512_t arg4 @ zmm1) =
        sub_140b9be70
    var_88 = sub_140b9be70
    
    if (&arg1[0x3a] != &var_88)
        arg5 = *(arg1 + 0x1d0)
        arg6 = *(arg1 + 0x1e0)
        zmm4_1 = *(arg1 + 0x1f0)
        zmm5_1 = *(arg1 + 0x200)
        *(arg1 + 0x1d0) = var_88.o
        zmm0_1 = var_68.o
        *(arg1 + 0x1e0) = var_78_1.o
        zmm1 = var_58
        *(arg1 + 0x1f0) = zmm0_1
        var_88.o = arg5
        rax_10 = var_88
        var_78_1.o = arg6
        rdi = var_78_1
        *(arg1 + 0x200) = zmm1
        var_68.o = zmm4_1
        int128_t var_58_1 = zmm5_1
    
    if (rax_10 != 0)
        void** const* rcx_7 = &var_68
        
        if (rdi != 0)
            rcx_7 = rdi
        
        void** const r8_3 = *rcx_7
        r8_3[2](rcx_7, zmm1, r8_3, arg6)

int64_t* rcx_8 = arg1[0x12]
int64_t r8_4 = *rcx_8
arg1[0x13] = (*(r8_4 + 8))(rcx_8, &arg1[0x24], r8_4, arg6)
__security_check_cookie(rax_1 ^ &var_b8)
return arg1
