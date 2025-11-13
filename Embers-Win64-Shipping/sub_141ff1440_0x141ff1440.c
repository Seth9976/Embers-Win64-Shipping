// 函数: sub_141ff1440
// 地址: 0x141ff1440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_278
int64_t rax_1 = __security_cookie ^ &var_278
wchar16* _String = arg3
arg3.b = 1
char rax_2
int64_t r8
rax_2, r8 = sub_140b0f6c0(&_String, u"exitembedded")
int64_t var_210
int16_t* var_118
int64_t var_108
int128_t var_98
int16_t* rcx_12

if (rax_2 != 0)
    int32_t var_dc_1 = 0x80
    var_118 = nullptr
    int32_t var_110_1 = 0
    __builtin_memset(&var_108, 0, 0x2c)
    int32_t var_d8_1 = 0xffffffff
    int32_t var_d4_1 = 0
    int64_t var_c8_1 = 0
    int32_t var_c0_1 = 0
    int64_t var_b8_1 = 0
    int128_t* var_a8_1 = nullptr
    sub_1405947f0(&var_118, 0xd)
    int32_t rax_3 = var_110_1 + 0xd
    var_110_1 = rax_3
    
    if (rax_3 s> 0)
        sub_140594770(&var_118)
    
    __builtin_wcscpy(var_118, u"exitembedded")
    int64_t* rax_5 = sub_140b19930(*sub_140b58260(&var_210, u"native", 1))
    
    for (int64_t* i = *rax_5; i != &i[sx.q(rax_5[1].d) * 2]; i = &i[2])
        if (i[1].d != 0 && *i != 0)
            sub_140920c10(sub_140b19930(*sub_140b58260(&var_210, u"native", 1)), &var_118)
            break
    
    if (var_b8_1 != 0)
        int128_t* rcx_9 = &var_98
        
        if (var_a8_1 != 0)
            rcx_9 = var_a8_1
        
        (*(*rcx_9 + 0x10))(rcx_9)
    
    int32_t var_c0_2 = 0
    
    if (var_c8_1 != 0)
        sub_140a74f90(var_c8_1)
    
    sub_140681eb0(&var_108)
    rcx_12 = var_118
    goto label_141ff15e9

r8.b = 1
char result
int64_t r8_1
result, r8_1 = sub_140b0f6c0(&_String, u"DumpEmbedded")

if (result != 0)
    result = 1
