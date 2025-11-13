// 函数: sub_14268a930
// 地址: 0x14268a930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
int64_t* rbx = arg1[0x1d]
uint128_t zmm6
zmm6.d = _mm_cvtepi32_ps(zx.o(arg1[4].d)).d f* arg1[5].d
int32_t var_200 = zmm6.d
char r8

if (sub_14243ade0((*(*rbx + 0x150))(rbx)) == 0 || *(rbx + 0x2ac) == 2)
    r8 = 0
else
    r8 = 1

int128_t* rbx_1 = *arg2
int32_t rdx = 0
int32_t rax_5 = 0
void* rcx_4 = &rbx_1[sx.q(arg2[1].d) * 2]
char var_208 = r8
int64_t var_128
__builtin_memset(&var_128, 0, 0x2c)
int32_t var_fc = 0x80
int32_t var_f8 = 0xffffffff
int32_t var_f4 = 0
int64_t var_e8 = 0
int32_t var_e0 = 0
int128_t* var_180 = rbx_1
int32_t var_1fc
float var_1f8[0x4]
float var_1e8[0x4]
void var_184
int32_t var_120
uint128_t zmm2

if (rbx_1 != rcx_4)
    zmm2 = 0x80000000
    float zmm7[0x4]
    float var_48_1[0x4] = zmm7
    uint128_t zmm8
    uint128_t var_58_1 = zmm8
    float zmm9[0x4]
    float var_68_1[0x4] = zmm9
    uint128_t zmm10
    uint128_t var_78_1 = zmm10
    uint128_t zmm11
    uint128_t var_88_1 = zmm11
    float zmm12[0x4]
    float var_98_1[0x4] = zmm12
    uint128_t zmm13
    uint128_t var_a8_1 = zmm13
    uint128_t zmm14
    uint128_t var_b8_1 = zmm14
    uint128_t zmm15
    uint128_t var_c8_1 = zmm15
    
    do
        if (r8 == 0)
        label_14268aa93:
            int32_t rcx_7 = *(rbx_1 + 0x1c)
            int64_t* rdi
            rdi.b = 0
            zmm15 = zx.o(rbx_1[1].q)
            uint32_t r15_1 = *(rbx_1 + 0x18)
            zmm14 = *rbx_1
            char var_207_1 = 0
            int32_t var_1a0
            var_1a0.q = zmm15.q
            uint32_t var_204_1 = r15_1
            float i
            int32_t var_1c4
            int32_t var_1c0
            uint128_t zmm1
            float zmm3[0x4]
            
            if (((rcx_7 u>> 3).b & 1) != 0)
            label_14268ae9f:
                i = (zmm14 ^ zmm2).d
                void* rsi_2 = &arg1[0x50]
                int32_t var_1cc_1 = _mm_shuffle_ps(zmm14, zmm14, 0xaa).d
                var_1c4 = (_mm_shuffle_ps(zmm14, zmm14, 0xff) ^ zmm2).d
                int32_t var_1c8_2 = (_mm_shuffle_ps(zmm14, zmm14, 0x55) ^ zmm2).d
                int32_t var_1bc_2 = (var_1a0 ^ zmm2).d
                int32_t var_19c
                var_1c0 = var_19c.d
                sub_140acc6d0(&var_1f8, &i, 2)
                zmm1.d = var_1f8[0].d f- *rsi_2
                zmm3 = 0x3f800000
                zmm3[0] = 1f f/ zmm6.d
                zmm1.d = zmm1.d f* zmm3[0]
                zmm1.d = zmm1.d f+ zmm1.d
                zmm1.d = zmm1.d f- 0.5f
                int32_t rcx_17 = int.d(zmm1.d)
                zmm1.d = var_1f8[3].d f- *rsi_2
                int32_t rcx_18 = rcx_17 s>> 1
                int32_t var_188_1 = rcx_18
                zmm1.d = zmm1.d f* zmm3[0]
                zmm1.d = zmm1.d f+ zmm1.d
                zmm1.d = zmm1.d f- 0.5f
                int32_t rax_19 = int.d(zmm1.d)
                zmm1.d = var_1f8[2].d f- *(rsi_2 + 8)
                int32_t rax_20 = rax_19 s>> 1
                int32_t var_18c_1 = rax_20
                zmm1.d = zmm1.d f* zmm3[0]
                zmm1.d = zmm1.d f+ zmm1.d
                zmm1.d = zmm1.d f- 0.5f
                int32_t r12_3 = int.d(zmm1.d)
                zmm1.d = var_1e8[1].d f- *(rsi_2 + 8)
                int32_t r12_4 = r12_3 s>> 1
                zmm1.d = zmm1.d f* zmm3[0]
                zmm1.d = zmm1.d f+ zmm1.d
                zmm1.d = zmm1.d f- 0.5f
                int32_t rdx_8 = int.d(zmm1.d) s>> 1
                var_1fc = rdx_8
                
                while (r12_4 s<= rdx_8)
                    int32_t r14_2 = rcx_18
                    
                    if (rcx_18 s<= rax_20)
                        do
                            if ((*(arg1 + 0x28c) & 2) == 0)
                            label_14268b001:
                                
                                if (rdi.b != 1 || (rdi.b & (*(rbx_1 + 0x1c) u>> 3).b) != 0)
                                label_14268b0b2:
                                    uint128_t* rdi_2 = nullptr
                                    var_1f8[2] = 0x7f7fffff
                                    float rsi_3 = 0f
                                    var_1e8[0].q = 0
                                    bool cond:5_1 = (*(rbx_1 + 0x1c) & 9) != 0
                                    var_1e8[2].q = 0
                                    var_1f8[0] = r14_2
                                    var_1f8[1] = r12_4
                                    
                                    if (cond:5_1)
                                        r15_1.b = 1
                                        var_1f8[3].b = 1
                                    else
                                        var_1f8[3].b = 0
                                        var_1e8[2] = 1
                                        sub_1405c50f0(&var_1e8)
                                        rdi_2 = var_1e8[0].q
                                        rsi_3 = var_1e8[2]
                                        *rdi_2 = zmm14
                                        rdi_2[1].q = zmm15.q
                                        *(rdi_2 + 0x18) = r15_1
                                        r15_1 = zx.d(var_1f8[3].b)
                                    
                                    int32_t var_190
                                    sub_1426816a0(&var_128, &var_190, &var_1f8)
                                    int64_t rax_26 = sx.q(var_190)
                                    void* rbx_4
                                    
                                    if (rax_26.d != 0xffffffff)
                                        rbx_4 = var_128 + rax_26 * 0x28
                                    
                                    if (rax_26.d == 0xffffffff || rbx_4 == 0)
                                        sub_14266e6f0(&var_128, &var_184, &var_1f8, nullptr)
                                        rdi_2 = var_1e8[0].q
                                    else
                                        char temp3_1 = *(rbx_4 + 0xc) | r15_1.b
                                        *(rbx_4 + 0xc) = temp3_1
                                        
                                        if (temp3_1 != 0)
                                            *(rbx_4 + 0x18) = 0
                                            
                                            if (*(rbx_4 + 0x1c) != 0)
                                                sub_1413f6f70(rbx_4 + 0x10, 0)
                                        else if (rsi_3 != 0)
                                            int32_t rcx_26 = *(rbx_4 + 0x18)
                                            int32_t rdx_16 = rsi_3 i+ rcx_26
                                            
                                            if (rdx_16 s> *(rbx_4 + 0x1c))
                                                sub_1413f6f70(rbx_4 + 0x10, rdx_16)
                                                rcx_26 = *(rbx_4 + 0x18)
                                            
                                            memcpy(sx.q(rcx_26) * 0x1c + *(rbx_4 + 0x10), rdi_2, 
                                                rsi_3 i* 0x1c)
                                            *(rbx_4 + 0x18) += rsi_3
                                    
                                    if (rdi_2 != 0)
                                        sub_140a74f90(rdi_2)
                                    
                                    rbx_1 = var_180
                                    rsi_2 = &arg1[0x50]
                                else
                                    zmm6 =
                                        sub_142676ba0(&i, r14_2, r12_4, rsi_2, &arg1[0x17], zmm6.d)
                                    void* rcx_23 = arg1[0x1b]
                                    void* rdx_12 = sx.q(arg1[0x1c].d) * 0x1c + rcx_23
                                    
                                    if (rcx_23 != rdx_12)
                                        while (var_1c4.d f< *rcx_23 || i f> *(rcx_23 + 0xc)
                                                || var_1c0.d f< *(rcx_23 + 4)
                                                || var_1cc_1.d f> *(rcx_23 + 0x10)
                                                || var_1bc_2.d f< *(rcx_23 + 8)
                                                || not(var_1c8_2[0] f<= *(rcx_23 + 0x14)))
                                            rcx_23 += 0x1c
                                            
                                            if (rcx_23 == rdx_12)
                                                goto label_14268b1d1
                                        
                                        goto label_14268b0b2
                            else
                                void* r8_6 = arg1[0x22]
                                void* rcx_19 = r8_6
                                void* rdx_9 = r8_6 + (sx.q(arg1[0x23].d) << 3)
                                
                                if (r8_6 != rdx_9)
                                    while (*rcx_19 != r14_2 || *(rcx_19 + 4) != r12_4)
                                        rcx_19 += 8
                                        
                                        if (rcx_19 == rdx_9)
                                            goto label_14268b1d1
                                    
                                    if (((rcx_19 - r8_6) s>> 3).d != 0xffffffff)
                                        goto label_14268b001
                            
                        label_14268b1d1:
                            rax_20 = var_18c_1
                            r14_2 += 1
                            rdi = zx.q(var_207_1)
                            r15_1 = var_204_1
                        while (r14_2 s<= rax_20)
                        
                        rcx_18 = var_188_1
                        rdx_8 = var_1fc
                    
                    rdi = zx.q(var_207_1)
                    r12_4 += 1
                    r15_1 = var_204_1
                
                r8 = var_208
                zmm2 = 0x80000000
            else
                zmm1 = *(arg1 + 0xb8)
                int32_t rax_10 = arg1[0x1a].d
                zmm9 = *(rbx_1 + 0xc)
                int128_t var_160
                var_160.d = rax_10
                int64_t var_178
                var_178.o = zmm1
                int128_t var_170
                var_170:8.q = arg1[0x19]
                
                if (not(zmm1.d f> zmm9[0]))
                    zmm7 = *rbx_1
                    
                    if (not(zmm7[0] f> var_170:4.d))
                        float zmm5_1 = rbx_1[1].d
                        
                        if (not(var_178:4.d.d f> zmm5_1))
                            zmm3 = *(rbx_1 + 4)
                            
                            if (not(zmm3[0] f> var_170:8.d))
                                int64_t zmm4_1 = *(rbx_1 + 0x14)
                                
                                if (not(var_170.d.d f> zmm4_1.d))
                                    zmm2 = *(rbx_1 + 8)
                                    
                                    if (zmm2.d f> var_170:0xc.d)
                                        zmm2 = 0x80000000
                                    else
                                        zmm6 = zmm1
                                        zmm1 = zx.o(arg1[0x19])
                                        uint128_t zmm0 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                                        zmm10 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                                        float temp0_3[0x4] = _mm_max_ss(zmm7[0], zmm6.d)
                                        zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                                        zmm8 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
                                        var_1e8[2] = rax_10
                                        zmm8 = _mm_min_ss(zmm8.d, zmm4_1.d)
                                        var_1e8[0].q = zmm1.q
                                        zmm6 = _mm_max_ss(zmm6.d, zmm2.d)
                                        float temp0_8[0x4] = _mm_min_ss(zmm9[0], zmm0.d)
                                        zmm11 = _mm_min_ss(zmm1.d, zmm5_1)
                                        zmm10 = _mm_max_ss(zmm10.d, zmm3[0])
                                        
                                        if (((rcx_7 u>> 2).b & 1) == 0)
                                            zmm14 = zx.o(0)
                                        else
                                            zmm14 = arg1[0x12].d
                                        
                                        zmm2 = arg1[0x14].d
                                        zmm0 = arg1[0x15].d
                                        temp0_8[0] = temp0_8[0] f+ zmm2.d
                                        zmm1 = *(arg1 + 0xa4)
                                        void* rdx_1 = arg1[0x1b]
                                        temp0_3[0] = temp0_3[0] f- zmm2.d
                                        r15_1 = 1.d
                                        zmm2.d = zmm6.d f- zmm0.d
                                        var_204_1 = r15_1
                                        zmm5_1 = zmm8.d f+ zmm0.d
                                        zmm4_1.d = zmm11.q.d f+ zmm1.d
                                        zmm13.d = zmm10.d f- zmm1.d
                                        zmm2.d = zmm2.d f- zmm14.d
                                        void* rcx_9 = rdx_1
                                        var_1c4.q = (_mm_unpacklo_ps(temp0_8, zmm4_1)).q
                                        int32_t var_1c8_1 = zmm2.d
                                        float var_1bc_1 = zmm5_1
                                        zmm15 = zx.o(var_1c0.q)
                                        void* r8_1 = sx.q(arg1[0x1c].d) * 0x1c
                                        zmm14.q = (_mm_unpacklo_ps(temp0_3, zmm13.q)).q
                                        var_1a0.q = zmm15.q
                                        i.o = zmm14
                                        void* r8_2 = r8_1 + rdx_1
                                        
                                        if (rdx_1 != r8_2)
                                            while (true)
                                                if (not(temp0_8[0] f< *rcx_9)
                                                        && not(temp0_3[0] f> *(rcx_9 + 0xc))
                                                        && not(zmm4_1.d f< *(rcx_9 + 4))
                                                        && not(zmm13.d f> *(rcx_9 + 0x10))
                                                        && not(zmm5_1 f< *(rcx_9 + 8))
                                                        && zmm2.d f<= *(rcx_9 + 0x14))
                                                    int64_t r8_5 = sx.q(arg1[0x1c].d)
                                                    int32_t rcx_15 = 0
                                                    int64_t rax_18 = 0
                                                    
                                                    if (r8_5.d s<= 0)
                                                    label_14268ae6f:
                                                        rcx_15 = -1
                                                    else
                                                        while (true)
                                                            zmm0 = *rdx_1
                                                            
                                                            if (not(temp0_3[0] f< zmm0.d))
                                                                zmm1 = *(rdx_1 + 0xc)
                                                                
                                                                if (not(temp0_3[0] f> zmm1.d))
                                                                    zmm2 = *(rdx_1 + 4)
                                                                    
                                                                    if (not(zmm10.d f< zmm2.d))
                                                                        zmm3 = *(rdx_1 + 0x10)
                                                                        
                                                                        if (not(zmm10.d f> zmm3[0]))
                                                                            zmm4_1 = *(rdx_1 + 8)
                                                                            
                                                                            if (not(zmm6.d f< zmm4_1.d))
                                                                                zmm5_1 = *(rdx_1 + 0x14)
                                                                                
                                                                                if (not(zmm6.d f> zmm5_1)
                                                                                        && not(temp0_8[0] f< zmm0.d)
                                                                                        && not(temp0_8[0] f> zmm1.d)
                                                                                        && not(zmm11.d f< zmm2.d)
                                                                                        && not(zmm11.d f> zmm3[0])
                                                                                        && not(zmm8.d f< zmm4_1.d)
                                                                                        && zmm8.d f<= zmm5_1)
                                                                                    break
                                                            
                                                            rcx_15 += 1
                                                            rax_18 += 1
                                                            rdx_1 += 0x1c
                                                            
                                                            if (rax_18 s>= r8_5)
                                                                goto label_14268ae6f
                                                    
                                                    zmm6 = var_200
                                                    zmm2 = 0x80000000
                                                    rdi.b = rcx_15 == 0xffffffff
                                                    var_207_1 = rdi.b
                                                    break
                                                
                                                rcx_9 += 0x1c
                                                
                                                if (rcx_9 == r8_2)
                                                    goto label_14268acb2
                                            
                                            goto label_14268ae9f
                                        
                                    label_14268acb2:
                                        zmm6 = var_200
                                        r8 = var_208
                                        zmm2 = 0x80000000
        else
            int32_t rcx_5 = *(rbx_1 + 0x1c)
            
            if (((rcx_5 u>> 1).b & 1) != 0 && ((rcx_5 u>> 3).b & 1) == 0)
                goto label_14268aa93
        
        rbx_1 = &rbx_1[2]
        var_180 = rbx_1
    while (rbx_1 != rcx_4)
    
    rax_5 = var_f4
    rdx = var_120

