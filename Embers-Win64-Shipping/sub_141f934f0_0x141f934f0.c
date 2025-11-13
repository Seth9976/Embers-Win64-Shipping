// 函数: sub_141f934f0
// 地址: 0x141f934f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = 0
uint128_t zmm6 = arg5
uint128_t zmm7 = arg6
uint128_t zmm8
zmm8.d = zmm7.d f- zmm6.d
int32_t rax = arg1[0x10].d
uint128_t zmm12 = arg3
uint128_t zmm13 = arg2
int32_t var_f8
uint64_t i_3
uint128_t zmm0

if (arg4 == 0)
    char var_f0_1 = 0
    uint64_t i_6 = 0
    i_3 = 0
    uint128_t zmm9 = zx.o(0)
    int32_t i_4 = 0
    int32_t r13_1 = 0
    int32_t r12_1 = 0
    
    if (rax s> 0)
        int32_t* r14_1 = nullptr
        int32_t rcx_9
        
        do
            int64_t rax_2 = arg1[0xf]
            zmm0 = *(r14_1 + rax_2)
            
            if (zmm0.d f< zmm6.d)
                if (not(zmm0.d f<= zmm7.d))
                    zmm0.d = zmm0.d f- zmm8.d
                    *(r14_1 + rax_2) = zmm0.d
            else if (zmm0.d f> zmm7.d)
                zmm0.d = zmm0.d f- zmm8.d
                *(r14_1 + rax_2) = zmm0.d
            else
                var_f0_1 = 1
                
                arg2 = zmm6.d f== 0f ? zmm7 : zmm6
                
                zmm0, zmm6, zmm7, zmm8 = sub_141f87210(arg1, arg2, zx.o(0))
                int64_t rbx_1 = sx.q(r13_1)
                zmm9 = zmm0
                r13_1 = (rbx_1 + 1).d
                
                if (r13_1 s> i_2)
                    sub_1405a4cf0(&i_3)
                    i_2 = i_4
                
                i_6 = i_3
                *(i_6 + (rbx_1 << 2)) = r12_1
            
            rcx_9 = arg1[0x10].d
            r12_1 += 1
            r14_1 = &r14_1[2]
        while (r12_1 s< rcx_9)
        
        i_2 = 0
        
        if (var_f0_1 != 0)
            int64_t rbx_2 = sx.q(r13_1 - 1)
            
            if (r13_1 - 1 s>= 0)
                int64_t temp1_1
                
                do
                    int64_t rax_4 = sx.q(*(i_6 + (rbx_2 << 2)))
                    
                    if (rax_4.d s>= 0 && rax_4.d s< arg1[0xc].d)
                        int32_t* rdx_3 = arg1[0xb] + (rax_4 << 2)
                        
                        if (rdx_3 != 0)
                            int32_t rdx_4 = *rdx_3
                            var_f8 = rdx_4
                            void* rax_6 = sub_141f87c30(arg1, rdx_4)
                            int32_t rcx_4 = arg1[0x10].d
                            int64_t r10_1 = sx.q(*rax_6)
                            int32_t rax_8 = rcx_4 - r10_1.d
                            
                            if (rax_8 != 1)
                                int64_t r9 = arg1[0xf]
                                memmove(r9 + (r10_1 << 3), r9 + (sx.q((r10_1 + 1).d) << 3), 
                                    (rax_8 - 1) << 3)
                                rcx_4 = arg1[0x10].d
                            
                            arg1[0x10].d = rcx_4 - 1
                            sub_1405c53d0(&arg1[0xf])
                            sub_141f96860(&arg1[1], &var_f8)
                        
                        i_6 = i_3
                    
                    temp1_1 = rbx_2
                    rbx_2 -= 1
                while (temp1_1 - 1 s>= 0)
                rcx_9 = arg1[0x10].d
            
            int32_t rbx_3 = 0
            void* rcx_14
            int32_t r8_6
            
            if (rcx_9 s<= 0)
            label_141f93792:
                int32_t r14_2 = 0
                int32_t rax_14 = data_143a2d8ec + 1
                data_143a2d8ec = rax_14
                var_f8 = rax_14
                int64_t rax_15 = sx.q(arg1[0x10].d)
                
                if (rax_15.d s> 0)
                    int64_t rcx_11 = 0
                    int32_t* rax_16 = arg1[0xf]
                    
                    while (not(zmm6.d f<= *rax_16))
                        r14_2 += 1
                        rcx_11 += 1
                        rax_16 = &rax_16[2]
                        
                        if (rcx_11 s>= rax_15)
                            break
                
                int32_t r13_2 = arg1[0x10].d
                arg1[0x10].d = r13_2 + 1
                
                if (r13_2 + 1 s> *(arg1 + 0x84))
                    sub_1405a4d70(&arg1[0xf])
                
                int64_t rbx_4 = sx.q(r14_2)
                int64_t rdx_10 = arg1[0xf] + (rbx_4 << 3)
                memmove(rdx_10 + 8, rdx_10, (r13_2 - r14_2) << 3)
                int64_t rax_19 = arg1[0xf]
                rcx_14 = &arg1[1]
                r8_6 = r14_2
                *(rax_19 + (rbx_4 << 3)) = zmm6.d
                *(rax_19 + (rbx_4 << 3) + 4) = zmm9.d
            else
                uint128_t* r8_3 = arg1[0xf]
                int64_t rax_12 = 0
                uint128_t* rcx_10 = r8_3
                
                while (true)
                    arg2 = *rcx_10
                    zmm0.d = arg2.d f- zmm6.d
                    
                    if (_mm_and_ps(zmm0, 0x7fffffff).d f<= 9.99999975e-05f)
                        int64_t r14_4 = sx.q(rbx_3)
                        *(r8_3 + (r14_4 << 3) + 4) = zmm9.d
                        
                        if (rbx_3 s< 0)
                            goto label_141f9382e
                        
                        if (rbx_3 s>= (*(*arg1 + 8))(arg1))
                            goto label_141f9382e
                        
                        rcx_14 = &arg1[1]
                        
                        if (rbx_3 s< arg1[0xc].d && *(rcx_14 + 0x50) + (r14_4 << 2) != 0)
                            goto label_141f9382e
                        
                        r8_6 = rbx_3
                        int32_t rax_31 = data_143a2d8ec + 1
                        data_143a2d8ec = rax_31
                        var_f8 = rax_31
                        break
                    
                    if (arg2.d f> zmm6.d)
                        goto label_141f93792
                    
                    rbx_3 += 1
                    rax_12 += 1
                    rcx_10 += 8
                    
                    if (rax_12 s>= sx.q(rcx_9))
                        goto label_141f93792
            
            sub_141f7f180(rcx_14, &var_f8, r8_6)
        
    label_141f9382e:
        uint64_t i_5 = i_3
        
        if (i_5 != 0)
            sub_140a74f90(i_5)
