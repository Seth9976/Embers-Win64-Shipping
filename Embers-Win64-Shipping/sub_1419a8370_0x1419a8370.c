// 函数: sub_1419a8370
// 地址: 0x1419a8370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_358
int64_t rax_1 = __security_cookie ^ &var_358
void* rbx = arg3
int64_t* rsi = arg1
void* var_2e8 = rbx
void var_158
sub_1419927c0(&var_158, *arg1, arg2)
uint128_t zmm0 = *(arg2 + 0x20)
int32_t r13 = 0
int64_t var_70 = rsi[0x4e]
int32_t r14 = 0
int64_t var_2e0 = zmm0.q
int64_t rdi_1 = var_2e0
void* r11 = _mm_bsrli_si128(zmm0, 8).q
void* var_2b8 = r11
int32_t r12 = *(r11 + 0x10)
int64_t var_1a8
__builtin_memset(&var_1a8, 0, 0x2c)
int32_t var_17c = 0x80
int32_t var_178 = 0xffffffff
int32_t var_174 = 0
int64_t var_168 = 0
int32_t var_160 = 0
int64_t var_1f8
__builtin_memset(&var_1f8, 0, 0x2c)
int32_t var_1cc = 0x80
int32_t var_1c8 = 0xffffffff
int32_t var_1c4 = 0
int64_t var_1b8 = 0
int32_t var_1b0 = 0
int32_t var_338
char* var_330
void** var_328
int32_t var_308
int32_t var_304
int32_t var_300
void var_2c4
void var_2c0
void var_2bc
int32_t var_2b0
int32_t var_2a0
int32_t var_290
int32_t var_280
int32_t var_270

