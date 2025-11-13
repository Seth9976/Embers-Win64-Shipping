// 函数: sub_141f92cb0
// 地址: 0x141f92cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = 0
uint128_t zmm6 = arg5
uint128_t zmm7 = arg6
uint128_t zmm8
zmm8.d = zmm7.d f- zmm6.d
int32_t rax = arg1[0xf].d
uint128_t zmm13 = arg3
uint128_t zmm14 = arg2
int32_t var_e8
void* const var_d8
uint128_t zmm0

if (arg4 == 0)
    char var_e0_1 = 0
    void* const rdx_2 = nullptr
    var_d8 = nullptr
    uint128_t zmm9 = zx.o(0)
    int32_t i_3 = 0
    int32_t r13_1 = 0
    int32_t r15_1 = 0
    
    if (rax s> 0)
        int64_t r14_1 = 0
        int32_t rcx_11
        
        do
            int64_t rax_2 = arg1[0xe]
            zmm0 = *(rax_2 + r14_1 + 4)
            
            if (zmm0.d f< zmm6.d)
                if (not(zmm0.d f<= zmm7.d))
                    zmm0.d = zmm0.d f- zmm8.d
                    *(rax_2 + r14_1 + 4) = zmm0.d
            else if (zmm0.d f> zmm7.d)
                zmm0.d = zmm0.d f- zmm8.d
                *(rax_2 + r14_1 + 4) = zmm0.d
            else
                var_e0_1 = 1
                
                arg2 = zmm6.d f== 0f ? zmm7 : zmm6
                
                zmm0, arg4, zmm6, zmm7, zmm8 = sub_141f86ef0(arg1, arg2, zx.o(0))
                int64_t rdi_1 = sx.q(r13_1)
                zmm9 = zmm0
                r13_1 = (rdi_1 + 1).d
                
                if (r13_1 s> i_2)
                    arg4 = sub_1405a4cf0(&var_d8)
                    i_2 = i_3
                
                rdx_2 = var_d8
                *(rdx_2 + (rdi_1 << 2)) = r15_1
            
            rcx_11 = arg1[0xf].d
            r15_1 += 1
            r14_1 += 0x1c
        while (r15_1 s< rcx_11)
        
        i_2 = 0
        
        if (var_e0_1 != 0)
            int64_t rdi_2 = sx.q(r13_1 - 1)
            
            if (r13_1 - 1 s>= 0)
                int64_t temp1_1
                
                do
                    int64_t rax_4 = sx.q(*(rdx_2 + (rdi_2 << 2)))
                    
                    if (rax_4.d s>= 0 && rax_4.d s< arg1[0xc].d)
                        int32_t* rdx_4 = arg1[0xb] + (rax_4 << 2)
                        
                        if (rdx_4 != 0)
                            int32_t rdx_5 = *rdx_4
                            var_e8 = rdx_5
                            void* rax_6 = sub_141f87c30(arg1, rdx_5)
                            int32_t rcx_4 = arg1[0xf].d
                            int64_t r10_1 = sx.q(*rax_6)
                            int32_t rax_8 = rcx_4 - r10_1.d
                            
                            if (rax_8 != 1)
                                memmove(r10_1 * 0x1c + arg1[0xe], 
                                    sx.q((r10_1 + 1).d) * 0x1c + arg1[0xe], (rax_8 - 1) * 0x1c)
                                rcx_4 = arg1[0xf].d
                            
                            arg1[0xf].d = rcx_4 - 1
                            sub_1405c5460(&arg1[0xe])
                            sub_141f814e0(arg1, zx.o(0).d)
                            arg4 = sub_141f96860(&arg1[1], &var_e8)
                        
                        rdx_2 = var_d8
                    
                    temp1_1 = rdi_2
                    rdi_2 -= 1
                while (temp1_1 - 1 s>= 0)
                rcx_11 = arg1[0xf].d
            
            int32_t rdi_3 = 0
            
            if (rcx_11 s<= 0)
            label_141f92f67:
                int32_t rax_15 = data_143a2d8ec + 1
                int32_t var_f0_1 = rax_15
                char var_f8_1 = 0
                data_143a2d8ec = rax_15
                arg4 = sub_141f7f6d0(arg1, &var_e8, zmm6.d, arg4)
            else
                void* r8_2 = arg1[0xe]
                int64_t rax_13 = 0
                uint128_t* rcx_12 = r8_2 + 4
                
                while (true)
                    arg2 = *rcx_12
                    zmm0.d = arg2.d f- zmm6.d
                    
                    if (_mm_and_ps(zmm0, 0x7fffffff).d f<= 9.99999975e-05f)
                        int64_t r14_3 = sx.q(rdi_3)
                        *(r14_3 * 0x1c + r8_2 + 8) = zmm9.d
                        
                        if (rdi_3 s>= 0)
                            int32_t rax_21
                            rax_21, arg4 = (*(*arg1 + 8))(arg1)
                            
                            if (rdi_3 s< rax_21
                                    && (rdi_3 s>= arg1[0xc].d || arg1[0xb] + (r14_3 << 2) == 0))
                                int32_t rax_24 = data_143a2d8ec + 1
                                data_143a2d8ec = rax_24
                                var_e8 = rax_24
                                arg4 = sub_141f7f180(&arg1[1], &var_e8, rdi_3)
                        
                        break
                    
                    if (arg2.d f> zmm6.d)
                        goto label_141f92f67
                    
                    rdi_3 += 1
                    rax_13 += 1
                    rcx_12 += 0x1c
                    
                    if (rax_13 s>= sx.q(rcx_11))
                        goto label_141f92f67
        
        void* const rcx_14 = var_d8
        
        if (rcx_14 != 0)
            arg4 = sub_140a74f90(rcx_14)
