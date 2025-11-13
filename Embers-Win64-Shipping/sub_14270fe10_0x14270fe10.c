// 函数: sub_14270fe10
// 地址: 0x14270fe10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_338
int64_t rax_1 = __security_cookie ^ &var_338
int32_t var_2f0 = 0
int64_t* r13 = arg2
int64_t rax_2 = sub_140d3c6e0(arg2 + 0x34)
r13[6].d
var_2f0.q = rax_2
sub_1426cce30(arg1 + 0x50, rax_2)
r13[6].d
sub_1426cce30(arg1 + 0x208, rax_2)
r13[6].d
sub_1426cce30(arg1 + 0x240, rax_2)
r13[6].d
sub_1426cce30(arg1 + 0x88, rax_2)
r13[6].d
sub_1426cce30(arg1 + 0xc0, rax_2)
r13[6].d
sub_1426cce30(arg1 + 0x280, rax_2)
char rax_3 = sub_1426e25f0(arg1 + 0x50)
char rax_4 = sub_1426e25f0(arg1 + 0x208)
char rax_5 = sub_1426e25f0(arg1 + 0x240)
sub_1426e2610(arg1 + 0x88)
sub_1426e2610(arg1 + 0xc0)
int64_t result
int128_t zmm0_2
zmm0_2, result = sub_1426e2610(arg1 + 0x280)
void* rbx_1 = r13[0xb]

