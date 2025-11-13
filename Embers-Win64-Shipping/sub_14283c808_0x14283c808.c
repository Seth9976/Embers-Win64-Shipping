// 函数: sub_14283c808
// 地址: 0x14283c808
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm2 = *(arg1 + 0xdc0)
void* r9 = arg1
uint64_t r10 = 0
int64_t rdx = *(arg1 + 0xdc8)
float zmm3 = *(arg1 + 0xdb4)
float zmm4 = *(arg1 + 0xdc4)
int64_t rcx = 0
int64_t rbx = *(*(arg1 + 0xd98) + 0x40)
int64_t var_58 = rdx
uint128_t zmm1
zmm1.q = _mm_cvtps_pd(zmm2.q).q f- _mm_cvtepi32_pd(zx.q(int.d(zmm2.d))).q
zmm1.q = zmm1.q f* 4294967296.0

if (not(zmm2.d f< 9.22337204e+18f))
    zmm2.d = zmm2.d f- 9.22337204e+18f
    
    if (not(zmm2.d f>= 9.22337204e+18f))
        rcx = -0x8000000000000000

int64_t r13_2 = zx.q((int.q(zmm1.q)).d) | (int.q(zmm2.d) + rcx) << 0x20
int64_t rdi_1 = *(r9 + 0xdb8) - -0x80000000
int32_t rax_5 = int.d(fconvert.t(*(r9 + 0x6d8)))
int64_t var_50
int32_t rcx_1
int32_t r14

if (rax_5 == 1 || (rax_5 == 3 && *(r9 + 0xe84) s< 5))
    rcx_1 = 1
    var_50 = 1
    r14 = *(r9 + 0xdec) - 1
else
    r14 = *(r9 + 0xde4)
    rcx_1 = 0
    var_50 = 0

int32_t var_60 = r14
int16_t var_66
int16_t arg_20
uint64_t rsi
int16_t r15

if (*(r9 + 0xd94) == 0)
    rsi = sx.q(*(r9 + 0xde0))
    r15 = *(rbx + (rsi << 1))
    arg_20 = r15
    var_66 = r15
else
    int64_t rax_6 = sx.q(*(r9 + 0xdec))
    rsi = zx.q(*(r9 + 0xde8))
    r15 = *(rbx + (rax_6 << 1) - 2)
    arg_20 = *(rbx + (rax_6 << 1) - 4)
    rdx = var_58
    var_66 = *(rbx + (rax_6 << 1) - 6)

int16_t arg_10 = r15
int16_t var_68
int16_t var_64
int16_t r12

if (rcx_1 == 0)
    r12 = *(rbx + (sx.q(*(r9 + 0xde4)) << 1))
    var_68 = r12
    var_64 = r12
else
    int64_t rax_7 = sx.q(*(r9 + 0xde8))
    r12 = *(rbx + (rax_7 << 1))
    var_64 = *(rbx + (rax_7 << 1) + 4)
    var_68 = *(rbx + (rax_7 << 1) + 2)

int16_t arg_18 = r12