else
    int32_t i = 0
    
    if (rax s> 0)
        int64_t rax_1 = 0
        
        do
            int64_t rdx_1 = arg1[0xe]
            zmm0 = *(rdx_1 + rax_1 + 4)
            
            if (not(zmm0.d f< zmm6.d))
                zmm0.d = zmm0.d f+ zmm8.d
                *(rdx_1 + rax_1 + 4) = zmm0.d
            
            i += 1
            rax_1 += 0x1c
        while (i s< arg1[0xf].d)

var_d8 = nullptr
void* const r13_2 = nullptr
int64_t var_d0_1 = 0
uint64_t result

if (&var_d8 != &arg1[0xe])
    arg2 = *(arg1 + 0x70)
    zmm0 = var_d8.o
    var_d8.o = arg2
    result = zx.q(_mm_bsrli_si128(arg2, 8).d)
    *(arg1 + 0x70) = zmm0
    
    if (result.d s> 0)
        void* r15_3 = var_d8 + 4
        uint64_t i_4 = zx.q(result.d)
        uint64_t i_1
        
        do
            int64_t rcx_15 = sx.q(arg1[0xf].d)
            int32_t rdi_4 = 0
            int32_t zmm3 = *(r15_3 + 4)
            int64_t rax_16 = 0
            arg3 = *r15_3
            
            if (rcx_15.d s<= 0)
            label_141f93077:
                int32_t rax_18 = data_143a2d8ec + 1
                int32_t var_f0_2 = rax_18
                char var_f8_2 = 0
                data_143a2d8ec = rax_18
                result, arg4 = sub_141f7f6d0(arg1, &var_e8, arg3.d, arg4)
            else
                void* r8_3 = arg1[0xe]
                uint128_t* rcx_16 = r8_3 + 4
                
                while (true)
                    arg2 = *rcx_16
                    zmm0.d = arg2.d f- arg3.d
                    
                    if (_mm_and_ps(zmm0, 0x7fffffff).d f<= 9.99999975e-05f)
                        *(rax_16 * 0x1c + r8_3 + 8) = zmm3
                        int32_t rax_27
                        
                        if (rdi_4 s>= 0)
                            rax_27, arg4 = (*(*arg1 + 8))(arg1)
                        
                        if (rdi_4 s< 0 || rdi_4 s>= rax_27)
                            var_e8 = 0
                        else
                            int64_t r14_4 = sx.q(rdi_4)
                            
                            if (rdi_4 s>= arg1[0xc].d || arg1[0xb] + (r14_4 << 2) == 0)
                                int32_t rax_30 = data_143a2d8ec + 1
                                data_143a2d8ec = rax_30
                                var_e8 = rax_30
                                arg4 = sub_141f7f180(&arg1[1], &var_e8, rdi_4)
                            
                            if (rdi_4 s>= arg1[0xc].d)
                                var_e8 = *nullptr
                            else
                                var_e8 = *(arg1[0xb] + (r14_4 << 2))
                        
                        break
                    
                    if (arg2.d f> arg3.d)
                        goto label_141f93077
                    
                    rdi_4 += 1
                    rax_16 += 1
                    rcx_16 += 0x1c
                    
                    if (rax_16 s>= rcx_15)
                        goto label_141f93077
            
            r15_3 += 0x1c
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
    
    r13_2 = var_d8

int64_t r14_2 = sx.q(arg1[0xf].d)

if (r14_2.d != 0)
    void* rdx_16 = arg1[0xe]
    zmm0 = *(rdx_16 + 4)
    zmm6 = *(r14_2 * 0x1c + rdx_16 - 0x18)
else
    zmm0 = zx.o(0)
    zmm6 = zx.o(0)

result.b = 0

