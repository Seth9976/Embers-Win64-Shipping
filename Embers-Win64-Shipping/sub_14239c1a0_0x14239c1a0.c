// 函数: sub_14239c1a0
// 地址: 0x14239c1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13 = *arg2
uint64_t r12 = arg3

if (r13 == 0)
    return &__return_addr

char rdx = arg2[0x16].b
arg3.b = 0
uint128_t zmm4 = zx.o(0)
int32_t rsi_1 = 0
int32_t var_80 = 0
float var_88 = 0f
int32_t var_78 = 0
bool arg_10 = false
char var_84_1 = rdx
uint128_t zmm8

if (rdx != 0)
    zmm8 = *(arg1 + 0x74)
else
    rdx = var_84_1
    zmm8 = _mm_cvtepi32_ps(zx.o(1 << ((arg2[0xd].d).b - 1)))

if (*(r12 + 0x26) == 0)
    if (*(arg2 + 0x64) != arg2[0xd].d)
        float zmm7_1 = sub_1423b0bb0(arg1 + 0x40, rdx, r13, &var_88, &var_80, &var_78, 0)
        char var_7c_1 = 0
        uint128_t zmm0_1
        int32_t zmm6_1
        
        if (*(r12 + 0x40) == 0)
            int32_t* rbx_4 = *(arg1 + 0x78)
            void* r14_2 = &rbx_4[sx.q(*(arg1 + 0x80))]
            
            if (rbx_4 == r14_2)
            label_14239c4fb:
                zmm4 = var_80
            else
                zmm6_1 = 0x46000000
                
                while (true)
                    zmm4 = var_80
                    int64_t* rcx_16 = (sx.q(*rbx_4) << 5) + *(arg1 + 0x60)
                    
                    if (var_78 s>= arg2[0xd].d)
                        break
                    
                    if (zmm4.d f>= zmm6_1)
                        break
                    
                    if (not(zmm4.d f<= rcx_16[3].d) && zmm7_1 f< *(r12 + 0x30))
                        break
                    
                    zmm6_1, zmm7_1 =
                        sub_1423b0bb0(rcx_16, var_84_1, r13, &var_88, &var_80, &var_78, 0)
                    rbx_4 = &rbx_4[1]
                    
                    if (rbx_4 == r14_2)
                        goto label_14239c4fb_1
        else
            int32_t rcx_3 = *(arg1 + 0xa0)
            void* r10_1 = &arg2[0x17]
            int32_t rax_1 = arg2[0x1a].d
            int32_t rdx_2 = 0
            int32_t var_74_1 = 1
            int32_t r14_1 = 0
            
            if (rax_1 s<= rcx_3)
                rcx_3 = rax_1
            
            if (rcx_3 s<= 0)
            label_14239c4fb_1:
                zmm4 = var_80
            else
                zmm6_1 = 0x46000000
                zmm4 = var_80
                
                do
                    void* rax_2 = *(r10_1 + 0x10)
                    void* rcx_4 = r10_1
                    
                    if (rax_2 != 0)
                        rcx_4 = rax_2
                    
                    if ((*(rcx_4 + (sx.q(rdx_2) << 2)) & var_74_1) != 0)
                        int64_t rdx_4 = sx.q(*(*(arg1 + 0x98) + (sx.q(r14_1) << 2)))
                        
                        if (rdx_4.d != 0xffffffff)
                            int64_t* rbx_3 = (rdx_4 << 5) + *(arg1 + 0x60)
                            
                            if (sub_1423b1790(rbx_3, r13) != 0)
                                char rax_9
                                
                                if (not((*(r12 + 0x30)).d f<= rbx_3[3].d))
                                    rax_9 = sub_1423b1720(rbx_3, r13)
                                
                                if ((*(r12 + 0x30)).d f<= rbx_3[3].d || rax_9 != 0)
                                    zmm4 = var_80
                                    
                                    if (zmm4.d f>= zmm6_1)
                                        break
                                    
                                    int32_t rax_10 = var_78
                                    
                                    if (rax_10 s>= arg2[0xd].d)
                                        break
                                    
                                    zmm0_1 = var_88
                                    int32_t var_68 = rax_10
                                    int32_t var_70 = zmm0_1.d
                                    int32_t var_6c = zmm4.d
                                    zmm6_1, zmm7_1 = sub_1423b0bb0(rbx_3, var_84_1, r13, &var_70, 
                                        &var_6c, &var_68, 0)
                                    zmm0_1 = var_70
                                    
                                    if (not(zmm0_1.d f< var_88))
                                        var_88 = zmm0_1.d
                                    
                                    zmm0_1 = var_6c
                                    zmm4 = var_80
                                    
                                    if (not(zmm0_1.d f< zmm4.d))
                                        var_80 = zmm0_1.d
                                        zmm4 = zmm0_1
                                    
                                    int32_t rcx_11 = var_78
                                    
                                    if (var_68 s>= rcx_11)
                                        rcx_11 = var_68
                                    
                                    var_78 = rcx_11
                                else
                                    zmm4 = var_80
                                    var_7c_1 = 1
                                
                                r10_1 = &arg2[0x17]
                            else
                                r10_1 = &arg2[0x17]
                                void* rax_6 = *(r10_1 + 0x10)
                                void* r9_2 = r10_1
                                
                                if (rax_6 != 0)
                                    r9_2 = rax_6
                                
                                int32_t rax_7 = r14_1
                                
                                if (r14_1 s< 0)
                                    rax_7 = r14_1 + 0x1f
                                
                                int64_t r8_1 = sx.q(rax_7 s>> 5)
                                *(r9_2 + (r8_1 << 2)) &= not.d(1 << (r14_1.b & 0x1f))
                                zmm4 = var_80
                    
                    int32_t rcx_12 = rdx_2
                    r14_1 += 1
                    int32_t rax_12 = var_74_1 * 2
                    rdx_2 = rcx_12 + 1
                    
                    if (var_74_1 != neg.d(var_74_1))
                        rdx_2 = rcx_12
                    
                    int32_t rcx_13 = 1
                    
                    if (rax_12 != 0)
                        rcx_13 = rax_12
                    
                    var_74_1 = rcx_13
                while (r14_1 s< rcx_3)
        
        if (var_78 s< arg2[0xd].d && (var_88.d f> zmm7_1 || not(zmm4.d f<= zmm7_1)))
            zmm0_1 = var_88
            
            if (not(zmm0_1.d f== 3.40282347e+38f) && not(zmm4.d f== 3.40282347e+38f))
                float zmm3[0x4] = arg2[0x10].d
                zmm3[0] = zmm3[0] f* arg2[3].d
                float zmm2[0x4] = var_88
                int32_t rcx_17 = int.d(zmm0_1.d)
                int32_t rax_16 = int.d(zmm4.d)
                int32_t rdx_11 = int.d(zmm8.d)
                
                if (rax_16 s>= rcx_17)
                    rcx_17 = rax_16
                
                zmm2[0] = zmm2[0] * zmm3[0]
                zmm0_1.d = zmm3.d f+ zmm3[0]
                zmm4.d = zmm4.d f* zmm3[0]
                
                if (rcx_17 s>= rdx_11)
                    rdx_11 = rcx_17
                
                var_88 = zmm2[0]
                var_80 = zmm4.d
                float temp0_3[0x4] = _mm_cvtepi32_ps(zx.o(rdx_11))
                temp0_3[0] = temp0_3[0] f/ zmm8.d
                arg_10 = temp0_3[0] f>= zmm0_1.d
        
        int32_t rax_17
        
        if (var_88.d f!= zmm7_1 || zmm4.d f!= zmm7_1 || var_78 != 0)
            rax_17 = 0
        else
            rax_17 = 0x100
            zmm0_1.q = data_143dbb3b8 f- arg2[0xf]
            float temp0_4[0x4] = _mm_cvtpd_ps(zmm0_1)
            temp0_4[0] = temp0_4[0] - 5f
            
            if (not(temp0_4[0] f> arg2[0xe].d))
                rax_17 = 0
        
        int32_t rcx_20 = (*(arg2 + 0xb4) & 0xfffffeff) | rax_17
        *(arg2 + 0xb4) = rcx_20
        
        if ((0x100 & rcx_20) != 0)
            int32_t rsi_2
            
            if (*(r12 + 0x40) == 0)
                int32_t* rbx_5 = *(arg1 + 0x88)
                rsi_2 = rcx_20
                void* r14_3 = &rbx_5[sx.q(*(arg1 + 0x90))]
                
                if (rbx_5 != r14_3)
                    do
                        if (sub_1423b1790((sx.q(*rbx_5) << 5) + *(arg1 + 0x60), r13) != 0)
                            *(arg2 + 0xb4) &= 0xfffffeff
                            break
                        
                        rbx_5 = &rbx_5[1]
                    while (rbx_5 != r14_3)
                    
                    zmm4 = var_80
                    rsi_2 = *(arg2 + 0xb4)
            else
                if (var_7c_1 == 0)
                    rsi_1 = 0x100
                
                rsi_2 = rsi_1 | (rcx_20 & 0xfffffeff)
                *(arg2 + 0xb4) = rsi_2
            
            rcx_20 = rsi_2
            
            if ((0x100 & rsi_2) != 0)
                float zmm1[0x4] = arg2[0xe].d
                
                if (not(zmm1[0] >= 90f))
                    int32_t rax_20 = int.d(fconvert.t(var_88))
                    int32_t rdx_13 = int.d(zmm8.d)
                    int32_t rcx_25 = rdx_13
                    
                    if (rax_20 s>= rdx_13)
                        rcx_25 = rax_20
                    
                    bool cond:8_1 = zmm1[0] >= 5f
                    rcx_20 = rsi_2
                    var_88 = _mm_cvtepi32_ps(zx.o(rcx_25)).d
                    
                    if (not(cond:8_1))
                        int32_t rax_21 = int.d(zmm4.d)
                        
                        if (rax_21 s>= rdx_13)
                            rdx_13 = rax_21
                        
                        zmm4 = _mm_cvtepi32_ps(zx.o(rdx_13))
                        var_80 = zmm4.d
        
        if ((rcx_20.b & 8) != 0)
            var_88 = 3.40282347e+38f
            arg3 = zx.q(arg_10)
        else if (var_84_1 != 0)
            arg3 = zx.q(arg_10)
        else
            int32_t rax_22 = *(arg2 + 0xc)
            
            if (rax_22 != 0x1d)
                arg3 = zx.q(arg_10)
            else if (*(r12 + 0xc) == 2)
                var_88 = 3.40282347e+38f
                arg3 = zx.q(arg_10)
            else if (rax_22 != rax_22 || *(r12 + 0xc) != 1)
                arg3 = zx.q(arg_10)
            else
                int32_t rax_23 = int.d(fconvert.t(var_88))
                arg3 = zx.q(arg_10)
                
                if (*(r12 + 0x25) == 0)
                    zmm8.d = zmm8.d f* 0.5f
                
                int32_t rcx_26 = int.d(zmm8.d)
                
                if (rax_23 s>= rcx_26)
                    rcx_26 = rax_23
                
                var_88 = _mm_cvtepi32_ps(zx.o(rcx_26)).d
    else
        zmm4 = zmm8
        var_88 = zmm8.d
        var_80 = zmm4.d
else if (not(300f f<= arg2[0xe].d))
    zmm4 = 0x7f7fffff
    var_80 = 0x7f7fffff

if (*(r12 + 0x25) == 0)
    if (not(zmm4.d f< var_88))
        var_88 = zmm4.d
    
    zmm4 = var_88
    var_80 = zmm4.d

int64_t* var_a0
var_a0.b = arg3.b
int32_t* var_a8
var_a8.d = var_78
return sub_1423b5470(arg2, var_88, zmm4, *(arg1 + 0x74), var_a8.d, var_a0.b, r12)
