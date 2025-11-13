// 函数: sub_1410edd90
// 地址: 0x1410edd90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1
float zmm6[0x4]

if (arg4 != 0)
    int32_t rdx_1 = *(arg1 + 0xfd0) - *(arg1 + 0xffc)
    arg4[1].d = 0
    
    if (*(arg4 + 0xc) != rdx_1)
        zmm6 = sub_141105150(arg4, rdx_1)

int32_t var_180 = (*(data_143e51138 + 4)).d
int32_t rax_1 = sub_1422e5a30(arg2)
int32_t* rbx = rdi + 0xfd8
bool cond:0 = 1f f> *(arg2 + 0x2bc)
int32_t r13 = rbx[6]
int32_t rcx_2 = 0
int64_t r12 = sx.q(rax_1)
void* rax_2 = rdi + 0xfc8
int64_t var_18c = 0
int32_t r8 = 0
int32_t var_1a0 = 0
int32_t var_19c = 1
int32_t* var_198 = rbx
int32_t var_190 = 0xffffffff

if (r13 != 0)
    int32_t* rax_3 = *(rbx + 0x10)
    int32_t* r9 = rbx
    
    if (rax_3 != 0)
        r9 = rax_3
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r13 - 1)
    int32_t rdx_4 = *r9
    
    if (rdx_4 != 0)
    label_1410edec9:
        int32_t rax_10 = neg.d(rdx_4) & rdx_4
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
        int32_t var_19c_1 = rax_10
        int32_t rax_11
        
        if (rax_10 == 0)
            rax_11 = 0x20
        else
            rax_11 = 0x1f - temp0_2
        
        var_18c.d = r8 - rax_11 + 0x1f
        
        if (r8 - rax_11 + 0x1f s> r13)
            var_18c.d = r13
    else
        while (true)
            int64_t rdx_5 = sx.q(rcx_2)
            r8 += 0x20
            rcx_2 += 1
            var_18c:4.d = r8
            var_1a0 = rcx_2
            
            if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_4 = r9[rdx_5 + 1]
            int32_t var_190_1 = 0xffffffff
            
            if (rdx_4 != 0)
                goto label_1410edec9
        
        var_18c.d = r13

void* r13_1 = rdi + 0xfc8
int32_t rdx_6 = *(r13_1 + 0x28)
void* r10 = r13_1
void* var_158 = r13_1
int32_t arg_20 = rdx_6
int32_t rcx_6 = rbx[6]
int32_t r8_3 = rdx_6 s>> 5
int32_t r9_2 = rdx_6 & 0xffffffe0
int128_t var_150 = var_1a0.o
int64_t var_140 = 0xffffffff

