// 函数: sub_140a03760
// 地址: 0x140a03760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = arg1
int64_t rbx = sx.q(arg1)
int32_t* rdx_2

if (arg2[1].d == *(arg2 + 0x34))
label_140a037dd:
    rdx_2 = nullptr
else
    void* r10_1 = arg2[8]
    void* r11_1 = &arg2[7]
    
    if (r10_1 != 0)
        r11_1 = r10_1
    
    int32_t rax_1 = *(r11_1 + (((sx.q(arg2[9].d) - 1) & rbx) << 2))
    
    if (rax_1 == 0xffffffff)
    label_140a037dd_1:
        rdx_2 = nullptr
    else
        while (true)
            rdx_2 = (sx.q(rax_1) << 4) + *arg2
            
            if (*rdx_2 == rbx.d)
                break
            
            rax_1 = rdx_2[2]
            
            if (rax_1 == 0xffffffff)
                goto label_140a037dd_2
        
        if (rax_1 == 0xffffffff)
        label_140a037dd_2:
            rdx_2 = nullptr

void* rax_2 = &rdx_2[1]

if (rdx_2 == 0)
    rax_2 = nullptr

if (rax_2 != 0)
    return zx.q(*rax_2)

int64_t rbx_1 = sx.q(arg4[1].d)
int64_t* r14_2 = zx.q(*(arg3 + 0xb8) * rbx.d) + *(arg3 + 0xb0)
int32_t rax_4 = (rbx_1 + 1).d
arg4[1].d = rax_4

if (rax_4 s> *(arg4 + 0xc))
    sub_140638a00(arg4)

uint128_t zmm0 = zx.o(*r14_2)
int64_t rcx_1 = rbx_1 * 3
int64_t rdx_4 = *arg4
uint64_t var_78 = 0
int32_t var_70 = 0
*(rdx_4 + (rcx_1 << 2)) = zmm0.q
*(rdx_4 + (rcx_1 << 2) + 8) = r14_2[1].d
bool cond:0 = *(arg3 + 0x81) == 0
uint64_t rax_6 = zx.q(arg_8)
int64_t rcx_2 = *(arg3 + 0x60)
int32_t var_94 = rbx_1.d
float zmm1[0x4]
uint128_t zmm2

if (cond:0)
    zmm1 = data_142dd3fd0
    zmm2 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(*(rcx_2 + (rax_6 << 3) + 4)), 0), 0)
    zmm1 = (zmm1 & __pcmpgtd_xmmdq_memdq(zmm2, data_142dd3f80)) | zmm2
    zmm2 = data_142dd3fb0
else
    zmm1 = data_142dd3fc0
    zmm2 = _mm_unpacklo_epi16(zx.o(*(rcx_2 + rax_6 * 0x10 + 8)), 0)
    zmm1 = (zmm1 & __pcmpgtd_xmmdq_memdq(zmm2, data_142dd3f90)) | zmm2
    zmm2 = data_142dd3fa0

zmm0 = _mm_cvtepi32_ps(zmm1)
int64_t rdi_1 = sx.q(arg5[1].d)
zmm2 = _mm_mul_ps(zmm2, zmm0)
int32_t rax_8 = (rdi_1 + 1).d
arg5[1].d = rax_8
var_78.o = zmm2
int32_t var_90 = var_78.d.d
int32_t var_88 = var_70.d
float var_8c = var_78:4.d[0]

if (rax_8 s> *(arg5 + 0xc))
    sub_140638a00(arg5)

int64_t rdx_6 = *arg5
int64_t rcx_4 = rdi_1 * 3
*(rdx_6 + (rcx_4 << 2)) = var_90.q
*(rdx_6 + (rcx_4 << 2) + 8) = var_88
uint64_t r14_3 = zx.q(arg_8)
int64_t rcx_5 = *(arg3 + 0x68)
uint64_t rax_10 = zx.q(*(arg3 + 0x78))
int32_t arg_10
int128_t zmm6
int128_t zmm7

