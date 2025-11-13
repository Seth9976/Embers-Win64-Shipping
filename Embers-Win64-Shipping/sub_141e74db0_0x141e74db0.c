// 函数: sub_141e74db0
// 地址: 0x141e74db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void* arg_10 = arg2
void* r15_1 = arg1
double zmm6[0x2]

if (arg3[0].d f>= 0f)
    zmm6 = _mm_min_ss(arg3[0].d, 0x3f800000)
else
    zmm6 = zx.o(0)

int32_t var_150
sub_140ba6ab0(arg1 + 0x260, &var_150, arg2)
int64_t rax_1 = sx.q(var_150)
int64_t* r13_1 = nullptr
uint64_t rax

if (rax_1.d == 0xffffffff)
    rax = 0
else
    rax = rax_1 * 0x60 + *(arg1 + 0x260)

int64_t rcx_1 = rax + 8
int64_t* rsi_1 = arg2 + 0x70

if (rax == 0)
    rcx_1 = 0

int64_t r12
r12.b = 0
var_150.q = rcx_1
int64_t* var_148
double var_140[0x2]
int128_t var_130
double zmm0[0x2]

if (rcx_1 != 0)
    int64_t* rax_4 = rsi_1
    rsi_1 = r15_1 + 0x440
    
    if (rsi_1 != rax_4)
        int64_t rbx_2 = sx.q(rax_4[1].d)
        int64_t rdi_2 = *rax_4
        int32_t r8_2 = *(rsi_1 + 0xc)
        rsi_1[1].d = rbx_2.d
        
        if (rbx_2.d != 0 || r8_2 != 0)
            sub_14083a1f0(rsi_1, rbx_2.d, r8_2)
            memcpy(*rsi_1, rdi_2, (rbx_2 << 5).d)
        else
            *(rsi_1 + 0xc) = 0
    
    int64_t* i = *rsi_1
    void* rdi_5 = &i[sx.q(rsi_1[1].d) * 4]
    char var_158_1 = 1
    
    for (; i != rdi_5; i = &i[4])
        if (*i != 0)
            zmm6[0].d = zmm6[0].d f* i[1].d
            zmm6[0].d = zmm6[0].d f* *(i + 0xc)
            zmm6[0].d = zmm6[0].d f+ 1f
            zmm6[0].d = zmm6[0].d f+ 1f
            zmm6[0].d = zmm6[0].d f- zmm6[0].d
            zmm6[0].d = zmm6[0].d f- zmm6[0].d
            i[1].d = zmm6[0].d
            zmm6[0].d = zmm6[0].d f* i[3].d
            *(i + 0xc) = zmm6[0].d
            zmm6[0].d = zmm6[0].d f+ 1f
            zmm6[0].d = zmm6[0].d f- zmm6[0].d
            i[3].d = zmm6[0].d
            float zmm0_1 =
                (logf(i[2].d[0].d) - 2.99573231f) * 0.144764826f f* zmm6[0].d + 1f f- zmm6[0].d
            
            if (zmm0_1 >= 0f)
                zmm0_1 = _mm_min_ss(zmm0_1, 0x3f800000)
            else
                zmm0_1 = (zx.o(0)).d
            
            i[2].d = expf(zmm0_1 * 6.90775537f + 2.99573231f)[0].d
    
    int64_t* r10_2 = var_150.q
    int32_t rbx_3 = r10_2[5].d
    void* r9_1 = &r10_2[2]
    int64_t* var_100 = nullptr
    int32_t var_f4_1 = 0
    int32_t r15_2 = 0
    int32_t var_120_1 = 0
    int32_t rcx_4 = 0
    int32_t var_11c_1 = 1
    int32_t r8_5 = 0
    void* var_118_1 = r9_1
    int32_t var_110_1 = 0xffffffff
    int64_t var_10c_1 = 0
    
    if (rbx_3 != 0)
        void* rax_5 = *(r9_1 + 0x10)
        
        if (rax_5 != 0)
            r9_1 = rax_5
        
        int32_t temp0_3
        int32_t temp1_1
        temp0_3:temp1_1 = sx.q(rbx_3 - 1)
        int32_t rdx_5 = *r9_1
        
        if (rdx_5 != 0)
        label_141e75048:
            int32_t rax_12 = neg.d(rdx_5) & rdx_5
            uint64_t rflags_1
            int32_t temp0_4
            temp0_4, rflags_1 = _bit_scan_reverse(rax_12)
            int32_t var_11c_2 = rax_12
            int32_t rax_13
            
            if (rax_12 == 0)
                rax_13 = 0x20
            else
                rax_13 = 0x1f - temp0_4
            
            var_10c_1.d = r8_5 - rax_13 + 0x1f
            
            if (r8_5 - rax_13 + 0x1f s> rbx_3)
                var_10c_1.d = rbx_3
        else
            while (true)
                int64_t rdx_6 = sx.q(rcx_4)
                r8_5 += 0x20
                rcx_4 += 1
                var_10c_1:4.d = r8_5
                var_120_1 = rcx_4
                
                if (rdx_6.d s>= (temp1_1 + (temp0_3 & 0x1f)) s>> 5)
                    break
                
                rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
                int32_t var_110_2 = 0xffffffff
                
                if (rdx_5 != 0)
                    goto label_141e75048
            
            var_10c_1.d = rbx_3
    
    int32_t r12_1 = r10_2[5].d
    int32_t r14_1 = r10_2[5].d
    var_148 = r10_2
    var_140 = var_120_1.o
    void* rcx_8 = &r10_2[2]
    int32_t r8_8 = r12_1 s>> 5
    zmm0 = var_148.o
    int32_t r9_3 = r12_1 & 0xffffffe0
    var_130 = 0xffffffff
    int64_t var_b8_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
    double var_d8[0x2] = zmm0
    
    if (r12_1 != r14_1)
        void* rax_15 = *(rcx_8 + 0x10)
        void* r10_1 = rcx_8
        
        if (rax_15 != 0)
            r10_1 = rax_15
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r14_1 - 1)
        int32_t rdx_10 = *(r10_1 + (sx.q(r8_8) << 2)) & 0xffffffff << (r12_1.b & 0x1f)
        
        if (rdx_10 != 0)
        label_141e7510d:
            int32_t rax_22 = neg.d(rdx_10) & rdx_10
            uint64_t rflags_2
            int32_t temp0_6
            temp0_6, rflags_2 = _bit_scan_reverse(rax_22)
            int32_t rdi_6
            
            if (rax_22 == 0)
                rdi_6 = 0x20
            else
                rdi_6 = 0x1f - temp0_6
            
            r12_1 = r9_3 - rdi_6 + 0x1f
            
            if (r12_1 s<= r14_1)
                goto label_141e7512c
        else
            while (true)
                int64_t rcx_10 = sx.q(r8_8)
                r9_3 += 0x20
                r8_8 += 1
                
                if (rcx_10.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_10 = *(r10_1 + (rcx_10 << 2) + 4)
                
                if (rdx_10 != 0)
                    goto label_141e7510d
        
        r12_1 = r14_1
        goto label_141e7512c
    
    while (true)
        int64_t rax_23 = sx.q(var_140[1]:4.d)
        double rdx_11 = var_d8[0]
        
        if (rax_23.d == r12_1 && var_140[0] == rcx_8 && rdx_11 == r10_2)
            break
        
        void* rdi_8 = rax_23 * 0x70 + *rdx_11
        int64_t rbx_4 = *(rdi_8 + 8)
        
        if ((*(rdi_8 + 0x64) & 8) == 0)
            int64_t* i_1 = *rsi_1
            r14_1.b = 0
            
            for (; i_1 != &i_1[sx.q(rsi_1[1].d) * 4]; i_1 = &i_1[4])
                if (*i_1 == rbx_4)
                    r14_1.b = 1
                    zmm6 = sub_141e8b6c0(i_1, rdi_8 + 8, arg4)
                    break
            
            if (r14_1.b == 0)
                var_140[1]:4.d &= 0xfffffffe
                var_148 = nullptr
                var_140[0].d = 0x3f800000
                var_140[0]:4.d = 0x3f800000
                var_140[1].d = 0x469c4000
                var_130.d = 0x3f800000
                zmm6 = sub_141e8b6c0(&var_148, rdi_8 + 8, arg4)
                int64_t rbx_5 = sx.q(rsi_1[1].d)
                int32_t rax_27 = (rbx_5 + 1).d
                rsi_1[1].d = rax_27
                
                if (rax_27 s> *(rsi_1 + 0xc))
                    sub_1405c4e40(rsi_1)
                
                int64_t rax_28 = *rsi_1
                int64_t rcx_16 = rbx_5 << 5
                *(rcx_16 + rax_28) = var_148.o
                *(rcx_16 + rax_28 + 0x10) = var_140
        else
            int64_t rdi_9 = sx.q(r15_2)
            r15_2 = (rdi_9 + 1).d
            
            if (r15_2 s> var_f4_1)
                sub_1405a4d70(&var_100)
                r13_1 = var_100
            
            r13_1[rdi_9] = rbx_4
        
        var_140[1].d &= not.d(var_d8[1]:4.d)
        sub_14059bdd0(&var_d8[1])
    label_141e7512c:
        r10_2 = var_150.q
        rcx_8 = var_118_1
    
    int64_t* rdi_10 = r13_1
    void* rcx_19 = &r13_1[sx.q(r15_2)]
    int64_t rbx_6 = 0
    uint64_t r14_5 = (rcx_19 - r13_1 + 7) u>> 3
    
    if (r13_1 u> rcx_19)
        r14_5 = 0
    
    if (r14_5 != 0)
        void* r13_2 = arg_10
        int32_t* r15_3 = rax + 0x3c
        
        if (rax == 0)
            r15_3 = 0x34
        
        void* r12_2 = rax + 0x10
        
        if (rax == 0)
            r12_2 = 8
        
        do
            sub_141e84120(r10_2, *rdi_10)
            
            if (*r12_2 == *r15_3)
                sub_141e84430(arg1 + 0x260, r13_2)
            
            r10_2 = var_150.q
            rdi_10 = &rdi_10[1]
            rbx_6 += 1
        while (rbx_6 != r14_5)
        
        r13_1 = var_100
    
    if (r13_1 != 0)
        sub_140a74f90(r13_1)
    
    r12 = 1
    r15_1 = arg1

void** i_2 = *rsi_1

for (void* r14_8 = &i_2[sx.q(rsi_1[1].d) * 4]; i_2 != r14_8; i_2 = &i_2[4])
    void* rbx_7 = *i_2
    
    if (rbx_7 != 0)
        if ((*(i_2 + 0x14) & 1) == 0)
            sub_141e7acd0(r15_1 + 0x1b0, &arg_10, rbx_7)
            int64_t rax_33 = sx.q(arg_10.d)
            
            if (rax_33.d == 0xffffffff)
                rax = 0
            else
                rax = rax_33 * 0x68 + *(r15_1 + 0x1b0)
            
            int32_t* rbx_8 = rax + 8
            
            if (rax == 0)
                rbx_8 = nullptr
            
            if (rbx_8 != 0)
                zmm0 = i_2[1].d
                double zmm1[0x2] = *rbx_8
                
                if (r12.b == 0)
                    zmm0[0].d = zmm0[0].d f* zmm6[0].d
                    zmm0[0].d = zmm0[0].d f+ 1f
                    zmm0[0].d = zmm0[0].d f- zmm6[0].d
                    zmm0[0].d = zmm0[0].d f* zmm1[0].d
                    *rbx_8 = zmm0[0].d
                    zmm6[0].d = zmm6[0].d f* *(i_2 + 0xc)
                    zmm6[0].d = zmm6[0].d f+ 1f
                    zmm6[0].d = zmm6[0].d f- zmm6[0].d
                    zmm6[0].d = zmm6[0].d f* rbx_8[1]
                    rbx_8[1] = zmm6[0].d
                    zmm6[0].d = zmm6[0].d f* i_2[3].d
                    zmm6[0].d = zmm6[0].d f+ 1f
                    zmm6[0].d = zmm6[0].d f- zmm6[0].d
                    zmm6[0].d = zmm6[0].d f* rbx_8[6]
                    rbx_8[6] = zmm6[0].d
                    float zmm0_4 = (logf(i_2[2].d[0].d) - 2.99573231f) * 0.144764826f f* zmm6[0].d
                        + 1f f- zmm6[0].d
                    
                    if (zmm0_4 >= 0f)
                        zmm0_4 = _mm_min_ss(zmm0_4, 0x3f800000)
                    else
                        zmm0_4 = (zx.o(0)).d
                    
                    zmm0, rax = expf(zmm0_4 * 6.90775537f + 2.99573231f)
                else
                    zmm1[0].d = zmm1[0].d f* zmm0[0].d
                    *rbx_8 = zmm1[0].d
                    zmm0 = *(i_2 + 0xc)
                    zmm0[0].d = zmm0[0].d f* rbx_8[1]
                    zmm1 = rbx_8[6]
                    rbx_8[1] = zmm0[0].d
                    zmm1[0].d = zmm1[0].d f* i_2[3].d
                    rbx_8[6] = zmm1[0].d
                    zmm0 = i_2[2].d
                
                if (not(zmm0[0].d f>= rbx_8[2]))
                    rbx_8[2] = zmm0[0].d
        else if (r12.b == 0)
            var_140 = *(i_2 + 0x10)
            var_148.o = *i_2
            zmm6[0].d = zmm6[0].d f* i_2[1].d
            zmm6[0].d = zmm6[0].d f* *(i_2 + 0xc)
            zmm6[0].d = zmm6[0].d f+ 1f
            zmm6[0].d = zmm6[0].d f+ 1f
            zmm6[0].d = zmm6[0].d f- zmm6[0].d
            zmm6[0].d = zmm6[0].d f- zmm6[0].d
            var_140[0].d = zmm6[0].d
            zmm6[0].d = zmm6[0].d f* i_2[3].d
            var_140[0]:4.d = zmm6[0].d
            zmm6[0].d = zmm6[0].d f+ 1f
            zmm6[0].d = zmm6[0].d f- zmm6[0].d
            var_130.d = zmm6[0].d
            float zmm0_2 =
                (logf(i_2[2].d[0].d) - 2.99573231f) * 0.144764826f f* zmm6[0].d + 1f f- zmm6[0].d
            
            if (zmm0_2 >= 0f)
                zmm0_2 = _mm_min_ss(zmm0_2, 0x3f800000)
            else
                zmm0_2 = (zx.o(0)).d
            
            var_140[1].d = expf(zmm0_2 * 6.90775537f + 2.99573231f)
            sub_141e830c0(r15_1, &var_148, rbx_7)
        else
            sub_141e830c0(r15_1, i_2, rbx_7)
