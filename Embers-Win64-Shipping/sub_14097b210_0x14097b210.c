// 函数: sub_14097b210
// 地址: 0x14097b210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_648
int64_t rax_1 = __security_cookie ^ &var_648
sub_14217c900(arg1, arg2)
void* r9 = arg1[0x28]
void* rcx
void* rdx_2
void* r8_1

if (r9 != 0)
    r8_1 = *(r9 + 0x158)
    rcx = r8_1
    rdx_2 = sx.q(*(r9 + 0x160)) * 0x78 + r8_1

int32_t rdx_3

if (r9 == 0 || r8_1 == rdx_2)
label_14097b286:
    rdx_3 = -1
else
    while (*(rcx + 0x10) != arg1)
        rcx += 0x78
        
        if (rcx == rdx_2)
            goto label_14097b286
    
    rdx_3 = ((rcx - r8_1) s/ 0x78).d

void var_548
uint128_t zmm6_1
uint128_t zmm8
zmm6_1, zmm8 = sub_142428200(&var_548, rdx_3, r9)
void* rdi = &arg1[0xbc]
sub_141c7e6a0(rdi, zmm6_1)
int64_t* rax_4 = (*(*arg1 + 0x378))(arg1)
int64_t rbx = data_143ced190
int64_t rcx_4

if (data_143de5480 == 0)
    rcx_4 = 0
else
    rcx_4.b = GetCurrentThreadId() != data_143de5470

int32_t rax_9 = *(rbx + (rcx_4 << 2))

if (0.0 f>= arg1[0xee] || arg1[0xef].d s<= 0)
    rbx = 0
else
    rbx.b = 1

int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int64_t zmm7 = 0x4170000000000000
int128_t zmm3
zmm3.q = float.d(performanceCount)
zmm3.q = zmm3.q f* data_143d796f8
zmm3.q = zmm3.q f+ zmm7
char i
int64_t* rdx_8
int64_t r8_4
int128_t zmm6_2
rdx_8, r8_4, zmm6_2 = sub_140948cc0(&i, arg1, arg1[0xf2], zmm3, rbx.b)
int64_t performanceCount_1
int64_t* var_f0