else
    r8_1.b = 1
    
    if (sub_140b0f6c0(&_String, u"webcall") == 0)
        result = 0
    else
        int16_t* var_168
        sub_140a2e390(&var_168, u"Calls[%d]", zx.q(_wtoi(_String)))
        void* rcx_19 = data_143ddb400
        int64_t* var_258_1 = &data_143de5780
        int16_t* const r12_1 = &data_142d40450
        int16_t* const r8_3 = &data_142d40450
        uint64_t var_1d8 = 0
        int32_t var_160
        
        if (var_160 != 0)
            r8_3 = var_168
        
        int64_t var_1d0_1 = 0
        
        if (sub_140af5b90(rcx_19, u"WebCalls", r8_3, &var_1d8, var_258_1) != 0)
            var_258_1.d = 1
            int64_t var_238
            void var_128
            sub_141ffe060(&var_128, 
                sub_140a300d0(&var_1d8, &var_238, &data_142e51e18, &data_142d4056c, var_258_1.d))
            int64_t rcx_22 = var_238
            
            if (rcx_22 != 0)
                sub_140a74f90(rcx_22)
            
            int128_t var_178 = zx.o(0)
            
            if (sub_1409173d0(&var_128, &var_178, 0) != 0)
                __builtin_memset(&var_118, 0, 0x3c)
                int32_t var_dc_2 = 0x80
                int32_t var_d8_2 = 0xffffffff
                int32_t var_d4_2 = 0
                int64_t var_c8_2 = 0
                int32_t var_c0_3 = 0
                int64_t var_b8_2 = 0
                int128_t* var_a8_2 = nullptr
                int16_t* var_1f8 = nullptr
                int32_t var_1f0_1 = 0
                int64_t* var_248 = nullptr
                int32_t var_240_1 = 0
                sub_1405947f0(&var_248, 0xa)
                int32_t rax_12 = var_240_1 + 0xa
                var_240_1 = rax_12
                
                if (rax_12 s> 0)
                    sub_140594770(&var_248)
                
                UnDecorator::getReferenceType(var_248, u"Subsystem", 0x14)
                int64_t* rbx_1 = var_178.q
                sub_140b76580(rbx_1, &var_248, &var_1f8)
                int64_t* rcx_28 = var_248
                
                if (rcx_28 != 0)
                    sub_140a74f90(rcx_28)
                
                var_248 = nullptr
                int32_t var_240_2 = 0
                sub_1405947f0(&var_248, 8)
                int32_t rax_13 = var_240_2 + 8
                var_240_2 = rax_13
                
                if (rax_13 s> 0)
                    sub_140594770(&var_248)
                
                UnDecorator::getReferenceType(var_248, u"Command", 0x10)
                sub_140b76580(rbx_1, &var_248, &var_118)
                int64_t* rcx_33 = var_248
                
                if (rcx_33 != 0)
                    sub_140a74f90(rcx_33)
                
                int64_t* var_1e8 = nullptr
                var_248 = nullptr
                int32_t var_240_3 = 0
                sub_1405947f0(&var_248, 5)
                int32_t rax_14 = var_240_3 + 5
                var_240_3 = rax_14
                
                if (rax_14 s> 0)
                    sub_140594770(&var_248)
                
                UnDecorator::getReferenceType(var_248, u"Args", 0xa)
                char rax_15 = sub_140b76380(rbx_1, &var_248, &var_1e8)
                int64_t* rcx_38 = var_248
                
                if (rcx_38 != 0)
                    sub_140a74f90(rcx_38)
                
                int64_t var_58
                double zmm2_1[0x2]
                
                if (rax_15 != 0)
                    int32_t rcx_39 = 0
                    int32_t r8_7 = 0
                    void* r13_1 = *var_1e8
                    int32_t r11_1 = *(r13_1 + 0x28)
                    var_238.d = 0
                    var_238:4.d = 1
                    int32_t var_228_1 = 0xffffffff
                    int64_t var_224_1 = 0
                    
                    if (r11_1 != 0)
                        int64_t* rax_17 = *(r13_1 + 0x20)
                        int64_t* r9_2 = r13_1 + 0x10
                        
                        if (rax_17 != 0)
                            r9_2 = rax_17
                        
                        int32_t temp4_1
                        int32_t temp5_1
                        temp4_1:temp5_1 = sx.q(r11_1 - 1)
                        int32_t rdx_16 = *r9_2
                        
                        if (rdx_16 != 0)
                        label_141ff197c:
                            int32_t rax_24 = ((rdx_16 - 1) & rdx_16) ^ rdx_16
                            uint64_t rflags_1
                            int32_t temp0_1
                            temp0_1, rflags_1 = _bit_scan_reverse(rax_24)
                            var_238:4.d = rax_24
                            int32_t rax_25
                            
                            if (rax_24 == 0)
                                rax_25 = 0x20
                            else
                                rax_25 = 0x1f - temp0_1
                            
                            var_224_1.d = r8_7 - rax_25 + 0x1f
                            
                            if (r8_7 - rax_25 + 0x1f s> r11_1)
                                var_224_1.d = r11_1
                        else
                            while (true)
                                int64_t rdx_17 = sx.q(rcx_39)
                                r8_7 += 0x20
                                rcx_39 += 1
                                var_224_1:4.d = r8_7
                                var_238.d = rcx_39
                                
                                if (rdx_17.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                                    break
                                
                                rdx_16 = *(r9_2 + (rdx_17 << 2) + 4)
                                var_228_1 = 0xffffffff
                                
                                if (rdx_16 != 0)
                                    goto label_141ff197c
                            
                            var_224_1.d = r11_1
                    
                    int32_t rdx_18 = *(r13_1 + 0x28)
                    zmm2_1 = var_228_1.o
                    void* var_1a8 = r13_1
                    var_224_1.d = rdx_18
                    double var_190_1 = zmm2_1[0]
                    int128_t var_1a0_1 = var_238.o
                    int32_t r14_1 = 0xffffffff << (rdx_18 & 0x1f).b
                    int128_t zmm0_2 = var_1a8.o
                    int32_t r8_10 = rdx_18 s>> 5
                    int32_t r9_4 = rdx_18 & 0xffffffe0
                    var_58 = (_mm_unpackhi_pd(zmm2_1, zmm2_1[0])).q
                    int32_t var_228_2 = r14_1
                    int64_t* var_78
                    var_78.o = zmm0_2
                    int64_t var_68
                    var_68.o = var_1a0_1
                    
                    if (rdx_18 != r11_1)
                        int64_t* rax_29 = *(r13_1 + 0x20)
                        int64_t* r10_1 = r13_1 + 0x10
                        
                        if (rax_29 != 0)
                            r10_1 = rax_29
                        
                        int32_t temp6_1
                        int32_t temp7_1
                        temp6_1:temp7_1 = sx.q(r11_1 - 1)
                        int32_t rdx_22 = *(r10_1 + (sx.q(r8_10) << 2)) & r14_1
                        
                        if (rdx_22 != 0)
                        label_141ff1a68:
                            int32_t rax_35 = ((rdx_22 - 1) & rdx_22) ^ rdx_22
                            uint64_t rflags_2
                            int32_t temp0_3
                            temp0_3, rflags_2 = _bit_scan_reverse(rax_35)
                            int32_t rbx_3
                            
                            if (rax_35 == 0)
                                rbx_3 = 0x20
                            else
                                rbx_3 = 0x1f - temp0_3
                            
                            var_224_1.d = r9_4 - rbx_3 + 0x1f
                            
                            if (r9_4 - rbx_3 + 0x1f s> r11_1)
                                var_224_1.d = r11_1
                        else
                            while (true)
                                int64_t rcx_43 = sx.q(r8_10)
                                r9_4 += 0x20
                                r8_10 += 1
                                
                                if (rcx_43.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                                    break
                                
                                rdx_22 = *(r10_1 + (rcx_43 << 2) + 4)
                                var_228_2 = 0xffffffff
                                
                                if (rdx_22 != 0)
                                    goto label_141ff1a68
                            
                            var_224_1.d = r11_1
                    
                    while (true)
                        int32_t var_5c
                        int64_t rcx_45 = sx.q(var_5c)
                        int32_t rax_28
                        
                        if (rcx_45.d != (var_228_2.q u>> 0x20).d || var_68 != r13_1 + 0x10)
                            rax_28.b = 0
                        else
                            rax_28.b = 1
                        
                        if (rax_28.b == 0 || var_78 != r13_1)
                            rax_28.b = 1
                        else
                            rax_28.b = 0
                        
                        if (rax_28.b == 0)
                            break
                        
                        int64_t* rbx_4 = *var_78 + rcx_45 * 0x28
                        sub_140596d10(&var_1a8, rbx_4)
                        double rax_36 = rbx_4[3]
                        int64_t* rsi_2 = rbx_4[2]
                        var_1a0_1:8.q = rsi_2
                        
                        if (rax_36 != 0)
                            *(rax_36 i+ 8) += 1
                        
                        int64_t var_208 = 0
                        int64_t var_200_1 = 0
                        
                        if ((*(*rsi_2 + 0x58))(rsi_2, &var_208) == 0)
                            int64_t* var_1e0 = nullptr
                            int64_t* rbx_6
                            
                            if ((*(*rsi_2 + 0x68))(rsi_2, &var_1e0) != 0)
                                void*** var_158
                                sub_14093d6b0(&var_158, &var_208, 0)
                                void*** rax_41 = sub_141ff2300(var_1e0)
                                void* var_1c8 = &rax_41[2]
                                sub_140667df0(&var_1c8, var_158, 1)
                                
                                if (rax_41 != 0)
                                    rax_41[1].d -= 1
                                    
                                    if (rax_41[1].d == 1)
                                        (**rax_41)(rax_41)
                                        int32_t temp9_1 = *(rax_41 + 0xc)
                                        *(rax_41 + 0xc) -= 1
                                        
                                        if (temp9_1 == 1)
                                            (*rax_41)[1](rax_41, 1)
                                
                                int64_t* var_150
                                rbx_6 = var_150
                                goto label_141ff1c76
                            
                            var_248 = nullptr
                            
                            if ((*(*rsi_2 + 0x70))(rsi_2, &var_248) != 0)
                                void*** var_138
                                sub_14093d6b0(&var_138, &var_208, 0)
                                int64_t* rcx_57 = var_248
                                int64_t* rbx_7 = rcx_57[1]
                                int64_t var_148 = *rcx_57
                                int64_t* var_140_1 = rbx_7
                                
                                if (rbx_7 != 0)
                                    rbx_7[1].d += 1
                                
                                void*** rax_47 = sub_140666b20(&var_148)
                                void* var_1b8 = &rax_47[2]
                                sub_140667df0(&var_1b8, var_138, 1)
                                
                                if (rax_47 != 0)
                                    rax_47[1].d -= 1
                                    
                                    if (rax_47[1].d == 1)
                                        (**rax_47)(rax_47)
                                        int32_t temp14_1 = *(rax_47 + 0xc)
                                        *(rax_47 + 0xc) -= 1
                                        
                                        if (temp14_1 == 1)
                                            (*rax_47)[1](rax_47, 1)
                                
                                if (rbx_7 != 0)
                                    rbx_7[1].d -= 1
                                    
                                    if (rbx_7[1].d == 1)
                                        (**rbx_7)(rbx_7)
                                        int32_t temp17_1 = *(rbx_7 + 0xc)
                                        *(rbx_7 + 0xc) -= 1
                                        
                                        if (temp17_1 == 1)
                                            (*(*rbx_7 + 8))(rbx_7, 1)
                                
                                int64_t* var_130
                                rbx_6 = var_130
                            label_141ff1c76:
                                
                                if (rbx_6 != 0)
                                    rbx_6[1].d -= 1
                                    
                                    if (rbx_6[1].d == 1)
                                        (**rbx_6)(rbx_6)
                                        int32_t temp15_1 = *(rbx_6 + 0xc)
                                        *(rbx_6 + 0xc) -= 1
                                        
                                        if (temp15_1 == 1)
                                            (*(*rbx_6 + 8))(rbx_6, 1)
                        
                        sub_1405d1820(&var_108, &var_238)
                        sub_140596d10(r13_1 + 0x10, &var_1a8)
                        sub_140596d10(r13_1 + 0x20, &var_208)
                        *(r13_1 + 0x30) = 0xffffffff
                        int32_t rax_54 = *(r13_1 + 0x18)
                        int16_t* rdx_38
                        
                        if (rax_54 == 0)
                            rdx_38 = &data_142d40450
                        else
                            rdx_38 = *(r13_1 + 0x10)
                        
                        int32_t rcx_69 = rax_54 - 1
                        
                        if (rax_54 == 0)
                            rcx_69 = 0
                        
                        int32_t rax_55 = sub_1405969c0(rcx_69, rdx_38)
                        var_258_1.d = var_238.d
                        void var_180
                        sub_1405d2a60(&var_108, &var_180, rax_55, r13_1 + 0x10, var_258_1.d, 
                            nullptr)
                        int64_t rcx_72 = var_208
                        
                        if (rcx_72 != 0)
                            sub_140a74f90(rcx_72)
                        
                        if (rax_36 != 0)
                            int32_t temp12_1 = *(rax_36 i+ 8)
                            *(rax_36 i+ 8) -= 1
                            
                            if (temp12_1 == 1)
                                (**rax_36)(rax_36)
                                int32_t temp16_1 = *(rax_36 i+ 0xc)
                                *(rax_36 i+ 0xc) -= 1
                                
                                if (temp16_1 == 1)
                                    (*(*rax_36 + 8))(rax_36, 1)
                        
                        void* rcx_75 = var_1a8
                        
                        if (rcx_75 != 0)
                            sub_140a74f90(rcx_75)
                        
                        int32_t var_6c
                        int32_t var_60 = var_60 & not.d(var_6c)
                        void var_70
                        sub_14059bdd0(&var_70)
                
                int128_t zmm5_1 = var_b8_2.o
                zmm2_1 = var_a8_2.o
                var_58 = &data_1432977b8
                int128_t zmm3_1 = var_98
                int64_t (* var_78_1)(int64_t arg1, int64_t arg2, int64_t* arg3)
                var_78_1.o = zmm5_1
                var_b8_2.o = sub_141ffd1a0.o
                var_a8_2.o = nullptr.o
                var_98 = var_58.o
                int128_t var_48
                int128_t var_88_1 = var_48
                int64_t* var_68_1
                var_68_1.o = zmm2_1
                var_58.o = zmm3_1
                int128_t var_88
                int128_t var_48_1 = var_88
                
                if (zmm5_1.q != 0)
                    int64_t* rcx_77 = &var_58
                    
                    if (var_68_1 != 0)
                        rcx_77 = var_68_1
                    
                    (*(*rcx_77 + 0x10))(rcx_77)
                
                if (var_1f0_1 != 0)
                    r12_1 = var_1f8
                
                sub_140b58260(&var_210, r12_1, 1)
                int64_t* rax_63 = sub_140b1a400(var_210)
                
                for (int64_t* i_1 = *rax_63; i_1 != &i_1[sx.q(rax_63[1].d) * 2]; i_1 = &i_1[2])
                    if (i_1[1].d != 0 && *i_1 != 0)
                        sub_140920c10(sub_140b1a400(var_210), &var_118)
                        break
                
                int16_t* rcx_82 = var_1f8
                
                if (rcx_82 != 0)
                    sub_140a74f90(rcx_82)
                
                if (var_b8_2 != 0)
                    int128_t* rcx_83 = &var_98
                    
                    if (var_a8_2 != 0)
                        rcx_83 = var_a8_2
                    
                    (*(*rcx_83 + 0x10))(rcx_83)
                
                int32_t var_c0_4 = 0
                
                if (var_c8_2 != 0)
                    sub_140a74f90(var_c8_2)
                
                sub_140681eb0(&var_108)
                int16_t* rcx_86 = var_118
                
                if (rcx_86 != 0)
                    sub_140a74f90(rcx_86)
            
            int64_t* rbx_10 = var_178:8.q
            
            if (rbx_10 != 0)
                rbx_10[1].d -= 1
                
                if (rbx_10[1].d == 1)
                    (**rbx_10)(rbx_10)
                    int32_t temp2_1 = *(rbx_10 + 0xc)
                    *(rbx_10 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*(*rbx_10 + 8))(rbx_10, 1)
            
            int64_t* var_120
            
            if (var_120 != 0)
                var_120[1].d -= 1
                
                if (var_120[1].d == 1)
                    (**var_120)(var_120)
                    int32_t temp3_1 = *(var_120 + 0xc)
                    *(var_120 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*var_120 + 8))(var_120, 1)
        
        uint64_t rcx_91 = var_1d8
        
        if (rcx_91 != 0)
            sub_140a74f90(rcx_91)
        
        rcx_12 = var_168
    label_141ff15e9:
        
        if (rcx_12 == 0)
            result = 1
        else
            sub_140a74f90(rcx_12)
            result = 1

__security_check_cookie(rax_1 ^ &var_278)
return result
