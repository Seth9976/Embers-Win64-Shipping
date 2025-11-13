// 函数: sub_1408deda0
// 地址: 0x1408deda0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm8
uint128_t var_48 = zmm8
EnterCriticalSection(arg1 + 0xc0)
double zmm6[0x2] = zx.o(0)
int64_t* rdi
void* var_b0
int32_t i_2
int64_t* var_88
int16_t var_80
double var_58[0x2]
double zmm3[0x2]

if (arg2[0].d f!= 0f)
    int64_t performanceCount
    QueryPerformanceCounter(&performanceCount)
    zmm8 = 0x4170000000000000
    void* r9_1 = arg1 + 0x38
    int32_t r11_1 = *(r9_1 + 0x18)
    zmm6 = zx.o(0)
    zmm6[0] = float.d(performanceCount)
    int32_t r8_2 = 0
    int32_t var_b4_2 = 1
    int32_t var_b8_1 = 0
    int32_t rcx_10 = 0
    var_b0 = r9_1
    int32_t var_a8_1 = 0xffffffff
    double zmm0[0x2] = zx.o(0)
    zmm6[0] = zmm6[0] f* data_143d796f8
    int32_t var_a4_3 = 0
    int32_t var_a0_1 = 0
    zmm0[0] = fconvert.d(arg2[0].d)
    zmm6[0] = zmm6[0] f+ zmm8.q
    zmm6[0] = zmm6[0] + zmm0[0]
    
    if (r11_1 != 0)
        void* rax_19 = *(r9_1 + 0x10)
        
        if (rax_19 != 0)
            r9_1 = rax_19
        
        int32_t temp0_3
        int32_t temp1_1
        temp0_3:temp1_1 = sx.q(r11_1 - 1)
        int32_t rdx_11 = *r9_1
        int32_t var_a4_5
        
        if (rdx_11 != 0)
        label_1408df048:
            int32_t rax_26 = neg.d(rdx_11) & rdx_11
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_26)
            int32_t var_b4_3 = rax_26
            int32_t rax_27
            
            if (rax_26 == 0)
                rax_27 = 0x20
            else
                rax_27 = 0x1f - temp0_4
            
            int32_t var_a4_4 = rcx_10 - rax_27 + 0x1f
            
            if (rcx_10 - rax_27 + 0x1f s> r11_1)
                var_a4_5 = r11_1
        else
            while (true)
                int64_t rdx_12 = sx.q(r8_2)
                rcx_10 += 0x20
                r8_2 += 1
                var_a0_1 = rcx_10
                var_b8_1 = r8_2
                
                if (rdx_12.d s>= (temp1_1 + (temp0_3 & 0x1f)) s>> 5)
                    break
                
                rdx_11 = *(r9_1 + (rdx_12 << 2) + 4)
                var_a8_1 = 0xffffffff
                
                if (rdx_11 != 0)
                    goto label_1408df048
            
            var_a4_5 = r11_1
    
    int64_t* var_50_1 = arg1 + 0x28
    int128_t var_60_1 = 0xffffffff
    var_88 = arg1 + 0x28
    var_80 = 0
    zmm3 = var_b8_1.o
    double rax_29 = zmm3[0]
    var_a8_1.o = zmm3
    var_b8_1.o = (arg1 + 0x28).o
    var_58[0] = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
    double var_98_1[0x2] = var_58
    
    if (0 s< *(rax_29 i+ 0x18))
        double zmm7[0x2] = 0x3a83126f
        int32_t i = i_2
        
        do
            int64_t* rsi_1 = var_b8_1.q
            rdi = sx.q(i) * 5
            
            if (*(*rsi_1 + (rdi << 3) + 0x18) != 0)
                QueryPerformanceCounter(&performanceCount)
                arg2 = zx.o(0)
                arg2[0] = float.d(performanceCount)
                arg2[0] = arg2[0] f* data_143d796f8
                arg2[0] = arg2[0] f+ zmm8.q
                zmm6[0] = zmm6[0] - arg2[0]
                arg2 = zx.o(0)
                arg2[0].d = fconvert.s(zmm6[0])
                char rax_34
                
                if (not(arg2[0].d f< zmm7[0].d))
                    int64_t* rcx_13 = *(*rsi_1 + (rdi << 3) + 0x18)
                    rax_34 = (*(*rcx_13 + 0x10))(rcx_13, arg2)
                
                if (arg2[0].d f< zmm7[0].d || rax_34 == 0)
                    if (var_80.b != 0 && var_80:1.b != 0)
                        sub_1408df340(var_88, var_88[1].d - *(var_88 + 0x34), 1)
                    
                    rdi.b = 0
                    goto label_1408def80
                
                zmm6, zmm7, zmm8 = sub_1408e6bf0(arg1)
            
            var_a0_1 &= not.d(var_b0:4.d)
            sub_14059bdd0(&var_b0)
            i = i_2
        while (i s< *(var_a8_1.q + 0x18))
        
    label_1408def36:
        
        if (var_80.b != 0 && var_80:1.b != 0)
            sub_1408df340(var_88, var_88[1].d - *(var_88 + 0x34), 1)