while (true)
    int32_t rbp_1 = rsi.d
    uint32_t i = (rdi_1 u>> 0x20).d
    uint128_t zmm0
    
    if (i == rsi.d)
        while (r10.d u< 0x40)
            uint64_t rax_10 = zx.q(rdi_1.d)
            rdi_1 += r13_2
            zmm2 = _mm_cvtepi32_ps(zx.o(sx.d(arg_20)))
            zmm0 = _mm_cvtepi32_ps(zx.o(sx.d(var_66)))
            zmm2.d = zmm2.d f* *((rax_10 u>> 0x18) * 0x1c + 0x143fe91f4)
            zmm0.d = zmm0.d f* *((rax_10 u>> 0x18) * 0x1c + &data_143fe91f0)
            zmm2.d = zmm2.d f+ zmm0.d
            zmm1 = _mm_cvtepi32_ps(zx.o(sx.d(r15)))
            int32_t rax_15 = sx.d(*(rbx + (zx.q(i + 1) << 1)))
            zmm1.d = zmm1.d f* *((rax_10 u>> 0x18) * 0x1c + 0x143fe91f8)
            zmm2.d = zmm2.d f+ zmm1.d
            zmm0.d = _mm_cvtepi32_ps(zx.o(sx.d(*(rbx + (zx.q(i) << 1))))).d f*
                *((rax_10 u>> 0x18) * 0x1c + 0x143fe91fc)
            zmm2.d = zmm2.d f+ zmm0.d
            zmm0.d = _mm_cvtepi32_ps(zx.o(rax_15)).d f* *((rax_10 u>> 0x18) * 0x1c + 0x143fe9200)
            zmm2.d = zmm2.d f+ zmm0.d
            zmm0.d = _mm_cvtepi32_ps(zx.o(sx.d(*(rbx + (zx.q(i + 2) << 1))))).d f*
                *((rax_10 u>> 0x18) * 0x1c + 0x143fe9204)
            zmm2.d = zmm2.d f+ zmm0.d
            zmm0 = _mm_cvtepi32_ps(zx.o(sx.d(*(rbx + (zx.q(i + 3) << 1)))))
            uint32_t i_1 = (rdi_1 u>> 0x20).d
            i = i_1
            zmm0.d = zmm0.d f* *((rax_10 u>> 0x18) * 0x1c + 0x143fe9208)
            rdx = var_58
            zmm2.d = zmm2.d f+ zmm0.d
            zmm2.d = zmm2.d f* zmm3
            zmm3 = zmm3 + zmm4
            *(rdx + (r10 << 2)) = zmm2.d
            r10 = zx.q(r10.d + 1)
            
            if (i_1 != rsi.d)
                break
        
        r9 = arg1
        r14 = var_60
        r12 = arg_18
    
    if (i == rsi.d + 1)
        while (r10.d u< 0x40)
            uint64_t rax_21 = zx.q(rdi_1.d)
            rdi_1 += r13_2
            zmm0.d = _mm_cvtepi32_ps(zx.o(sx.d(arg_20))).d f*
                *((rax_21 u>> 0x18) * 0x1c + &data_143fe91f0)
            int32_t rax_25 = sx.d(*(rbx + (zx.q(i - 1) << 1)))
            zmm1.d = _mm_cvtepi32_ps(zx.o(sx.d(r15))).d f* *((rax_21 u>> 0x18) * 0x1c + 0x143fe91f4)
            zmm1.d = zmm1.d f+ zmm0.d
            zmm0.d = _mm_cvtepi32_ps(zx.o(rax_25)).d f* *((rax_21 u>> 0x18) * 0x1c + 0x143fe91f8)
            int32_t rax_28 = sx.d(*(rbx + (zx.q(i + 1) << 1)))
            zmm1.d = zmm1.d f+ zmm0.d
            zmm0.d = _mm_cvtepi32_ps(zx.o(sx.d(*(rbx + (zx.q(i) << 1))))).d f*
                *((rax_21 u>> 0x18) * 0x1c + 0x143fe91fc)
            zmm1.d = zmm1.d f+ zmm0.d
            zmm0.d = _mm_cvtepi32_ps(zx.o(rax_28)).d f* *((rax_21 u>> 0x18) * 0x1c + 0x143fe9200)
            zmm1.d = zmm1.d f+ zmm0.d
            zmm0.d = _mm_cvtepi32_ps(zx.o(sx.d(*(rbx + (zx.q(i + 2) << 1))))).d f*
                *((rax_21 u>> 0x18) * 0x1c + 0x143fe9204)
            zmm1.d = zmm1.d f+ zmm0.d
            zmm0 = _mm_cvtepi32_ps(zx.o(sx.d(*(rbx + (zx.q(i + 3) << 1)))))
            uint32_t i_2 = (rdi_1 u>> 0x20).d
            i = i_2
            zmm0.d = zmm0.d f* *((rax_21 u>> 0x18) * 0x1c + 0x143fe9208)
            rdx = var_58
            zmm1.d = zmm1.d f+ zmm0.d
            zmm1.d = zmm1.d f* zmm3
            zmm3 = zmm3 + zmm4
            *(rdx + (r10 << 2)) = zmm1.d
            r10 = zx.q(r10.d + 1)
            
            if (i_2 != rsi.d + 1)
                break
        
        r9 = arg1
        r12 = arg_18
    
    if (i == rsi.d + 2)
        while (r10.d u< 0x40)
            uint64_t rax_34 = zx.q(rdi_1.d)
            rdi_1 += r13_2
            zmm1 = _mm_cvtepi32_ps(zx.o(sx.d(*(rbx + (zx.q(i - 2) << 1)))))
            int32_t rax_40 = sx.d(*(rbx + (zx.q(i - 1) << 1)))
            zmm1.d = zmm1.d f* *((rax_34 u>> 0x18) * 0x1c + 0x143fe91f4)
            zmm0.d =
                _mm_cvtepi32_ps(zx.o(sx.d(r15))).d f* *((rax_34 u>> 0x18) * 0x1c + &data_143fe91f0)
            zmm1.d = zmm1.d f+ zmm0.d
            zmm0.d = _mm_cvtepi32_ps(zx.o(rax_40)).d f* *((rax_34 u>> 0x18) * 0x1c + 0x143fe91f8)
            int32_t rax_43 = sx.d(*(rbx + (zx.q(i + 1) << 1)))
            zmm1.d = zmm1.d f+ zmm0.d
            zmm0.d = _mm_cvtepi32_ps(zx.o(sx.d(*(rbx + (zx.q(i) << 1))))).d f*
                *((rax_34 u>> 0x18) * 0x1c + 0x143fe91fc)
            zmm1.d = zmm1.d f+ zmm0.d
            zmm0.d = _mm_cvtepi32_ps(zx.o(rax_43)).d f* *((rax_34 u>> 0x18) * 0x1c + 0x143fe9200)
            zmm1.d = zmm1.d f+ zmm0.d
            zmm0.d = _mm_cvtepi32_ps(zx.o(sx.d(*(rbx + (zx.q(i + 2) << 1))))).d f*
                *((rax_34 u>> 0x18) * 0x1c + 0x143fe9204)
            zmm1.d = zmm1.d f+ zmm0.d
            zmm0 = _mm_cvtepi32_ps(zx.o(sx.d(*(rbx + (zx.q(i + 3) << 1)))))
            uint32_t i_3 = (rdi_1 u>> 0x20).d
            i = i_3
            zmm0.d = zmm0.d f* *((rax_34 u>> 0x18) * 0x1c + 0x143fe9208)
            rdx = var_58
            zmm1.d = zmm1.d f+ zmm0.d
            zmm1.d = zmm1.d f* zmm3
            zmm3 = zmm3 + zmm4
            *(rdx + (r10 << 2)) = zmm1.d
            r10 = zx.q(r10.d + 1)
            
            if (i_3 != rsi.d + 2)
                break
        
        r12 = arg_18
    
    rsi = zx.q(rbp_1)
    
    if (r10.d u>= 0x40)
    label_14283cdb1:
        *(r9 + 0xdb4) = zmm3
        *(r9 + 0xdb8) = rdi_1 - 0x80000000
        return zx.q(r10.d)
    
    int32_t* r8_2 = rdx + (r10 << 2)
    
    while (i u<= r14 - 3)
        r10 = zx.q(r10.d + 1)
        uint64_t rax_50 = zx.q(rdi_1.d) u>> 0x18
        rdi_1 += r13_2
        int32_t rax_54 = sx.d(*(rbx + (zx.q(i - 3) << 1)))
        zmm1 = _mm_cvtepi32_ps(zx.o(sx.d(*(rbx + (zx.q(i - 2) << 1)))))
        int32_t rax_56 = sx.d(*(rbx + (zx.q(i - 1) << 1)))
        zmm1.d = zmm1.d f* *(rax_50 * 0x1c + 0x143fe91f4)
        zmm0.d = _mm_cvtepi32_ps(zx.o(rax_54)).d f* *(rax_50 * 0x1c + &data_143fe91f0)
        zmm1.d = zmm1.d f+ zmm0.d
        zmm0.d = _mm_cvtepi32_ps(zx.o(rax_56)).d f* *(rax_50 * 0x1c + 0x143fe91f8)
        int32_t rax_59 = sx.d(*(rbx + (zx.q(i + 1) << 1)))
        zmm1.d = zmm1.d f+ zmm0.d
        zmm0.d =
            _mm_cvtepi32_ps(zx.o(sx.d(*(rbx + (zx.q(i) << 1))))).d f* *(rax_50 * 0x1c + 0x143fe91fc)
        zmm1.d = zmm1.d f+ zmm0.d
        zmm0.d = _mm_cvtepi32_ps(zx.o(rax_59)).d f* *(rax_50 * 0x1c + 0x143fe9200)
        zmm1.d = zmm1.d f+ zmm0.d
        zmm0 = _mm_cvtepi32_ps(zx.o(sx.d(*(rbx + (zx.q(i + 2) << 1)))))
        int32_t rax_63 = sx.d(*(rbx + (zx.q(i + 3) << 1)))
        i = (rdi_1 u>> 0x20).d
        zmm0.d = zmm0.d f* *(rax_50 * 0x1c + 0x143fe9204)
        zmm1.d = zmm1.d f+ zmm0.d
        zmm0.d = _mm_cvtepi32_ps(zx.o(rax_63)).d f* *(rax_50 * 0x1c + 0x143fe9208)
        zmm1.d = zmm1.d f+ zmm0.d
        zmm1.d = zmm1.d f* zmm3
        zmm3 = zmm3 + zmm4
        *r8_2 = zmm1.d
        r8_2 = &r8_2[1]
        
        if (r10.d u>= 0x40)
            goto label_14283cdb1
    
    if (i u<= r14 - 2)
        while (r10.d u< 0x40)
            uint64_t rax_65 = zx.q(rdi_1.d)
            rdi_1 += r13_2
            int32_t rax_70 = sx.d(*(rbx + (zx.q(i - 3) << 1)))
            zmm2 = _mm_cvtepi32_ps(zx.o(sx.d(*(rbx + (zx.q(i - 2) << 1)))))
            int32_t rax_72 = sx.d(*(rbx + (zx.q(i - 1) << 1)))
            zmm2.d = zmm2.d f* *((rax_65 u>> 0x18) * 0x1c + 0x143fe91f4)
            zmm0.d =
                _mm_cvtepi32_ps(zx.o(rax_70)).d f* *((rax_65 u>> 0x18) * 0x1c + &data_143fe91f0)
            zmm2.d = zmm2.d f+ zmm0.d
            zmm0.d = _mm_cvtepi32_ps(zx.o(rax_72)).d f* *((rax_65 u>> 0x18) * 0x1c + 0x143fe91f8)
            int32_t rax_75 = sx.d(*(rbx + (zx.q(i + 1) << 1)))
            zmm2.d = zmm2.d f+ zmm0.d
            zmm0.d = _mm_cvtepi32_ps(zx.o(sx.d(*(rbx + (zx.q(i) << 1))))).d f*
                *((rax_65 u>> 0x18) * 0x1c + 0x143fe91fc)
            zmm2.d = zmm2.d f+ zmm0.d
            zmm0.d = _mm_cvtepi32_ps(zx.o(rax_75)).d f* *((rax_65 u>> 0x18) * 0x1c + 0x143fe9200)
            zmm2.d = zmm2.d f+ zmm0.d
            zmm0.d = _mm_cvtepi32_ps(zx.o(sx.d(*(rbx + (zx.q(i + 2) << 1))))).d f*
                *((rax_65 u>> 0x18) * 0x1c + 0x143fe9204)
            uint32_t i_4 = (rdi_1 u>> 0x20).d
            i = i_4
            zmm2.d = zmm2.d f+ zmm0.d
            zmm1.d = _mm_cvtepi32_ps(zx.o(sx.d(r12))).d f* *((rax_65 u>> 0x18) * 0x1c + 0x143fe9208)
            zmm2.d = zmm2.d f+ zmm1.d
            zmm2.d = zmm2.d f* zmm3
            zmm3 = zmm3 + zmm4
            *(var_58 + (r10 << 2)) = zmm2.d
            r10 = zx.q(r10.d + 1)
            
            if (i_4 u> r14 - 2)
                break
        
        r9 = arg1
        r15 = arg_10
    
    if (i u<= r14 - 1)
        while (r10.d u< 0x40)
            uint64_t rax_80 = zx.q(rdi_1.d)
            rdi_1 += r13_2
            int32_t rax_85 = sx.d(*(rbx + (zx.q(i - 3) << 1)))
            zmm2.d = _mm_cvtepi32_ps(zx.o(sx.d(*(rbx + (zx.q(i - 2) << 1))))).d f*
                *((rax_80 u>> 0x18) * 0x1c + 0x143fe91f4)
            int32_t rax_87 = sx.d(*(rbx + (zx.q(i - 1) << 1)))
            zmm0.d =
                _mm_cvtepi32_ps(zx.o(rax_85)).d f* *((rax_80 u>> 0x18) * 0x1c + &data_143fe91f0)
            zmm2.d = zmm2.d f+ zmm0.d
            zmm0.d = _mm_cvtepi32_ps(zx.o(rax_87)).d f* *((rax_80 u>> 0x18) * 0x1c + 0x143fe91f8)
            int32_t rax_90 = sx.d(*(rbx + (zx.q(i + 1) << 1)))
            zmm2.d = zmm2.d f+ zmm0.d
            zmm0.d = _mm_cvtepi32_ps(zx.o(sx.d(*(rbx + (zx.q(i) << 1))))).d f*
                *((rax_80 u>> 0x18) * 0x1c + 0x143fe91fc)
            zmm2.d = zmm2.d f+ zmm0.d
            zmm0.d = _mm_cvtepi32_ps(zx.o(rax_90)).d f* *((rax_80 u>> 0x18) * 0x1c + 0x143fe9200)
            uint32_t i_5 = (rdi_1 u>> 0x20).d
            i = i_5
            zmm2.d = zmm2.d f+ zmm0.d
            zmm1.d = _mm_cvtepi32_ps(zx.o(sx.d(r12))).d f* *((rax_80 u>> 0x18) * 0x1c + 0x143fe9204)
            zmm2.d = zmm2.d f+ zmm1.d
            zmm0.d =
                _mm_cvtepi32_ps(zx.o(sx.d(var_68))).d f* *((rax_80 u>> 0x18) * 0x1c + 0x143fe9208)
            zmm2.d = zmm2.d f+ zmm0.d
            zmm2.d = zmm2.d f* zmm3
            zmm3 = zmm3 + zmm4
            *(var_58 + (r10 << 2)) = zmm2.d
            r10 = zx.q(r10.d + 1)
            
            if (i_5 u> r14 - 1)
                break
        
        r9 = arg1
        r14 = var_60
        r15 = arg_10
    
    if (i u<= r14)
        while (r10.d u< 0x40)
            uint64_t rax_93 = zx.q(rdi_1.d)
            rdi_1 += r13_2
            int32_t rax_98 = sx.d(*(rbx + (zx.q(i - 3) << 1)))
            zmm2.d = _mm_cvtepi32_ps(zx.o(sx.d(*(rbx + (zx.q(i - 2) << 1))))).d f*
                *((rax_93 u>> 0x18) * 0x1c + 0x143fe91f4)
            int32_t rax_100 = sx.d(*(rbx + (zx.q(i - 1) << 1)))
            zmm0.d =
                _mm_cvtepi32_ps(zx.o(rax_98)).d f* *((rax_93 u>> 0x18) * 0x1c + &data_143fe91f0)
            zmm2.d = zmm2.d f+ zmm0.d
            zmm0.d = _mm_cvtepi32_ps(zx.o(rax_100)).d f* *((rax_93 u>> 0x18) * 0x1c + 0x143fe91f8)
            zmm2.d = zmm2.d f+ zmm0.d
            zmm0.d = _mm_cvtepi32_ps(zx.o(sx.d(*(rbx + (zx.q(i) << 1))))).d f*
                *((rax_93 u>> 0x18) * 0x1c + 0x143fe91fc)
            uint32_t i_6 = (rdi_1 u>> 0x20).d
            i = i_6
            zmm2.d = zmm2.d f+ zmm0.d
            zmm1.d = _mm_cvtepi32_ps(zx.o(sx.d(r12))).d f* *((rax_93 u>> 0x18) * 0x1c + 0x143fe9200)
            zmm2.d = zmm2.d f+ zmm1.d
            zmm0.d =
                _mm_cvtepi32_ps(zx.o(sx.d(var_68))).d f* *((rax_93 u>> 0x18) * 0x1c + 0x143fe9204)
            zmm2.d = zmm2.d f+ zmm0.d
            zmm1.d =
                _mm_cvtepi32_ps(zx.o(sx.d(var_64))).d f* *((rax_93 u>> 0x18) * 0x1c + 0x143fe9208)
            zmm2.d = zmm2.d f+ zmm1.d
            zmm2.d = zmm2.d f* zmm3
            zmm3 = zmm3 + zmm4
            *(var_58 + (r10 << 2)) = zmm2.d
            r10 = zx.q(r10.d + 1)
            
            if (i_6 u> r14)
                break
        
        r9 = arg1
        rsi = zx.q(rbp_1)
        r15 = arg_10
    
    if (var_50 == 0)
        goto label_14283cdb1
    
    if (i u> r14)
        int64_t rdx_17 = sx.q(*(r9 + 0xdec))
        int32_t r8_3 = *(r9 + 0xde8)
        rdi_1 -= sx.q(rdx_17.d - r8_3) << 0x20
        
        if (*(r9 + 0xd94) == 0)
            *(r9 + 0xd94) = 1
            rsi = zx.q(r8_3)
            r15 = *(rbx + (rdx_17 << 1) - 2)
            arg_10 = r15
            arg_20 = *(rbx + (rdx_17 << 1) - 4)
            var_66 = *(rbx + (rdx_17 << 1) - 6)
    
    if (r10.d u>= 0x40)
        goto label_14283cdb1
    
    rdx = var_58
