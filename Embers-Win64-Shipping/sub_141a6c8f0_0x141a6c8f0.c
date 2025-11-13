// 函数: sub_141a6c8f0
// 地址: 0x141a6c8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rdi = zx.d(arg3)
int32_t r15

if (arg3 == 0)
    r15 = 1
else if (rdi == 1 || rdi != 2)
    r15 = 0
else
    r15 = 3

int32_t r12 = *(arg1 + 0x46c)

if (r12 == 0)
    return 

int32_t r11_1 = *(arg1 + 0x45c)

if ((r11_1.b & 4) != 0)
    (*(*arg1 + 0x280))(arg1)
    *(arg1 + 0x45c) &= 0xfffffffb
    r11_1 = *(arg1 + 0x45c)

int128_t zmm8
int128_t var_68_1 = zmm8
int32_t rax
int32_t rsi_2
int32_t r8

if (rdi.b == 0 && arg1[0x8b].b == 1)
    r8 = arg1[0x8d].d
    rsi_2 = r11_1 & 1
    
    if (rsi_2 != 0)
        rax.b = arg2.d s< r8
    else
        rax.b = arg2.d s>= r8 + *(arg1 + 0x46c)

uint128_t var_f8
uint128_t var_a8
uint128_t var_98
int64_t var_88

if (rdi.b != 0 || arg1[0x8b].b != 1 || rax.b == 0)
    sub_141a6c760(&var_a8, &arg1[0xf8], arg2, rdi.b)
    int64_t rax_62 = *arg1
    var_f8 = var_a8
    (*(rax_62 + 0x270))(arg1, &var_f8, zx.q(r15), 0, var_f8, var_98, var_88)