void* rdi_1 = arg1[0x1e]
int32_t r12_2 = rdx - rax_5
void* r15_4 = (sx.q(arg1[0x1f].d) << 5) + rdi_1

if (rdi_1 != r15_4)
    do
        sub_1426816a0(&var_128, &var_1fc, rdi_1)
        int64_t rax_14 = sx.q(var_1fc)
        void* rbx_2
        
        if (rax_14.d != 0xffffffff)
            rbx_2 = var_128 + rax_14 * 0x28
        
        if (rax_14.d == 0xffffffff || rbx_2 == 0)
            sub_14266e6f0(&var_128, &var_184, rdi_1, nullptr)
        else
            char temp2_1 = *(rbx_2 + 0xc) | *(rdi_1 + 0xc)
            *(rbx_2 + 0xc) = temp2_1
            
            if (temp2_1 != 0)
                bool cond:3_1 = *(rbx_2 + 0x1c) == 0
                *(rbx_2 + 0x18) = 0
                
                if (not(cond:3_1))
                    sub_1413f6f70(rbx_2 + 0x10, 0)
            else
                int32_t r14_1 = *(rdi_1 + 0x18)
                
                if (r14_1 != 0)
                    int32_t rcx_11 = *(rbx_2 + 0x18)
                    int32_t rdx_4 = r14_1 + rcx_11
                    
                    if (rdx_4 s> *(rbx_2 + 0x1c))
                        sub_1413f6f70(rbx_2 + 0x10, rdx_4)
                        rcx_11 = *(rbx_2 + 0x18)
                    
                    memcpy(sx.q(rcx_11) * 0x1c + *(rbx_2 + 0x10), *(rdi_1 + 0x10), r14_1 * 0x1c)
                    *(rbx_2 + 0x18) += r14_1
        
        rdi_1 += 0x20
    while (rdi_1 != r15_4)
    
    rax_5 = var_f4
    rdx = var_120