if (rdx_6 != rcx_6)
    int32_t* rax_13 = *(rbx + 0x10)
    int32_t* rdi_1 = rbx
    
    if (rax_13 != 0)
        rdi_1 = rax_13
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rcx_6 - 1)
    int32_t rdx_10 = rdi_1[sx.q(r8_3)] & 0xffffffff << (rdx_6.b & 0x1f)
    int32_t rax_21
    
    if (rdx_10 != 0)
    label_1410edf8a:
        int32_t rax_20 = neg.d(rdx_10) & rdx_10
        uint64_t rflags_2
        int32_t temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_20)
        int32_t r14_1
        
        if (rax_20 == 0)
            r14_1 = 0x20
        else
            r14_1 = 0x1f - temp0_3
        
        rax_21 = rbx[6]
        rdx_6 = r9_2 - r14_1 + 0x1f
        arg_20 = rdx_6
        
        if (rdx_6 s> rax_21)
            rdx_6 = rax_21
            arg_20 = rax_21
    else
        while (true)
            int64_t rcx_8 = sx.q(r8_3)
            r9_2 += 0x20
            r8_3 += 1
            
            if (rcx_8.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                rax_21 = rbx[6]
                break
            
            rdx_10 = rdi_1[rcx_8 + 1]
            
            if (rdx_10 != 0)
                goto label_1410edf8a
        
        rdx_6 = rax_21
        arg_20 = rax_21
    r13_1 = rax_2
    rdi = arg1

float var_58[0x4] = zmm6
float zmm7[0x4]
float var_68[0x4] = zmm7
int128_t zmm9
int128_t var_88 = zmm9
int128_t zmm10
int128_t var_98 = zmm10
float zmm12[0x4]
float var_b8[0x4] = zmm12
float zmm13[0x4]
float var_c8[0x4] = zmm13
int64_t result

while (true)
    result = sx.q(var_140:4.d)
    
    if (result.d != rdx_6 || var_150:8.q != rbx || r10 != r13_1)
        void* r13_2 = *(*r10 + (result << 3))
        int64_t* rcx_11 = *(r13_2 + 8)
        
        if (rcx_11 == 0)
            goto label_1410ee41b
        
        rdx_6.b = 1
        
        if (sub_140d23e40(rcx_11, rdx_6.b) == 0)
            goto label_1410ee41b
        
        char rax_24 = sub_141f1e430(r13_2)
        float zmm3[0x4] = *(r13_2 + 0x10)
        char rbx_1 = 1
        float zmm1[0x4] = _mm_add_ps(zmm3, zmm3)
        float zmm4_1[0x4] = zmm3
        float zmm2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
        
        if (rax_24 == 0)
            rbx_1 = 0
        
        zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xff)
        zmm4_1 = _mm_mul_ps(zmm4_1, zmm1)
        zmm2 = _mm_mul_ps(zmm2, _mm_shuffle_ps(zmm1, zmm1, 0x29))
        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0x12)
        float zmm0_1[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x1a)
        zmm3 = _mm_mul_ps(zmm3, zmm1)
        zmm1 = *(r13_2 + 0x30)
        zmm0_1 = _mm_add_ps(zmm0_1, _mm_shuffle_ps(zmm4_1, zmm4_1, 1))
        float zmm5_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
        zmm6 = _mm_add_ps(zmm3, zmm2)
        zmm2 = _mm_sub_ps(zmm2, zmm3)
        zmm3 = data_143e51070
        zmm6 = _mm_mul_ps(zmm6, zmm1)
        zmm5_1 = _mm_mul_ps(zmm5_1, zmm2)
        zmm2 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm3, zmm0_1), zmm1), data_143e51080)
        zmm0_1 = _mm_shuffle_ps(zmm5_1, zmm2, 0x32)
        zmm4_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm6, zmm2, 0), zmm0_1, 0x82)
        zmm0_1 = _mm_shuffle_ps(zmm6, zmm2, 0x31)
        zmm13 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
        zmm1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm5_1, zmm2, 0x10), zmm0_1, 0x88)
        zmm6 = _mm_shuffle_ps(zmm6, zmm5_1, 0x12)
        zmm1[0] = zmm1[0] * zmm1[0]
        zmm6 = _mm_shuffle_ps(zmm6, zmm2, 0xe8)
        zmm2 = *(r13_2 + 0x20)
        zmm12 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        zmm7 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
        zmm13[0] = zmm13[0] * zmm13[0]
        zmm12[0] = zmm12[0] * zmm12[0]
        zmm7[0] = zmm7[0] * zmm7[0]
        zmm12[0] = zmm12[0] + zmm1[0]
        zmm1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
        zmm0_1 = zmm4_1
        zmm1[0] = zmm1[0] * zmm1[0]
        zmm0_1[0] = zmm0_1[0] * zmm4_1[0]
        zmm4_1 = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
        zmm12[0] = zmm12[0] + zmm1[0]
        zmm4_1[0] = zmm4_1[0] * zmm4_1[0]
        zmm13[0] = zmm13[0] + zmm0_1[0]
        zmm3[0].q = zmm2 u>> 0x40
        zmm0_1 = zmm6
        zmm2 = _mm_shuffle_ps(zmm2, zmm3, 0xc4)
        zmm0_1[0] = zmm0_1[0] * zmm6[0]
        zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
        zmm13[0] = zmm13[0] + zmm4_1[0]
        zmm6[0] = zmm6[0] * zmm6[0]
        zmm7[0] = zmm7[0] + zmm0_1[0]
        zmm7[0] = zmm7[0] + zmm6[0]
        zmm13[0] = zmm13[0] + zmm12[0]
        int64_t var_f8_1 = zmm2[0].q
        zmm9 = var_f8_1:4.d
        zmm10 = var_f8_1.d
        zmm6 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
        zmm13[0] = zmm13[0] + zmm7[0]
        zmm1 = _mm_sqrt_ss(0, zmm13[0])
        bool cond:4_1 = zmm1[0] < 9.99999994e-09f
        float var_1a8 = zmm1[0]
        char rax_25
        
        if (not(cond:4_1))
            int32_t var_170 = zmm10.d
            int32_t var_16c_1 = zmm9.d
            float var_168_1 = zmm6[0]
            rax_25, zmm6, zmm7 = sub_141f8daa0(arg2 + 0xbf0, &var_170, &var_1a8)
        
        if (cond:4_1 || rax_25 == 0)
            rbx_1 = 0
        
        if (rbx_1 == 0)
        label_1410ee40b:
            rbx = var_198
        label_1410ee41b:
            var_140.d &= not.d(var_150:4.d)
            sub_14059bdd0(&var_150)
            r10 = var_158
            rdx_6 = arg_20
            rdi = arg1
            r13_1 = rax_2
            continue
        else
            int64_t* rcx_14 = *(r13_2 + 8)
            float var_10c_1 = var_1a8[0]
            int32_t var_110_1 = 0x3f800000
            int64_t* rax_27 = (*(*rcx_14 + 0x280))(rcx_14)
            uint64_t rdx_12 = zx.q(*(rdi + 8))
            int64_t var_160 = 0
            int64_t r9_4 = *rax_27
            int64_t* rax_28 = (*(r9_4 + 0x40))(rax_27, rdx_12, &var_160, r9_4)
            int64_t* var_120_1 = rax_28
            int64_t rdx_13 = *rax_28
            char rax_29 = (*(rdx_13 + 0x2d0))(rax_28, rdx_13)
            int64_t rdx_14 = *rax_28
            char var_104_1 = rax_29
            int32_t rax_32 = sub_1410efe60((*1111")[sx.q(*(arg1 + 8))], 
                (*(rdx_14 + 0x2b8))(rax_28, rdx_14), rax_29)
            
            if (((r12.d u<= 0x1e && test_bit(0x6562c800, r12.d))
                    || (*(r12 * 0x14 + &data_143f025fc) & 1) != 0)
                    && (rax_32 u> 0xf || not(test_bit(0x800b, rax_32))))
                goto label_1410ee40b
            
            if (cond:0 != 0)
                float zmm5_2 = *(r13_2 + 0x58)
                
                if (not(zmm5_2 == 0f))
                    zmm2 = *(arg2 + 0x60c)
                    zmm7 = _mm_max_ss(zmm7[0], zmm12[0])
                    zmm3 = *(arg2 + 0x610)
                    zmm2[0] = zmm2[0] f- zmm10.d
                    zmm1 = *(arg2 + 0x614)
                    zmm3[0] = zmm3[0] f- zmm9.d
                    int32_t rax_33 = *(arg2 + 0x15a0)
                    zmm1[0] = zmm1[0] - zmm6[0]
                    int32_t rax_34 = rax_33 - *(arg2 + 0x1598)
                    zmm7 = _mm_max_ss(zmm7[0], zmm13[0])
                    float zmm4_2 = 1f f/ *(arg2 + 0x280)
                    uint128_t zmm0_2
                    zmm0_2.d = float.s(rax_34)
                    zmm2[0] = zmm2[0] * zmm2[0]
                    zmm3[0] = zmm3[0] * zmm3[0]
                    zmm1[0] = zmm1[0] * zmm1[0]
                    zmm3[0] = zmm3[0] + zmm2[0]
                    zmm2 = var_180
                    zmm3[0] = zmm3[0] + zmm1[0]
                    zmm4_2 = (zmm4_2 + zmm4_2) f/ zmm0_2.d * 600f * zmm5_2
                    zmm0_2 = _mm_sqrt_ss(0, zmm3[0])
                    zmm2[0] = zmm2[0] f/ zmm0_2.d
                    zmm0_2 = _mm_sqrt_ss(0, zmm7[0])
                    zmm2[0] = zmm2[0] f* zmm0_2.d
                    zmm0_2.d = 2f / zmm4_2
                    zmm2[0] = zmm2[0] - zmm4_2
                    zmm2[0] = zmm2[0] f* zmm0_2.d
                    
                    if (not(zmm2[0] > 1f))
                        float var_110_2 = zmm2[0]
                        
                        if (zmm2[0] <= 0f)
                            goto label_1410ee40b
            
            if (arg3 != sub_1410f0700(r12.d, rax_32).d)
                if (arg3 != 5)
                    goto label_1410ee40b
                
                if (rax_32 - 4 u> 9 || (*(*rax_28 + 0x2e8))(rax_28).b == 0)
                    goto label_1410ee40b
            
            if (arg4 != 0)
                int64_t rbx_4 = sx.q(arg4[1].d)
                int32_t rax_36 = (rbx_4 + 1).d
                arg4[1].d = rax_36
                
                if (rax_36 s> *(arg4 + 0xc))
                    sub_141104ec0(arg4, rbx_4.d)
                
                int64_t rax_37 = *arg4
                int64_t rcx_25 = rbx_4 * 5
                *(rax_37 + (rcx_25 << 3)) = rax_27.o
                *(rax_37 + (rcx_25 << 3) + 0x10) = r13_2.o
                *(rax_37 + (rcx_25 << 3) + 0x20) = rax_32.q
                goto label_1410ee40b
    else
        int32_t rdx_18
        
        if (arg4 != 0)
            rdx_18 = arg4[1].d
        
        if (arg4 == 0 || rdx_18 s<= 0)
            result.b = 0
            break
        
        sub_1410e81e0(*arg4, rdx_18, arg1.b)
    
    result.b = 1
    break

return result
