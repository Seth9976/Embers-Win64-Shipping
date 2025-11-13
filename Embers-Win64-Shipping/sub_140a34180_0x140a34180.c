// 函数: sub_140a34180
// 地址: 0x140a34180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_358
int64_t rax_1 = __security_cookie ^ &var_358
void* rax_2 = sub_140a7b0a0()

if (rax_2 != 0)
    sub_140a8dc00(rax_2, 0)

int32_t r12 = data_14399e5d4
data_14399e5d4 = 0

if (sub_140a54810() != 0)
    int64_t* rcx_1 = data_143cf8c40
    int32_t rax_5 = (*(*rcx_1 + 0x18))(rcx_1)
    
    if (rax_5 s>= 2)
        int16_t* var_300 = nullptr
        int64_t var_2f8_1 = 0
        sub_1405947f0(&var_300, 0x15)
        int32_t rsi_1 = var_2f8_1:4.d
        int32_t rdi_1 = var_2f8_1.d + 0x15
        var_2f8_1.d = rdi_1
        
        if (rdi_1 s> rsi_1)
            sub_140594770(&var_300)
            rsi_1 = var_2f8_1:4.d
            rdi_1 = var_2f8_1.d
        
        int16_t* rbx_1 = var_300
        UnDecorator::getReferenceType(rbx_1, u"TestLockFree Runtime", 0x2a)
        sub_140b19e60()
        int64_t var_2d0 = (zx.o(0)).q
        int32_t var_2dc_1 = rsi_1
        void** var_2d8_1 = &data_1439a8bd0
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        int128_t zmm0_1
        zmm0_1.q = float.d(performanceCount)
        int64_t* var_2c0_1 = &var_2d0
        zmm0_1.q = zmm0_1.q f* data_143d796f8
        zmm0_1.q = zmm0_1.q f+ 16777216.0
        int64_t var_2c8_1 = zmm0_1.q
        int64_t performanceCount_1
        QueryPerformanceCounter(&performanceCount_1)
        int32_t var_308_1 = 0
        zmm0_1.q = float.d(performanceCount_1)
        int32_t rax_6 = 5
        
        if (rax_5 s< 5)
            rax_6 = rax_5
        
        zmm0_1.q = zmm0_1.q f* data_143d796f8
        int32_t var_30c = rax_6
        zmm0_1.q = zmm0_1.q f+ 16777216.0
        int64_t var_2c8_2 = zmm0_1.q
        
        if (arg1 s> 0)
            int32_t rbx_38
            
            do
                int64_t var_260_1 = 0
                int64_t var_218_1 = 0
                uint64_t rcx_7 = zx.q(sub_140a2d7c0(&data_143cf0ae0))
                int64_t var_1c8_1 = 0
                int64_t var_1b8_1 = 0
                int64_t var_260_2 = (var_260_1 & 0xfffffffffc000000) | rcx_7
                int64_t var_218_2 = (var_218_1 & 0xfffffffffc000000) | rcx_7
                uint64_t rcx_8 = zx.q(sub_140a2d7c0(&data_143cf0ae0))
                int64_t var_1a0_1 = 0
                int64_t var_190_1 = 0
                int64_t var_1c8_2 = (var_1c8_1 & 0xfffffffffc000000) | rcx_8
                int64_t var_1b8_2 = (var_1b8_1 & 0xfffffffffc000000) | rcx_8
                uint64_t rcx_9 = zx.q(sub_140a2d7c0(&data_143cf0ae0))
                int32_t i = 0
                int32_t i_5 = 0
                int64_t var_1a0_2 = (var_1a0_1 & 0xfffffffffc000000) | rcx_9
                int64_t var_190_2 = (var_190_1 & 0xfffffffffc000000) | rcx_9
                
                do
                    int32_t* rax_28 = j_sub_140a82f30(8)
                    int32_t* rbx_2 = rax_28
                    
                    if (rax_28 == 0)
                        rbx_2 = nullptr
                    else
                        *rax_28 = i
                        rax_28[1] = 0xfe05abcd
                    
                    int32_t rax_29
                    int128_t zmm6_1
                    rax_29, zmm6_1 = sub_140a2d7c0(&data_143cf0ae0)
                    uint64_t r12_1 = zx.q(rax_29)
                    void* const rcx_10
                    
                    if (rax_29 != 0)
                        rcx_10 = *((r12_1 u>> 0xe << 3) + &data_143cf0bf8)
                            + (zx.q(r12_1.d) & 0x3fff) * 0x18
                    else
                        rcx_10 = nullptr
                    
                    *(rcx_10 + 8) = rbx_2
                    int64_t rax_33
                    
                    while (true)
                        rax_33 = 0
                        
                        if (0 == var_218_2)
                            var_218_2 = 0
                        else
                            rax_33 = var_218_2
                        
                        uint64_t rax_34 = zx.q(rax_33.d) & 0x3ffffff
                        int64_t* r14_2
                        
                        if (rax_34.d != 0)
                            r14_2 = *((rax_34 u>> 0xe << 3) + &data_143cf0bf8)
                                + (zx.q(rax_34.d) & 0x3fff) * 0x18
                        else
                            r14_2 = nullptr
                        
                        int64_t rax_37 = 0
                        
                        if (0 == *r14_2)
                            *r14_2 = 0
                        else
                            rax_37 = *r14_2
                        
                        int64_t rax_38 = 0
                        
                        if (0 == var_218_2)
                            var_218_2 = 0
                        else
                            rax_38 = var_218_2
                        
                        if (rax_38 == rax_33)
                            if ((rax_37.d & 0x3ffffff) == 0)
                                if ((((rax_37 & 0xfffffffffc000000) + 0x4000000)
                                        & 0xfffffffffc000000) u< (rax_37 & 0xfffffffffc000000))
                                    zmm6_1 = sub_140b73230(zmm6_1)
                                
                                bool z_1
                                
                                if (rax_37 == *r14_2)
                                    *r14_2 = ((rax_37 & 0xfffffffffc000000) + 0x4000000) | r12_1
                                    z_1 = true
                                else
                                    *r14_2
                                    z_1 = false
                                
                                if (z_1)
                                    break
                            else
                                if ((((rax_33 & 0xfffffffffc000000) + 0x4000000)
                                        & 0xfffffffffc000000) u< (rax_33 & 0xfffffffffc000000))
                                    zmm6_1 = sub_140b73230(zmm6_1)
                                
                                if (rax_33 == var_218_2)
                                    var_218_2 = (zx.q(rax_37.d) & 0x3ffffff)
                                        | ((rax_33 & 0xfffffffffc000000) + 0x4000000)
                    
                    if ((((rax_33 & 0xfffffffffc000000) + 0x4000000) & 0xfffffffffc000000)
                            u< (rax_33 & 0xfffffffffc000000))
                        sub_140b73230(zmm6_1)
                    
                    if (rax_33 == var_218_2)
                        var_218_2 = ((rax_33 & 0xfffffffffc000000) + 0x4000000) | r12_1
                    
                    i = i_5 + 1
                    i_5 = i
                while (i s< 0x3e8)
                
                void*** var_168_1 = nullptr
                void var_2a0
                void* var_150_1 = &var_2a0
                void** const var_158 = &data_142da2668
                int64_t (* var_178_1)(int64_t* arg1, int32_t* arg2) = sub_140a220c0
                int128_t zmm6_2 = sub_140a1dfe0(&var_30c)
                int64_t* var_328 = nullptr
                int64_t var_320_1 = 0
                
                while (true)
                    int64_t rax_51 = 0
                    
                    if (0 == var_260_2)
                        var_260_2 = 0
                    else
                        rax_51 = var_260_2
                    
                    int64_t rax_52 = 0
                    
                    if (0 == var_218_2)
                        var_218_2 = 0
                    else
                        rax_52 = var_218_2
                    
                    int32_t r14_4 = rax_51.d & 0x3ffffff
                    int64_t* rcx_24
                    
                    if (r14_4 != 0)
                        rcx_24 = *((zx.q(r14_4) u>> 0xe << 3) + &data_143cf0bf8)
                            + (zx.q(r14_4) & 0x3fff) * 0x18
                    else
                        rcx_24 = nullptr
                    
                    int32_t rax_56 = 0
                    
                    if (0 == *rcx_24)
                        *rcx_24 = 0
                    else
                        rax_56 = (*rcx_24).d
                    
                    int64_t rax_57 = 0
                    
                    if (0 == var_260_2)
                        var_260_2 = 0
                    else
                        rax_57 = var_260_2
                    
                    if (rax_51 == rax_57)
                        if (r14_4 != (rax_52.d & 0x3ffffff))
                            uint64_t rax_65 = zx.q(rax_56) & 0x3ffffff
                            void* rax_66
                            
                            if (rax_65.d != 0)
                                rax_66 = *((rax_65 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rax_65.d) & 0x3fff) * 0x18
                            else
                                rax_66 = nullptr
                            
                            int64_t r15_1 = *(rax_66 + 8)
                            
                            if ((((rax_51 & 0xfffffffffc000000) + 0x4000000) & 0xfffffffffc000000)
                                    u< (rax_51 & 0xfffffffffc000000))
                                zmm6_2 = sub_140b73230(zmm6_2)
                            
                            bool z_2
                            
                            if (rax_51 == var_260_2)
                                var_260_2 = (zx.q(rax_56) & 0x3ffffff)
                                    | ((rax_51 & 0xfffffffffc000000) + 0x4000000)
                                z_2 = true
                            else
                                z_2 = false
                            
                            if (z_2)
                                zmm6_2 = sub_140a24050(r14_4)
                                
                                if (r15_1 == 0)
                                    break
                                
                                int64_t rbx_15 = sx.q(var_320_1.d)
                                int32_t rax_73 = (rbx_15 + 1).d
                                var_320_1.d = rax_73
                                
                                if (rax_73 s> var_320_1:4.d)
                                    sub_1405a4d70(&var_328)
                                
                                var_328[rbx_15] = r15_1
                        else
                            if ((rax_56 & 0x3ffffff) == 0)
                                break
                            
                            if ((((rax_52 & 0xfffffffffc000000) + 0x4000000) & 0xfffffffffc000000)
                                    u< (rax_52 & 0xfffffffffc000000))
                                zmm6_2 = sub_140b73230(zmm6_2)
                            
                            if (rax_52 == var_218_2)
                                var_218_2 = (zx.q(rax_56) & 0x3ffffff)
                                    | ((rax_52 & 0xfffffffffc000000) + 0x4000000)
                
                while (true)
                    int64_t rax_75 = 0
                    
                    if (0 == var_1c8_2)
                        var_1c8_2 = 0
                    else
                        rax_75 = var_1c8_2
                    
                    int64_t rax_76 = 0
                    
                    if (0 == var_1b8_2)
                        var_1b8_2 = 0
                    else
                        rax_76 = var_1b8_2
                    
                    int32_t r14_6 = rax_75.d & 0x3ffffff
                    int64_t* rcx_37
                    
                    if (r14_6 != 0)
                        rcx_37 = *((zx.q(r14_6) u>> 0xe << 3) + &data_143cf0bf8)
                            + (zx.q(r14_6) & 0x3fff) * 0x18
                    else
                        rcx_37 = nullptr
                    
                    int32_t rax_80 = 0
                    
                    if (0 == *rcx_37)
                        *rcx_37 = 0
                    else
                        rax_80 = (*rcx_37).d
                    
                    int64_t rax_81 = 0
                    
                    if (0 == var_1c8_2)
                        var_1c8_2 = 0
                    else
                        rax_81 = var_1c8_2
                    
                    if (rax_75 == rax_81)
                        if (r14_6 != (rax_76.d & 0x3ffffff))
                            uint64_t rax_89 = zx.q(rax_80) & 0x3ffffff
                            void* rax_90
                            
                            if (rax_89.d != 0)
                                rax_90 = *((rax_89 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rax_89.d) & 0x3fff) * 0x18
                            else
                                rax_90 = nullptr
                            
                            int64_t r15_2 = *(rax_90 + 8)
                            
                            if ((((rax_75 & 0xfffffffffc000000) + 0x4000000) & 0xfffffffffc000000)
                                    u< (rax_75 & 0xfffffffffc000000))
                                zmm6_2 = sub_140b73230(zmm6_2)
                            
                            bool z_3
                            
                            if (rax_75 == var_1c8_2)
                                var_1c8_2 = (zx.q(rax_80) & 0x3ffffff)
                                    | ((rax_75 & 0xfffffffffc000000) + 0x4000000)
                                z_3 = true
                            else
                                z_3 = false
                            
                            if (z_3)
                                zmm6_2 = sub_140a24050(r14_6)
                                
                                if (r15_2 == 0)
                                    break
                                
                                int64_t rbx_21 = sx.q(var_320_1.d)
                                int32_t rax_97 = (rbx_21 + 1).d
                                var_320_1.d = rax_97
                                
                                if (rax_97 s> var_320_1:4.d)
                                    sub_1405a4d70(&var_328)
                                
                                var_328[rbx_21] = r15_2
                        else
                            if ((rax_80 & 0x3ffffff) == 0)
                                break
                            
                            if ((((rax_76 & 0xfffffffffc000000) + 0x4000000) & 0xfffffffffc000000)
                                    u< (rax_76 & 0xfffffffffc000000))
                                zmm6_2 = sub_140b73230(zmm6_2)
                            
                            if (rax_76 == var_1b8_2)
                                var_1b8_2 = (zx.q(rax_80) & 0x3ffffff)
                                    | ((rax_76 & 0xfffffffffc000000) + 0x4000000)
                
                while (true)
                    int64_t rax_99 = 0
                    
                    if (0 == var_1a0_2)
                        var_1a0_2 = 0
                    else
                        rax_99 = var_1a0_2
                    
                    int64_t rax_100 = 0
                    
                    if (0 == var_190_2)
                        var_190_2 = 0
                    else
                        rax_100 = var_190_2
                    
                    int32_t r14_8 = rax_99.d & 0x3ffffff
                    int64_t* rcx_50
                    
                    if (r14_8 != 0)
                        rcx_50 = *((zx.q(r14_8) u>> 0xe << 3) + &data_143cf0bf8)
                            + (zx.q(r14_8) & 0x3fff) * 0x18
                    else
                        rcx_50 = nullptr
                    
                    int32_t rax_104 = 0
                    
                    if (0 == *rcx_50)
                        *rcx_50 = 0
                    else
                        rax_104 = (*rcx_50).d
                    
                    int64_t rax_105 = 0
                    
                    if (0 == var_1a0_2)
                        var_1a0_2 = 0
                    else
                        rax_105 = var_1a0_2
                    
                    if (rax_99 == rax_105)
                        if (r14_8 != (rax_100.d & 0x3ffffff))
                            uint64_t rax_113 = zx.q(rax_104) & 0x3ffffff
                            void* rax_114
                            
                            if (rax_113.d != 0)
                                rax_114 = *((rax_113 u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rax_113.d) & 0x3fff) * 0x18
                            else
                                rax_114 = nullptr
                            
                            int64_t r15_3 = *(rax_114 + 8)
                            
                            if ((((rax_99 & 0xfffffffffc000000) + 0x40000000) & 0xfffffffffc000000)
                                    u< (rax_99 & 0xfffffffffc000000))
                                zmm6_2 = sub_140b73230(zmm6_2)
                            
                            bool z_4
                            
                            if (rax_99 == var_1a0_2)
                                var_1a0_2 = (zx.q(rax_104) & 0x3ffffff)
                                    | ((rax_99 & 0xfffffffffc000000) + 0x40000000)
                                z_4 = true
                            else
                                z_4 = false
                            
                            if (z_4)
                                zmm6_2 = sub_140a24050(r14_8)
                                
                                if (r15_3 == 0)
                                    break
                                
                                int64_t rbx_27 = sx.q(var_320_1.d)
                                int32_t rax_121 = (rbx_27 + 1).d
                                var_320_1.d = rax_121
                                
                                if (rax_121 s> var_320_1:4.d)
                                    sub_1405a4d70(&var_328)
                                
                                var_328[rbx_27] = r15_3
                        else
                            if ((rax_104 & 0x3ffffff) == 0)
                                break
                            
                            if ((((rax_100 & 0xfffffffffc000000) + 0x40000000) & 0xfffffffffc000000)
                                    u< (rax_100 & 0xfffffffffc000000))
                                zmm6_2 = sub_140b73230(zmm6_2)
                            
                            if (rax_100 == var_190_2)
                                var_190_2 = (zx.q(rax_104) & 0x3ffffff)
                                    | ((rax_100 & 0xfffffffffc000000) + 0x40000000)
                
                int64_t* r14_9 = var_328
                int64_t rbx_28 = 0
                int64_t* rdi_15 = r14_9
                void* rcx_63 = &r14_9[sx.q(var_320_1.d)]
                uint64_t rsi_24 = (rcx_63 - r14_9 + 7) u>> 3
                
                if (r14_9 u> rcx_63)
                    rsi_24 = 0
                
                if (rsi_24 != 0)
                    do
                        j_sub_140a74f90(*rdi_15)
                        rbx_28 += 1
                        rdi_15 = &rdi_15[1]
                    while (rbx_28 != rsi_24)
                
                if (r14_9 != 0)
                    sub_140a74f90(r14_9)
                
                if (var_178_1 != 0)
                    void** const* rcx_66 = &var_158
                    
                    if (var_168_1 != 0)
                        rcx_66 = var_168_1
                    
                    (*rcx_66)[2](rcx_66)
                
                int64_t var_b8_1 = 0
                int32_t i_1 = 0
                int64_t var_68_1 = 0
                int64_t var_50_1 = 0
                void var_f8
                
                do
                    int32_t* rax_126 = j_sub_140a82f30(8)
                    int32_t* rbx_29 = rax_126
                    
                    if (rax_126 == 0)
                        rbx_29 = nullptr
                    else
                        *rax_126 = i_1
                        rax_126[1] = 0xfe05abcd
                    
                    int32_t rax_127 = sub_140a2d7c0(&data_143cf0ae0)
                    uint64_t rdx_6 = zx.q(rax_127)
                    void* const rax_128
                    
                    if (rax_127 != 0)
                        rax_128 = *((rdx_6 u>> 0xe << 3) + &data_143cf0bf8)
                            + (zx.q(rdx_6.d) & 0x3fff) * 0x18
                    else
                        rax_128 = nullptr
                    
                    *(rax_128 + 8) = rbx_29
                    sub_1405a42f0(&var_f8, rdx_6.d)
                    i_1 += 1
                while (i_1 s< 0x3e8)
                
                void*** var_128_1 = nullptr
                void* var_110_1 = &var_f8
                void** const var_118 = &data_142da2668
                int64_t (* var_138_1)(int64_t* arg1, int32_t* arg2) = sub_140a22150
                int128_t zmm6_3 = sub_140a1dfe0(&var_30c)
                int64_t rax_132 = 0
                int64_t* var_338 = nullptr
                int64_t var_330_1 = 0
                
                if (0 == var_b8_1)
                    var_b8_1 = 0
                else
                    rax_132 = var_b8_1
                
                int64_t rbx_30 = rax_132
                int64_t rax_137
                int32_t i_2
                
                for (i_2 = rax_132.d & 0x3ffffff; i_2 != 0; i_2 = rax_137.d & 0x3ffffff)
                    if (((rbx_30 + 0x4000000) & 0xfffffffffc000000)
                            u< (rbx_30 & 0xfffffffffc000000))
                        zmm6_3 = sub_140b73230(zmm6_3)
                    
                    bool z_5
                    
                    if (rbx_30 == var_b8_1)
                        var_b8_1 = (rbx_30 + 0x4000000) & 0xfffffffffc000000
                        z_5 = true
                    else
                        z_5 = false
                    
                    if (z_5)
                        break
                    
                    rax_137 = 0
                    
                    if (0 == var_b8_1)
                        var_b8_1 = 0
                    else
                        rax_137 = var_b8_1
                    
                    rbx_30 = rax_137
                
                while (i_2 != 0)
                    int64_t rbx_31 = sx.q(var_330_1.d)
                    uint64_t rcx_76 = (zx.q(i_2) & 0x3fff) * 3
                    int64_t rax_140 = *((zx.q(i_2) u>> 0xe << 3) + &data_143cf0bf8)
                    int64_t r14_10 = *(rax_140 + (rcx_76 << 3) + 8)
                    int32_t rax_141 = (rbx_31 + 1).d
                    var_330_1.d = rax_141
                    
                    if (rax_141 s> var_330_1:4.d)
                        sub_1405a4d70(&var_338)
                    
                    int32_t i_6 = i_2
                    var_338[rbx_31] = r14_10
                    i_2 = *(rax_140 + (rcx_76 << 3) + 0x10)
                    zmm6_3 = sub_140a24050(i_6)
                
                int64_t rax_143 = 0
                
                if (0 == var_68_1)
                    var_68_1 = 0
                else
                    rax_143 = var_68_1
                
                int64_t rbx_32 = rax_143
                int64_t rax_148
                int32_t i_3
                
                for (i_3 = rax_143.d & 0x3ffffff; i_3 != 0; i_3 = rax_148.d & 0x3ffffff)
                    if ((((rbx_32 & 0xfffffffffc000000) + 0x4000000) & 0xfffffffffc000000)
                            u< (rbx_32 & 0xfffffffffc000000))
                        zmm6_3 = sub_140b73230(zmm6_3)
                    
                    bool z_6
                    
                    if (rbx_32 == var_68_1)
                        var_68_1 = (rbx_32 & 0xfffffffffc000000) + 0x4000000
                        z_6 = true
                    else
                        z_6 = false
                    
                    if (z_6)
                        break
                    
                    rax_148 = 0
                    
                    if (0 == var_68_1)
                        var_68_1 = 0
                    else
                        rax_148 = var_68_1
                    
                    rbx_32 = rax_148
                
                while (i_3 != 0)
                    int64_t rbx_33 = sx.q(var_330_1.d)
                    uint64_t rcx_82 = (zx.q(i_3) & 0x3fff) * 3
                    int64_t rax_151 = *((zx.q(i_3) u>> 0xe << 3) + &data_143cf0bf8)
                    int64_t r14_11 = *(rax_151 + (rcx_82 << 3) + 8)
                    int32_t rax_152 = (rbx_33 + 1).d
                    var_330_1.d = rax_152
                    
                    if (rax_152 s> var_330_1:4.d)
                        sub_1405a4d70(&var_338)
                    
                    int32_t i_7 = i_3
                    var_338[rbx_33] = r14_11
                    i_3 = *(rax_151 + (rcx_82 << 3) + 0x10)
                    zmm6_3 = sub_140a24050(i_7)
                
                int64_t rax_154 = 0
                
                if (0 == var_50_1)
                    var_50_1 = 0
                else
                    rax_154 = var_50_1
                
                int64_t rbx_34 = rax_154
                int64_t rax_159
                int32_t i_4
                
                for (i_4 = rax_154.d & 0x3ffffff; i_4 != 0; i_4 = rax_159.d & 0x3ffffff)
                    if (((rbx_34 + 0x40000000) & 0xfffffffffc000000)
                            u< (rbx_34 & 0xfffffffffc000000))
                        zmm6_3 = sub_140b73230(zmm6_3)
                    
                    bool z_7
                    
                    if (rbx_34 == var_50_1)
                        var_50_1 = (rbx_34 + 0x40000000) & 0xfffffffffc000000
                        z_7 = true
                    else
                        z_7 = false
                    
                    if (z_7)
                        break
                    
                    rax_159 = 0
                    
                    if (0 == var_50_1)
                        var_50_1 = 0
                    else
                        rax_159 = var_50_1
                    
                    rbx_34 = rax_159
                
                int64_t* r14_12 = var_338
                
                while (i_4 != 0)
                    int64_t rbx_35 = sx.q(var_330_1.d)
                    uint64_t rcx_88 = (zx.q(i_4) & 0x3fff) * 3
                    int64_t rax_162 = *((zx.q(i_4) u>> 0xe << 3) + &data_143cf0bf8)
                    int64_t r15_4 = *(rax_162 + (rcx_88 << 3) + 8)
                    int32_t rax_163 = (rbx_35 + 1).d
                    var_330_1.d = rax_163
                    
                    if (rax_163 s> var_330_1:4.d)
                        sub_1405a4d70(&var_338)
                        r14_12 = var_338
                    
                    r14_12[rbx_35] = r15_4
                    int32_t i_8 = i_4
                    i_4 = *(rax_162 + (rcx_88 << 3) + 0x10)
                    sub_140a24050(i_8)
                
                int64_t rbx_36 = 0
                int64_t* rdi_22 = r14_12
                void* rcx_90 = &r14_12[sx.q(var_330_1.d)]
                uint64_t rsi_38 = (rcx_90 - r14_12 + 7) u>> 3
                
                if (r14_12 u> rcx_90)
                    rsi_38 = 0
                
                if (rsi_38 != 0)
                    do
                        j_sub_140a74f90(*rdi_22)
                        rbx_36 += 1
                        rdi_22 = &rdi_22[1]
                    while (rbx_36 != rsi_38)
                
                if (r14_12 != 0)
                    sub_140a74f90(r14_12)
                
                if (var_138_1 != 0)
                    void** const* rcx_93 = &var_118
                    
                    if (var_128_1 != 0)
                        rcx_93 = var_128_1
                    
                    (*rcx_93)[2](rcx_93)
                
                rbx_38 = var_308_1 + 1
                var_308_1 = rbx_38
            while (rbx_38 s< arg1)
        
        int64_t performanceCount_2
        QueryPerformanceCounter(&performanceCount_2)
        int16_t* const r8_1 = &data_142d40450
        int128_t zmm1_1
        zmm1_1.q = float.d(performanceCount_2)
        zmm1_1.q = zmm1_1.q f* data_143d796f8
        zmm1_1.q = zmm1_1.q f+ 16777216.0
        zmm0_1.q = zmm1_1.q f- var_2c8_2
        zmm0_1.q = zmm0_1.q f+ *var_2c0_1
        *var_2c0_1 = zmm0_1.q
        
        if (rdi_1 != 0)
            r8_1 = rbx_1
        
        int64_t var_2c8_3 = zmm1_1.q
        sub_140b1f700(var_2d8_1, u"%s: %f secs", r8_1)
        
        if (rbx_1 != 0)
            sub_140a74f90(rbx_1)

data_14399e5d4 = r12
void* result = sub_140a7b0a0()

if (result != 0)
    result = sub_140a89de0(result, 0)

__security_check_cookie(rax_1 ^ &var_358)
return result