sub_1426794e0(&arg1[0x1e], rdx - rax_5)
int32_t var_1ac = 1
int64_t var_11c
void* var_1a8 = &var_11c:4
int32_t rcx_36 = 0
int32_t var_1b0 = 0
int32_t var_1a0_1 = 0xffffffff
int32_t r8_12 = 0
int64_t var_19c_1 = 0
int32_t var_100

if (var_100 != 0)
    void* r10_1 = &var_11c:4
    void* var_108
    
    if (var_108 != 0)
        r10_1 = var_108
    
    int32_t temp0_16
    int32_t temp1_1
    temp0_16:temp1_1 = sx.q(var_100 - 1)
    int32_t rdx_23 = *r10_1
    
    if (rdx_23 != 0)
    label_14268b2d5:
        int32_t rax_37 = neg.d(rdx_23) & rdx_23
        uint64_t rflags_1
        int32_t temp0_17
        temp0_17, rflags_1 = _bit_scan_reverse(rax_37)
        int32_t var_1ac_1 = rax_37
        int32_t rax_38
        
        if (rax_37 == 0)
            rax_38 = 0x20
        else
            rax_38 = 0x1f - temp0_17
        
        int32_t rax_39 = r8_12 - rax_38 + 0x1f
        
        if (rax_39 s> var_100)
            rax_39 = var_100
        
        var_19c_1.d = rax_39
    else
        while (true)
            int64_t rdx_24 = sx.q(rcx_36)
            r8_12 += 0x20
            rcx_36 += 1
            var_19c_1:4.d = r8_12
            var_1b0 = rcx_36
            
            if (rdx_24.d s>= (temp1_1 + (temp0_16 & 0x1f)) s>> 5)
                var_19c_1.d = var_100
                break
            
            rdx_23 = *(r10_1 + (rdx_24 << 2) + 4)
            int32_t var_1a0_2 = 0xffffffff
            
            if (rdx_23 != 0)
                goto label_14268b2d5