else
    int32_t r9_1 = *(arg1 + 0x46c)
    int128_t zmm6 = 0x3f7fffff
    int32_t arg_8
    float arg_c
    int32_t r10_1
    int32_t r13_1
    
    if (rsi_2 == 0)
        r13_1 = r8
        
        if (r9_1 s<= 0)
            arg_8 = r8
            arg_c = 0f
        else
            arg_8 = r8 - 1 + r9_1
            
            arg_c = 0.99999994f <= 0.99999994f ? 0.99999994f : 0.99999994f
        
        r10_1 = arg_8
    else if (r9_1 s<= 0)
        r10_1 = r8
        arg_c = 0f
        r13_1 = r8
    else
        int32_t rax_3 = r8 - 1 + r9_1
        
        if (0.99999994f <= 0.99999994f)
            arg_c = 0.99999994f
            r10_1 = r8
            r13_1 = rax_3
        else
            arg_c = 0.99999994f
            r10_1 = r8
            r13_1 = rax_3
    
    int32_t r15_1 = *(arg1 + 0x48c)
    int32_t temp3_1
    int32_t temp4_1
    temp3_1:temp4_1 = sx.q(arg2.d - r13_1)
    int32_t temp1_1 = mods.dp.d(temp3_1:temp4_1, r12)
    int32_t temp9_1
    int32_t temp10_1
    temp9_1:temp10_1 = sx.q(divs.dp.d(temp3_1:temp4_1, r12))
    int32_t rax_12 = (temp10_1 ^ temp9_1) - temp9_1
    int32_t rdx_3 = arg1[0x8e].d
    int64_t var_b8
    
    if (r15_1 s< 0 || rdx_3 + rax_12 s<= r15_1)
        int64_t r8_3 = r10_1.q
        arg1[0x8e].d = rax_12 + rdx_3
        int64_t rax_21 = *(arg1 + 0x7d4)
        
        if (rsi_2 == 0)
        label_141a6cc62:
            arg_8.q = rax_21
            
            if (rax_21.d s< r10_1)
                goto label_141a6cc86
            
            if (rax_21.d == r10_1 && not(0f f>= r8_3:4.d))
                goto label_141a6cc86
        else
            arg_8.q = rax_21
            
            if (rax_21.d s> r10_1 || (rax_21.d == r10_1 && 0f f> r8_3:4.d))
            label_141a6cc86:
                zmm6 = sub_141a5b700(&arg1[0xf8], &var_a8, r8_3)
                int64_t rax_22 = *arg1
                var_f8 = var_a8
                (*(rax_22 + 0x270))(arg1, &var_f8, zx.q(r15), 0, var_f8, var_98, var_88)
                r11_1 = *(arg1 + 0x45c)
            else if (rsi_2 == 0)
                goto label_141a6cc62
        
        float zmm5 = 0.99999994f
        
        arg_c = 0.99999994f <= 0f ? 0.99999994f : 0f
        
        int64_t rbx_4 = temp1_1.q
        arg_8.q = rbx_4
        int64_t rsi_3
        uint128_t zmm1
        uint128_t zmm2
        
        if ((r11_1.b & 1) != 0)
            if (temp1_1 s> 0 || (temp1_1 == 0 && not(arg_c.d f<= 0f)))
                goto label_141a6cd3a
            
            rsi_3 = rbx_4
        else if (temp1_1 s< 0 || (temp1_1 == 0 && arg_c.d f< 0f))
        label_141a6cd3a:
            arg_8.q = r12.q
            zmm2.d = rbx_4:4.d.d f+ 0f
            zmm1.d = zmm2.d f+ zmm2.d
            zmm1.d = zmm1.d f- 0.5f
            int32_t rax_24 = int.d(zmm1.d)
            zmm1 = zmm2
            int32_t rcx_13 = int.d(zmm1.d)
            
            if (rcx_13 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_13)).d f== zmm1.d))
                zmm1 = _mm_cvtepi32_ps(zx.o(rcx_13
                    - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1.q)) & 1)))
            
            zmm2.d = zmm2.d f- zmm1.d
            
            if (not(zmm2.d f>= 0f))
                arg_c = 0f
            else if (zmm2.d f>= 0.99999994f)
                arg_c = 0.99999994f
            else
                arg_c = zmm2.d
            
            rsi_3 = ((rax_24 s>> 1) + temp1_1 + r12).q
        else
            rsi_3 = rbx_4
        
        void* rax_30 = arg1[0x103]
        
        if (rax_30 != 0)
            var_f8:4.d = 1
            uint128_t var_e8
            var_e8.d = 0xffffffff
            int32_t r11_2 = *(rax_30 + 0x40)
            void* r9_2 = rax_30 + 0x28
            var_f8:8.q = r9_2
            int32_t rcx_15 = 0
            var_f8.d = 0
            int32_t r8_5 = 0
            var_e8:4.q = 0
            
            if (r11_2 != 0)
                void* rax_31 = *(r9_2 + 0x10)
                
                if (rax_31 != 0)
                    r9_2 = rax_31
                
                int32_t temp15_1
                int32_t temp16_1
                temp15_1:temp16_1 = sx.q(r11_2 - 1)
                int32_t rdx_12 = *r9_2
                
                if (rdx_12 != 0)
                label_141a6ce7b:
                    int32_t rax_38 = neg.d(rdx_12) & rdx_12
                    uint64_t rflags_1
                    int32_t temp0_6
                    temp0_6, rflags_1 = _bit_scan_reverse(rax_38)
                    var_f8:4.d = rax_38
                    int32_t rax_39
                    
                    if (rax_38 == 0)
                        rax_39 = 0x20
                    else
                        rax_39 = 0x1f - temp0_6
                    
                    var_e8:4.d = r8_5 - rax_39 + 0x1f
                    
                    if (r8_5 - rax_39 + 0x1f s> r11_2)
                        var_e8:4.d = r11_2
                else
                    while (true)
                        int64_t rdx_13 = sx.q(rcx_15)
                        r8_5 += 0x20
                        rcx_15 += 1
                        var_e8:8.d = r8_5
                        var_f8.d = rcx_15
                        
                        if (rdx_13.d s>= (temp16_1 + (temp15_1 & 0x1f)) s>> 5)
                            break
                        
                        rdx_12 = *(r9_2 + (rdx_13 << 2) + 4)
                        var_e8.d = 0xffffffff
                        
                        if (rdx_12 != 0)
                            goto label_141a6ce7b
                    
                    var_e8:4.d = r11_2
            
            void* var_80_1 = rax_30 + 0x18
            var_a8.q = rax_30 + 0x18
            var_98 = var_e8
            var_a8 = var_f8
            int16_t var_c0_1 = 0
            uint128_t var_e8_2 = var_98
            var_f8 = var_a8
            uint128_t zmm0
            zmm0.q = (_mm_unpackhi_pd(var_e8, var_e8.q)).q
            var_88.o = zmm0
            uint64_t var_d8
            var_d8.o = zmm0
            
            if ((var_e8.q u>> 0x20).d s< *(var_98.q + 0x18))
                int32_t i = var_e8_2:0xc.d
                
                do
                    int32_t* rdx_15 = sx.q(i) * 0x38 + *var_f8.q
                    
                    if (rdx_15[0xb].b == 2)
                        sub_141a56940(&arg1[6], rdx_15, &rdx_15[4])
                        int64_t* var_d0
                        sub_141a612d0(var_d0, i)
                        var_c0_1.b = 1
                    
                    var_e8_2:8.d &= not.d(var_f8:0xc.d)
                    sub_14059bdd0(&var_f8:8)
                    i = var_e8_2:0xc.d
                while (i s< *(var_e8_2.q + 0x18))
                
                if (var_c0_1.b != 0 && var_c0_1:1.b != 0)
                    sub_141a40850(rax_30 + 0x18, *(rax_30 + 0x20) - *(rax_30 + 0x4c), 1)
                
                zmm5 = 0.99999994f
        
        arg_8.q = 0
        arg_8.q = rbx_4
        
        if ((*(arg1 + 0x45c) & 1) != 0)
            if (temp1_1 s> 0 || (temp1_1 == 0 && arg_c.d f> 0f))
                goto label_141a6cfc3
            
            arg_8 = r13_1
            arg_c = 0f
        else if (temp1_1 s< 0)
        label_141a6cfc3:
            int32_t rcx_23 = *(arg1 + 0x46c)
            
            if (rcx_23 s<= 0)
                arg_8 = arg1[0x8d].d
                arg_c = 0f
            else
                arg_8 = rcx_23 - 1 + arg1[0x8d].d
                
                arg_c = zmm5 f<= zmm6.d ? zmm5 : 0.99999994f
        else if (temp1_1 != 0)
            arg_8 = r13_1
            arg_c = 0f
        else
            if (arg_c.d f< 0f)
                goto label_141a6cfc3
            
            arg_8 = r13_1
            arg_c = 0f
        
        *(arg1 + 0x7d4) = arg_8.q
        
        if (*(arg1 + 0x7e4) != 0)
            *(arg1 + 0x7e4) = 0
        
        if (arg1[0x102].b != 0)
            arg1[0x102].b = 0
        
        arg_8.q = r13_1.q
        zmm2.d = rsi_3:4.d.d f+ 0f
        zmm1.d = zmm2.d f+ zmm2.d
        zmm1.d = zmm1.d f- 0.5f
        int32_t rax_50 = int.d(zmm1.d)
        zmm1 = zmm2
        int32_t rcx_26 = int.d(zmm1.d)
        
        if (rcx_26 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_26)).d f== zmm1.d))
            zmm1 =
                _mm_cvtepi32_ps(zx.o(rcx_26 - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1.q)) & 1)))
        
        zmm2.d = zmm2.d f- zmm1.d
        
        if (not(zmm2.d f>= 0f))
            arg_c = 0f
        else if (zmm2.d f>= 0.99999994f)
            arg_c = 0.99999994f
        else
            arg_c = zmm2.d
        
        sub_141a5b700(&arg1[0xf8], &var_a8, ((rax_50 s>> 1) + r13_1 + rsi_3.d).q)
        int64_t rax_56 = *arg1
        int64_t r9_3
        r9_3.b = 1
        var_f8 = var_a8
        uint128_t zmm0_2 = zx.o(var_88)
        (*(rax_56 + 0x270))(arg1, &var_f8, zx.q(r15), r9_3, var_f8, var_98, zmm0_2.q)
        int64_t rax_57 = arg1[0xf8]
        arg_8.q = r13_1.q
        uint128_t zmm2_1
        zmm2_1.d = rsi_3:4.d.d f+ 0f
        uint128_t zmm1_2
        zmm1_2.d = zmm2_1.d f+ zmm2_1.d
        zmm1_2.d = zmm1_2.d f- 0.5f
        int32_t rcx_31 = int.d(zmm1_2.d)
        zmm1_2 = zmm2_1
        int32_t rdx_21 = int.d(zmm1_2.d)
        
        if (rdx_21 != 0x80000000)
            zmm0_2 = _mm_cvtepi32_ps(zx.o(rdx_21))
            
            if (not(zmm0_2.d f== zmm1_2.d))
                zmm1_2 = _mm_cvtepi32_ps(zx.o(rdx_21
                    - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1_2, zmm1_2.q)) & 1)))
        
        zmm2_1.d = zmm2_1.d f- zmm1_2.d
        
        if (zmm2_1.d f>= 0f)
            zmm0_2 = 0x3f7fffff
            
            if (zmm2_1.d f>= 0.99999994f)
                arg_c = 0.99999994f
            else
                arg_c = zmm2_1.d
        else
            arg_c = 0f
        
        int64_t* rbx_5 = arg1[0x109]
        var_b8 = ((rcx_31 s>> 1) + r13_1 + rsi_3.d).q
        int64_t var_b0_2 = rax_57
        
        if (rbx_5[3].b != 0)
            (*(*rbx_5 + 0x18))(zmm0_2, &var_b8)
            char rcx_38 = rbx_5[3].b
            
            if (rcx_38 != 0)
                rbx_5[3].b = 0
                rcx_38 = 0
            
            if (&var_b8 != &rbx_5[1])
                if (rcx_38 != 0)
                    rbx_5[3].b = 0
                
                *(rbx_5 + 8) = var_b8.o
                rbx_5[3].b = 1
            
            (*(*rbx_5 + 0x10))(rbx_5, &var_b8)
        
        (*(*arg1 + 0x288))(arg1)
    else
        if (r9_1 s<= 0)
            arg_8 = r8
            arg_c = 0f
        else
            arg_8 = r8 - 1 + r9_1
            
            arg_c = 0.99999994f <= 0.99999994f ? 0.99999994f : 0.99999994f
        
        int64_t rcx_5 = arg_8.q
        int64_t rax_15 = r8.q
        var_b8 = rax_15
        int64_t var_70 = rcx_5
        int64_t var_78 = arg2
        arg_8.q = arg2
        int64_t* rbx_1
        
        if (arg2.d s< r8 || (arg2.d == r8 && 0f f< rax_15:4.d))
            rbx_1 = &var_b8
        else
            arg_8.q = arg2
            
            if (arg2.d s< rcx_5.d || (arg2.d == rcx_5.d && 0f f< rcx_5:4.d))
                rbx_1 = &var_78
            else
                rbx_1 = &var_70
        
        int64_t rbx_2 = *rbx_1
        sub_141a6c760(&var_a8, &arg1[0xf8], rbx_2, 0)
        int64_t rax_16 = *arg1
        int512_t zmm1_1
        zmm1_1.o = var_98
        var_f8 = var_a8
        (*(rax_16 + 0x270))(arg1, &var_f8, zx.q(r15), 0, var_f8, zmm1_1.o, var_88)
        
        if ((arg1[0x93].b & 0x80) == 0)
            sub_141a6a480(arg1, rbx_2, zmm1_1)
        else
            sub_141a5b0b0(arg1)
        
        int64_t* rbx_3 = arg1[0x109]
        var_b8 = *(arg1 + 0x7d4)
        int64_t var_b0_1 = arg1[0xf8]
        (*(*rbx_3 + 0x18))(rbx_3, &var_b8)
        
        if (rbx_3[3].b != 0)
            rbx_3[3].b = 0
        
        if (arg1[0x8a].d s> 0)
            sub_1405a9f90(&arg1[0x89], 0)

if (sub_141a53830(arg1).b == 0)
    return 

arg1[0x105] = *(arg1 + 0x7d4)
arg1[0x106].b = arg1[0x8b].b
*(arg1 + 0x834) = arg1[0x8e].d
