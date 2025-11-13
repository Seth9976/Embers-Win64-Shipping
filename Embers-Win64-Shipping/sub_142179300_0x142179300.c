// 函数: sub_142179300
// 地址: 0x142179300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = data_143f4d018
double zmm11[0x2] = arg3
int64_t rcx
int64_t r15

if (data_143de5480 == 0)
    r15 = 0
    rcx = 0
else
    r15 = 0
    rcx.b = GetCurrentThreadId() != data_143de5470

int32_t rax_2 = *(rbx + (rcx << 2))
int64_t* r12 = nullptr
int32_t rcx_1 = 0
void* rsi_1 = *(arg1 + 0x6f0) + 0x50
int32_t r11 = *(rsi_1 + 0x28)
void* r10 = rsi_1 + 0x10
int64_t* var_128 = nullptr
int32_t result_1 = 0
int32_t var_11c = 0
int32_t r8 = 0
int32_t var_118 = 0
int32_t var_114 = 1
void* var_110 = r10
int32_t var_108 = 0xffffffff
int64_t var_104 = 0

if (r11 != 0)
    void* rax_3 = *(r10 + 0x10)
    void* r9_1 = r10
    
    if (rax_3 != 0)
        r9_1 = rax_3
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_14217942b:
        int32_t rax_10 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
        int32_t var_114_1 = rax_10
        int32_t rax_11
        
        if (rax_10 == 0)
            rax_11 = 0x20
        else
            rax_11 = 0x1f - temp0_2
        
        var_104.d = r8 - rax_11 + 0x1f
        
        if (r8 - rax_11 + 0x1f s> r11)
            var_104.d = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx_1)
            r8 += 0x20
            rcx_1 += 1
            var_104:4.d = r8
            var_118 = rcx_1
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
            int32_t var_108_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_14217942b
        
        var_104.d = r11
    
    r10 = var_110

int32_t rdx_4 = *(rsi_1 + 0x28)
int32_t rsi_2 = *(r10 + 0x18)
float var_f0[0x4] = var_118.o
int32_t r14 = 0xffffffff << (rdx_4.b & 0x1f)
int32_t r8_3 = rdx_4 s>> 5
int128_t var_e0 = 0xffffffff
int32_t r9_3 = rdx_4 & 0xffffffe0
int64_t var_a0 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
var_f0[2] = r14
var_f0[3] = rdx_4
float var_c0[0x4] = rsi_1.o
uint128_t var_b0 = var_f0