if (i == 0)
    int64_t* r12
    int64_t* var_20_1 = r12
    uint128_t var_68_1 = zmm8
    zmm8 = 0x408f400000000000
    uint128_t zmm9 = 0x416312d000000000
    
    do
        uint128_t zmm1_1 = zx.o(0)
        uint128_t var_5f8
        uint128_t var_5e8_1
        void var_504
        int64_t* var_d8
        char var_d0
        int32_t var_cc
        int32_t r14_1
        
        if (var_d0 == 0)
            int32_t var_e0
            r14_1 = var_e0
            int32_t var_104
            int32_t var_570_1 = var_104
            int32_t var_5d8_2 = r14_1
            int64_t* var_5a0_1 = var_f0
            var_5f8 = (&var_504).o
            
            if (var_f0 != 0)
                var_f0[1].d += 1
            
            int64_t var_5a8_1
            var_5a8_1.o = zmm1_1
            int64_t* rbx_2 = _mm_bsrli_si128(zmm1_1, 8).q
            int64_t var_f8
            var_5e8_1 = var_f8.o
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    rdx_8, r8_4 = (**rbx_2)(rbx_2)
                    int32_t temp4_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        rdx_8, r8_4 = (*(*rbx_2 + 8))(rbx_2, 1)
            
            char var_508
            r12 = zx.q(var_508)
        else
            rdx_8 = (sx.q(var_cc) << 5) + var_d8[1]
            int64_t rax_13 = *rdx_8
            int32_t var_580_1 = *rdx_8[3]
            void* rax_14 = rdx_8[1]
            void* var_5b0_1 = rax_14
            var_5f8 = rdx_8[2].o
            
            if (rax_14 != 0)
                *(rax_14 + 8) += 1
            
            int64_t var_5b8_1
            var_5b8_1.o = zmm1_1
            int64_t* rbx_1 = _mm_bsrli_si128(zmm1_1, 8).q
            var_5e8_1 = rax_13.o
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    rdx_8, r8_4 = (**rbx_1)(rbx_1)
                    int32_t temp5_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        rdx_8, r8_4 = (*(*rbx_1 + 8))(rbx_1, 1)
            
            r14_1 = 0
            int32_t var_5d8_1 = 0
            r12.b = 1
        
        uint64_t performanceCount_5 = var_5e8_1:8.q
        char var_618_1 = r12.b
        
        if (performanceCount_5 != 0)
            *(performanceCount_5 + 8) += 1
        
        performanceCount_1 = performanceCount_5
        uint64_t rax_22
        
        if (performanceCount_5 != 0)
            rax_22 = zx.q(*(performanceCount_5 + 8))
            *(performanceCount_5 + 8) = rax_22.d
            
            if (rax_22.d == 0)
                rax_22, rdx_8, r8_4 = (**performanceCount_5)(performanceCount_5)
                int32_t temp6_1 = *(performanceCount_5 + 0xc)
                *(performanceCount_5 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    rax_22, rdx_8, r8_4 = (*(*performanceCount_5 + 8))(performanceCount_5, 1)
        
        uint64_t rbx_3 = arg1[0x11]
        uint64_t r15_1 = 0
        
        if (r12.b == 0)
            if (r14_1 u<= 0x19 && test_bit(0x2400081, r14_1))
            label_14097bb3e:
                
                if (performanceCount_5 == 0)
                    break
                
                int32_t temp7_1 = *(performanceCount_5 + 8)
                *(performanceCount_5 + 8) -= 1
                
                if (temp7_1 == 1)
                    (**performanceCount_5)(performanceCount_5)
                    int32_t temp10_1 = *(performanceCount_5 + 0xc)
                    *(performanceCount_5 + 0xc) -= 1
                    
                    if (temp10_1 == 1)
                        (*(*performanceCount_5 + 8))(performanceCount_5, 1)
                
                int32_t temp9_1 = *(performanceCount_5 + 8)
                *(performanceCount_5 + 8) -= 1
                
                if (temp9_1 == 1)
                    (**performanceCount_5)(performanceCount_5)
                    int32_t temp13_1 = *(performanceCount_5 + 0xc)
                    *(performanceCount_5 + 0xc) -= 1
                    
                    if (temp13_1 == 1)
                        (*(*performanceCount_5 + 8))(performanceCount_5, 1)
                
                break
                break
            
            if (r14_1 == 0x1a || r14_1 == 0x34)
                goto label_14097b6a0
            
            int64_t* r15_2 = var_5e8_1.q
            
            if (r14_1 != 0xc)
                arg1[0xbe].d += 1
            else
                *(arg1 + 0x5ec) += 1
                
                if (rbx_3 != 0)
                    int64_t* rcx_19 = *(rbx_3 + 0x110)
                    char rax_30
                    rax_30, rdx_8, r8_4 = (*(*rcx_19 + 8))(rcx_19, r15_2)
                    
                    if (rax_30 == 0)
                        goto label_14097b571
            
            r8_4.b = 1
            int64_t var_558
            int64_t* rax_32 = (*(*r15_2 + 0x78))(r15_2, &var_558, r8_4)
            int16_t* const r15_3
            
            if (rax_32[1].d == 0)
                r15_3 = &data_142d40450
            else
                r15_3 = *rax_32
            
            sub_140fc89f0(rax_4, r14_1)
            char var_628
            var_628.q = r15_3
            int64_t var_598
            rdx_8 = sub_140a2e390(&var_598, 
                UIpNetDriver::TickDispatch: Socket->RecvFrom: %i (%s) from %s", zx.q(r14_1))
            int64_t rcx_23 = var_558
            
            if (rcx_23 != 0)
                rdx_8 = sub_140a74f90(rcx_23)
            
            if (rbx_3 == 0)
                int64_t rcx_24 = var_598
                
                if (rcx_24 != 0)
                    rdx_8 = sub_140a74f90(rcx_24)
                
                goto label_14097b571
            
            float zmm2_1[0x2] = *(rbx_3 + 0x1a80)
            
            if (zmm2_1[0] f<= (zx.o(0)).q.d)
            label_14097bad5:
                char rax_57
                
                if (*(rbx_3 + 0x1ac8) s< *(rbx_3 + 0x1ac0))
                    rax_57 = *(rbx_3 + 0x1acc)
                
                if (*(rbx_3 + 0x1ac8) s>= *(rbx_3 + 0x1ac0) || rax_57 == 1 || rax_57 - 6 u<= 1)
                    *(rbx_3 + 0x1acc) = 7
                    var_628.q = &var_598
                    sub_1423d2710(data_143f5b298, arg1[0x28], arg1, 3, var_628)
                    (*(*arg1 + 0x2b0))(arg1)
                else
                    *(rbx_3 + 0x1a80) = 0
                    *(rbx_3 + 0x1acc) = 4
            else
                int64_t zmm0_2 = *(rbx_3 + 0x1a90)
                double zmm1_2 = arg1[0x43]
                
                if (zmm0_2 f!= zmm6_2.q)
                    if (not(zmm1_2 f- zmm0_2 f< _mm_cvtps_pd(zmm2_1).q))
                        goto label_14097bad5
                else
                    *(rbx_3 + 0x1a90) = zmm1_2
            
            int64_t rcx_51 = var_598
            
            if (rcx_51 != 0)
                sub_140a74f90(rcx_51)
            
            goto label_14097bb3e
        
        if (var_5f8:8.d != 0)
        label_14097b6a0:
            r12 = var_5e8_1.q
            
            if (rbx_3 != 0)
                int64_t* rcx_25 = *(rbx_3 + 0x110)
                rax_22, rdx_8 = (*(*rcx_25 + 8))(rcx_25, r12)
                
                if (rax_22.b != 0)
                    r15_1 = rbx_3
            
            char r13_1 = 0
            
            if (r15_1 == 0)
                int64_t rcx_29
                
                if (arg1[0x15].d == *(arg1 + 0xd4))
                label_14097b74c:
                    rdx_8 = nullptr
                    rcx_29 = 0
                else
                    int32_t rax_37 = (*(*r12 + 0x88))(r12)
                    void* r8_6 = &arg1[0x1b]
                    void* rcx_27 = *(r8_6 + 8)
                    
                    if (rcx_27 != 0)
                        r8_6 = rcx_27
                    
                    int32_t rbx_4 = *(r8_6 + (((sx.q(arg1[0x1d].d) - 1) & sx.q(rax_37)) << 2))
                    
                    if (rbx_4 == 0xffffffff)
                        goto label_14097b74c
                    
                    int64_t rax_39 = arg1[0x14]
                    int64_t r14_3
                    
                    while (true)
                        r14_3 = sx.q(rbx_4) << 5
                        int64_t* rcx_28 = *(r14_3 + rax_39)
                        
                        if ((*(*rcx_28 + 0x80))(rcx_28, r12) != 0)
                            break
                        
                        rax_39 = arg1[0x14]
                        rbx_4 = *(rax_39 + r14_3 + 0x18)
                        
                        if (rbx_4 == 0xffffffff)
                            goto label_14097b74c
                    
                    if (rbx_4 == 0xffffffff)
                        goto label_14097b74c
                    
                    rcx_29 = arg1[0x14] + r14_3
                    rdx_8 = nullptr
                
                rax_22 = rcx_29 + 0x10
                
                if (rcx_29 == 0)
                    rax_22 = 0
                
                if (rax_22 != 0)
                    uint64_t rcx_30 = *rax_22
                    
                    if (rcx_30 == 0)
                        r13_1 = 1
                    else
                        r15_1 = rcx_30
            
            if (var_618_1 == 0)
                if (r15_1 == 0)
                    if (r13_1 == 0)
                        arg1[0xbc].d += 1
                    else
                        arg1[0xbd].d += 1
                    
                    if ((arg1[0xe9].b & 1) != 0 && *(arg1 + 0x641) == 0 && *(arg1 + 0x61c) != 0)
                        arg1[0xc9].d += 1
                else if (r15_1 != arg1[0x11] && (*(r15_1 + 0x134) != 3 || (arg1[0xe9].b & 2) == 0))
                    rdx_8 = (*(*r15_1 + 0x2d8))(r15_1)
                
                goto label_14097ba1a
            
            int32_t rbx_6
            
            if (r15_1 != 0)
                rbx_6 = var_5f8:8.d
            label_14097b905:
                uint128_t zmm0_1
                
                if (*(arg1 + 0x61c) != 0)
                    *(arg1 + 0x5e4) += 1
                    
                    if ((*(arg1 + 0x5e4) & 0x7f) == 0)
                        if (*(arg1 + 0x614) s> 0)
                            int64_t performanceCount_2
                            QueryPerformanceCounter(&performanceCount_2)
                            zmm0_1.q = float.d(performanceCount_2)
                            zmm0_1.q = zmm0_1.q f* data_143d796f8
                            zmm0_1.q = zmm0_1.q f+ zmm7
                            zmm0_1.q = zmm0_1.q f- arg1[0xcf]
                            zmm0_1.q = zmm0_1.q f* zmm8.q
                        
                        if (*(arg1 + 0x614) s<= 0 || int.d(zmm0_1.q) s<= *(arg1 + 0x614))
                            rax_22.b = 0
                        else
                            rax_22.b = 1
                        
                        *(arg1 + 0x61f) = rax_22.b
                
                if (rax_9 != 0)
                    int64_t rcx_42
                    
                    if (var_d0 == 0)
                        int64_t var_e8
                        zmm0_1 = zx.o(var_e8)
                        
                        if (not(zmm0_1.q f== zmm6_2.q))
                            zmm0_1.q = zmm0_1.q f* zmm9.q
                            zmm0_1.q = zmm0_1.q f+ 0x3fe0000000000000
                            rcx_42 = int.q(zmm0_1.q)
                            
                            if (rcx_42 != -0x8000000000000000)
                                zmm1_1.q = float.d(rcx_42)
                                
                                if (not(zmm1_1.q f== zmm0_1.q))
                                    zmm0_1.q = float.d(rcx_42 - (
                                        zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm0_1, zmm0_1.q)))
                                        & 1))
                            
                            int64_t performanceCount_3 = int.q(zmm0_1.q)
                            rcx_42.b = 1
                            performanceCount = performanceCount_3
                            *(r15_1 + 0x220) = performanceCount_3
                            *(r15_1 + 0x228) = rcx_42.b
                    else
                        (*(*var_d8 + 8))(var_d8, zx.q(var_cc), &performanceCount)
                        rcx_42.b = 0
                        *(r15_1 + 0x220) = performanceCount
                        *(r15_1 + 0x228) = rcx_42.b
                
                rdx_8 = (*(*r15_1 + 0x338))(r15_1, var_5f8.q, zx.q(rbx_6))
            label_14097ba1a:
                int64_t performanceCount_4 = performanceCount_1
                
                if (performanceCount_4 != 0)
                    int32_t temp15_1 = *(performanceCount_4 + 8)
                    *(performanceCount_4 + 8) -= 1
                    
                    if (temp15_1 == 1)
                        rdx_8 = (**performanceCount_4)(performanceCount_4)
                        int32_t temp18_1 = *(performanceCount_4 + 0xc)
                        *(performanceCount_4 + 0xc) -= 1
                        
                        if (temp18_1 == 1)
                            rdx_8 = (*(*performanceCount_4 + 8))(performanceCount_4, 1)
                
                if (performanceCount_5 != 0)
                label_14097ba4b:
                    int32_t temp17_1 = *(performanceCount_5 + 8)
                    *(performanceCount_5 + 8) -= 1
                    
                    if (temp17_1 == 1)
                        rdx_8 = (**performanceCount_5)(performanceCount_5)
                        int32_t temp20_1 = *(performanceCount_5 + 0xc)
                        *(performanceCount_5 + 0xc) -= 1
                        
                        if (temp20_1 == 1)
                            rdx_8 = (*(*performanceCount_5 + 8))(performanceCount_5, 1)
            else
                if (*(arg1 + 0x61c) == r15_1.b)
                label_14097b896:
                    int64_t* rcx_38 = arg1[0x41]
                    
                    if (rcx_38 == 0)
                        goto label_14097ba1a
                    
                    int32_t rax_47
                    rax_47, rdx_8 = (**rcx_38)(rcx_38)
                    
                    if (rax_47 != 1)
                        goto label_14097ba1a
                    
                    int32_t var_560_1 = 0x400
                    void* var_568 = &var_504
                    rax_22, rdx_8, zmm6_2, zmm7, zmm8, zmm9 =
                        sub_140970240(arg1, &var_5f8, &var_568)
                    rbx_6 = var_5f8:8.d
                    r15_1 = rax_22
                    rax_22.b = rbx_6 == 0
                    
                    if (r15_1 == 0 || rax_22.b != 0)
                        performanceCount_5 = var_5e8_1:8.q
                        goto label_14097ba1a
                    
                    performanceCount_5 = var_5e8_1:8.q
                    goto label_14097b905
                
                if (*(arg1 + 0x61e) == r15_1.b)
                    char rcx_35
                    
                    if (r13_1 == 0)
                        arg1[0xbc].d += 1
                        rcx_35 = (arg1[0xbd].d).b
                    else
                        arg1[0xbd].d += 1
                        rcx_35 = (arg1[0xbd].d).b
                    
                    if (((rcx_35 + (arg1[0xbc].d).b) & 0x7f) == 0)
                        char rax_45
                        rax_45, rdx_8, zmm6_2 = sub_141c7d980(&arg1[0xbc])
                        *(arg1 + 0x61e) = rax_45
                    
                    goto label_14097b896
                
                *(arg1 + 0x5f4) += 1
                
                if (performanceCount_5 != 0)
                    int32_t temp16_1 = *(performanceCount_5 + 8)
                    *(performanceCount_5 + 8) -= 1
                    
                    if (temp16_1 == 1)
                        rdx_8 = (**performanceCount_5)(performanceCount_5)
                        int32_t temp19_1 = *(performanceCount_5 + 0xc)
                        *(performanceCount_5 + 0xc) -= 1
                        
                        if (temp19_1 == 1)
                            rdx_8 = (*(*performanceCount_5 + 8))(performanceCount_5, 
                                zx.q((r15_1 + 1).d))
                    
                    goto label_14097ba4b
        else
            *(arg1 + 0x5ec) += 1
        label_14097b571:
            
            if (performanceCount_5 != 0)
                int32_t temp8_1 = *(performanceCount_5 + 8)
                *(performanceCount_5 + 8) -= 1
                
                if (temp8_1 == 1)
                    rdx_8 = (**performanceCount_5)(performanceCount_5)
                    int32_t temp12_1 = *(performanceCount_5 + 0xc)
                    *(performanceCount_5 + 0xc) -= 1
                    
                    if (temp12_1 == 1)
                        rdx_8 = (*(*performanceCount_5 + 8))(performanceCount_5, 1)
                
                int32_t temp11_1 = *(performanceCount_5 + 8)
                *(performanceCount_5 + 8) -= 1
                
                if (temp11_1 == 1)
                    rdx_8 = (**performanceCount_5)(performanceCount_5)
                    int32_t temp14_1 = *(performanceCount_5 + 0xc)
                    *(performanceCount_5 + 0xc) -= 1
                    
                    if (temp14_1 == 1)
                        rdx_8 = (*(*performanceCount_5 + 8))(performanceCount_5, 1)
        
        int64_t var_530 = var_530 + 1
        rdx_8, r8_4, zmm6_2 = sub_140954120(&i, rdx_8, zmm6_2)
    while (i == 0)

QueryPerformanceCounter(&performanceCount_1)

if (var_f0 != 0)
    var_f0[1].d -= 1
    
    if (var_f0[1].d == 1)
        (**var_f0)(var_f0)
        int32_t temp1_1 = *(var_f0 + 0xc)
        *(var_f0 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_f0 + 8))(var_f0, 1)

sub_141c7e630(rdi)
void* result = sub_1424294e0(&var_548)
__security_check_cookie(rax_1 ^ &var_648)
return result
