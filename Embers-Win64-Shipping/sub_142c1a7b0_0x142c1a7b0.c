// 函数: sub_142c1a7b0
// 地址: 0x142c1a7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = *(arg2 + 0x90)
int128_t* const rbx = &data_14369a5d0
uint64_t r8 = zx.q(*(arg1 + 3))
uint16_t rdx = zx.w(*(arg1 + 2))
int128_t* const r8_1

if (0 != rdx * 0x100 + r8.w)
    r8_1 = r8 + (zx.q(rdx.b) << 8) + arg1
else
    r8_1 = &data_14369a5d0

int32_t r15 = -1
int32_t rdx_1 = *(*(r14 + 0x70) + zx.q(*(r14 + 0x5c)) * 0x14)
uint32_t rcx_4 = (zx.d(*r8_1) << 8) + zx.d(*(r8_1 + 1))
int32_t rdx_2

if (rcx_4 == 1)
    rdx_2 = sub_142c1e900(r8_1, rdx_1)
else if (rcx_4 == 2)
    rdx_2 = sub_142c1e990(r8_1, rdx_1)
else
    rdx_2 = -1

int128_t* const r8_2

if (rdx_2 u< (zx.d(*(arg1 + 4)) << 8) + zx.d(*(arg1 + 5)))
    r8_2 = arg1 + 6 + (zx.q(rdx_2) << 2)
else
    r8_2 = &data_14369a5d0

uint32_t result

