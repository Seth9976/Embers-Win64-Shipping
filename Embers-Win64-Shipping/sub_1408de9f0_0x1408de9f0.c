// 函数: sub_1408de9f0
// 地址: 0x1408de9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
double zmm6[0x2] = zx.o(0)
void* var_a0
int32_t i_1
int128_t var_58
double zmm0[0x2]

if (arg2[0].d f!= 0f)
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    uint128_t zmm8 = 0x4170000000000000
    void* r9_1 = arg1 + 0x28
    int32_t r11_1 = *(r9_1 + 0x18)
    zmm6 = zx.o(0)
    int32_t var_a8_1 = 0
    zmm0 = zx.o(0)
    int32_t var_a4_2 = 1
    int32_t rcx_7 = 0
    var_a0 = r9_1
    int32_t r8_3 = 0
    int32_t var_98_1 = 0xffffffff
    int64_t var_94_1 = 0
    zmm6[0] = float.d(performanceCount)
    zmm0[0] = fconvert.d(arg2[0].d)
    zmm6[0] = zmm6[0] f* data_143d796f8
    zmm6[0] = zmm6[0] f+ zmm8.q
    zmm6[0] = zmm6[0] + zmm0[0]
    
    if (r11_1 != 0)
        void* rax_16 = *(r9_1 + 0x10)
        
        if (rax_16 != 0)
            r9_1 = rax_16
        
        int32_t temp0_3
        int32_t temp1_1
        temp0_3:temp1_1 = sx.q(r11_1 - 1)
        int32_t rdx_9 = *r9_1
        
        if (rdx_9 != 0)
        label_1408dec48:
            int32_t rax_23 = neg.d(rdx_9) & rdx_9
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_23)
            int32_t var_a4_3 = rax_23
            int32_t rax_24
            
            if (rax_23 == 0)
                rax_24 = 0x20
            else
                rax_24 = 0x1f - temp0_4
            
            var_94_1.d = r8_3 - rax_24 + 0x1f
            
            if (r8_3 - rax_24 + 0x1f s> r11_1)
                var_94_1.d = r11_1
        else
            while (true)
                int64_t rdx_10 = sx.q(rcx_7)
                r8_3 += 0x20
                rcx_7 += 1
                var_94_1:4.d = r8_3
                var_a8_1 = rcx_7
                
                if (rdx_10.d s>= (temp1_1 + (temp0_3 & 0x1f)) s>> 5)
                    break
                
                rdx_9 = *(r9_1 + (rdx_10 << 2) + 4)
                var_98_1 = 0xffffffff
                
                if (rdx_9 != 0)
                    goto label_1408dec48
            
            var_94_1.d = r11_1
    
    int64_t* var_40_1 = arg1 + 0x18
    double var_60_1[0x2] = var_a8_1.o
    int16_t var_70_1 = 0
    zmm0 = 0xffffffff
    var_98_1.o = var_58
    var_a8_1.o = (arg1 + 0x18).o
    zmm0[0] = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
    double var_88_1[0x2] = zmm0
    
    if (0 s< *(var_58.q + 0x18))
        double zmm7[0x2] = 0x3a83126f
        int32_t i_2 = i_1
        
        while (true)
            QueryPerformanceCounter(&performanceCount)
            arg2 = zx.o(0)
            arg2[0] = float.d(performanceCount)
            arg2[0] = arg2[0] f* data_143d796f8
            arg2[0] = arg2[0] f+ zmm8.q
            zmm6[0] = zmm6[0] - arg2[0]
            arg2 = zx.o(0)
            arg2[0].d = fconvert.s(zmm6[0])
            
            if (not(arg2[0].d f< zmm7[0].d))
                char rax_29
                rax_29, zmm6, zmm7, zmm8 =
                    sub_1408deda0(*(*var_a8_1.q + sx.q(i_2) * 0x18 + 8), arg2)
                
                if (rax_29 != 0)
                    var_94_1:4.d &= not.d(var_a0:4.d)
                    sub_14059bdd0(&var_a0)
                    i_2 = i_1
                    
                    if (i_2 s>= *(var_98_1.q + 0x18))
                        break
                    
                    continue
            
            rbx = 1
            break
        
        if (var_70_1.b != 0 && var_70_1:1.b != 0)
            sub_1405b6470(arg1 + 0x18, *(arg1 + 0x20) - *(arg1 + 0x4c), 1)
else
    int32_t r11 = *(arg1 + 0x40)
    void* r9 = arg1 + 0x28
    int32_t var_a8 = 0
    int32_t rcx = 0
    int32_t var_a4 = 1
    int32_t r8 = 0
    var_a0 = r9
    int32_t var_98 = 0xffffffff
    int64_t var_94 = 0
    
    if (r11 != 0)
        void* rax_1 = *(r9 + 0x10)
        
        if (rax_1 != 0)
            r9 = rax_1
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r11 - 1)
        int32_t rdx_3 = *r9
        
        if (rdx_3 != 0)
        label_1408deaa9:
            int32_t rax_7 = neg.d(rdx_3) & rdx_3
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rax_7)
            int32_t var_a4_1 = rax_7
            int32_t rax_8
            
            if (rax_7 == 0)
                rax_8 = 0x20
            else
                rax_8 = 0x1f - temp0_1
            
            var_94.d = r8 - rax_8 + 0x1f
            
            if (r8 - rax_8 + 0x1f s> r11)
                var_94.d = r11
        else
            while (true)
                int64_t rax_4 = sx.q(rcx)
                r8 += 0x20
                rcx += 1
                var_94:4.d = r8
                var_a8 = rcx
                
                if (rax_4.d s>= ((temp2_1 & 0x1f) + temp3_1) s>> 5)
                    break
                
                rdx_3 = *(r9 + (rax_4 << 2) + 4)
                var_98 = 0xffffffff
                
                if (rdx_3 != 0)
                    goto label_1408deaa9
            
            var_94.d = r11
    
    int64_t* var_40 = arg1 + 0x18
    double var_60[0x2] = var_a8.o
    int16_t var_70 = 0
    zmm0 = 0xffffffff
    var_98.o = var_58
    var_a8.o = (arg1 + 0x18).o
    zmm0[0] = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
    double var_88[0x2] = zmm0
    
    if (0 s< *(var_58.q + 0x18))
        int32_t i = i_1
        
        do
            zmm6 = sub_1408deda0(*(*var_a8.q + sx.q(i) * 0x18 + 8), zmm6)
            var_94:4.d &= not.d(var_a0:4.d)
            sub_14059bdd0(&var_a0)
            i = i_1
        while (i s< *(var_98.q + 0x18))
        
        if (var_70.b != 0 && var_70:1.b != 0)
            sub_1405b6470(arg1 + 0x18, *(arg1 + 0x20) - *(arg1 + 0x4c), 1)
return zx.q(rbx)