else
    int32_t r11 = *(arg1 + 0x50)
    void* r9 = arg1 + 0x38
    int32_t r8 = 0
    int32_t var_b4 = 1
    int32_t var_b8 = 0
    int32_t rcx_1 = 0
    int32_t var_a0 = 0
    var_b0 = r9
    int32_t var_a8 = 0xffffffff
    int32_t var_a4 = 0
    
    if (r11 != 0)
        void* rax_1 = *(r9 + 0x10)
        
        if (rax_1 != 0)
            r9 = rax_1
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r11 - 1)
        int32_t rdx_3 = *r9
        int32_t var_a4_2
        
        if (rdx_3 != 0)
        label_1408dee68:
            int32_t rax_8 = neg.d(rdx_3) & rdx_3
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rax_8)
            int32_t var_b4_1 = rax_8
            int32_t rax_9
            
            if (rax_8 == 0)
                rax_9 = 0x20
            else
                rax_9 = 0x1f - temp0_1
            
            int32_t var_a4_1 = rcx_1 - rax_9 + 0x1f
            
            if (rcx_1 - rax_9 + 0x1f s> r11)
                var_a4_2 = r11
        else
            while (true)
                int64_t rdx_4 = sx.q(r8)
                rcx_1 += 0x20
                r8 += 1
                var_a0 = rcx_1
                var_b8 = r8
                
                if (rdx_4.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_3 = *(r9 + (rdx_4 << 2) + 4)
                var_a8 = 0xffffffff
                
                if (rdx_3 != 0)
                    goto label_1408dee68
            
            var_a4_2 = r11
    
    int64_t* var_50 = arg1 + 0x28
    int128_t var_60 = 0xffffffff
    var_88 = arg1 + 0x28
    var_80 = 0
    zmm3 = var_b8.o
    double rax_11 = zmm3[0]
    var_a8.o = zmm3
    var_b8.o = (arg1 + 0x28).o
    var_58[0] = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
    double var_98[0x2] = var_58
    
    if (0 s< *(rax_11 i+ 0x18))
        int32_t i_1 = i_2
        
        do
            int64_t* rcx_4 = *(*var_b8.q + sx.q(i_1) * 0x28 + 0x18)
            
            if (rcx_4 != 0)
                (*(*rcx_4 + 0x10))(rcx_4, zmm6)
                zmm6 = sub_1408e6bf0(arg1)
            
            var_a0 &= not.d(var_b0:4.d)
            sub_14059bdd0(&var_b0)
            i_1 = i_2
        while (i_1 s< *(var_a8.q + 0x18))
        
        goto label_1408def36
rdi.b = 1
label_1408def80:

if (arg1 != -0xc0)
    LeaveCriticalSection(arg1 + 0xc0)

return zx.q(rdi.b)