if (r12 != 0)
    do
        void* r9_1 = *(r11 + 8)
        int64_t rdx_2 = r9_1 s>> 1
        char r8_1 = *(r11 + 8) & 1
        void* r10_2
        
        if (r8_1 == 0)
            r10_2 = r9_1
        else
            r10_2 = rdx_2 + 8 + r11
        
        int64_t rcx_1 = sx.q(r14) << 2
        void* rax_5 = r11 + 8 + rdx_2
        uint32_t rdx_3 = zx.d(*(r10_2 + rcx_1 + 2))
        
        if (r8_1 == 0)
            rax_5 = r9_1
        
        int64_t* rbx_2 = zx.q(*(rax_5 + rcx_1)) + rdi_1
        
        if (rdx_3 == 9)
            int64_t rbx_8 = *rbx_2
            
            if (rbx_8 != 0)
                sub_141996950(&var_1a8, &var_2b0)
                var_330 = nullptr
                uint32_t rcx_54 = (rbx_8 u>> 4).d
                int32_t rdx_67 = (0x9e3779b9 - rcx_54) ^ rcx_54 << 8
                int64_t* var_2a8
                *var_2a8 = rbx_8
                var_2a8[1].d = 0xffffffff
                int32_t r8_52 = neg.d(rdx_67 + rcx_54) ^ rdx_67 u>> 0xd
                int32_t rcx_57 = (rcx_54 - rdx_67 - r8_52) ^ r8_52 u>> 0xc
                int32_t rdx_70 = (rdx_67 - rcx_57 - r8_52) ^ rcx_57 << 0x10
                int32_t r8_55 = (r8_52 - rdx_70 - rcx_57) ^ rdx_70 u>> 5
                int32_t rcx_60 = (rcx_57 - rdx_70 - r8_55) ^ r8_55 u>> 3
                int32_t rdx_73 = (rdx_70 - rcx_60 - r8_55) ^ rcx_60 << 0xa
                var_338 = var_2b0
                sub_14199dd40(&var_1a8, &var_2bc, (r8_55 - rdx_73 - rcx_60) ^ rdx_73 u>> 0xf, 
                    var_2a8, var_338, var_330)
        else if (rdx_3 == 0xa)
            void* rbx_6 = *rbx_2
            
            if (rbx_6 != 0)
                int64_t rbx_7 = *(rbx_6 + 0x28)
                sub_141996950(&var_1a8, &var_2a0)
                var_330 = nullptr
                uint32_t rcx_44 = (rbx_7 u>> 4).d
                int32_t rdx_56 = (0x9e3779b9 - rcx_44) ^ rcx_44 << 8
                int64_t* var_298
                *var_298 = rbx_7
                var_298[1].d = 0xffffffff
                int32_t r8_43 = neg.d(rdx_56 + rcx_44) ^ rdx_56 u>> 0xd
                int32_t rcx_47 = (rcx_44 - rdx_56 - r8_43) ^ r8_43 u>> 0xc
                int32_t rdx_59 = (rdx_56 - rcx_47 - r8_43) ^ rcx_47 << 0x10
                int32_t r8_46 = (r8_43 - rdx_59 - rcx_47) ^ rdx_59 u>> 5
                int32_t rcx_50 = (rcx_47 - rdx_59 - r8_46) ^ r8_46 u>> 3
                int32_t rdx_62 = (rdx_59 - rcx_50 - r8_46) ^ rcx_50 << 0xa
                var_338 = var_2a0
                sub_14199dd40(&var_1a8, &var_2c0, (r8_46 - rdx_62 - rcx_50) ^ rdx_62 u>> 0xf, 
                    var_298, var_338, var_330)
        else if (rdx_3 == 0xb)
            void* rbx_4 = *rbx_2
            
            if (rbx_4 != 0)
                int64_t rbx_5 = *(rbx_4 + 0x18)
                sub_141996950(&var_1f8, &var_290)
                var_330 = nullptr
                uint32_t rcx_34 = (rbx_5 u>> 4).d
                int32_t rdx_45 = (0x9e3779b9 - rcx_34) ^ rcx_34 << 8
                int64_t* var_288
                *var_288 = rbx_5
                var_288[1].d = 0xffffffff
                int32_t r8_34 = neg.d(rdx_45 + rcx_34) ^ rdx_45 u>> 0xd
                int32_t rcx_37 = (rcx_34 - rdx_45 - r8_34) ^ r8_34 u>> 0xc
                int32_t rdx_48 = (rdx_45 - rcx_37 - r8_34) ^ rcx_37 << 0x10
                int32_t r8_37 = (r8_34 - rdx_48 - rcx_37) ^ rdx_48 u>> 5
                int32_t rcx_40 = (rcx_37 - rdx_48 - r8_37) ^ r8_37 u>> 3
                int32_t rdx_51 = (rdx_48 - rcx_40 - r8_37) ^ rcx_40 << 0xa
                var_338 = var_290
                sub_14199dd40(&var_1f8, &var_2c4, (r8_37 - rdx_51 - rcx_40) ^ rdx_51 u>> 0xf, 
                    var_288, var_338, var_330)
        else if (rdx_3 == 0xc)
            int64_t rbx_3 = *rbx_2
            
            if (rbx_3 != 0)
                sub_141996950(&var_1f8, &var_280)
                var_330 = nullptr
                uint32_t rcx_24 = (rbx_3 u>> 4).d
                int32_t rdx_34 = (0x9e3779b9 - rcx_24) ^ rcx_24 << 8
                int64_t* var_278
                *var_278 = rbx_3
                var_278[1].d = 0xffffffff
                int32_t r8_25 = neg.d(rdx_34 + rcx_24) ^ rdx_34 u>> 0xd
                int32_t rcx_27 = (rcx_24 - rdx_34 - r8_25) ^ r8_25 u>> 0xc
                int32_t rdx_37 = (rdx_34 - rcx_27 - r8_25) ^ rcx_27 << 0x10
                int32_t r8_28 = (r8_25 - rdx_37 - rcx_27) ^ rdx_37 u>> 5
                int32_t rcx_30 = (rcx_27 - rdx_37 - r8_28) ^ r8_28 u>> 3
                int32_t rdx_40 = (rdx_37 - rcx_30 - r8_28) ^ rcx_30 << 0xa
                var_338 = var_280
                sub_14199dd40(&var_1f8, &var_308, (r8_28 - rdx_40 - rcx_30) ^ rdx_40 u>> 0xf, 
                    var_278, var_338, var_330)
        else if (rdx_3 == 0x14)
            int32_t i = 0
            int64_t* rsi_1 = rbx_2
            
            do
                int64_t rdi_2 = *rsi_1
                
                if (rdi_2 == 0)
                    break
                
                sub_141996950(&var_1f8, &var_328)
                var_330 = nullptr
                uint32_t rdx_10 = (rdi_2 u>> 4).d
                int32_t r8_4 = rdx_10 << 8 ^ (0x9e3779b9 - rdx_10)
                int64_t* var_320
                *var_320 = rdi_2
                var_320[1].d = 0xffffffff
                int32_t rcx_5 = neg.d(rdx_10 + r8_4) ^ r8_4 u>> 0xd
                int32_t rdx_13 = (rdx_10 - r8_4 - rcx_5) ^ rcx_5 u>> 0xc
                int32_t r8_7 = (r8_4 - rdx_13 - rcx_5) ^ rdx_13 << 0x10
                int32_t rcx_8 = (rcx_5 - r8_7 - rdx_13) ^ r8_7 u>> 5
                int32_t rdx_16 = (rdx_13 - r8_7 - rcx_8) ^ rcx_8 u>> 3
                int32_t r8_10 = (r8_7 - rdx_16 - rcx_8) ^ rdx_16 << 0xa
                var_338 = var_328.d
                sub_14199dd40(&var_1f8, &var_300, r8_10 u>> 0xf ^ (rcx_8 - (r8_10 + rdx_16)), 
                    var_320, var_338, var_330)
                i += 1
                rsi_1 = &rsi_1[2]
            while (i u< 8)
            
            int64_t rdi_3 = rbx_2[0x10]
            
            if (rdi_3 != 0)
                char rax_21 = (*(rbx_2 + 0x8c)).b
                
                if ((rax_21 & 0xf) == 2 || (rax_21 & 0xf0) == 0x20)
                    rax_21 = 1
                else
                    rax_21 = 0
                
                if (rax_21 != 0)
                    sub_141996950(&var_1f8, &var_270)
                    var_330 = nullptr
                    uint32_t rcx_14 = (rdi_3 u>> 4).d
                    int32_t rdx_21 = rcx_14 << 8 ^ (0x9e3779b9 - rcx_14)
                    int64_t* var_268
                    *var_268 = rdi_3
                    var_268[1].d = 0xffffffff
                    int32_t r8_15 = neg.d(rdx_21 + rcx_14) ^ rdx_21 u>> 0xd
                    int32_t rcx_17 = (rcx_14 - rdx_21 - r8_15) ^ r8_15 u>> 0xc
                    int32_t rdx_24 = (rdx_21 - rcx_17 - r8_15) ^ rcx_17 << 0x10
                    int32_t r8_18 = (r8_15 - rdx_24 - rcx_17) ^ rdx_24 u>> 5
                    int32_t rcx_20 = (rcx_17 - rdx_24 - r8_18) ^ r8_18 u>> 3
                    int32_t rdx_27 = (rdx_24 - rcx_20 - r8_18) ^ rcx_20 << 0xa
                    var_338 = var_270
                    sub_14199dd40(&var_1f8, &var_304, (r8_18 - rdx_27 - rcx_20) ^ rdx_27 u>> 0xf, 
                        var_268, var_338, var_330)
            
            rdi_1 = var_2e0
        
        r11 = var_2b8
        r14 += 1
    while (r14 u< r12)
    
    rsi = arg1
    rbx = var_2e8