if (not(zmm0.d f>= zmm14.d))
    char r9
    int512_t zmm3_1
    zmm0, r9, zmm3_1, zmm6 = sub_141f86ef0(arg1, zmm14, zx.o(0))
    int32_t rdi_5 = 0
    
    if (r14_2.d s<= 0)
    label_141f93229:
        int32_t rax_34 = data_143a2d8ec + 1
        zmm3_1.o = zmm0
        int32_t var_f0_3 = rax_34
        char var_f8_3 = 0
        data_143a2d8ec = rax_34
        sub_141f7f6d0(arg1, &var_e8, zmm14.d, r9)
    else
        void* r8_6 = arg1[0xe]
        int64_t rax_32 = 0
        uint128_t* rcx_26 = r8_6 + 4
        
        while (true)
            arg3 = *rcx_26
            arg2.d = arg3.d f- zmm14.d
            arg2 = _mm_and_ps(arg2, 0x7fffffff)
            
            if (arg2.d f<= 9.99999975e-05f)
                int64_t r14_5 = sx.q(rdi_5)
                *(r14_5 * 0x1c + r8_6 + 8) = zmm0.d
                
                if (rdi_5 s>= 0 && rdi_5 s< (*(*arg1 + 8))(arg1, arg2).d
                        && (rdi_5 s>= arg1[0xc].d || arg1[0xb] + (r14_5 << 2) == 0))
                    int32_t rax_41 = data_143a2d8ec + 1
                    data_143a2d8ec = rax_41
                    var_e8 = rax_41
                    sub_141f7f180(&arg1[1], &var_e8, rdi_5)
                
                break
            
            if (arg3.d f> zmm14.d)
                goto label_141f93229
            
            rdi_5 += 1
            rax_32 += 1
            rcx_26 += 0x1c
            
            if (rax_32 s>= r14_2)
                goto label_141f93229
    
    result.b = 1

if (zmm6.d f<= zmm13.d)
    if (result.b != 0)
    label_141f933b1:
        
        if (arg1[0xf].d s> 0)
            int64_t rdi_7 = 0
            
            do
                int64_t r14_7 = arg1[0xe]
                zmm0 = *(rdi_7 + r14_7 + 4)
                
                if ((zmm0.d f< zmm14.d || not(zmm0.d f<= zmm13.d)) && i_2 s>= 0
                        && i_2 s< arg1[0xc].d)
                    result = arg1[0xb]
                    int64_t rdx_24 = result + (sx.q(i_2) << 2)
                    
                    if (rdx_24 != 0)
                        int32_t rdx_25 = *rdx_24
                        var_e8 = rdx_25
                        void* rax_45 = sub_141f87c30(arg1, rdx_25)
                        int32_t rcx_37 = arg1[0xf].d
                        int64_t r9_2 = sx.q(*rax_45)
                        int32_t rax_47 = rcx_37 - r9_2.d
                        
                        if (rax_47 != 1)
                            memmove(r9_2 * 0x1c + r14_7, sx.q((r9_2 + 1).d) * 0x1c + r14_7, 
                                (rax_47 - 1) * 0x1c)
                            rcx_37 = arg1[0xf].d
                        
                        arg1[0xf].d = rcx_37 - 1
                        sub_1405c5460(&arg1[0xe])
                        sub_141f814e0(arg1, zx.o(0).d)
                        result = sub_141f96860(&arg1[1], &var_e8)
                        i_2 -= 1
                        rdi_7 -= 0x1c
                
                i_2 += 1
                rdi_7 += 0x1c
            while (i_2 s< arg1[0xf].d)
    
    if (r13_2 == 0)
        return result
    
    return sub_140a74f90(r13_2)

char r9_1
int512_t zmm3_2
zmm0, r9_1, zmm3_2 = sub_141f86ef0(arg1, zmm13, zx.o(0))
int64_t rax_35 = sx.q(arg1[0xf].d)
int32_t rdi_6 = 0

if (rax_35.d s<= 0)
label_141f932c9:
    int32_t rax_38 = data_143a2d8ec + 1
    zmm3_2.o = zmm0
    int32_t var_f0_4 = rax_38
    char var_f8_4 = 0
    data_143a2d8ec = rax_38
    result = sub_141f7f6d0(arg1, &var_e8, zmm13.d, r9_1)
else
    void* r8_7 = arg1[0xe]
    int64_t rax_36 = 0
    uint128_t* rcx_29 = r8_7 + 4
    
    while (true)
        uint128_t zmm2 = *rcx_29
        arg2.d = zmm2.d f- zmm13.d
        arg2 = _mm_and_ps(arg2, 0x7fffffff)
        
        if (arg2.d f<= 9.99999975e-05f)
            int64_t r14_6 = sx.q(rdi_6)
            result = r14_6 * 0x1c
            *(result + r8_7 + 8) = zmm0.d
            
            if (rdi_6 s>= 0)
                result = (*(*arg1 + 8))(arg1, arg2)
                
                if (rdi_6 s< result.d)
                    if (rdi_6 s< arg1[0xc].d)
                        result = arg1[0xb]
                    
                    if (rdi_6 s>= arg1[0xc].d || result + (r14_6 << 2) == 0)
                        int32_t rax_44 = data_143a2d8ec + 1
                        data_143a2d8ec = rax_44
                        var_e8 = rax_44
                        result = sub_141f7f180(&arg1[1], &var_e8, rdi_6)
            
            break
        
        if (zmm2.d f> zmm13.d)
            goto label_141f932c9
        
        rdi_6 += 1
        rax_36 += 1
        rcx_29 += 0x1c
        
        if (rax_36 s>= rax_35)
            goto label_141f932c9

goto label_141f933b1
