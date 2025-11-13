// 函数: sub_1406b8300
// 地址: 0x1406b8300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
*(arg1 + 0x400) = avcodec_find_encoder(zx.q(arg2))
void* rax_3 = avformat_new_stream(*(arg1 + 0x3f8), 0)
*(arg1 + 0x3c8) = rax_3
*(rax_3 + 4) = *(*(arg1 + 0x3f8) + 0x2c) - 1
void* rax_4 = avcodec_alloc_context3(*(arg1 + 0x400))
*(arg1 + 0x3d0) = rax_4
*(rax_4 + 0x18) = arg2
*(*(arg1 + 0x3d0) + 0x74) = *(arg1 + 0x3b8)
*(*(arg1 + 0x3d0) + 0x78) = *(arg1 + 0x3bc)
int32_t var_e4 = 0x3c
*(*(arg1 + 0x3d0) + 0x64) = 1.q
*(*(arg1 + 0x3c8) + 0x18) = *(*(arg1 + 0x3d0) + 0x64)
*(*(arg1 + 0x3d0) + 0x84) = 0x1e
*(*(arg1 + 0x3d0) + 0x338) = 0x1f
*(*(arg1 + 0x3d0) + 0xa0) = 2
void* rsi = nullptr
*(*(arg1 + 0x3d0) + 0x88) = 0
int64_t rax_14 = sx.q(*(arg1 + 0x360))

if (rax_14.d s> 0)
    *(*(arg1 + 0x3d0) + 0x38) = rax_14
    av_opt_set_int(*(*(arg1 + 0x3d0) + 0x20), "bitrate", sx.q(*(arg1 + 0x360)), 0)
    av_opt_set_int(*(*(arg1 + 0x3d0) + 0x20), &data_142d8d918, sx.q(*(arg1 + 0x360)), 0)
    av_opt_set_int(*(*(arg1 + 0x3d0) + 0x20), "minrate", sx.q(*(arg1 + 0x360)), 0)
    av_opt_set_int(*(*(arg1 + 0x3d0) + 0x20), "maxrate", sx.q(*(arg1 + 0x360)), 0)

int16_t* const rbp = &data_142d40450
int16_t* r14

if (*(arg1 + 0x370) == 0)
    r14 = &data_142d40450
else
    r14 = *(arg1 + 0x368)

void* rdx_2 = nullptr
void* var_58 = nullptr
int64_t rbx_1 = -1
char var_f8
void var_d8
void* r8_6

if (r14 == 0)
    r8_6 = nullptr
    int64_t var_50_1 = 0
    int32_t var_48_1 = 0
else
    int64_t rax_16 = -1
    
    do
        rax_16 += 1
    while (r14[rax_16] != 0)
    
    int32_t var_48 = rax_16.d
    int32_t r15_1 = (rax_16 + 1).d
    
    if (r15_1 u> 0x80 && r15_1 != 0)
        void* rax_17 = sub_140a84c80(0, sx.q(r15_1), 0)
        rdx_2 = rax_17
        var_58 = rax_17
    
    void* rcx_17 = &var_d8
    
    if (rdx_2 != 0)
        rcx_17 = rdx_2
    
    var_f8 = 0x3f
    sub_14060abb0(rcx_17, r15_1, r14, r15_1, var_f8)
    r8_6 = rcx_17

av_opt_set(*(*(arg1 + 0x3d0) + 0x20), "preset", r8_6, 0, var_f8)

if (var_58 != 0)
    sub_140a74f90(var_58)

if (*(arg1 + 0x380) != 0)
    rbp = *(arg1 + 0x378)

void* var_58_1 = nullptr

if (rbp == 0)
    int64_t var_50_3 = 0
    int32_t var_48_3 = 0
else
    do
        rbx_1 += 1
    while (rbp[rbx_1] != 0)
    
    int32_t var_48_2 = rbx_1.d
    
    if (rbx_1.d + 1 u> 0x80 && rbx_1.d != 0xffffffff)
        void* rax_19 = sub_140a84c80(0, sx.q(rbx_1.d + 1), 0)
        rsi = rax_19
        var_58_1 = rax_19
    
    void* rcx_20 = &var_d8
    
    if (rsi != 0)
        rcx_20 = rsi
    
    var_f8 = 0x3f
    sub_14060abb0(rcx_20, rbx_1.d + 1, rbp, rbx_1.d + 1, var_f8)
    rsi = rcx_20

av_opt_set(*(*(arg1 + 0x3d0) + 0x20), "tune", rsi, 0, var_f8)

if (var_58_1 != 0)
    sub_140a74f90(var_58_1)

av_opt_set(*(*(arg1 + 0x3d0) + 0x20), "x264-params", "no-scenecut", 0)
int64_t rax_21 = sx.q(*(arg1 + 0x35c))

if (rax_21.d u<= 0x33)
    av_opt_set_int(*(*(arg1 + 0x3d0) + 0x20), &data_1437024d8, rax_21, 0)

void* result = *(arg1 + 0x3f8)

if ((*(*(result + 0x10) + 0x2c) & 0x40) != 0)
    result = *(arg1 + 0x3d0)
    *(result + 0x4c) |= 0x400000

__security_check_cookie(rax_1 ^ &var_118)
return result