if (rdx_4 != rsi_2)
    void* rax_13 = *(r10 + 0x10)
    
    if (rax_13 != 0)
        r10 = rax_13
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rsi_2 - 1)
    int32_t rdx_8 = *(r10 + (sx.q(r8_3) << 2)) & r14
    
    if (rdx_8 != 0)
    label_142179503:
        int32_t rax_20 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_20)
        int32_t rbx_1
        
        if (rax_20 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_4
        
        var_f0[3] = r9_3 - rbx_1 + 0x1f
        
        if (r9_3 - rbx_1 + 0x1f s> rsi_2)
            var_f0[3] = rsi_2
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = *(r10 + (rcx_6 << 2) + 4)
            var_f0[2] = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_142179503
        
        var_f0[3] = rsi_2
    
    r10 = var_110

int128_t zmm9 = zx.o(0)
float zmm6[0x4] = 0x3f800000
uint128_t zmm8 = zx.o(0)
int128_t zmm7 = 0x40000000
uint64_t rcx_9 = var_f0[2].q u>> 0x20
uint64_t var_c8 = rcx_9

while (true)
    int64_t rax_22 = sx.q(var_b0:0xc.d)
    int64_t* rdx_9 = var_c0[0].q
    
    if (rax_22.d == rcx_9.d && var_b0.q == r10 && rdx_9 == rsi_1)
        int64_t result = sx.q(result_1)
        int64_t* rdi = r12
        void* rcx_20 = &r12[result]
        uint64_t rsi_7 = (rcx_20 - r12 + 7) u>> 3
        
        if (r12 u> rcx_20)
            rsi_7 = 0
        
        if (rsi_7 != 0)
            do
                void* rbx_3 = *rdi
                sub_142174860(*(arg1 + 0x6f0), rbx_3)
                result = sub_141caa060(arg1 + 0x378, *(rbx_3 + 0x18))
                int64_t* rcx_23 = *(arg1 + 0x6e8)
                
                if (rcx_23 != 0)
                    result = (*(*rcx_23 + 0x2a0))(rcx_23, rbx_3)
                
                rdi = &rdi[1]
                r15 += 1
            while (r15 != rsi_7)
        
        if (r12 == 0)
            return result
        
        return sub_140a74f90(r12)
    
    int64_t* rsi_3 = *(*rdx_9 + rax_22 * 0x18)
    float zmm0[0x4]
    
    if ((rsi_3[0x1a].b & 1) == 0)
        zmm0 = _mm_cvtps_pd((*(*(arg1 + 0x140) + 0x520))[0].q)
    
    if ((rsi_3[0x1a].b & 1) != 0 || not(zmm0[0].q f<= rsi_3[2]))
        int64_t* rbx_2 = *rsi_3
        
        if ((*(rbx_2 + 0x5c) & 8) != 0)
        label_1421797e7:
            int64_t result_2 = sx.q(result_1)
            result_1 = (result_2 + 1).d
            
            if (result_1 s> var_11c)
                sub_1405a4d70(&var_128)
                r12 = var_128
            
            r12[result_2] = rbx_2
        else
            int32_t rax_25 = *(rbx_2 + 0xc)
            void* const rax_29
            
            if (rax_25 s>= data_143e1d9b4)
                rax_29 = nullptr
            else
                uint32_t rdx_10 = zx.d(rax_25.w)
                
                if (rax_25 s< 0)
                    rax_25 += 0xffff
                    rdx_10 -= 0x10000
                
                rax_29 = *(data_143e1d9a0 + (sx.q(rax_25 s>> 0x10) << 3)) + sx.q(rdx_10) * 0x18
            
            if (((*(rax_29 + 8) u>> 0x1d).b & 1) != 0 || *(rbx_2 + 0x5f) == 0)
                goto label_1421797e7
            
            if (rbx_2[0x1d] == *(arg1 + 0x190) && (*(rbx_2 + 0x5b) & 0x20) != 0)
                void* rax_33 = sub_141dc9840(rbx_2)
                
                if (sub_1420e5670(rax_33) == 0 && (*(rax_33 + 0x1f5) & 0x40) == 0)
                    if (sub_14216b7d0(rbx_2) != 0)
                        goto label_1421797e7
                    
                    uint128_t zmm1 = zx.o(rsi_3[3])
                    
                    if (not(zmm1.q f!= zmm9.q))
                        zmm1 = _mm_cvtps_pd((*(*(arg1 + 0x140) + 0x520)).q)
                        rsi_3[3] = zmm1.q
                        zmm6[0] = zmm6[0] f/ rbx_2[0x21].d
                        rsi_3[4].d = zmm6[0]
                    
                    zmm0 = _mm_cvtps_pd((*(*(arg1 + 0x140) + 0x520))[0].q)
                    zmm0[0].q = zmm0[0].q f- zmm1.q
                    zmm1 = _mm_cvtpd_ps(zmm0)
                    
                    if (not(zmm1.d f<= zmm7.d))
                        int32_t zmm3 = *(rbx_2 + 0x10c)
                        
                        if (not(zmm3 f!= zmm8.d))
                            *(rbx_2 + 0x10c) = 0x40000000
                            zmm3 = zmm7.d
                        
                        arg3 = zmm6
                        zmm1.d = zmm1.d f- zmm7.d
                        arg3[0].d = arg3[0].d f/ rbx_2[0x21].d
                        zmm1.d = zmm1.d f* 0.200000003f
                        zmm6[0] = zmm6[0] f/ zmm3
                        float temp0_9[0x4] = _mm_max_ss(zmm6[0], arg3[0].d)
                        
                        if (zmm1.d f>= zmm8.d)
                            zmm1 = _mm_min_ss(zmm1.d, zmm6[0])
                        else
                            zmm1 = zmm8
                        
                        temp0_9[0] = temp0_9[0] f- arg3[0].d
                        temp0_9[0] = temp0_9[0] f* zmm1.d
                        temp0_9[0] = temp0_9[0] f+ arg3[0].d
                        rsi_3[4].d = temp0_9[0]
                    
                    char rax_38 = rsi_3[0x1a].b
                    
                    if ((rax_38 & 1) == 0)
                        if (rax_2 s<= 0)
                            zmm1.d = zmm6.d f/ rbx_2[0x21].d
                        else
                            zmm1 = rsi_3[4].d
                        
                        int32_t rax_40 = *(arg1 + 0x6d8) * 0xbb38435 + 0x3619636b
                        *(arg1 + 0x6d8) = rax_40
                        void* rax_43 = *(arg1 + 0x140)
                        zmm0 = rax_40 u>> 9 | 0x3f800000
                        zmm0[0] = zmm0[0] - zmm6[0]
                        zmm0[0] = zmm0[0] f* zmm11[0].d
                        zmm0[0] = zmm0[0] f+ *(rax_43 + 0x520)
                        zmm0[0] = zmm0[0] f+ zmm1.d
                        rsi_3[2] = (_mm_cvtps_pd(zmm0[0].q)).q
                        *(rsi_3 + 0x24) = _mm_cvtpd_ps(zx.o(*(arg1 + 0x218))).d
                        rsi_3[5] = *(arg1 + 0x218)
                        rax_38 = rsi_3[0x1a].b
                    
                    int64_t* rcx_16 = arg2
                    rsi_3[0x1a].b = rax_38 & 0xfe
                    int64_t r14_2 = sx.q(rcx_16[1].d)
                    int32_t rax_45 = (r14_2 + 1).d
                    rcx_16[1].d = rax_45
                    
                    if (rax_45 s> *(rcx_16 + 0xc))
                        sub_1405a4d70(rcx_16)
                        rcx_16 = arg2
                    
                    *(*rcx_16 + (r14_2 << 3)) = rsi_3
                    zmm6, zmm7, zmm8, zmm9 = sub_141dbba80(rbx_2, arg1)
    
    var_b0:8.d &= not.d(var_c0[3])
    sub_14059bdd0(&var_c0[2])
    r10 = var_110
    rcx_9 = var_c8