int128_t var_160_1 = 0xffffffff
float var_170_1[0x4] = var_1b0.o
var_19c_1.d = var_100
zmm2 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
var_1f8 = (&var_128).o
var_1e8 = var_170_1
uint64_t var_1d8 = zmm2.q

while (true)
    int64_t rax_40 = sx.q(var_1e8[3])
    int64_t* rdx_25 = var_1f8[0].q
    
    if (rax_40.d == ((0xffffffff << (var_100.b & 0x1f)).q u>> 0x20).d && var_1e8[0].q == &var_11c:4
            && rdx_25 == &var_128)
        if (r12_2 s> 0)
            (*(*arg1 + 0x68))(arg1)
        
        int32_t var_e0_1 = 0
        
        if (var_e8 != 0)
            sub_140a74f90(var_e8)
        
        void* result = sub_1408ffc10(&var_128)
        __security_check_cookie(rax_1 ^ &var_238)
        return result
    
    int64_t rbx_6 = sx.q(arg1[0x1f].d)
    int64_t* rdi_3 = *rdx_25 + rax_40 * 0x28
    int32_t rax_42 = (rbx_6 + 1).d
    arg1[0x1f].d = rax_42
    
    if (rax_42 s> *(arg1 + 0xfc))
        sub_1405c4e40(&arg1[0x1e])
    
    sub_1426706a0((rbx_6 << 5) + arg1[0x1e], rdi_3)
    var_1e8[2] &= not.d(var_1f8[3])
    sub_14059bdd0(&var_1f8[2])
