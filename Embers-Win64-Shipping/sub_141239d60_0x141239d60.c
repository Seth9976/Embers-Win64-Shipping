// 函数: sub_141239d60
// 地址: 0x141239d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_20 = arg4
void* r12 = *(arg2 + 0x1a0)
void* r14 = arg4
uint64_t rdx = zx.q(arg3[0x2a9].d)
int32_t rdi = 0
int64_t rax = *arg5
void* arg_18 = r12
int64_t arg_8 = 0
int32_t var_160 = 0xf
uint128_t count_7
float zmm7[0x4]
float zmm8[0x4]
uint128_t zmm9
int128_t zmm10
float zmm12[0x4]
float zmm13[0x4]
float zmm14[0x4]
uint128_t zmm15
count_7, zmm7, zmm8, zmm9, zmm10, zmm12, zmm13, zmm14, zmm15 =
    sub_141439db0(arg1, arg2, r12, arg5, (*(rax + 0x40))(arg5, rdx, &arg_8), arg3, arg3.d + 0x10)
float count_5[0x4] = 0x3f800000
uint64_t count_2
uint128_t count_3
float count_8[0x4]

if (*(arg1 + 0x134) u> 0)
    void* rcx_3 = *(r14 + 0x20)
    float count_4[0x4] = 0x3f800000
    float var_68_1[0x4] = zmm7
    count_8 = 0x3f800000
    float var_78_1[0x4] = zmm8
    float zmm5_1[0x4] = 0x3f800000
    zmm8 = data_142d3f660
    count_3 = zx.o(*(rcx_3 + 0x110))
    int32_t rax_2 = *(rcx_3 + 0x118)
    count_4[0] = 1f f/ count_3.d
    int64_t var_11c_1 = 0
    int64_t var_108_1 = 0
    int32_t var_fc_1 = 0
    int64_t var_110_1 = 0
    int64_t var_124_1 = 0
    uint128_t count_9 = *(rcx_3 + 0x40)
    zmm5_1[0] = 1f f/ rax_2
    float count_12[0x4] = var_108_1.o
    zmm7 = var_11c_1:4.o
    count_8[0] = 1f f/ _mm_shuffle_ps(count_3, count_3, 0x55).d
    uint128_t var_88_1 = zmm9
    count_7 = _mm_shuffle_ps(count_9, count_9, 0xaa)
    zmm9 = _mm_shuffle_ps(count_9, count_9, 0)
    count_2 = count_3.q
    count_3 = _mm_shuffle_ps(count_9, count_9, 0x55)
    count_9 = _mm_mul_ps(_mm_shuffle_ps(count_9, count_9, 0xff), zmm8)
    int128_t var_98_1 = zmm10
    float temp0_7[0x4] = _mm_shuffle_ps(count_12, count_12, 0xd2)
    temp0_7[0] = count_4[0]
    float temp0_8[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0xe1)
    float count_6[0x4]
    count_4 = count_6
    temp0_8[0] = count_8[0]
    float temp0_9[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xe1)
    count_4[0] = zmm5_1[0]
    count_3 = _mm_mul_ps(count_3, temp0_9)
    float temp0_11[0x4] = _mm_shuffle_ps(temp0_7, temp0_7, 0xc9)
    count_7 = _mm_mul_ps(count_7, temp0_11)
    float var_b8_1[0x4] = zmm12
    var_11c_1:4.o = temp0_9
    var_108_1.o = temp0_11
    zmm9 = _mm_add_ps(_mm_mul_ps(zmm9, count_4), count_3)
    count_6 = count_4
    count_8 = *(rcx_3 + 0x50)
    float var_c8_1[0x4] = zmm13
    count_3 = _mm_mul_ps(_mm_shuffle_ps(count_8, count_8, 0x55), temp0_9)
    zmm9 = _mm_add_ps(zmm9, count_7)
    float var_d8_1[0x4] = zmm14
    uint128_t var_e8_1 = zmm15
    count_7 = _mm_mul_ps(_mm_shuffle_ps(count_8, count_8, 0xaa), temp0_11)
    zmm9 = _mm_add_ps(zmm9, count_9)
    count_9 = _mm_mul_ps(_mm_shuffle_ps(count_8, count_8, 0), count_4)
    float temp0_24[0x4] = _mm_mul_ps(_mm_shuffle_ps(count_8, count_8, 0xff), zmm8)
    uint128_t var_138_1 = zmm9
    count_9 = _mm_add_ps(_mm_add_ps(_mm_add_ps(count_9, count_3), count_7), temp0_24)
    count_8 = *(rcx_3 + 0x60)
    count_3 = _mm_shuffle_ps(count_8, count_8, 0x55)
    count_7 = _mm_shuffle_ps(count_8, count_8, 0xaa)
    count_3 = _mm_mul_ps(count_3, temp0_9)
    count_2.o = count_9
    count_9 = _mm_shuffle_ps(count_8, count_8, 0)
    count_7 = _mm_mul_ps(count_7, temp0_11)
    zmm15 = *(rcx_3 + 0x70)
    int32_t rdx_2 = *(arg3 + 0x159c)
    int32_t rcx_4 = arg3[0x2b3].d
    int32_t rax_4 = *(arg3 + 0x15a4) - rdx_2
    zmm5_1 = data_142d4cc30
    float temp0_34[0x4] = _mm_mul_ps(_mm_shuffle_ps(count_8, count_8, 0xff), zmm8)
    int64_t var_11c_2 = 0
    int64_t var_124_2 = 0
    zmm10.d = float.s(rdx_2)
    int64_t var_110_2 = 0
    int32_t var_f0_1 = 0
    int32_t var_ec_1 = 0x3f800000
    count_9 = _mm_add_ps(_mm_mul_ps(count_9, count_4), count_3)
    zmm10.d = zmm10.d f+ zmm10.d
    count_3 = _mm_mul_ps(_mm_shuffle_ps(zmm15, zmm15, 0x55), temp0_9)
    zmm7 = *(arg3 + 0x410)
    count_9 = _mm_add_ps(count_9, count_7)
    count_7 = _mm_mul_ps(_mm_shuffle_ps(zmm15, zmm15, 0xaa), temp0_11)
    count_12 = *(arg3 + 0x420)
    count_9 = _mm_add_ps(count_9, temp0_34)
    float temp0_44[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm15, zmm15, 0), count_4)
    zmm15 = _mm_mul_ps(_mm_shuffle_ps(zmm15, zmm15, 0xff), zmm8)
    zmm8 = *(arg3 + 0x430)
    uint128_t count_11 = count_9
    float temp0_48[0x4] = _mm_add_ps(_mm_add_ps(temp0_44, count_3), count_7)
    count_7.d = float.s(rax_4)
    int32_t rax_6 = arg3[0x2b4].d - rcx_4
    zmm15 = _mm_add_ps(zmm15, temp0_48)
    count_8 = 0x3f800000
    count_8[0] = 1f f/ count_7.d
    count_7.d = float.s(rax_6)
    count_9 = count_8
    zmm10.d = zmm10.d f* count_8[0]
    count_8 = count_6
    count_9.d = count_9.d f* -2f
    count_3.d = 1f f/ count_7.d
    zmm10.d = zmm10.d f+ 1f
    count_7.d = float.s(rcx_4)
    count_4 = count_3
    count_4[0] = count_4[0] f+ count_3.d
    count_7.d = count_7.d f+ count_7.d
    count_8[0] = count_4[0]
    count_4 = *(arg3 + 0x400)
    count_7.d = count_7.d f* count_3.d
    float temp0_50[0x4] = _mm_shuffle_ps(count_8, count_8, 0)
    count_3 = _mm_shuffle_ps(count_8, count_8, 0x55)
    count_6 = count_8
    zmm9.d = -1f f- count_7.d
    float temp0_52[0x4] = _mm_mul_ps(temp0_50, count_4)
    count_7 = _mm_shuffle_ps(count_8, count_8, 0xaa)
    float temp0_55[0x4] = _mm_mul_ps(_mm_shuffle_ps(count_8, count_8, 0xff), zmm8)
    count_3 = _mm_mul_ps(count_3, zmm7)
    count_7 = _mm_mul_ps(count_7, count_12)
    float temp0_60[0x4] = _mm_add_ps(_mm_add_ps(_mm_add_ps(temp0_52, count_3), count_7), temp0_55)
    count_8 = var_11c_2:4.o
    float temp0_61[0x4] = _mm_shuffle_ps(count_8, count_8, 0xe1)
    temp0_61[0] = count_9.d
    float temp0_62[0x4] = _mm_shuffle_ps(temp0_61, temp0_61, 0xe1)
    float var_f8[0x4]
    var_f8[0] = zmm9.d
    var_11c_2:4.o = temp0_62
    float temp0_63[0x4] = _mm_shuffle_ps(temp0_62, temp0_62, 0)
    count_3 = _mm_shuffle_ps(temp0_62, temp0_62, 0x55)
    count_7 = _mm_mul_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0xaa), count_12)
    count_3 = _mm_mul_ps(count_3, zmm7)
    float temp0_69[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0xff), zmm8)
    float temp0_70[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0)
    float temp0_71[0x4] = _mm_mul_ps(temp0_63, count_4)
    float temp0_72[0x4] = _mm_mul_ps(temp0_70, count_4)
    float temp0_73[0x4] = _mm_shuffle_ps(var_f8, var_f8, 0xe1)
    float temp0_74[0x4] = _mm_add_ps(temp0_71, count_3)
    temp0_73[0] = zmm10.d
    float temp0_75[0x4] = _mm_shuffle_ps(temp0_73, temp0_73, 0xe1)
    count_3 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0x55), zmm7)
    float temp0_78[0x4] = _mm_add_ps(temp0_74, count_7)
    float var_f8_1[0x4] = temp0_75
    count_7 = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa), count_12)
    float temp0_81[0x4] = _mm_add_ps(temp0_72, count_3)
    float temp0_82[0x4] = _mm_add_ps(temp0_78, temp0_69)
    float temp0_84[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xff), zmm8)
    float temp0_85[0x4] = _mm_add_ps(temp0_81, count_7)
    count_3 = _mm_mul_ps(_mm_shuffle_ps(temp0_75, temp0_75, 0x55), zmm7)
    zmm7 = count_2.o
    count_7 = _mm_shuffle_ps(temp0_75, temp0_75, 0xaa)
    float temp0_89[0x4] = _mm_shuffle_ps(temp0_75, temp0_75, 0)
    float temp0_90[0x4] = _mm_add_ps(temp0_85, temp0_84)
    count_7 = _mm_mul_ps(count_7, count_12)
    count_12 = count_11
    float temp0_92[0x4] = _mm_mul_ps(temp0_89, count_4)
    float temp0_94[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_75, temp0_75, 0xff), zmm8)
    zmm8 = var_138_1
    float temp0_95[0x4] = _mm_add_ps(temp0_92, count_3)
    float temp0_97[0x4] = _mm_mul_ps(zmm8, _mm_shuffle_ps(temp0_60, temp0_60, 0))
    count_9 = _mm_shuffle_ps(temp0_82, temp0_82, 0)
    float temp0_99[0x4] = _mm_add_ps(temp0_95, count_7)
    count_7 = _mm_shuffle_ps(temp0_60, temp0_60, 0x55)
    float temp0_101[0x4] = _mm_add_ps(temp0_94, temp0_99)
    float temp0_102[0x4] = _mm_mul_ps(zmm7, count_7)
    count_3 = _mm_mul_ps(count_12, _mm_shuffle_ps(temp0_60, temp0_60, 0xaa))
    float temp0_105[0x4] = _mm_add_ps(temp0_97, temp0_102)
    count_7 = _mm_mul_ps(zmm15, _mm_shuffle_ps(temp0_60, temp0_60, 0xff))
    float temp0_109[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_82, temp0_82, 0x55), zmm7)
    float count_10[0x4] = _mm_add_ps(_mm_add_ps(temp0_105, count_3), count_7)
    count_3 = _mm_mul_ps(count_12, _mm_shuffle_ps(temp0_82, temp0_82, 0xaa))
    float temp0_113[0x4] = _mm_shuffle_ps(temp0_82, temp0_82, 0xff)
    uint32_t count = zx.d(*(arg1 + 0x134))
    count_7 = _mm_mul_ps(zmm15, temp0_113)
    
    if (count u>= 0x40)
        count = 0x40
    
    float temp0_115[0x4] = _mm_shuffle_ps(temp0_90, temp0_90, 0)
    count_9 = _mm_mul_ps(count_9, zmm8)
    arg5.d = count
    float temp0_117[0x4] = _mm_mul_ps(temp0_115, zmm8)
    count_6 = count_10
    count_9 = _mm_add_ps(count_9, temp0_109)
    float temp0_120[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_90, temp0_90, 0x55), zmm7)
    count_9 = _mm_add_ps(count_9, count_3)
    float temp0_122[0x4] = _mm_add_ps(temp0_117, temp0_120)
    float temp0_124[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_101, temp0_101, 0), zmm8)
    count_9 = _mm_add_ps(count_9, count_7)
    count_3 = _mm_mul_ps(count_12, _mm_shuffle_ps(temp0_90, temp0_90, 0xaa))
    count_7 = _mm_mul_ps(zmm15, _mm_shuffle_ps(temp0_90, temp0_90, 0xff))
    float temp0_130[0x4] = _mm_add_ps(temp0_122, count_3)
    var_11c_2:4.o = count_9
    count_3 = _mm_mul_ps(_mm_shuffle_ps(temp0_101, temp0_101, 0x55), zmm7)
    float temp0_133[0x4] = _mm_add_ps(temp0_130, count_7)
    count_7 = _mm_shuffle_ps(temp0_101, temp0_101, 0xaa)
    float temp0_135[0x4] = _mm_shuffle_ps(temp0_101, temp0_101, 0xff)
    float temp0_136[0x4] = _mm_add_ps(temp0_124, count_3)
    float temp0_137[0x4] = _mm_mul_ps(temp0_135, zmm15)
    count_7 = _mm_mul_ps(count_7, count_12)
    var_108_1.o = temp0_133
    float var_f8_2[0x4] = _mm_add_ps(_mm_add_ps(temp0_136, count_7), temp0_137)
    
    if (count != 0)
        uint32_t rcx_5 = zx.d(*(arg1 + 0x132))
        int64_t rbx_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
        arg_8.d = zx.d(*(arg1 + 0x130))
        uint64_t count_1 = zx.q(count)
        count_2 = count_1
        int64_t rcx_7 = count_1 + rbx_3
        
        if (rcx_7 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, count + 0x10)
            count = arg5.d
            rbx_3 = (*(arg2 + 0x30) + 0xf) & 0xfffffffffffffff0
            rcx_7 = count_2 + rbx_3
        
        *(arg2 + 0x30) = rcx_7
        count_7 = memcpy(rbx_3, &count_6, count)
        void*** rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_7 = &rcx_13[6]
        
        if (rax_7 u> *(arg2 + 0x38))
            count_7 = sub_140b0e3d0(arg2 + 0x30, 0x38)
            rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_7 = &rcx_13[6]
        
        *(arg2 + 0x30) = rax_7
        void**** rax_8 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        r14 = arg_20
        *rax_8 = rcx_13
        *(arg2 + 8) = &rcx_13[1]
        rcx_13[1] = 0
        *rcx_13 = &data_142d549d8
        rcx_13[4].d = arg_8.d
        *(rcx_13 + 0x24) = rcx_5
        rcx_13[5].d = arg5.d
        rcx_13[2] = r12
        rcx_13[3] = rbx_3
    
    count_5 = 0x3f800000