if (zx.w(*r8_2) * 0x100 != neg.w(zx.w(*(r8_2 + 1))))
    int32_t r8_4 = *(r14 + 0x5c)
    void* rdx_5 = *(arg2 + 8)
    *arg2 = r8_4
    arg2[0xe] = 1
    arg2[0xf] = *(*(rdx_5 + 0x90) + 0x60)
    void* r9_1 = *(rdx_5 + 0x90)
    char rdx_6
    
    if (r8_4 != *(r9_1 + 0x5c))
        rdx_6 = 0
    else
        rdx_6 = *(*(r9_1 + 0x70) + zx.q(*(r9_1 + 0x5c)) * 0x14 + 0xf)
    
    arg2[7].b = rdx_6
    
    if (sub_142c22b10(arg2).b == 0)
        result.b = 0
    else
        uint16_t rdx_7 = zx.w(*(arg1 + 2))
        uint64_t r8_5 = zx.q(*(arg1 + 3))
        int128_t* const r8_6
        
        if (0 != rdx_7 * 0x100 + r8_5.w)
            r8_6 = r8_5 + (zx.q(rdx_7.b) << 8) + arg1
        else
            r8_6 = &data_14369a5d0
        
        int32_t rdx_8 = *(*(r14 + 0x70) + zx.q(*arg2) * 0x14)
        uint32_t rcx_19 = (zx.d(*r8_6) << 8) + zx.d(*(r8_6 + 1))
        
        if (rcx_19 == 1)
            r15 = sub_142c1e900(r8_6, rdx_8)
        else if (rcx_19 == 2)
            r15 = sub_142c1e990(r8_6, rdx_8)
        
        int128_t* const r12_1
        
        if (r15 u< (zx.d(*(arg1 + 4)) << 8) + zx.d(*(arg1 + 5)))
            r12_1 = arg1 + 6 + (zx.q(r15) << 2)
        else
            r12_1 = &data_14369a5d0
        
        if (zx.w(*(r12_1 + 3)) == neg.w(zx.w(*(r12_1 + 2)) * 0x100))
            result.b = 0
        else
            int32_t rdx_11 = *arg2
            uint64_t r15_1 = zx.q(*(r14 + 0x5c))
            int128_t zmm7
            int128_t var_68_1 = zmm7
            int32_t arg_18 = rdx_11
            
            if (r15_1.d - rdx_11 u>= 2)
                sub_142bf5c70(r14, rdx_11, r15_1.d)
                rdx_11 = arg_18
            
            uint16_t r8_9 = zx.w(*(r12_1 + 2))
            uint64_t r9_2 = zx.q(*(r12_1 + 3))
            void* rcx_29
            
            if (0 != r8_9 * 0x100 + r9_2.w)
                rcx_29 = (zx.q(r8_9.b) << 8) + arg1 + r9_2
            else
                rcx_29 = &data_14369a5d0
            
            int128_t zmm6 = zx.o(0)
            int128_t zmm8 = zx.o(0)
            uint32_t rdx_13 = zx.d(*rcx_29) << 8
            int128_t zmm9 = zx.o(0)
            int32_t arg_8 = 0
            uint64_t r13_1 = zx.q(rdx_11) * 5
            int32_t arg_10 = 0
            uint64_t r8_10 = zx.q(*(*(r14 + 0x70) + (r13_1 << 2)))
            uint32_t rdx_14 = rdx_13 + zx.d(*(rcx_29 + 1))
            
            if (rdx_14 == 1)
                arg3 = sub_142c1e130(rcx_29, arg2, r8_10, &arg_10, &arg_8)
                zmm8 = arg_8
                zmm9 = arg_10
            else if (rdx_14 == 2)
                arg3 = sub_142c1e220(rcx_29, arg2, r8_10.d, &arg_10, arg3, &arg_8)
                zmm8 = arg_8
                zmm9 = arg_10
            else if (rdx_14 == 3)
                arg3, zmm6 = sub_142c1e410(rcx_29, arg2, r8_10, &arg_10, &arg_8)
                zmm8 = arg_8
                zmm9 = arg_10
            
            uint16_t rdx_21 = zx.w(*r8_2)
            uint64_t r8_11 = zx.q(*(r8_2 + 1))
            
            if (0 != rdx_21 * 0x100 + r8_11.w)
                rbx = (zx.q(rdx_21.b) << 8) + arg1 + r8_11
            
            int64_t rax_26 = *(r14 + 0x70)
            uint64_t r12_3 = r15_1 * 5
            zmm7 = zmm6
            uint32_t rdx_23 = zx.d(*rbx) << 8
            arg_8 = zmm6.d
            uint64_t r8_12 = zx.q(*(rax_26 + (r12_3 << 2)))
            uint32_t rdx_24 = rdx_23 + zx.d(*(rbx + 1))
            arg_10 = zmm6.d
            
            if (rdx_24 == 1)
                sub_142c1e130(rbx, arg2, r8_12, &arg_10, &arg_8)
                zmm6 = arg_8
                zmm7 = arg_10
            else if (rdx_24 == 2)
                sub_142c1e220(rbx, arg2, r8_12.d, &arg_10, arg3, &arg_8)
                zmm6 = arg_8
                zmm7 = arg_10
            else if (rdx_24 == 3)
                sub_142c1e410(rbx, arg2, r8_12, &arg_10, &arg_8)
                zmm6 = arg_8
                zmm7 = arg_10
            
            int32_t rcx_38 = arg2[0x2c]
            int64_t rdi_1 = *(r14 + 0x80)
            double _X
            
            if (rcx_38 == 4)
                _X = _mm_cvtps_pd(zmm9.q).q
                round(_X)
                int32_t rax_34 = int.d(_X f+ _mm_cvtepi32_pd(zx.q(*(rdi_1 + (r13_1 << 2) + 8))).q)
                _X = _mm_cvtps_pd(zmm7.q).q
                *(rdi_1 + (r13_1 << 2)) = rax_34
                int32_t rbx_10 = *(rdi_1 + (r12_3 << 2) + 8)
                round(_X)
                int32_t rax_35 = int.d(_X f+ _mm_cvtepi32_pd(zx.q(rbx_10)).q)
                *(rdi_1 + (r12_3 << 2)) -= rax_35
                *(rdi_1 + (r12_3 << 2) + 8) = rbx_10 - rax_35
            else if (rcx_38 == 5)
                int32_t rbx_8 = *(rdi_1 + (r13_1 << 2) + 8)
                _X = _mm_cvtps_pd(zmm9.q).q
                round(_X)
                int32_t rax_32 = int.d(_X f+ _mm_cvtepi32_pd(zx.q(rbx_8)).q)
                _X = _mm_cvtps_pd(zmm7.q).q
                *(rdi_1 + (r13_1 << 2)) -= rax_32
                *(rdi_1 + (r13_1 << 2) + 8) = rbx_8 - rax_32
                round(_X)
                *(rdi_1 + (r12_3 << 2)) =
                    int.d(_X f+ _mm_cvtepi32_pd(zx.q(*(rdi_1 + (r12_3 << 2) + 8))).q)
            else if (rcx_38 == 6)
                _X = _mm_cvtps_pd(zmm8.q).q
                round(_X)
                int32_t rax_30 = int.d(_X f+ _mm_cvtepi32_pd(zx.q(*(rdi_1 + (r13_1 << 2) + 0xc))).q)
                _X = _mm_cvtps_pd(zmm6.q).q
                *(rdi_1 + (r13_1 << 2) + 4) = rax_30
                int32_t rbx_6 = *(rdi_1 + (r12_3 << 2) + 0xc)
                round(_X)
                int32_t rax_31 = int.d(_X f+ _mm_cvtepi32_pd(zx.q(rbx_6)).q)
                *(rdi_1 + (r12_3 << 2) + 4) -= rax_31
                *(rdi_1 + (r12_3 << 2) + 0xc) = rbx_6 - rax_31
            else if (rcx_38 == 7)
                int32_t rbx_4 = *(rdi_1 + (r13_1 << 2) + 0xc)
                _X = _mm_cvtps_pd(zmm8.q).q
                round(_X)
                int32_t rax_28 = int.d(_X f+ _mm_cvtepi32_pd(zx.q(rbx_4)).q)
                _X = _mm_cvtps_pd(zmm6.q).q
                *(rdi_1 + (r13_1 << 2) + 4) -= rax_28
                *(rdi_1 + (r13_1 << 2) + 0xc) = rbx_4 - rax_28
                round(_X)
                *(rdi_1 + (r12_3 << 2) + 4) = int.d(_X)
            zmm7.d = zmm7.d f- zmm9.d
            zmm6.d = zmm6.d f- zmm8.d
            int32_t r12_4 = arg_18
            int32_t rbx_12 = int.d(zmm6.d)
            
            if ((arg2[0x30].b & 1) == 0)
                r12_4 = r15_1.d
                rbx_12 = neg.d(rbx_12)
                r15_1 = zx.q(arg_18)
            
            int32_t r11_3 = sub_142c22f70(rdi_1, r12_4, arg2[0x2c], r15_1.d)
            r15_1.w -= r12_4.w
            uint64_t rcx_43 = zx.q(r12_4) * 5
            *(rdi_1 + (rcx_43 << 2) + 0x12) = 2
            *(rdi_1 + (rcx_43 << 2) + 0x10) = r15_1.w
            *(r14 + 0x28) |= 8
            
            if ((arg2[0x2c] & 0xfffffffe) != 4)
                *(rdi_1 + (rcx_43 << 2) + 8) = r11_3
            else
                *(rdi_1 + (rcx_43 << 2) + 0xc) = rbx_12
            
            *(r14 + 0x5c) += 1
            result.b = 1
else
    result.b = 0

return result
