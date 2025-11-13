// 函数: sub_140b9fb00
// 地址: 0x140b9fb00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int64_t result

if (*(arg1 + 0x50) != 0)
    result = 2
else
    *(arg1 + 0xd8) = 0
    *(arg1 + 0xe0) = u"creating Linker"
    void var_168
    sub_140cad130(&var_168)
    int128_t* var_110
    int64_t* rax_2 = sub_140b63b70(arg1 + 0x14, &var_110)
    int16_t* const rsi_1 = &data_142d40450
    int16_t* rdx_2
    
    if (rax_2[1].d == 0)
        rdx_2 = &data_142d40450
    else
        rdx_2 = *rax_2
    
    void* rax_3 = sub_140d1dfb0(nullptr, rdx_2)
    int128_t* rcx_2 = var_110
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    uint8_t rax_4
    
    if (rax_3 != 0)
        rax_4 = sub_140bc9540(rax_3)
    
    if (rax_3 == 0 || rax_4 != 0)
        *(arg1 + 0xcb) = 1
        sub_140cad790()
        result = 0
    else
        sub_140b9aae0(arg1, rax_3)
        *(arg1 + 0x58) = rax_3
        sub_140cad790()
        int32_t rcx_5
        rcx_5.b = *(rax_3 + 0x60) == 0
        
        if ((rcx_5.b & sub_140b5b8a0(*(rax_3 + 0x5c), 0)) != 0 && (*(rax_3 + 0x28) & 2) == 0)
            int32_t rax_6 = *(arg1 + 0x40)
            *(arg1 + 0xce) = 1
            *(rax_3 + 0x50) |= rax_6
            *(rax_3 + 0x58) = *(arg1 + 0x48)
            *(rax_3 + 0x5c) = *(arg1 + 0x1c)
        
        *(arg1 + 0xd8) = rax_3
        int64_t rax_9 = sub_140cba0e0(rax_3)
        *(arg1 + 0x50) = rax_9
        void* var_150
        int64_t i_1
        int32_t var_f8
        
        if (rax_9 == 0)
        label_140b9fcc8:
            uint64_t var_160 = 0
            int64_t var_140 = 0
            int64_t var_138_1 = 0
            int64_t var_130_1 = *(arg1 + 0x1c)
            int32_t var_158_1 = 0
            int64_t var_120_1 = 0
            int64_t var_d8 = 0
            sub_140be09b0(&i_1, 0x40, &var_140)
            int128_t var_f0
            int64_t* rax_14 = sub_140b63b70(&var_f0, &var_150)
            
            if (&var_160 != rax_14)
                uint64_t rcx_15 = var_160
                
                if (rcx_15 != 0)
                    sub_140a74f90(rcx_15)
                
                var_160 = *rax_14
                *rax_14 = 0
                var_158_1 = rax_14[1].d
                var_158_1 = *(rax_14 + 0xc)
                rax_14[1] = 0
            
            void* rcx_17 = var_150
            
            if (rcx_17 != 0)
                sub_140a74f90(rcx_17)
            
            int64_t* rax_17 = sub_140ba9d00(&var_150, &var_160)
            
            if (&var_160 != rax_17)
                uint64_t rcx_19 = var_160
                
                if (rcx_19 != 0)
                    sub_140a74f90(rcx_19)
                
                var_160 = *rax_17
                *rax_17 = 0
                var_158_1 = rax_17[1].d
                var_158_1 = *(rax_17 + 0xc)
                rax_17[1] = 0
            
            void* rcx_21 = var_150
            
            if (rcx_21 != 0)
                sub_140a74f90(rcx_21)
            
            uint64_t* rax_20 = sub_140baa220(&var_150, &var_160)
            
            if (&var_160 != rax_20)
                uint64_t rcx_23 = var_160
                
                if (rcx_23 != 0)
                    sub_140a74f90(rcx_23)
                
                var_160 = *rax_20
                *rax_20 = 0
                var_158_1 = rax_20[1].d
                var_158_1 = *(rax_20 + 0xc)
                rax_20[1] = 0
            
            void* rcx_25 = var_150
            
            if (rcx_25 != 0)
                sub_140a74f90(rcx_25)
            
            void* rdx_10 = arg1 + 0x24
            bool cond:1_1 = (*(arg1 + 0x30) | *(rdx_10 + 8) | *(rdx_10 + 4) | *rdx_10) == 0
            var_150 = nullptr
            
            if (cond:1_1)
                rdx_10 = nullptr
            
            int32_t var_148_1 = 0
            char rax_27
            int128_t zmm2_1
            uint128_t zmm3_1
            rax_27, zmm2_1, zmm3_1 = sub_140ba1330(&var_160, rdx_10, &var_150, 1)
            int32_t rcx_27
            rcx_27.b = *(arg1 + 0x20) == 0
            int64_t var_118
            int64_t (* var_78)(int64_t* arg1)
            double var_60[0x2]
            
            if ((rcx_27.b & sub_140b5b8a0(*(arg1 + 0x1c), 0)) != 0)
            label_140ba00b9:
                
                if (var_158_1 != 0)
                    rsi_1 = var_160
                
                sub_140b58260(&var_118, rsi_1, 1)
                char rax_42 = sub_140cc1810()
                
                if (rax_42 == 0)
                    if (data_143de5452 != rax_42)
                        int64_t var_c8
                        __builtin_memset(&var_c8, 0, 0x2c)
                        int32_t var_9c_1 = 0x80
                        int32_t var_98_1 = 0xffffffff
                        int32_t var_94_1 = 0
                        int64_t var_88_1 = 0
                        int32_t var_80_1 = 0
                        var_110 = nullptr
                        int32_t var_108_1 = 0
                        sub_140ba9440(arg1 + 0x500, &var_110, arg1)
                        int128_t* rdi_2 = var_110
                        int128_t* r15_1 = rdi_2
                        void* r13_4 = &rdi_2[sx.q(var_108_1)]
                        
                        if (rdi_2 != r13_4)
                            do
                                int64_t rax_43 = _mm_bsrli_si128(*r15_1, 8).q
                                int32_t temp0_2 = rax_43.d
                                void* rax_46
                                
                                if (temp0_2 != 0)
                                    int32_t rcx_57
                                    
                                    if (temp0_2 s>= 0)
                                        rcx_57 = (rax_43 u>> 0x20).d - 3 + *(arg1 + 0x564)
                                            + (rax_43 * 3).d
                                    else
                                        rcx_57 = (rax_43 u>> 0x20).d - ((rax_43 << 1) + 2).d
                                            + *(arg1 + 0x560)
                                    
                                    rax_46 = *(arg1 + 0x548) + sx.q(rcx_57) * 0x18
                                else
                                    rax_46 = arg1 + 0x500 + sx.q((rax_43 u>> 0x20).d) * 0x18
                                
                                int64_t* i = *rax_46
                                
                                for (void* rsi_4 = &i[sx.q(*(rax_46 + 8)) * 2]; i != rsi_4; 
                                        i = &i[2])
                                    void* rbx_8 = *i
                                    int64_t i_2
                                    
                                    if (rbx_8 == 0)
                                        int64_t var_120_2 = 0
                                        i_2 = 0
                                    else
                                        i_2 = *(rbx_8 + 0x14)
                                    
                                    i_1 = i_2
                                    int32_t rcx_62
                                    rcx_62.b = sub_140b5b8a0(i_2.d, 0) == 0
                                    rcx_62.b |= (i_2 u>> 0x20).d != 0
                                    
                                    if (rcx_62.b != 0)
                                        sub_1407d1800(&var_c8, &var_d8, &i_1, nullptr)
                                
                                r15_1 = &r15_1[1]
                            while (r15_1 != r13_4)
                            
                            rdi_2 = var_110
                        
                        var_140:4.d = 1
                        int64_t var_b8
                        int64_t* var_138_2 = &var_b8
                        int32_t rcx_64 = 0
                        var_140.d = 0
                        var_130_1.d = 0xffffffff
                        int32_t r8_9 = 0
                        var_130_1 = 0
                        int64_t* var_a8
                        int32_t var_a0
                        
                        if (var_a0 != 0)
                            int64_t* r11_1 = &var_b8
                            
                            if (var_a8 != 0)
                                r11_1 = var_a8
                            
                            int32_t temp1_1
                            int32_t temp2_1
                            temp1_1:temp2_1 = sx.q(var_a0 - 1)
                            int32_t rdx_26 = *r11_1
                            
                            if (rdx_26 != 0)
                            label_140ba02ba:
                                int32_t rax_59 = neg.d(rdx_26) & rdx_26
                                uint64_t rflags_1
                                int32_t temp0_3
                                temp0_3, rflags_1 = _bit_scan_reverse(rax_59)
                                var_140:4.d = rax_59
                                int32_t rax_60
                                
                                if (rax_59 == 0)
                                    rax_60 = 0x20
                                else
                                    rax_60 = 0x1f - temp0_3
                                
                                int32_t rax_61 = r8_9 - rax_60 + 0x1f
                                
                                if (rax_61 s> var_a0)
                                    rax_61 = var_a0
                                
                                var_130_1:4.d = rax_61
                            else
                                while (true)
                                    int64_t rdx_27 = sx.q(rcx_64)
                                    r8_9 += 0x20
                                    rcx_64 += 1
                                    int32_t var_128_1 = r8_9
                                    var_140.d = rcx_64
                                    
                                    if (rdx_27.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                                        var_130_1:4.d = var_a0
                                        break
                                    
                                    rdx_26 = *(r11_1 + (rdx_27 << 2) + 4)
                                    var_130_1.d = 0xffffffff
                                    
                                    if (rdx_26 != 0)
                                        goto label_140ba02ba
                        
                        double zmm2_2[0x2] = var_130_1.o
                        uint128_t zmm0_2 = var_140.o
                        var_78 = &var_c8
                        var_60 = zmm2_2
                        uint128_t var_70_1 = zmm0_2
                        var_130_1.d = 0xffffffff << (var_a0.b & 0x1f)
                        zmm0_2 = var_78.o
                        var_130_1:4.d = var_a0
                        double temp0_4[0x2] = _mm_unpackhi_pd(zmm2_2, zmm2_2[0])
                        i_1.o = zmm0_2
                        int64_t var_68
                        var_f0 = var_68.o
                        int64_t var_e0_1 = temp0_4.q
                        
                        while (var_f0:0xc.d != (var_130_1 u>> 0x20).d || var_f0.q != &var_b8
                                || i_1 != &var_c8)
                            int32_t var_f4
                            var_f0:8.d &= not.d(var_f4)
                            sub_14059bdd0(&var_f8)
                        
                        if (rdi_2 != 0)
                            sub_140a74f90(rdi_2)
                        
                        int32_t var_80_2 = 0
                        
                        if (var_88_1 != 0)
                            sub_140a74f90(var_88_1)
                        
                        int64_t var_c0
                        var_c0.d = 0
                        int32_t var_98_2 = 0xffffffff
                        int32_t var_94_2 = 0
                        sub_14059a8e0(&var_b8, 0)
                        
                        if (var_a8 != 0)
                            sub_140a74f90(var_a8)
                        
                        int64_t rcx_74 = var_c8
                        
                        if (rcx_74 != 0)
                            sub_140a74f90(rcx_74)
                    
                    sub_140cb00c0()
                
                void* rcx_76 = var_150
                *(arg1 + 0xcb) = 1
                
                if (rcx_76 != 0)
                    sub_140a74f90(rcx_76)
                
                uint64_t rcx_77 = var_160
                
                if (rcx_77 != 0)
                    sub_140a74f90(rcx_77)
                
                result = 0
            else
                int64_t rbx_6 = *(arg1 + 0x14)
                var_118 = rbx_6
                sub_140d212c0()
                
                if (data_1439aace8 == data_1439aad14)
                label_140b9febe:
                    
                    if (rax_27 == 0)
                        goto label_140ba00b9
                else
                    int32_t rax_30 = sub_140b5ead0(rbx_6.d) + var_118:4.d
                    void* r8_3 = &data_1439aad18
                    void* rcx_30 = data_1439aad20
                    
                    if (rcx_30 != 0)
                        r8_3 = rcx_30
                    
                    int32_t rax_32 = *(r8_3 + (((sx.q(data_1439aad28) - 1) & sx.q(rax_30)) << 2))
                    
                    if (rax_32 == 0xffffffff)
                        goto label_140b9febe
                    
                    int64_t r8_4 = data_1439aace0
                    
                    while (true)
                        int64_t rdx_14 = sx.q(rax_32) * 3
                        
                        if (*(r8_4 + (rdx_14 << 3)) == rbx_6)
                            break
                        
                        rax_32 = *(r8_4 + (rdx_14 << 3) + 0x10)
                        
                        if (rax_32 == 0xffffffff)
                            goto label_140b9febe
                    
                    if (rax_32 == 0xffffffff)
                        goto label_140b9febe
                
                int64_t rax_33 = sub_140baa940()
                void* rbx_7 = var_150
                void* var_68_1 = nullptr
                
                if (data_143de5452 == 0)
                    void** const var_58_2 = &data_142d42d18
                    
                    if (var_148_1 != 0)
                        rsi_1 = rbx_7
                    
                    var_78 = sub_140594850
                    *(arg1 + 0x50) =
                        sub_140cb65f0(rax_33, rax_3, rsi_1, 0x81, zmm2_1, zmm3_1, &var_78)
                    
                    if (var_78 != 0)
                        void* rcx_45 = &var_60[1]
                        
                        if (var_68_1 != 0)
                            rcx_45 = var_68_1
                        
                        (*(*rcx_45 + 0x10))(rcx_45)
                else
                    i_1 = *(arg1 + 0x14)
                    int32_t rcx_34 = *(arg1 + 0x23c)
                    
                    if (var_148_1 != 0)
                        rsi_1 = rbx_7
                    
                    int64_t i_3 = i_1
                    var_138_1.d = rcx_34
                    var_f8 = rcx_34
                    uint128_t zmm0_1
                    zmm0_1.q = i_3
                    uint128_t var_50_1 = zmm0_1
                    int64_t rdx_15 = *(*(arg1 + 0x1d8) + 0x3a0)
                    void** const var_58_1 = &data_142e345d8
                    var_78 = sub_140b9bdc0
                    uint64_t var_40_1 = rdx_15
                    *(arg1 + 0x50) =
                        sub_140cb65f0(rax_33, rax_3, rsi_1, 0x81, zmm2_1, zmm3_1, &var_78)
                    
                    if (var_78 != 0)
                        void* rcx_37 = &var_60[1]
                        
                        if (var_68_1 != 0)
                            rcx_37 = var_68_1
                        
                        (*(*rcx_37 + 0x10))(rcx_37)
                    
                    if (*(arg1 + 0x50) != 0)
                        sub_140bb4ec0(*(*(arg1 + 0x1d8) + 0x3a0), arg1)
                        void* rax_37 = *(arg1 + 0x50)
                        
                        if (*(rax_37 + 0x295) != 0)
                            sub_140bbbc70(*(*(arg1 + 0x1d8) + 0x3a0), &i_1)
                        else if (*(rax_37 + 0x2d8) == 0)
                            sub_140bbbc70(*(*(arg1 + 0x1d8) + 0x3a0), &i_1)
                            *(arg1 + 0xcb) = 1
                
                if (rbx_7 != 0)
                    sub_140a74f90(rbx_7)
                
                uint64_t rcx_47 = var_160
                
                if (rcx_47 != 0)
                    sub_140a74f90(rcx_47)
                
                *(*(arg1 + 0x50) + 0x2e0) = arg1
                result = 2
        else
            if (data_143de5452 != 0)
                int64_t* rax_10 = sub_140b63b70(arg1 + 0x14, &var_150)
                int16_t* const r9_1
                
                if (rax_10[1].d == 0)
                    r9_1 = &data_142d40450
                else
                    r9_1 = *rax_10
                
                sub_140af98a0("Unknown", 0x1613, 
                    Package %s was reloaded before it even closed the linker from a previous load. Seems "
                "like a waste of time eh?", r9_1)
                void* rcx_8 = var_150
                
                if (rcx_8 != 0)
                    sub_140a74f90(rcx_8)
                
                sub_140afbb40()
                void* rcx_9 = *(arg1 + 0x1d8)
                i_1 = *(arg1 + 0x14)
                var_f8 = *(arg1 + 0x23c)
                sub_140bb4ec0(*(rcx_9 + 0x3a0), arg1)
                sub_140bbbc70(*(*(arg1 + 0x1d8) + 0x3a0), &i_1)
                rax_9 = *(arg1 + 0x50)
            
            if (rax_9 == 0)
                goto label_140b9fcc8
            
            *(*(arg1 + 0x50) + 0x2e0) = arg1
            result = 2

__security_check_cookie(rax_1 ^ &var_198)
return result