else
    int32_t i = 0
    
    if (rax s> 0)
        int128_t* rax_1 = nullptr
        
        do
            int64_t rdx_1 = arg1[0xf]
            zmm0 = *(rax_1 + rdx_1)
            
            if (not(zmm0.d f< zmm6.d))
                zmm0.d = zmm0.d f+ zmm8.d
                *(rax_1 + rdx_1) = zmm0.d
            
            i += 1
            rax_1 += 8
        while (i s< arg1[0x10].d)

void* result_1 = nullptr
int64_t var_d0 = 0
int64_t* rax_20

if (&result_1 != &arg1[0xf])
    arg2 = *(arg1 + 0x78)
    zmm0 = result_1.o
    result_1.o = arg2
    rax_20 = zx.q(_mm_bsrli_si128(arg2, 8).d)
    *(arg1 + 0x78) = zmm0
    
    if (rax_20.d s> 0)
        void* result_2 = result_1
        i_3 = zx.q(rax_20.d)
        uint64_t i_1
        
        do
            int64_t r8_7 = sx.q(arg1[0x10].d)
            int32_t rbx_5 = 0
            zmm7 = *(result_2 + 4)
            rax_20 = nullptr
            zmm6 = *result_2
            void* rcx_20
            int32_t r8_10
            
            if (r8_7.d s<= 0)
            label_141f93902:
                int32_t r15_1 = 0
                int32_t rax_22 = data_143a2d8ec + 1
                int64_t rbx_6 = 0
                data_143a2d8ec = rax_22
                var_f8 = rax_22
                
                if (r8_7.d s> 0)
                    int32_t* rax_23 = arg1[0xf]
                    
                    while (not(zmm6.d f<= *rax_23))
                        r15_1 += 1
                        rbx_6 += 1
                        rax_23 = &rax_23[2]
                        
                        if (rbx_6 s>= r8_7)
                            break
                
                int32_t r13_4 = arg1[0x10].d
                arg1[0x10].d = r13_4 + 1
                
                if (r13_4 + 1 s> *(arg1 + 0x84))
                    sub_1405a4d70(&arg1[0xf])
                
                int64_t rdx_13 = arg1[0xf] + (sx.q(r15_1) << 3)
                memmove(rdx_13 + 8, rdx_13, (r13_4 - r15_1) << 3)
                int64_t rax_26 = arg1[0xf]
                rcx_20 = &arg1[1]
                r8_10 = r15_1
                *(rax_26 + (rbx_6 << 3)) = zmm6.d
                *(rax_26 + (rbx_6 << 3) + 4) = zmm7.d
            else
                uint128_t* r9_1 = arg1[0xf]
                uint128_t* rcx_16 = r9_1
                
                while (true)
                    arg2 = *rcx_16
                    zmm0.d = arg2.d f- zmm6.d
                    
                    if (_mm_and_ps(zmm0, 0x7fffffff).d f<= 9.99999975e-05f)
                        *(r9_1 + (rax_20 << 3) + 4) = zmm7.d
                        
                        if (rbx_5 s< 0)
                            goto label_141f9398d
                        
                        if (rbx_5 s>= (*(*arg1 + 8))(arg1).d)
                            goto label_141f9398d
                        
                        rcx_20 = &arg1[1]
                        
                        if (rbx_5 s< arg1[0xc].d && *(rcx_20 + 0x50) + (sx.q(rbx_5) << 2) != 0)
                            goto label_141f9398d
                        
                        r8_10 = rbx_5
                        int32_t rax_34 = data_143a2d8ec + 1
                        data_143a2d8ec = rax_34
                        var_f8 = rax_34
                        break
                    
                    if (arg2.d f> zmm6.d)
                        goto label_141f93902
                    
                    rbx_5 += 1
                    rax_20 += 1
                    rcx_16 += 8
                    
                    if (rax_20 s>= r8_7)
                        goto label_141f93902
            
            sub_141f7f180(rcx_20, &var_f8, r8_10)
        label_141f9398d:
            result_2 += 8
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)