if (rbx_1 != 0)
    int64_t* rbx_2 = *(rbx_1 + 0x120)
    
    if (rbx_2 != 0)
        void* rax_6 = sub_14269bba0()
        void* rdx_6 = rbx_2[2]
        result = sx.q(*(rax_6 + 0x38))
        
        if (result.d s<= *(rdx_6 + 0x38))
            int64_t result_2 = result
            result = *(rdx_6 + 0x30)
            
            if (*(result + (result_2 << 3)) == rax_6 + 0x30)
                void* rsi_1 = var_2f0.q
                
                if (rsi_1 != 0)
                    int128_t zmm10_1
                    result, zmm10_1 = sub_1426f8620(arg1, rbx_2, rsi_1)
                    int64_t result_3 = result
                    
                    if (result != 0)
                        int64_t rax_7 = sub_1426a09e0()
                        void* rcx_14 = *(result_3 + 0x10)
                        result = rax_7 + 0x30
                        int64_t rdx_8 = sx.q(*(result + 8))
                        
                        if (rdx_8.d s<= *(rcx_14 + 0x38)
                                && *(*(rcx_14 + 0x30) + (rdx_8 << 3)) == result)
                            int64_t var_2d8 = 0
                            int32_t i_11 = 0
                            void* rdx_9
                            
                            if (*(arg1 + 0x200) == 0)
                                rdx_9 = nullptr
                            else
                                void* rax_8 = sub_142736ba0()
                                
                                if (rax_8 == 0)
                                    rdx_9 = nullptr
                                else
                                    rdx_9 = *(arg1 + 0x200)
                                    int64_t rax_9 = sx.q(*(rax_8 + 0x38))
                                    
                                    if (rax_9.d s> *(rdx_9 + 0x38)
                                            || *(*(rdx_9 + 0x30) + (rax_9 << 3)) != rax_8 + 0x30)
                                        rdx_9 = nullptr
                            
                            uint128_t zmm6_1
                            double zmm7_1
                            int64_t zmm8_1
                            float zmm9_1
                            result, zmm6_1, zmm7_1, zmm8_1, zmm9_1 =
                                sub_1426e7790(r13, rdx_9, &var_2d8)
                            
                            if (result.b != 0)
                                int32_t* var_278
                                __builtin_memset(&var_278, 0, 0x20)
                                
                                if (i_11 != 0)
                                    sub_1405dadb0(&var_278, i_11)
                                    
                                    if (i_11 s> 0)
                                        uint64_t i_8 = zx.q(i_11)
                                        uint64_t i
                                        
                                        do
                                            int64_t var_270_1
                                            int64_t rbx_4 = sx.q(var_270_1.d)
                                            int32_t rax_11 = (rbx_4 + 1).d
                                            var_270_1.d = rax_11
                                            
                                            if (rax_11 s> var_270_1:4.d)
                                                sub_1406105e0(&var_278)
                                            
                                            int32_t* rdx_12 = &var_278[rbx_4]
                                            
                                            if (rdx_12 != 0)
                                                *rdx_12 = 0
                                            
                                            i = i_8
                                            i_8 -= 1
                                        while (i != 1)
                                
                                int64_t* var_210
                                void* rcx_22
                                void* rdx_15
                                int32_t rdi_1
                                
                                if (*(arg1 + 0x278) == 0)
                                label_1427100f3:
                                    int64_t* rax_17 = *(result_3 + 0x340)
                                    rdi_1 = 0xc
                                    rcx_22 = *(result_3 + 0x338)
                                    var_210 = rax_17
                                    
                                    if (rax_17 != 0)
                                        rax_17[1].d += 1
                                    
                                    void var_178
                                    rdx_15 = &var_178
                                else
                                    void* rax_13 = sub_14269cf80()
                                    
                                    if (rax_13 == 0)
                                        goto label_1427100f3
                                    
                                    int64_t* rdx_13 = *(arg1 + 0x278)
                                    int64_t rax_14 = sx.q(*(rax_13 + 0x38))
                                    
                                    if (rax_14.d s> rdx_13[7].d
                                            || *(rdx_13[6] + (rax_14 << 3)) != rax_13 + 0x30
                                            || rdx_13 == 0)
                                        goto label_1427100f3
                                    
                                    rdi_1 = 3
                                    void var_168
                                    rdx_15 = &var_168
                                    void var_158
                                    rcx_22 = *sub_14265ad90(&var_158, result_3, rsi_1, rdx_13)
                                
                                void** rax_18
                                int64_t rdx_16
                                rax_18, rdx_16 = sub_141deb5f0(rcx_22, rdx_15)
                                void* rax_19 = *rax_18
                                int64_t* rax_20 = rax_18[1]
                                rax_18[1] = 0
                                *rax_18 = nullptr
                                
                                if ((rdi_1.b & 8) != 0)
                                    rdi_1 &= 0xfffffff7
                                    int64_t* var_170
                                    
                                    if (var_170 != 0)
                                        var_170[1].d -= 1
                                        
                                        if (var_170[1].d == 1)
                                            (**var_170)(var_170)
                                            int32_t rax_23 = *(var_170 + 0xc)
                                            *(var_170 + 0xc) -= 1
                                            
                                            if (rax_23 == 1)
                                                (*(*var_170 + 8))(var_170, 1)
                                
                                if ((rdi_1.b & 4) != 0)
                                    rdi_1 &= 0xfffffffb
                                    
                                    if (var_210 != 0)
                                        var_210[1].d -= 1
                                        
                                        if (var_210[1].d == 1)
                                            (**var_210)(var_210)
                                            int32_t rax_27 = *(var_210 + 0xc)
                                            *(var_210 + 0xc) -= 1
                                            
                                            if (rax_27 == 1)
                                                (*(*var_210 + 8))(var_210, 1)
                                
                                if ((rdi_1.b & 2) != 0)
                                    rdi_1 &= 0xfffffffd
                                    int64_t* var_160
                                    
                                    if (var_160 != 0)
                                        var_160[1].d -= 1
                                        
                                        if (var_160[1].d == 1)
                                            (**var_160)(var_160)
                                            int32_t rax_31 = *(var_160 + 0xc)
                                            *(var_160 + 0xc) -= 1
                                            
                                            if (rax_31 == 1)
                                                (*(*var_160 + 8))(var_160, 1)
                                
                                int64_t* var_150
                                
                                if ((rdi_1.b & 1) != 0 && var_150 != 0)
                                    var_150[1].d -= 1
                                    
                                    if (var_150[1].d == 1)
                                        (**var_150)(var_150)
                                        int32_t rax_35 = *(var_150 + 0xc)
                                        *(var_150 + 0xc) -= 1
                                        
                                        if (rax_35 == 1)
                                            (*(*var_150 + 8))(var_150, 1)
                                
                                rdx_16.b = rax_4 == 0
                                int64_t* rcx_33 = *(rax_19 + 0x10)
                                (*(*rcx_33 + 0x38))(rcx_33, rdx_16)
                                int64_t rax_38 = *(rax_19 + 0x10)
                                int32_t i_1 = 0
                                int64_t r14_2 = rax_38 + 8
                                
                                if (rax_38 == 0)
                                    r14_2 = 0
                                
                                var_2f0.q = r14_2
                                int64_t var_268
                                uint128_t var_208
                                
                                if (r13[1].d s> 0)
                                    int64_t rsi_2 = 0
                                    
                                    do
                                        int32_t rcx_34 = *(rsi_2 + *r13 + 4)
                                        int64_t rax_39
                                        
                                        if (test_bit(rcx_34, 0x1e) || rcx_34 s< 0)
                                            rax_39.b = 0
                                        else
                                            rax_39.b = 1
                                        
                                        if (rax_39.b != 0)
                                            int64_t var_228
                                            sub_1426df900(arg1, &var_228, r13, i_1)
                                            uint128_t zmm2_1 = zx.o(data_143dbb1f8.q)
                                            int32_t rcx_36 = data_143dbb200
                                            int64_t var_260_1
                                            int64_t rdi_2 = sx.q(var_260_1.d)
                                            int32_t var_220
                                            int32_t var_1b8_1 = var_220
                                            var_208:0xc.q = zmm2_1.q
                                            uint64_t var_1c0_1 = var_228
                                            var_208:8.d = rcx_36
                                            int32_t var_19c_1 = 0.d
                                            uint128_t zmm0_3
                                            zmm0_3.q = zmm2_1.q
                                            int32_t var_1f4_1 = rcx_36
                                            uint64_t var_198_1 = zmm2_1.q
                                            int32_t var_180 = (var_180 & 0xfffffffc) | 4
                                            int32_t rax_45 = (rdi_2 + 1).d
                                            var_208 = zmm0_3
                                            int64_t var_188_1 = 0
                                            var_260_1.d = rax_45
                                            
                                            if (rax_45 s> var_260_1:4.d)
                                                sub_140775520(&var_268)
                                            
                                            int64_t rax_46 = var_268
                                            int64_t rcx_38 = rdi_2 * 9
                                            int32_t r8_13 = 0
                                            *(rax_46 + (rcx_38 << 3)) = var_1c0_1.o
                                            *(rax_46 + (rcx_38 << 3) + 0x10) = zmm0_3
                                            int64_t var_1f8
                                            *(rax_46 + (rcx_38 << 3) + 0x20) = var_1f8:4.o
                                            *(rax_46 + (rcx_38 << 3) + 0x30) = rcx_36.o
                                            *(rax_46 + (rcx_38 << 3) + 0x40) = var_180.q
                                            
                                            if (i_11 s> 0)
                                                int32_t* rdx_19 = var_278
                                                uint128_t* rcx_39 = nullptr
                                                
                                                do
                                                    int64_t rax_47 = var_2d8
                                                    r8_13 += 1
                                                    uint128_t zmm1_1 = *(rcx_39 + rax_47)
                                                    zmm2_1.d =
                                                        (*(rcx_39 + rax_47 + 4)).d f- var_228:4.d
                                                    zmm0_3 = *(rcx_39 + rax_47 + 8)
                                                    rcx_39 += 0xc
                                                    zmm1_1.d = zmm1_1.d f- var_228.d
                                                    zmm0_3.d = zmm0_3.d f- var_220
                                                    zmm2_1.d = zmm2_1.d f* zmm2_1.d
                                                    zmm1_1.d = zmm1_1.d f* zmm1_1.d
                                                    zmm0_3.d = zmm0_3.d f* zmm0_3.d
                                                    zmm2_1.d = zmm2_1.d f+ zmm1_1.d
                                                    zmm2_1.d = zmm2_1.d f+ zmm0_3.d
                                                    *rdx_19 =
                                                        __maxss_xmmss_memss(zmm2_1.d, *rdx_19).d
                                                    rdx_19 = &rdx_19[1]
                                                while (r8_13 s< i_11)
                                        
                                        i_1 += 1
                                        rsi_2 += 8
                                    while (i_1 s< r13[1].d)
                                    
                                    r14_2 = var_2f0.q
                                
                                var_208 = rax_19.o
                                
                                if (rax_20 != 0)
                                    rax_20[1].d += 1
                                
                                int32_t var_1c8_1 = *(result_3 + 0x274)
                                int64_t rax_49 = *result_3
                                uint64_t var_1d0 = *(result_3 + 0x26c)
                                int64_t* var_318_1 = nullptr
                                (*(rax_49 + 0x710))(result_3, &var_268, &var_1d0, &var_208, 
                                    var_318_1)
                                int64_t i_13 = sx.q(i_11)
                                int64_t result_4 = nullptr
                                int64_t result_1 = 0
                                int32_t i_10 = 0
                                int32_t temp2_1 = i_13.d
                                
                                if (temp2_1 s> 0)
                                    i_10 = i_13.d
                                    sub_1407755b0(&result_1)
                                    
                                    if (i_13.d != 0)
                                        int64_t* rdx_23 = result_1 + 0x20
                                        int32_t i_2
                                        
                                        do
                                            rdx_23[-4] = 0
                                            void* rcx_43 = &rdx_23[-2]
                                            rdx_23[-3] = 0
                                            *rdx_23 = 0
                                            rdx_23[1].d = 0
                                            *(rdx_23 + 0xc) = 0x80
                                            void* rax_50 = *rdx_23
                                            rdx_23 = &rdx_23[0xb]
                                            
                                            if (rax_50 != 0)
                                                rcx_43 = rax_50
                                            
                                            *rcx_43 = 0
                                            *(rcx_43 + 8) = 0
                                            rdx_23[-9].d = 0xffffffff
                                            *(rdx_23 - 0x44) = 0
                                            rdx_23[-7] = 0
                                            rdx_23[-6].d = 0
                                            rdx_23[-5].d = 0xffffffff
                                            *(rdx_23 - 0x24) = 0
                                            i_2 = i_13.d
                                            i_13 = zx.q(i_13.d - 1)
                                        while (i_2 != 1)
                                    
                                    result_4 = result_1
                                else if (temp2_1 s< 0)
                                    int32_t i_12 = neg.d(i_13.d)
                                    
                                    if (i_12 != 0)
                                        void* r15_2 = i_13 * 0x58
                                        int32_t i_7 = i_12
                                        void* rbx_10 = r15_2
                                        int32_t i_3
                                        
                                        do
                                            *(rbx_10 + 0x48) = 0
                                            int64_t rcx_44 = *(rbx_10 + 0x40)
                                            
                                            if (rcx_44 != 0)
                                                sub_140a74f90(rcx_44)
                                            
                                            sub_1426f41a0(rbx_10)
                                            rbx_10 += 0x58
                                            i_3 = i_7
                                            i_7 -= 1
                                        while (i_3 != 1)
                                        r13 = arg2
                                        int32_t i_14 = neg.d(i_12)
                                        
                                        if (i_14 != i_13.d)
                                            memmove(r15_2, nullptr, (i_14 - i_13.d) * 0x58)
                                        
                                        i_10 = i_14
                                        sub_14083ac10(&result_1)
                                        result_4 = result_1
                                    
                                    r14_2 = var_2f0.q
                                
                                int32_t rax_54 = 0
                                int32_t var_22c_1 = 0
                                int32_t rbx_11 = 0
                                uint128_t var_48_1 = zmm6_1
                                uint64_t var_238 = 0
                                int32_t var_230_1 = 0
                                void* const var_310
                                int64_t* var_308
                                
                                if (i_11 s> 0)
                                    int32_t* rsi_3 = var_278
                                    void* rdi_3 = result_4 + 0x54
                                    int64_t result_6 = result_1
                                    
                                    while (true)
                                        int32_t var_230_2 = 0
                                        zmm6_1.d =
                                            __sqrtss_xmmss_memss(zmm6_1.d, *rsi_3).d f* zmm7_1.d
                                        
                                        if (rax_54 s< 0 && rax_54 != 0)
                                            sub_1405c5570(&var_238, 0)
                                        
                                        *rdi_3 = 4
                                        uint128_t var_148 = rax_19.o
                                        
                                        if (rax_20 != 0)
                                            rax_20[1].d += 1
                                            result_6 = result_1
                                        
                                        int64_t rax_55 = sx.q(rbx_11)
                                        int64_t* r8_17 = rax_55 * 0x58 + result_6
                                        var_308 = r8_17
                                        var_310 = nullptr
                                        var_318_1 = &var_148
                                        zmm6_1, zmm7_1, zmm8_1, zmm9_1, zmm10_1 = sub_142687960(
                                            result_3, var_2d8 + rax_55 * 0xc, r8_17, &var_238, 
                                            var_318_1, var_310, var_308)
                                        rbx_11 += 1
                                        rsi_3 = &rsi_3[1]
                                        rdi_3 += 0x58
                                        
                                        if (rbx_11 s>= i_11)
                                            break
                                        
                                        rax_54 = var_22c_1
                                    
                                    uint64_t rcx_52 = var_238
                                    r14_2 = var_2f0.q
                                    
                                    if (rcx_52 != 0)
                                        sub_140a74f90(rcx_52)
                                
                                int32_t rsi_4 = 0
                                int32_t var_2f0_1 = 0
                                uint64_t rdx_26
                                int64_t** r8_19
                                
                                if ((*(arg1 + 0x1f0) & 1) == 0)
                                    int64_t** var_2c8
                                    sub_1426c5aa0(&var_2c8, arg1, r13, 0xffffffff)
                                    double zmm1_3 = -1.0
                                    int64_t* r15_4 = 0x38
                                    int16_t var_2ac
                                    int16_t r11_1 = var_2ac
                                    int32_t var_2b0
                                    double zmm0_5 = var_2b0
                                    int32_t var_2c0
                                    rdx_26 = zx.q(var_2c0)
                                    r8_19 = var_2c8
                                    double var_2b8_1 = zmm1_3
                                    
                                    while (true)
                                        int64_t* rax_65
                                        
                                        if (rdx_26.d s>= r8_19[1].d || (*(r8_19 + 0x13e) & 1) != 0)
                                            rax_65.b = 0
                                        else
                                            int64_t performanceCount_1
                                            
                                            if (not(zmm1_3 f< (zx.o(0)).q))
                                                QueryPerformanceCounter(&performanceCount_1)
                                                r11_1 = var_2ac
                                                rdx_26 = zx.q(var_2c0)
                                                r8_19 = var_2c8
                                                zmm0_5 = var_2b0
                                            
                                            if (not(zmm1_3 f< (zx.o(0)).q)
                                                    && float.d(performanceCount_1)
                                                    f* data_143d796f8 + 16777216.0 >= var_2b8_1)
                                                rax_65.b = 0
                                            else
                                                rax_65.b = 1
                                        
                                        if (rax_65.b == 0)
                                            break
                                        
                                        uint8_t var_2a6
                                        
                                        if (i_11 s> 0)
                                            uint64_t i_6 = zx.q(i_11)
                                            void* r10_2 = result_1 + 0x34
                                            uint64_t i_4
                                            
                                            do
                                                int64_t r9_7 = *(r15_4 + var_268)
                                                int64_t var_130_1 = 0
                                                int64_t var_c8_1 = 0
                                                int32_t var_c0_1 = 0
                                                char var_b8_1 = 0
                                                int64_t var_138_1 = r9_7
                                                int32_t var_bc_1 = 6
                                                int32_t rax_73
                                                void* const rcx_80
                                                
                                                if (*(r10_2 - 0x2c) == *r10_2)
                                                label_142710b69:
                                                    rcx_80 = nullptr
                                                else
                                                    void* r8_21 = *(r10_2 + 0xc)
                                                    void* rax_72 = r10_2 + 4
                                                    
                                                    if (r8_21 != 0)
                                                        rax_72 = r8_21
                                                    
                                                    rax_73 = *(rax_72 + ((
                                                        sx.q((r9_7 u>> 0x20).d * 0x17 + r9_7.d)
                                                        & (sx.q(*(r10_2 + 0x14)) - 1)) << 2))
                                                    
                                                    if (rax_73 == 0xffffffff)
                                                    label_142710b69_1:
                                                        rcx_80 = nullptr
                                                    else
                                                        int64_t r8_22 = *(r10_2 - 0x34)
                                                        
                                                        while (true)
                                                            rdx_26 = sx.q(rax_73) * 0x90
                                                            rcx_80 = rdx_26 + r8_22
                                                            
                                                            if (*(rdx_26 + r8_22) == r9_7)
                                                                break
                                                            
                                                            rax_73 = *(rcx_80 + 0x88)
                                                            
                                                            if (rax_73 == 0xffffffff)
                                                                goto label_142710b69_2
                                                        
                                                        if (rax_73 == 0xffffffff)
                                                        label_142710b69_2:
                                                            rcx_80 = nullptr
                                                
                                                rdx_26.b = rcx_80 != 0
                                                
                                                if ((var_2a6 u>> 1 & 1) == 0)
                                                    uint32_t rcx_81 = zx.d(*(arg1 + 0x4a))
                                                    
                                                    if (rcx_81 != 0 && rcx_81 != 1 && rcx_81 != 2
                                                            && rcx_81 == 3)
                                                        rax_73.b = rdx_26.b == rax_3
                                                    
                                                    if (rcx_81 != 0 && rcx_81 != 1 && rcx_81 != 2
                                                            && rcx_81 == 3 && rax_73.b != 0)
                                                        zmm1_3 = 0x3f800000
                                                        goto label_142710bab
                                                    
                                                    if ((var_2a6 & 4) == 0)
                                                        zmm1_3 = (zx.o(0)).q
                                                    label_142710bab:
                                                        char var_2a7
                                                        uint32_t rcx_84 = zx.d(var_2a7)
                                                        
                                                        if (var_2a7 == 0)
                                                            zmm0_5.d = zmm0_5.d f+ zmm1_3.d
                                                            var_2b0 = zmm0_5.d
                                                        else if (rcx_84 == 1)
                                                            if (r11_1 == 0
                                                                    || not(zmm0_5.d f<= zmm1_3.d))
                                                                var_2b0 = zmm1_3.d
                                                                zmm0_5 = zmm1_3
                                                        else if (rcx_84 == 2)
                                                            if (r11_1 == 0)
                                                                var_2b0 = zmm1_3.d
                                                                zmm0_5 = zmm1_3
                                                            else if (not(zmm0_5.d f>= zmm1_3.d))
                                                                var_2b0 = zmm1_3.d
                                                                zmm0_5 = zmm1_3
                                                        else if (rcx_84 == 3)
                                                            zmm0_5.d = zmm0_5.d f* zmm1_3.d
                                                            var_2b0 = zmm0_5.d
                                                        
                                                        r11_1 += 1
                                                        var_2ac = r11_1
                                                    
                                                    int16_t var_2aa = var_2aa + 1
                                                
                                                r10_2 += 0x58
                                                i_4 = i_6
                                                i_6 -= 1
                                            while (i_4 != 1)
                                        
                                        sub_1426ec620(&var_2c8)
                                        r8_19 = var_2c8
                                        rdx_26 = zx.q(var_2c0)
                                        
                                        if ((*(r8_19 + 0x13e) & 1) != 0)
                                            r11_1 = var_2ac
                                            zmm0_5 = var_2b0
                                        else
                                            rdx_26 = zx.q(rdx_26.d + 1)
                                            var_2ac.d = 0
                                            r11_1 = 0
                                            zmm0_5 = (zx.o(0)).q
                                            rax_65.b = var_2a6 & 0xfd
                                            var_2b0 = 0
                                            rax_65.b |= 1
                                            var_2c0 = rdx_26.d
                                            var_2a6 = rax_65.b
                                            
                                            if (rdx_26.d s< r8_19[1].d)
                                                do
                                                    int32_t r9_8 = *(&(*r8_19)[sx.q(rdx_26.d)] + 4)
                                                    
                                                    if (test_bit(r9_8, 0x1e) || r9_8 s< 0)
                                                        rax_65.b = 0
                                                    else
                                                        rax_65.b = 1
                                                    
                                                    if (rax_65.b != 0)
                                                        goto label_142710ca5
                                                    
                                                    rdx_26 = zx.q(rdx_26.d + 1)
                                                    var_2c0 = rdx_26.d
                                                while (rdx_26.d s< r8_19[1].d)
                                                
                                                zmm1_3 = var_2b8_1
                                                r15_4 = &r15_4[9]
                                                continue
                                        
                                    label_142710ca5:
                                        zmm1_3 = var_2b8_1
                                        r15_4 = &r15_4[9]
                                else
                                    int128_t var_88_1 = zmm10_1
                                    int512_t (* var_a0_1)(int64_t* arg1, void* arg2) = sub_142701d90
                                    int64_t var_a8 = 0
                                    float (* var_98_1)(int64_t* arg1, void* arg2) = sub_142701eb0
                                    int64_t** var_2a0
                                    int64_t* rax_57
                                    int64_t zmm0_4
                                    rax_57, zmm0_4 = sub_1426c5aa0(&var_2a0, arg1, r13, 0xffffffff)
                                    int64_t zmm1_2 = -0x4010000000000000
                                    int32_t var_298
                                    rdx_26 = zx.q(var_298)
                                    r8_19 = var_2a0
                                    int64_t var_290_1 = zmm1_2
                                    
                                    while (true)
                                        if (rdx_26.d s>= r8_19[1].d || (*(r8_19 + 0x13e) & 1) != 0)
                                            rax_57.b = 0
                                        else
                                            if (not(zmm1_2 f< zx.o(0).q))
                                                int64_t performanceCount
                                                QueryPerformanceCounter(&performanceCount)
                                                rdx_26 = zx.q(var_298)
                                                r8_19 = var_2a0
                                                zmm0_4 = float.d(performanceCount) f* data_143d796f8
                                                    f+ 16777216.0
                                            
                                            if (not(zmm1_2 f< zx.o(0).q) && zmm0_4 f>= var_290_1)
                                                rax_57.b = 0
                                            else
                                                rax_57.b = 1
                                        
                                        if (rax_57.b == 0)
                                            break
                                        
                                        int32_t rbx_12 = 0
                                        int64_t var_288
                                        char var_27e
                                        
                                        if (i_11 s> 0)
                                            int64_t result_5 = result_1
                                            
                                            do
                                                uint64_t r9_5 = zx.q(*(arg1 + 0x1f8))
                                                (&var_a8)[r9_5](sx.q(rbx_12) * 0x58 + result_5, 
                                                    var_268 + sx.q(rsi_4) * 0x48, r14_2, r9_5, 
                                                    var_318_1, var_310, var_308)
                                                zmm1_2 = zmm0_4
                                                
                                                if ((var_27e & 2) == 0)
                                                    if (*(arg1 + 0x34) == 1)
                                                    label_1427107d9:
                                                        char var_27f
                                                        uint32_t rcx_59 = zx.d(var_27f)
                                                        int16_t rax_62 = var_288:4.w
                                                        
                                                        if (rcx_59 == 0)
                                                            zmm0_4.d = var_288.d.d f+ zmm1_2.d
                                                            var_288.d = zmm0_4.d
                                                        else if (rcx_59 == 1)
                                                            if (rax_62 == 0)
                                                                var_288.d = zmm1_2.d
                                                            else
                                                                zmm0_4 = var_288.d
                                                                
                                                                if (not(zmm0_4.d f<= zmm1_2.d))
                                                                    var_288.d = zmm1_2.d
                                                        else if (rcx_59 == 2)
                                                            if (rax_62 == 0)
                                                                var_288.d = zmm1_2.d
                                                            else
                                                                zmm0_4 = var_288.d
                                                                
                                                                if (not(zmm0_4.d f>= zmm1_2.d))
                                                                    var_288.d = zmm1_2.d
                                                        else if (rcx_59 == 3)
                                                            zmm0_4.d = var_288.d.d f* zmm1_2.d
                                                            var_288.d = zmm0_4.d
                                                        
                                                        var_288:4.w = rax_62 + 1
                                                    else
                                                        uint32_t rcx_57 = zx.d(*(arg1 + 0x4a))
                                                        bool cond:6_1
                                                        
                                                        if (rcx_57 == 0)
                                                            cond:6_1 = zmm1_2.d f>= zmm8_1.d
                                                        label_1427107d5:
                                                            
                                                            if (cond:6_1 != 0)
                                                                goto label_1427107d9
                                                        else
                                                            if (rcx_57 == 1)
                                                                cond:6_1 = zmm9_1 f>= zmm1_2.d
                                                                goto label_1427107d5
                                                            
                                                            if (rcx_57 == 2
                                                                    && not(zmm1_2.d f< zmm8_1.d)
                                                                    && not(zmm1_2.d f> zmm9_1))
                                                                goto label_1427107d9
                                                    
                                                    var_288:6.w += 1
                                                
                                                if (rax_5 != 0 && not(zmm1_2.d f< 3.39999995e+38f))
                                                    zmm0_4 = 0xff7fffff
                                                    var_288.d = 0xff7fffff
                                                    var_27e = (var_27e & 0xfe) | 2
                                                
                                                rbx_12 += 1
                                            while (rbx_12 s< i_11)
                                            
                                            rsi_4 = var_2f0_1
                                        
                                        rax_57, zmm0_4 = sub_1426ec620(&var_2a0)
                                        r8_19 = var_2a0
                                        rdx_26 = zx.q(var_298)
                                        
                                        if ((*(r8_19 + 0x13e) & 1) == 0)
                                            rdx_26 = zx.q(rdx_26.d + 1)
                                            rax_57.b = var_27e & 0xfd
                                            var_288 = 0
                                            rax_57.b |= 1
                                            var_298 = rdx_26.d
                                            var_27e = rax_57.b
                                            
                                            while (rdx_26.d s< r8_19[1].d)
                                                int32_t r9_6 = *(&(*r8_19)[sx.q(rdx_26.d)] + 4)
                                                
                                                if (test_bit(r9_6, 0x1e) || r9_6 s< 0)
                                                    rax_57.b = 0
                                                else
                                                    rax_57.b = 1
                                                
                                                if (rax_57.b != 0)
                                                    break
                                                
                                                rdx_26 = zx.q(rdx_26.d + 1)
                                                var_298 = rdx_26.d
                                        
                                        zmm1_2 = var_290_1
                                        rsi_4 += 1
                                        var_2f0_1 = rsi_4
                                
                                int32_t i_9 = i_10
                                *(r8_19 + 0x124) = rdx_26.d
                                
                                if (i_9 != 0)
                                    void* rbx_14 = result_1 + 0x40
                                    int32_t i_5
                                    
                                    do
                                        *(rbx_14 + 8) = 0
                                        int64_t rcx_64 = *rbx_14
                                        
                                        if (rcx_64 != 0)
                                            sub_140a74f90(rcx_64)
                                        
                                        sub_1426f41a0(rbx_14 - 0x40)
                                        rbx_14 += 0x58
                                        i_5 = i_9
                                        i_9 -= 1
                                    while (i_5 != 1)
                                
                                result = result_1
                                
                                if (result != 0)
                                    result = sub_140a74f90(result)
                                
                                if (rax_20 != 0)
                                    result = zx.q(rax_20[1].d)
                                    rax_20[1].d -= 1
                                    
                                    if (result.d == 1)
                                        result = (**rax_20)(rax_20)
                                        int32_t rsi_5 = *(rax_20 + 0xc)
                                        *(rax_20 + 0xc) -= 1
                                        
                                        if (rsi_5 == 1)
                                            result = (*(*rax_20 + 8))(rax_20, zx.q(rsi_5))
                                
                                int32_t* rcx_70 = var_278
                                
                                if (rcx_70 != 0)
                                    result = sub_140a74f90(rcx_70)
                                
                                int64_t rcx_71 = var_268
                                
                                if (rcx_71 != 0)
                                    result = sub_140a74f90(rcx_71)
                            
                            int64_t rcx_72 = var_2d8
                            
                            if (rcx_72 != 0)
                                result = sub_140a74f90(rcx_72)

__security_check_cookie(rax_1 ^ &var_338)
return result