int64_t* rcx_17 = *(r14 + 0x20)
arg_20 = r12
char rbx_6 = *(rcx_17 + 0x13c)

if (rbx_6 != 2)
    count_7 = count_5
    
    if (rbx_6 != 1)
        count_8 = zx.o(0)
    else
        count_8 = count_5
else
    (*(*rcx_17 + 0x20))()
    count_7 = tanf(count_7.d)
    count_8 = zx.o(0)

if (rbx_6 != 2)
    count_3 = zx.o(0)
else
    count_3 = count_5

count_2.d = count_7.d
count_2:4.d = arg6.d
int32_t var_150_2 = count_3.d
float var_14c = count_8[0]
sub_1405d0e10(arg2, &arg_20, arg1 + 0x136, &count_2, 0)
int16_t result_1

if (result_1.b == 0)
    count_5 = zx.o(0)

void* rax_14 = *(r14 + 0x20)
count_2.d = *(rax_14 + 0x11c)
count_2:4.d = *(rax_14 + 0x120)
float var_150_3 = count_5[0]
sub_1405d0f50(arg2, &arg_18, arg1 + 0x13c, &count_2, 0)
int32_t r8_5 = arg3[0x2a9].d

if (*(arg1 + 0x142) != 0xffff)
    void** rcx_20 = &arg_20
    
    if (r8_5 s< 3)
        sub_14137b7f0(rcx_20, arg2)
    else
        sub_14137baa0(rcx_20, arg2, 0xf, r8_5)
    
    sub_141083500(arg2, &arg_18, arg1 + 0x142, arg_20)
    sub_1405d1550(&arg_20)

int64_t r11 = sx.q(*(arg1 + 0xe0))

if (r11 s> 0)
    int64_t rdx_9 = 0
    
    while (true)
        void* rcx_24 = *(arg1 + 0xd8)
        
        if ((*(arg1 + 0xd8) & 1) != 0)
            rcx_24 = (rcx_24 s>> 1) + arg1 + 0xd8
        
        if (*(rcx_24 + (rdx_9 << 3)) == data_143e83070)
            break
        
        rdi += 1
        rdx_9 += 1
        
        if (rdx_9 s>= r11)
            goto label_14123a5dd

void* rdx_10

if (r11 s<= 0 || rdi == 0xffffffff)
label_14123a5dd:
    TEB* gsbase
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    rdx_10 = &data_143ce8560
else
    void* rcx_28 = *(arg1 + 0xe8)
    
    if ((rcx_28.b & 1) != 0)
        rcx_28 = (rcx_28 s>> 1) + arg1 + 0xe8
    
    rdx_10 = rcx_28 + (sx.q(rdi) << 1)

int16_t result = *rdx_10
result_1 = result

if (result == 0xffff)
    return result

return sub_1412155b0(arg2, r12, &result_1, r14, arg3.d)