int64_t r12_2 = sx.q(arg1[0x10].d)

if (r12_2.d != 0)
    uint128_t* rcx_23 = arg1[0xf]
    zmm0 = *rcx_23
    zmm6 = *(rcx_23 + (r12_2 << 3) - 8)
else
    zmm0 = zx.o(0)
    zmm6 = zx.o(0)

rax_20.b = 0

if (not(zmm0.d f>= zmm13.d))
    zmm0, zmm6 = sub_141f87210(arg1, zmm13, zx.o(0))
    int32_t zmm7_1 = zmm0.d
    int32_t rbx_7 = 0
    void* rcx_29
    int32_t r8_14
    
    if (r12_2.d s<= 0)
    label_141f93ae4:
        int32_t r15_2 = 0
        int32_t rax_36 = data_143a2d8ec + 1
        data_143a2d8ec = rax_36
        var_f8 = rax_36
        
        if (r12_2.d s> 0)
            int32_t* rax_37 = arg1[0xf]
            int64_t rcx_26 = 0
            
            while (not(zmm13.d f<= *rax_37))
                r15_2 += 1
                rcx_26 += 1
                rax_37 = &rax_37[2]
                
                if (rcx_26 s>= r12_2)
                    break
        
        int32_t r13_6 = arg1[0x10].d
        arg1[0x10].d = r13_6 + 1
        
        if (r13_6 + 1 s> *(arg1 + 0x84))
            sub_1405a4d70(&arg1[0xf])
        
        int64_t rbx_8 = sx.q(r15_2)
        int64_t rdx_19 = arg1[0xf] + (rbx_8 << 3)
        memmove(rdx_19 + 8, rdx_19, (r13_6 - r15_2) << 3)
        int64_t rax_40 = arg1[0xf]
        rcx_29 = &arg1[1]
        r8_14 = r15_2
        *(rax_40 + (rbx_8 << 3)) = zmm13.d
        *(rax_40 + (rbx_8 << 3) + 4) = zmm7_1
    else
        uint128_t* r8_11 = arg1[0xf]
        rax_20 = nullptr
        uint128_t* rcx_25 = r8_11
        
        while (true)
            arg3 = *rcx_25
            arg2.d = arg3.d f- zmm13.d
            arg2 = _mm_and_ps(arg2, 0x7fffffff)
            
            if (arg2.d f<= 9.99999975e-05f)
                int64_t r15_4 = sx.q(rbx_7)
                *(r8_11 + (r15_4 << 3) + 4) = zmm7_1
                
                if (rbx_7 s< 0)
                    goto label_141f93b6f
                
                if (rbx_7 s>= (*(*arg1 + 8))(arg1, arg2).d)
                    goto label_141f93b6f
                
                rcx_29 = &arg1[1]
                
                if (rbx_7 s< arg1[0xc].d && *(rcx_29 + 0x50) + (r15_4 << 2) != 0)
                    goto label_141f93b6f
                
                r8_14 = rbx_7
                int32_t rax_50 = data_143a2d8ec + 1
                data_143a2d8ec = rax_50
                var_f8 = rax_50
                break
            
            if (arg3.d f> zmm13.d)
                goto label_141f93ae4
            
            rbx_7 += 1
            rax_20 += 1
            rcx_25 += 8
            
            if (rax_20 s>= r12_2)
                goto label_141f93ae4
    
    sub_141f7f180(rcx_29, &var_f8, r8_14)