var_308 = 0

if (r12 != 0)
    do
        void* r9_15 = *(r11 + 8)
        int64_t rdx_31 = r9_15 s>> 1
        char r8_22 = *(r11 + 8) & 1
        void* r10_4
        
        if (r8_22 == 0)
            r10_4 = r9_15
        else
            r10_4 = rdx_31 + 8 + r11
        
        int64_t rcx_62 = sx.q(r13) << 2
        void* rax_98 = r11 + 8 + rdx_31
        
        if (r8_22 == 0)
            rax_98 = r9_15
        
        void** r12_2 = zx.q(*(rax_98 + rcx_62)) + rdi_1
        int32_t rax_100 = zx.d(*(rcx_62 + r10_4 + 2)) - 9
        var_328 = r12_2
        
        switch (rax_100)
            case 0
                void* rdx_76 = *r12_2
                
                if (rdx_76 != 0)
                    sub_1419a97f0(&var_158, rdx_76, 0)
            case 1
                void* rdx_77 = *r12_2
                
                if (rdx_77 != 0)
                    void* rbx_9 = *(rdx_77 + 0x28)
                    sub_1419976c0(rsi, rdx_77)
                    
                    if (*sub_1408296b0(&var_1f8, &var_2bc, rbx_9) == 0xffffffff)
                        sub_1419a97f0(&var_158, rbx_9, 0)
            case 2
                void* rbx_10 = *r12_2
                
                if (rbx_10 != 0)
                    int64_t rdi_4 = *(rbx_10 + 0x10)
                    void* r14_1 = *(rbx_10 + 0x18)
                    
                    if (rdi_4 == 0)
                        sub_1419975b0(rsi, r14_1)
                        void* rdx_81 = *(*(rbx_10 + 0x18) + 0x80)
                        
                        if (*(rbx_10 + 0x21) != 1)
                            void* rax_105 = *(rdx_81 + 0x28)
                            void* rcx_73 = rdx_81 + 0x20
                            
                            if (rax_105 != 0)
                                rcx_73 = rax_105
                            
                            rdi_4 = *(rcx_73 + (zx.q(*(rbx_10 + 0x20)) << 3))
                        else
                            rdi_4 = *(rdx_81 + 0x70)
                            
                            if (rdi_4 == 0)
                                int64_t* rcx_70 = data_143f0f180
                                (*(*rcx_70 + 0x350))(rcx_70, &var_2b0, *(rdx_81 + 8))
                                sub_1405d1600(rdx_81 + 0x70, &var_2b0)
                                sub_1405d1550(&var_2b0)
                                rdi_4 = *(rdx_81 + 0x70)
                        
                        *(rbx_10 + 0x10) = rdi_4
                    
                    var_330.b = 2
                    int32_t* rax_107
                    rax_107.b = *sub_1408296b0(&var_1a8, &var_2c0, r14_1) != 0xffffffff
                    var_338.b = rax_107.b
                    sub_1419a9b20(&var_158, rdi_4, r14_1, 1, var_338.b, var_330.b)
                    rdi_1 = var_2e0
            case 3
                void* rbx_11 = *r12_2
                
                if (rbx_11 != 0)
                    sub_1419975b0(rsi, rbx_11)
                    sub_1419a97f0(&var_158, rbx_11, 1)
            case 4
                void* rdi_5 = *r12_2
                
                if (rdi_5 != 0)
                    void* rbx_12 = *(rdi_5 + 0x40)
                    int32_t rcx_78 = 0
                    int32_t r11_1 = *(rbx_12 + 0x40)
                    void* r9_9 = rbx_12 + 0x28
                    int32_t r8_64 = 0
                    var_328.d = 0
                    var_328:4.d = 1
                    int32_t var_318_1 = 0xffffffff
                    int64_t var_314_1 = 0
                    
                    if (r11_1 != 0)
                        void* rax_108 = *(r9_9 + 0x10)
                        
                        if (rax_108 != 0)
                            r9_9 = rax_108
                        
                        int32_t temp4_1
                        int32_t temp5_1
                        temp4_1:temp5_1 = sx.q(r11_1 - 1)
                        int32_t rdx_90 = *r9_9
                        
                        if (rdx_90 != 0)
                        label_1419a8c56:
                            int32_t rax_115 = neg.d(rdx_90) & rdx_90
                            uint64_t rflags_1
                            int32_t temp0_2
                            temp0_2, rflags_1 = _bit_scan_reverse(rax_115)
                            var_328:4.d = rax_115
                            int32_t rax_116
                            
                            if (rax_115 == 0)
                                rax_116 = 0x20
                            else
                                rax_116 = 0x1f - temp0_2
                            
                            var_314_1.d = r8_64 - rax_116 + 0x1f
                            
                            if (r8_64 - rax_116 + 0x1f s> r11_1)
                                var_314_1.d = r11_1
                        else
                            while (true)
                                int64_t rdx_91 = sx.q(rcx_78)
                                r8_64 += 0x20
                                rcx_78 += 1
                                var_328.d = rcx_78
                                
                                if (rdx_91.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                                    break
                                
                                rdx_90 = *(r9_9 + (rdx_91 << 2) + 4)
                                var_318_1 = 0xffffffff
                                
                                if (rdx_90 != 0)
                                    goto label_1419a8c56
                            
                            var_314_1.d = r11_1
                    
                    var_330.b = 2
                    var_338.b = 0
                    sub_1419a9b20(&var_158, 
                        *((sx.q((var_318_1.q u>> 0x20).d) << 5) + *(rbx_12 + 0x18) + 0x10), rdi_5, 
                        0, var_338.b, var_330.b)
                
                rdi_1 = var_2e0
            case 5
                void* rbx_13 = *r12_2
                
                if (rbx_13 != 0)
                    void* r14_2 = *(rbx_13 + 0x18)
                    
                    if (*(rbx_13 + 0x10) == 0)
                        void* rsi_3 = *(r14_2 + 0x40)
                        
                        if (*sub_1419a1c60(rsi_3 + 0x68, &var_2c4, rbx_13 + 0x18) == 0xffffffff)
                            int64_t var_2f8 = 0
                            int32_t rax_127 = *(r14_2 + 0x3c)
                            
                            if (rax_127 == 0)
                                int64_t* rcx_85 = data_143f0f180
                                var_330.b = *(rbx_13 + 0x24)
                                var_338 = *(rbx_13 + 0x20)
                                (*(*rcx_85 + 0x4b8))(rcx_85, &var_2a0, &data_143f02b98, 
                                    **(r14_2 + 0x40), var_338, var_330)
                                sub_1405d1600(&var_2f8, &var_2a0)
                                sub_1405ec8a0(&var_2a0)
                            else if (rax_127 == 2)
                                int64_t* rcx_88 = data_143f0f180
                                (*(*rcx_88 + 0x5b0))(rcx_88, &var_290, &data_143f02b98, 
                                    *(*(r14_2 + 0x40) + 0x10), var_338, var_330)
                                sub_1405d1600(&var_2f8, &var_290)
                                sub_1405ec8a0(&var_290)
                            
                            *(rbx_13 + 0x10) = var_2f8
                            int64_t* rcx_91 = *(r14_2 + 0x40) + 0x68
                            void** var_248 = rbx_13 + 0x18
                            int64_t* var_240_1 = &var_2f8
                            void var_260
                            sub_1419901f0(rcx_91, &var_260, &var_248, nullptr)
                            sub_1405ec8a0(&var_2f8)
                        else
                            sub_1419a1c60(rsi_3 + 0x68, &var_304, rbx_13 + 0x18)
                            int64_t rax_122 = sx.q(var_304)
                            
                            if (rax_122.d == 0xffffffff)
                                *(rbx_13 + 0x10) = *0x10
                            else
                                *(rbx_13 + 0x10) = *((rax_122 << 5) + *(rsi_3 + 0x68) + 0x10)
                    
                    void* rbx_14 = *(r14_2 + 0x40)
                    
                    if (*(rbx_14 + 0x20) - *(rbx_14 + 0x4c) s> 0)
                        int32_t r11_2 = *(rbx_14 + 0x40)
                        void* r9_14 = rbx_14 + 0x28
                        int32_t rcx_93 = 0
                        var_328:4.d = 1
                        int32_t r8_70 = 0
                        var_328.d = 0
                        int32_t var_318_2 = 0xffffffff
                        int64_t var_314_2 = 0
                        
                        if (r11_2 != 0)
                            void* rax_134 = *(r9_14 + 0x10)
                            
                            if (rax_134 != 0)
                                r9_14 = rax_134
                            
                            int32_t temp6_1
                            int32_t temp7_1
                            temp6_1:temp7_1 = sx.q(r11_2 - 1)
                            int32_t rdx_102 = *r9_14
                            
                            if (rdx_102 != 0)
                            label_1419a8e86:
                                int32_t rax_141 = neg.d(rdx_102) & rdx_102
                                uint64_t rflags_2
                                int32_t temp0_3
                                temp0_3, rflags_2 = _bit_scan_reverse(rax_141)
                                var_328:4.d = rax_141
                                int32_t rax_142
                                
                                if (rax_141 == 0)
                                    rax_142 = 0x20
                                else
                                    rax_142 = 0x1f - temp0_3
                                
                                var_314_2.d = r8_70 - rax_142 + 0x1f
                                
                                if (r8_70 - rax_142 + 0x1f s> r11_2)
                                    var_314_2.d = r11_2
                            else
                                while (true)
                                    int64_t rdx_103 = sx.q(rcx_93)
                                    r8_70 += 0x20
                                    rcx_93 += 1
                                    var_328.d = rcx_93
                                    
                                    if (rdx_103.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                                        break
                                    
                                    rdx_102 = *(r9_14 + (rdx_103 << 2) + 4)
                                    var_318_2 = 0xffffffff
                                    
                                    if (rdx_102 != 0)
                                        goto label_1419a8e86
                                
                                var_314_2.d = r11_2
                        
                        var_330.b = 2
                        var_338.b = 0
                        sub_1419a9b20(&var_158, 
                            *((sx.q((var_318_2.q u>> 0x20).d) << 5) + *(rbx_14 + 0x18) + 0x10), 
                            r14_2, 0, var_338.b, var_330.b)
                    
                    rdi_1 = var_2e0
            case 6
                void* rbx_15 = *r12_2
                
                if (rbx_15 != 0)
                    int64_t rdx_105 = *(rbx_15 + 0x10)
                    void* rdi_7 = *(rbx_15 + 0x18)
                    
                    if (rdx_105 == 0)
                        sub_141997490(rsi, rdi_7)
                        int64_t* rsi_5 = *(rdi_7 + 0x40) + 0x18
                        void var_25c
                        
                        if (*sub_1419a1d90(rsi_5, &var_25c, rbx_15 + 0x18) == 0xffffffff)
                            sub_141096260(rsi_5, 0)
                            int64_t var_2f0 = 0
                            int32_t rax_149 = *(rdi_7 + 0x3c)
                            
                            if (rax_149 == 0)
                                int64_t* rcx_104 = data_143f0f180
                                var_338.b = *(rbx_15 + 0x20)
                                (*(*rcx_104 + 0x590))(rcx_104, &var_280, &data_143f02b98, 
                                    **(rdi_7 + 0x40), var_338, var_330)
                                sub_1405d1600(&var_2f0, &var_280)
                                sub_1405d1550(&var_280)
                            else if (rax_149 == 2)
                                int64_t* rcx_107 = data_143f0f180
                                var_330.b = *(rbx_15 + 0x25)
                                var_338.b = *(rbx_15 + 0x24)
                                (*(*rcx_107 + 0x5a8))(rcx_107, &var_270, &data_143f02b98, 
                                    *(*(rdi_7 + 0x40) + 0x10), var_338, var_330)
                                sub_1405d1600(&var_2f0, &var_270)
                                sub_1405d1550(&var_270)
                            
                            *(rbx_15 + 0x10) = var_2f0
                            int64_t* rcx_110 = *(rdi_7 + 0x40) + 0x18
                            void* var_238 = rbx_15 + 0x18
                            int64_t* var_230_1 = &var_2f0
                            void var_258
                            sub_1419903c0(rcx_110, &var_258, &var_238, nullptr)
                            sub_1405d1550(&var_2f0)
                            rdx_105 = *(rbx_15 + 0x10)
                        else
                            sub_1419a1d90(rsi_5, &var_300, rbx_15 + 0x18)
                            int64_t rax_148 = sx.q(var_300)
                            
                            if (rax_148.d == 0xffffffff)
                                rdx_105 = *0x10
                                *(rbx_15 + 0x10) = rdx_105
                            else
                                rdx_105 = *((rax_148 << 5) + *rsi_5 + 0x10)
                                *(rbx_15 + 0x10) = rdx_105
                    
                    var_330.b = 2
                    r9_15.b = 1
                    var_338.b = 0
                    sub_1419a9b20(&var_158, rdx_105, rdi_7, r9_15.b, var_338.b, var_330.b)
                    rdi_1 = var_2e0
            case 7
                void* rdx_114 = *r12_2
                
                if (rdx_114 != 0)
                    sub_141997490(rsi, rdx_114)
            case 0xb
                int32_t r15_1 = 0
                void* rdi_8 = r12_2 + 0xc
                int32_t i_1 = 0
                void* rbx_16 = rbx + 0x10
                int64_t rax_101
                
                do
                    void* rsi_6 = *(rdi_8 - 0xc)
                    
                    if (rsi_6 == 0)
                        break
                    
                    sub_1419975b0(arg1, rsi_6)
                    void* rax_154 = *(rsi_6 + 0x80)
                    char rcx_115 = 1
                    int64_t r8_77 = *(rax_154 + 0x10)
                    int64_t rdx_116 = r8_77
                    
                    if (*(rdi_8 - 3) != 1)
                        rdx_116 = *(rax_154 + 8)
                    
                    if (rdx_116 != r8_77)
                        rcx_115 = 1
                        
                        if (*(rsi_6 + 0x58) u> 1)
                            rcx_115 = 2
                    
                    int64_t rax_155 = 0
                    *(rbx_16 - 0x10) = rdx_116
                    
                    if (r8_77 != rdx_116)
                        rax_155 = r8_77
                    
                    r8_77.b = 1
                    *(rbx_16 - 8) = rax_155
                    *rbx_16 = *rdi_8
                    *(rbx_16 + 4) = *(rdi_8 - 2)
                    *(rbx_16 + 5) = *(rdi_8 - 4) << 2 | rcx_115
                    sub_1419a97f0(&var_158, rsi_6, r8_77.b)
                    rax_101 = *(rbx_16 - 0x10)
                    i_1 += 1
                    rdi_8 += 0x10
                    rbx_16 += 0x18
                    r15_1 |= *(rax_101 + 0x38)
                while (i_1 u< 8)
                
                void** r12_4 = var_328
                r13 = var_308
                void* rbx_17 = r12_4[0x10]
                void* rdi_9
                
                if (rbx_17 == 0)
                    rdi_9 = var_2e8
                else
                    sub_1419975b0(arg1, rbx_17)
                    int32_t rax_159 = *(r12_4 + 0x8c)
                    int64_t rcx_118 = 0x10
                    rdi_9 = var_2e8
                    int32_t r9_21 = rax_159 & 0xf
                    int32_t r10_9 = rax_159 & 0xf0
                    
                    if (*(r12_4 + 0x8a) == 0)
                        rcx_118 = 8
                    
                    char rdx_120 = 0
                    *(rdi_9 + 0xc0) = *(*(rbx_17 + 0x80) + rcx_118)
                    *(rdi_9 + 0xc8) = 0
                    
                    if (r9_21 == 2)
                        rdx_120 = 4
                    
                    rdx_120 = (rdx_120 | r12_4[0x11].b << 4 | *(r12_4 + 0x89)) << 2 | r10_9 == 0x20
                    *(rdi_9 + 0xd4) = rax_159
                    *(rdi_9 + 0xd0) = rdx_120
                    bool r8_78
                    
                    if (r9_21 == 2 || r10_9 == 0x20)
                        r8_78 = true
                    else
                        r8_78 = false
                    
                    sub_1419a97f0(&var_158, rbx_17, r8_78)
                    r15_1 |= *(*(rdi_9 + 0xc0) + 0x38)
                
                rax_101.b = r15_1 u> 1
                *(rdi_9 + 0x119) = rax_101.b
                rdi_1 = var_2e0
        
        r11 = var_2b8
        r13 += 1
        rsi = arg1
        rbx = var_2e8
        var_308 = r13
    while (r13 u< r12)

int32_t var_1b0_1 = 0
*(var_2e8 + 0x115) = *(arg2 + 0x30) u>> 3 & 1
int64_t var_1f0
var_1f0.d = 0
int32_t var_1c8_1 = 0xffffffff
int32_t var_1c4_1 = 0
int64_t var_1e8
sub_141095ed0(&var_1e8, 0)
int32_t var_160_1 = 0
int64_t var_1a0
var_1a0.d = 0
int32_t var_178_1 = 0xffffffff
int32_t var_174_1 = 0
int64_t var_198
sub_141095ed0(&var_198, 0)
int64_t result = sub_141993dc0(&var_158)
__security_check_cookie(rax_1 ^ &var_358)
return result