if (*(arg3 + 0x80) == 0)
    int16_t* r14_5 = r14_3 * (rax_10 << 2) + rcx_5
    uint64_t rcx_6 = zx.q(data_14401b1a0)
    uint32_t rbx_3 = zx.d(r14_5[1])
    int32_t rdi_4 = (rbx_3 & 0xffff8000) << 0x10
    int16_t rax_13 = rbx_3.w & 0x7c00
    int32_t var_98_1
    TEB* gsbase
    
    if (rax_13 == 0)
        int32_t rbx_4 = rbx_3 & 0x3ff
        
        if (rbx_4 != 0)
            if (data_143cda914 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx_6 << 3))))
                _Init_thread_header(&data_143cda914)
                
                if (data_143cda914 == 0xffffffff)
                    data_143cda910 = 0x3fb8aa3b
                    _Init_thread_footer(&data_143cda914)
            
            zmm0.d = float.s(zx.q(rbx_4))
            zmm0.d = logf(zmm0.d).d f* data_143cda910
            rcx_6 = zx.q(data_14401b1a0)
            var_98_1 = (rbx_4 << ((0xa - int.d(zmm0.d)).b + 0xd) & 0x7fffff)
                | ((0x71 - (0xa - int.d(zmm0.d))) << 0x17 & 0x7f800000) | rdi_4
        else
            var_98_1 = rdi_4
    else if (rax_13 != 0x7c00)
        var_98_1 = ((rbx_3 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_3 & 0x3ff) << 0xd | rdi_4
    else
        var_98_1 = rdi_4 | 0x477fe000
    
    uint32_t rbx_11 = zx.d(*r14_5)
    int32_t rdi_8 = (rbx_11 & 0xffff8000) << 0x10
    int16_t rax_28 = rbx_11.w & 0x7c00
    
    if (rax_28 == 0)
        int32_t rbx_12 = rbx_11 & 0x3ff
        
        if (rbx_12 != 0)
            if (data_143cda914
                    s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(rcx_6.d) << 3))))
                _Init_thread_header(&data_143cda914)
                
                if (data_143cda914 == 0xffffffff)
                    data_143cda910 = 0x3fb8aa3b
                    _Init_thread_footer(&data_143cda914)
            
            zmm0.d = float.s(zx.q(rbx_12))
            zmm0.d = logf(zmm0.d).d f* data_143cda910
            arg_10 = (rbx_12 << ((0xa - int.d(zmm0.d)).b + 0xd) & 0x7fffff)
                | ((0x71 - (0xa - int.d(zmm0.d))) << 0x17 & 0x7f800000) | rdi_8
        else
            arg_10 = rdi_8
    else if (rax_28 != 0x7c00)
        arg_10 = ((rbx_11 u>> 0xa & 0x1f) + 0x70) << 0x17 | (rbx_11 & 0x3ff) << 0xd | rdi_8
    else
        arg_10 = rdi_8 | 0x477fe000
    
    zmm6 = arg_10
    zmm7 = var_98_1
else
    int64_t rax_11 = rax_10 * r14_3
    zmm6 = *(rcx_5 + (rax_11 << 3))
    zmm7 = *(rcx_5 + (rax_11 << 3) + 4)

int64_t rdi_10 = sx.q(arg6[1].d)
int32_t rax_40 = (rdi_10 + 1).d
arg6[1].d = rax_40

if (rax_40 s> *(arg6 + 0xc))
    sub_1405a4d70(arg6)

int64_t rax_41 = *arg6
*(rax_41 + (rdi_10 << 3)) = zmm6.d
*(rax_41 + (rdi_10 << 3) + 4) = zmm7.d
uint64_t rax_42 = zx.q(arg_8)
int64_t rcx_11 = *(arg3 + 0x60)
float zmm3[0x4]

if (*(arg3 + 0x81) == 0)
    zmm1 = _mm_unpacklo_epi16(_mm_unpacklo_epi8(zx.o(*(rcx_11 + (rax_42 << 3))), 0), 0)
    float temp0_17[0x4] = __mulps_xmmps_memps(
        _mm_cvtepi32_ps((__pcmpgtd_xmmdq_memdq(zmm1, data_142dd3f80) & data_142dd3fd0) | zmm1), 
        data_142dd3fb0)
    zmm2 = temp0_17
    zmm3 = _mm_shuffle_ps(temp0_17, temp0_17, 0x55)
    zmm1 = _mm_shuffle_ps(temp0_17, temp0_17, 0xaa)
else
    zmm1 = _mm_unpacklo_epi16(zx.o(*(rcx_11 + rax_42 * 0x10)), 0)
    zmm2 = __mulps_xmmps_memps(
        _mm_cvtepi32_ps((__pcmpgtd_xmmdq_memdq(zmm1, data_142dd3f90) & data_142dd3fc0) | zmm1), 
        data_142dd3fa0)
    zmm3 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
    zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)

int64_t rdi_11 = sx.q(arg7[1].d)
float var_70_1 = zmm1[0]
var_78 = (_mm_unpacklo_ps(zmm2, zmm3[0].q)).q
int32_t rax_45 = (rdi_11 + 1).d
char var_6c = 0
arg7[1].d = rax_45

if (rax_45 s> *(arg7 + 0xc))
    sub_1405a4f90(arg7)

*(*arg7 + rdi_11 * 0x10) = var_78.o
var_78 = &arg_8
var_70_1.q = &var_94
sub_1409fa3d0(arg2, &arg_10, &var_78, nullptr)
return zx.q(var_94)