label_141f93b6f:
    rax_20.b = 1

if (zmm6.d f<= zmm12.d)
    if (rax_20.b != 0)
    label_141f93d25:
        
        if (arg1[0x10].d s> 0)
            int64_t rbx_11 = 0
            
            do
                uint128_t* r15_6 = arg1[0xf]
                zmm0 = *(r15_6 + rbx_11)
                
                if ((zmm0.d f< zmm13.d || not(zmm0.d f<= zmm12.d)) && i_2 s>= 0
                        && i_2 s< arg1[0xc].d)
                    int32_t* rdx_27 = arg1[0xb] + (sx.q(i_2) << 2)
                    
                    if (rdx_27 != 0)
                        int32_t rdx_28 = *rdx_27
                        var_f8 = rdx_28
                        void* rax_57 = sub_141f87c30(arg1, rdx_28)
                        int32_t rcx_41 = arg1[0x10].d
                        int64_t r9_3 = sx.q(*rax_57)
                        int32_t rax_59 = rcx_41 - r9_3.d
                        
                        if (rax_59 != 1)
                            memmove(r15_6 + (r9_3 << 3), r15_6 + (sx.q((r9_3 + 1).d) << 3), 
                                (rax_59 - 1) << 3)
                            rcx_41 = arg1[0x10].d
                        
                        arg1[0x10].d = rcx_41 - 1
                        sub_1405c53d0(&arg1[0xf])
                        sub_141f96860(&arg1[1], &var_f8)
                        i_2 -= 1
                        rbx_11 -= 8
                
                i_2 += 1
                rbx_11 += 8
            while (i_2 s< arg1[0x10].d)
    
    void* result = result_1
    
    if (result == 0)
        return result
    
    return sub_140a74f90(result)

zmm0 = sub_141f87210(arg1, zmm12, zx.o(0))
int64_t r8_15 = sx.q(arg1[0x10].d)
int32_t zmm6_1 = zmm0.d
int32_t rbx_9 = 0

if (r8_15.d s<= 0)
label_141f93be4:
    int32_t r15_3 = 0
    int32_t rax_43 = data_143a2d8ec + 1
    data_143a2d8ec = rax_43
    var_f8 = rax_43
    
    if (r8_15.d s> 0)
        int32_t* rax_44 = arg1[0xf]
        int64_t rcx_32 = 0
        
        while (not(zmm12.d f<= *rax_44))
            r15_3 += 1
            rcx_32 += 1
            rax_44 = &rax_44[2]
            
            if (rcx_32 s>= r8_15)
                break
    
    int32_t r13_8 = arg1[0x10].d
    arg1[0x10].d = r13_8 + 1
    
    if (r13_8 + 1 s> *(arg1 + 0x84))
        sub_1405a4d70(&arg1[0xf])
    
    int64_t rbx_10 = sx.q(r15_3)
    int64_t rdx_22 = arg1[0xf] + (rbx_10 << 3)
    memmove(rdx_22 + 8, rdx_22, (r13_8 - r15_3) << 3)
    int64_t rax_47 = arg1[0xf]
    *(rax_47 + (rbx_10 << 3)) = zmm12.d
    *(rax_47 + (rbx_10 << 3) + 4) = zmm6_1
    sub_141f7f180(&arg1[1], &var_f8, r15_3)
else
    int128_t* r9_2 = arg1[0xf]
    int64_t rax_41 = 0
    int128_t* rcx_31 = r9_2
    
    while (true)
        uint128_t zmm1 = *rcx_31
        zmm0.d = zmm1.d f- zmm12.d
        
        if (_mm_and_ps(zmm0, 0x7fffffff).d f<= 9.99999975e-05f)
            int64_t r15_5 = sx.q(rbx_9)
            *(r9_2 + (r15_5 << 3) + 4) = zmm6_1
            
            if (rbx_9 s>= 0 && rbx_9 s< (*(*arg1 + 8))(arg1)
                    && (rbx_9 s>= arg1[0xc].d || arg1[0xb] + (r15_5 << 2) == 0))
                int32_t rax_55 = data_143a2d8ec + 1
                data_143a2d8ec = rax_55
                var_f8 = rax_55
                sub_141f7f180(&arg1[1], &var_f8, rbx_9)
            
            break
        
        if (zmm1.d f> zmm12.d)
            goto label_141f93be4
        
        rbx_9 += 1
        rax_41 += 1
        rcx_31 += 8
        
        if (rax_41 s>= r8_15)
            goto label_141f93be4

goto label_141f93d25
