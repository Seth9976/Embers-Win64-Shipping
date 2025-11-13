// 函数: sub_141cad480
// 地址: 0x141cad480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_5c8
int64_t rax_1 = __security_cookie ^ &var_5c8
int64_t* r12 = arg1
uint64_t r14
uint64_t var_20 = r14
int32_t var_4f8 = 0xd
int128_t zmm6

if (arg1[0x19].b != 0)
    void** var_438
    int512_t zmm1
    zmm1, zmm6 = sub_141c93310(&var_438, 0xd, &arg1[0x1a], arg2)
    char var_40f
    
    if ((var_40f & 1) == 0)
        int128_t var_4e8 = data_143a16ec0
        sub_1409ac860(&var_438, &var_4e8, zmm1)
        
        if ((var_40f & 1) == 0 && ((var_4e8.d ^ data_143a16ec0.d)
                | (var_4e8:4.d ^ data_143a16ec0:4.d) | (var_4e8:8.d ^ data_143a16ec0:8.d)
                | (var_4e8:0xc.d ^ data_143a16ec0:0xc.d)) == 0)
            int32_t rax_8 = 0
            char var_410
            
            if ((var_410 & 1) == 0)
                rax_8 = 6
            
            int32_t var_540 = rax_8
            int64_t* var_430
            int32_t* rdx_2 = *var_430
            
            if (&rdx_2[1] u> var_430[1])
                int32_t* rdx_3 = &var_540
                void*** rcx_8 = &var_438
                
                if ((var_40f & 0x20) != 0)
                    sub_140b54070(rcx_8, rdx_3, zmm1)
                else
                    var_438[0x2a](rcx_8, rdx_3, 4)
            else
                var_540 = *rdx_2
                *var_430 += 4
            
            void var_440
            int64_t* rax_12
            int512_t zmm1_1
            rax_12, zmm1_1, zmm6 = sub_140b58260(&var_440, u"AssetRegistry", 1)
            sub_140b54f40(&var_438, &var_4e8, var_540, *rax_12)
            
            if ((not.b(var_40f) & 1) != 0)
                sub_141cb2c90(r12, &var_438, zmm1_1)
                int32_t rdx_6 = r12[0x1f].d
                int32_t r8_4 = *(r12 + 0x124)
                int32_t rax_15 = rdx_6 - r8_4
                
                if (rax_15 s> *(r12 + 0x7c))
                    sub_141a641d0(&r12[0xe], rax_15)
                    rdx_6 = r12[0x1f].d
                    r8_4 = *(r12 + 0x124)
                
                int32_t rdx_8 = rdx_6 - r8_4
                
                if (rdx_8 s> *(r12 + 0x6c))
                    sub_1405c5570(&r12[0xc], rdx_8)
    
    var_438 = &data_14320fe98
    int64_t* var_3a0
    
    if (var_3a0 != 0)
        (**var_3a0)(var_3a0, 1)
    
    int64_t var_3a0_1 = 0
    int64_t var_398
    
    if (var_398 != 0)
        sub_140a74f90(var_398)
    
    arg2 = sub_140b4cb40(&var_438)

int128_t var_38 = zmm6
int64_t* var_590
__builtin_memset(&var_590, 0, 0x40)
int64_t performanceCount_2
QueryPerformanceCounter(&performanceCount_2)
uint128_t zmm8 = 0x4170000000000000
void* r15 = &r12[0xe]
int32_t* var_4c8 = &var_4f8
void* r13 = &r12[0x10]
int32_t var_53c = 0
int32_t* var_4b8 = &var_53c
void* lpCriticalSection = &r12[1]
int64_t* var_4c0 = r12
int128_t zmm7 = zx.o(0)
void* var_4a0 = r15
void* var_498 = r13

while (true)
    void* rsi_1 = &r12[0xc]
    
    while (true)
        r14.b = 0
        char var_598_1 = 0
        EnterCriticalSection(lpCriticalSection)
        int64_t var_578_1
        int32_t rdi_1 = var_578_1.d
        int64_t var_580
        
        if (rdi_1 != 0)
            int32_t rax_17 = *(rsi_1 + 8)
            int32_t rdx_9 = rdi_1 + rax_17
            
            if (rdx_9 s> *(rsi_1 + 0xc))
                sub_1405c5570(rsi_1, rdx_9)
                rax_17 = *(rsi_1 + 8)
            
            int64_t rdi_2 = sx.q(var_578_1.d)
            memmove(*rsi_1 + (sx.q(rax_17) << 3), var_580, (rdi_2 << 3).d)
            *(rsi_1 + 8) += rdi_2.d
        
        int64_t var_588_1
        int32_t rdi_3 = var_588_1.d
        
        if (rdi_3 != 0)
            int32_t rcx_22 = *(r15 + 8)
            int32_t rdx_11 = rdi_3 + rcx_22
            
            if (rdx_11 s> *(r15 + 0xc))
                sub_141a641d0(r15, rdx_11)
                rcx_22 = *(r15 + 8)
            
            memmove(sx.q(rcx_22) * 0xc8 + *r15, var_590, rdi_3 * 0xc8)
            *(r15 + 8) += rdi_3
            var_588_1.d = 0
        
        int64_t var_558_1
        int64_t rdi_4 = sx.q(var_558_1.d)
        uint64_t var_560
        
        if (rdi_4.d != 0)
            int32_t rax_20 = *(r13 + 8)
            int32_t rdx_13 = rdi_4.d + rax_20
            
            if (rdx_13 s> *(r13 + 0xc))
                sub_14061cd70(r13, rdx_13)
                rax_20 = *(r13 + 8)
            
            memmove((sx.q(rax_20) << 4) + *r13, var_560, (rdi_4 << 4).d)
            *(r13 + 8) += rdi_4.d
            var_558_1.d = 0
        
        bool cond:0_1 = var_578_1:4.d s>= 0
        var_578_1.d = 0
        
        if (not(cond:0_1))
            sub_1405c5570(&var_580, 0)
        
        int32_t i_17 = var_588_1.d
        int64_t* rdi_5 = var_590
        
        if (var_588_1:4.d s< 0)
            if (i_17 != 0)
                int32_t i
                
                do
                    arg2 = sub_140cad990(rdi_5)
                    rdi_5 = &rdi_5[0x19]
                    i = i_17
                    i_17 -= 1
                while (i != 1)
            
            var_588_1.d = 0
            
            if (var_588_1:4.d != 0)
                sub_141a641d0(&var_590, 0)
        else
            if (i_17 != 0)
                int32_t i_1
                
                do
                    arg2 = sub_140cad990(rdi_5)
                    rdi_5 = &rdi_5[0x19]
                    i_1 = i_17
                    i_17 -= 1
                while (i_1 != 1)
            
            var_588_1.d = 0
        
        int32_t i_18 = var_558_1.d
        uint64_t rdi_6 = var_560
        
        if (var_558_1:4.d s< 0)
            if (i_18 != 0)
                int32_t i_2
                
                do
                    int64_t rcx_35 = *rdi_6
                    
                    if (rcx_35 != 0)
                        arg2 = sub_140a74f90(rcx_35)
                    
                    rdi_6 += 0x10
                    i_2 = i_18
                    i_18 -= 1
                while (i_2 != 1)
            
            var_558_1.d = 0
            
            if (var_558_1:4.d != 0)
                sub_14061cd70(&var_560, 0)
        else
            if (i_18 != 0)
                int32_t i_3
                
                do
                    int64_t rcx_34 = *rdi_6
                    
                    if (rcx_34 != 0)
                        arg2 = sub_140a74f90(rcx_34)
                    
                    rdi_6 += 0x10
                    i_3 = i_18
                    i_18 -= 1
                while (i_3 != 1)
            
            var_558_1.d = 0
        
        bool z_1
        
        if (0 == r12[0xa].d)
            r12[0xa].d = 0
            z_1 = true
        else
            r12[0xa].d
            z_1 = false
        
        int64_t* var_570
        int64_t var_568_1
        
        if (not(z_1))
            if (lpCriticalSection != 0)
                LeaveCriticalSection(lpCriticalSection)
            
            if (r12[0x19].b != 0)
                void var_198
                sub_141c93490(&var_198, *var_4c8, &var_4c0[0x1a], arg2)
                int32_t var_4ec = 6
                int512_t zmm1_8 =
                    sub_141cb2c90(var_4c0, &var_198, sub_141cb4090(&var_198, &var_4ec, arg2))
                *var_4b8 = 0
                sub_141c94860(&var_198, zmm1_8)
            
            int32_t i_24 = var_558_1.d
            uint64_t rsi_14 = var_560
            uint64_t rbx_4 = rsi_14
            
            if (i_24 != 0)
                int32_t i_4
                
                do
                    int64_t rcx_122 = *rbx_4
                    
                    if (rcx_122 != 0)
                        sub_140a74f90(rcx_122)
                    
                    rbx_4 += 0x10
                    i_4 = i_24
                    i_24 -= 1
                while (i_4 != 1)
            
            if (rsi_14 != 0)
                sub_140a74f90(rsi_14)
            
            int32_t i_25 = var_588_1.d
            int64_t* rsi_15 = var_590
            int64_t* rbx_5 = rsi_15
            
            if (i_25 != 0)
                int32_t i_5
                
                do
                    sub_140cad990(rbx_5)
                    rbx_5 = &rbx_5[0x19]
                    i_5 = i_25
                    i_25 -= 1
                while (i_5 != 1)
            
            if (rsi_15 != 0)
                sub_140a74f90(rsi_15)
            
            int64_t rcx_126 = var_580
            
            if (rcx_126 != 0)
                sub_140a74f90(rcx_126)
            
            int32_t i_26 = var_568_1.d
            int64_t* rsi_16 = var_570
            int64_t* rbx_6 = rsi_16
            
            if (i_26 != 0)
                int32_t i_6
                
                do
                    int64_t rcx_127 = *rbx_6
                    
                    if (rcx_127 != 0)
                        sub_140a74f90(rcx_127)
                    
                    rbx_6 = &rbx_6[3]
                    i_6 = i_26
                    i_26 -= 1
                while (i_6 != 1)
            
            if (rsi_16 != 0)
                sub_140a74f90(rsi_16)
            
            __security_check_cookie(rax_1 ^ &var_5c8)
            return 0
        
        void* rcx_37 = r12[0x17]
        
        if (rcx_37 != 0)
            char rax_22
            rax_22, arg2 = sub_141ca15c0(rcx_37, &r12[0x14], &r12[8], r12 + 0xb4)
            r14 = zx.q(rax_22)
            var_598_1 = rax_22
            *(r12 + 0x55) = rax_22
        
        int32_t rsi_2 = r12[9].d
        uint128_t zmm0 = zx.o(r12[0xb])
        
        if (rsi_2 s> 0)
            if (not(zmm0.q f!= zmm7.q))
                int64_t performanceCount
                QueryPerformanceCounter(&performanceCount)
                rsi_2 = r12[9].d
                zmm0.q = float.d(performanceCount)
                zmm0.q = zmm0.q f* data_143d796f8
                zmm0.q = zmm0.q f+ zmm8.q
                r12[0xb] = zmm0.q
            
            int64_t r15_1 = sx.q(var_568_1.d)
            void* r13_1 = r12[8]
            
            if (rsi_2 s>= 0xfa)
                rsi_2 = 0xfa
            
            int32_t rax_23 = r15_1.d + rsi_2
            var_568_1.d = rax_23
            
            if (rax_23 s> var_568_1:4.d)
                sub_1405a4df0(&var_570)
            
            r14 = zx.q(rsi_2)
            
            if (rsi_2 != 0)
                void* rdi_7 = r13_1 + 0x10
                void* r15_5 = r15_1 * 0x18 - r13_1 + var_570
                int32_t i_7
                
                do
                    sub_140596d10(r15_5 - 0x10 + rdi_7, rdi_7 - 0x10)
                    *(r15_5 + rdi_7) = *rdi_7
                    rdi_7 += 0x18
                    i_7 = r14.d
                    r14 = zx.q(r14.d - 1)
                while (i_7 != 1)
            
            arg2 = sub_1418ec240(&r12[8], 0, rsi_2, 0)
            r12 = arg1
            r15 = var_4a0
            r13 = var_498
        else if (not(zmm0.q f== zmm7.q) && r14.b == 0)
            int64_t performanceCount_1
            QueryPerformanceCounter(&performanceCount_1)
            int64_t rsi_3 = sx.q(r12[0x13].d)
            zmm6.q = float.d(performanceCount_1)
            int32_t rax_27 = (rsi_3 + 1).d
            zmm6.q = zmm6.q f* data_143d796f8
            zmm6.q = zmm6.q f+ zmm8.q
            zmm6.q = zmm6.q f- r12[0xb]
            r12[0x13].d = rax_27
            
            if (rax_27 s> *(r12 + 0x9c))
                sub_1405a4d70(&r12[0x12])
            
            *(r12[0x12] + (rsi_3 << 3)) = zmm6.q
            r12[0xb] = 0
        
        if (lpCriticalSection != 0)
            LeaveCriticalSection(lpCriticalSection)
        
        int64_t rax_25 = sx.q(var_568_1.d)
        void* var_550 = nullptr
        int64_t var_548_1 = 0
        
        if (rax_25.d s<= 0)
            if (*(r12 + 0x54) != 0)
                (*(*r12 + 0x10))(r12)
                break
            
            if (var_598_1 == 0 && *(r12 + 0xc9) == 0)
                bool cond:6_1 = r12[0x19].b == 0
                *(r12 + 0xc9) = 1
                
                if (not(cond:6_1))
                    sub_141c96630(&var_4c8, arg2)
            
            arg2 = sub_140b73230(0x3dcccccd)
        else
            int64_t* r15_6 = var_570
            int64_t* var_528_1 = r15_6
            void* rax_26 = &r15_6[rax_25 * 3]
            
            if (r15_6 != rax_26)
                void* rbx_2 = rax_26
                
                do
                    bool z_2
                    
                    if (0 == r12[0xa].d)
                        r12[0xa].d = 0
                        z_2 = true
                    else
                        r12[0xa].d
                        z_2 = false
                    
                    if (not(z_2))
                        break
                    
                    uint64_t var_450[0x2]
                    uint64_t* rax_30
                    rax_30, zmm7, zmm8 = sub_140ba59c0(&var_450, r15_6)
                    uint64_t rdx_20
                    
                    if (rax_30[1].d == 0)
                        rdx_20 = &data_142d40450
                    else
                        rdx_20 = *rax_30
                    
                    int64_t var_510
                    arg2 = sub_140b58260(&var_510, rdx_20, 1)
                    uint64_t rcx_49 = var_450[0]
                    
                    if (rcx_49 != 0)
                        arg2 = sub_140a74f90(rcx_49)
                    
                    r14.b = 0
                    
                    if (r12[0x19].b != 0)
                        int32_t var_4f4
                        sub_141c9ffe0(&r12[0x1e], &var_4f4, var_510)
                        int64_t rax_31 = sx.q(var_4f4)
                        void* const rax_33
                        
                        if (rax_31.d == 0xffffffff)
                            rax_33 = nullptr
                        else
                            rax_33 = rax_31 * 0xf0 + r12[0x1e]
                        
                        int64_t* rdi_8 = rax_33 + 8
                        
                        if (rax_33 == 0)
                            rdi_8 = nullptr
                        
                        int64_t* var_530 = rdi_8
                        
                        if (rdi_8 != 0)
                            if (r15_6[2] != *rdi_8)
                                var_530 = nullptr
                            else if (rdi_8 != 0)
                                int64_t rax_35 = rdi_8[0x15]
                                
                                if (rax_35 == var_510)
                                    goto label_141cadbcb
                                
                                int32_t rcx_51
                                rcx_51.b = sub_140b5b8a0(rax_35.d, 0) == 0
                                
                                if ((*(rdi_8 + 0xac) != 0 | rcx_51.b) == 0)
                                    rdi_8 = var_530
                                label_141cadbcb:
                                    
                                    if (rdi_8 != 0)
                                        r14.b = 1
                                        int32_t rdx_23 = var_578_1.d + rdi_8[2].d
                                        char var_598_2 = 1
                                        
                                        if (rdx_23 s> var_578_1:4.d)
                                            sub_1405c5570(&var_580, rdx_23)
                                            rdi_8 = var_530
                                        
                                        int64_t* r12_1 = rdi_8[1]
                                        void* r15_9 = &r12_1[sx.q(rdi_8[2].d) * 0xa]
                                        int32_t var_538
                                        var_538.q = r15_9
                                        
                                        if (r12_1 != r15_9)
                                            void* rsi_4 = &r12_1[8]
                                            
                                            do
                                                int64_t* rax_38 = j_sub_140a82f30(0x50)
                                                int64_t* rdi_9 = rax_38
                                                
                                                if (rax_38 == 0)
                                                    rdi_9 = nullptr
                                                else
                                                    *rax_38 = *r12_1
                                                    rax_38[1] = *(rsi_4 - 0x38)
                                                    rax_38[2] = *(rsi_4 - 0x30)
                                                    rax_38[3] = *(rsi_4 - 0x28)
                                                    rax_38[4] = *(rsi_4 - 0x20)
                                                    rdi_9[5] = *(rsi_4 - 0x18)
                                                    void* rax_40 = *(rsi_4 - 0x10)
                                                    rdi_9[6] = rax_40
                                                    
                                                    if (rax_40 != 0)
                                                        *(rax_40 + 8) += 1
                                                    
                                                    rdi_9[7] = 0
                                                    int64_t r15_10 = sx.q(*rsi_4)
                                                    int64_t r13_2 = *(rsi_4 - 8)
                                                    rdi_9[8].d = r15_10.d
                                                    
                                                    if (r15_10.d != 0)
                                                        sub_140638750(&rdi_9[7], r15_10.d, 0)
                                                        memcpy(rdi_9[7], r13_2, (r15_10 << 2).d)
                                                        r15_9 = var_538.q
                                                        rdi_9[9].d = *(rsi_4 + 8)
                                                    else
                                                        r15_9 = var_538.q
                                                        *(rdi_9 + 0x44) = 0
                                                        rdi_9[9].d = *(rsi_4 + 8)
                                                
                                                int64_t r14_1 = sx.q(var_578_1.d)
                                                int32_t rax_43 = (r14_1 + 1).d
                                                var_578_1.d = rax_43
                                                
                                                if (rax_43 s> var_578_1:4.d)
                                                    sub_1405a4d70(&var_580)
                                                
                                                r12_1 = &r12_1[0xa]
                                                rsi_4 += 0x50
                                                *(var_580 + (r14_1 << 3)) = rdi_9
                                            while (r12_1 != r15_9)
                                            
                                            rdi_8 = var_530
                                            r14 = zx.q(var_598_2)
                                            rbx_2 = rax_26
                                        
                                        r12 = arg1
                                        
                                        if (r12[0x16].b != 0)
                                            int64_t rdi_10 = sx.q(var_588_1.d)
                                            int32_t rax_45 = (rdi_10 + 1).d
                                            var_588_1.d = rax_45
                                            
                                            if (rax_45 s> var_588_1:4.d)
                                                sub_1405c5190(&var_590)
                                            
                                            void* rdi_12 = &var_590[rdi_10 * 0x19]
                                            sub_141c93160(rdi_12, &rdi_8[3])
                                            *(rdi_12 + 0x90) = rdi_8[0x15]
                                            *(rdi_12 + 0x98) = *(rdi_8 + 0xb0)
                                            *(rdi_12 + 0xa8) = *(rdi_8 + 0xc0)
                                            *(rdi_12 + 0xb8) = *(rdi_8 + 0xd0)
                                        
                                        int64_t* var_478 = &var_510
                                        int64_t** var_470_1 = &var_530
                                        void var_480
                                        arg2 =
                                            sub_140bbe950(&r12[0x28], &var_480, &var_478, nullptr)
                                        r15_6 = var_528_1
                                else
                                    var_530 = nullptr
                    
                    if (r14.b == 0)
                        int64_t* var_508 = nullptr
                        char var_597
                        char* var_5a0_1 = &var_597
                        int32_t var_500_1 = 0
                        uint64_t var_4d8
                        int64_t* var_5a8_1 = &var_4d8
                        int64_t var_388 = 0
                        int32_t var_380_1 = 0
                        int64_t var_378 = 0
                        int32_t var_370_1 = 0
                        void* var_368 = nullptr
                        int32_t var_360_1 = 0
                        int64_t var_358
                        __builtin_memset(&var_358, 0, 0x3c)
                        int32_t var_31c_1 = 0x80
                        int32_t var_318_1 = 0xffffffff
                        int32_t var_314_1 = 0
                        int64_t var_308_1 = 0
                        int32_t var_300_1 = 0
                        int64_t var_2f8
                        __builtin_memset(&var_2f8, 0, 0x20)
                        char var_2d8_1 = r14.b
                        var_4d8 = 0
                        int32_t i_28 = 0
                        var_597 = r14.b
                        char rax_47
                        rax_47, zmm7, zmm8 = sub_141ca8790(r12, r15_6, &var_508, &var_388, arg2, 
                            var_5a8_1, var_5a0_1)
                        int32_t i_19 = i_28
                        int64_t* r13_3 = var_508
                        uint64_t r14_2 = var_4d8
                        
                        if (rax_47 != 0)
                            int64_t rsi_6 = sx.q(var_500_1)
                            
                            if (rsi_6.d != 0)
                                int32_t rdx_32 = var_578_1.d + rsi_6.d
                                
                                if (rdx_32 s> var_578_1:4.d)
                                    sub_1405c5570(&var_580, rdx_32)
                                
                                memcpy(var_580 + (sx.q(var_578_1.d) << 3), r13_3, (rsi_6 << 3).d)
                                var_578_1.d += rsi_6.d
                            
                            int64_t var_2f0
                            int64_t var_2e0
                            int128_t var_2d0
                            
                            if (r12[0x16].b != 0)
                                int64_t rdi_14 = sx.q(var_588_1.d)
                                int32_t rax_49 = (rdi_14 + 1).d
                                var_588_1.d = rax_49
                                
                                if (rax_49 s> var_588_1:4.d)
                                    sub_1405c5190(&var_590)
                                
                                void* rdi_16 = &var_590[rdi_14 * 0x19]
                                sub_141c93160(rdi_16, &var_388)
                                *(rdi_16 + 0x90) = var_2f8
                                *(rdi_16 + 0x98) = var_2f0.o
                                *(rdi_16 + 0xa8) = var_2e0.o
                                *(rdi_16 + 0xb8) = var_2d0
                            
                            if (i_19 != 0)
                                int32_t rdx_37 = var_558_1.d + i_19
                                
                                if (rdx_37 s> var_558_1:4.d)
                                    sub_14061cd70(&var_560, rdx_37)
                                
                                uint64_t rax_51 = var_560
                                int32_t i_27 = i_19
                                int64_t rcx_71 = sx.q(var_558_1.d) << 4
                                int64_t rsi_7 = rax_51 + rcx_71
                                uint64_t rax_52 = rax_51 - r14_2
                                int32_t* rdx_39 = rcx_71 + 8 + rax_52
                                int64_t rdi_21 = rsi_7 - rax_51 - rcx_71 + r14_2
                                int32_t* var_488_1 = rdx_39
                                int32_t i_8
                                
                                do
                                    *rsi_7 = 0
                                    int32_t r14_3 = *(rdi_21 + 8)
                                    int64_t r15_11 = *rdi_21
                                    *(rdx_39 + rdi_21) = r14_3
                                    
                                    if (r14_3 != 0)
                                        sub_1405a4c70(rsi_7, r14_3, 0)
                                        memcpy(*rsi_7, r15_11, r14_3 * 2)
                                        rdx_39 = var_488_1
                                    else
                                        *(rdi_21 + rax_52 + rcx_71 + 0xc) = 0
                                    
                                    rsi_7 += 0x10
                                    rdi_21 += 0x10
                                    i_8 = i_27
                                    i_27 -= 1
                                while (i_8 != 1)
                                var_558_1.d += i_19
                                rsi_6 = zx.q(var_500_1)
                                r13_3 = var_508
                                r12 = arg1
                                r15_6 = var_528_1
                            
                            if (r12[0x19].b != 0 && var_558_1.d == 0)
                                int64_t* rcx_74 = r13_3
                                void* rdi_23 = &r13_3[sx.q(rsi_6.d)]
                                
                                if (r13_3 != rdi_23)
                                    do
                                        if (*(*rcx_74 + 0x48) s< 0)
                                            goto label_141cae3f7
                                        
                                        rcx_74 = &rcx_74[1]
                                    while (rcx_74 != rdi_23)
                                
                                var_53c += 1
                                int64_t* rax_56 = j_sub_140a82f30(0xe0)
                                int64_t* rdx_42 = rax_56
                                
                                if (rax_56 == 0)
                                    rdx_42 = nullptr
                                else
                                    *rax_56 = r15_6[2]
                                    void* rcx_76 = &rax_56[0xd]
                                    __builtin_memset(&rax_56[1], 0, 0x60)
                                    *(rcx_76 + 0x10) = 0
                                    *(rcx_76 + 0x18) = 0
                                    *(rcx_76 + 0x1c) = 0x80
                                    void* rax_57 = *(rcx_76 + 0x10)
                                    
                                    if (rax_57 != 0)
                                        rcx_76 = rax_57
                                    
                                    *rcx_76 = 0
                                    *(rcx_76 + 8) = 0
                                    rdx_42[0x11].d = 0xffffffff
                                    *(rdx_42 + 0x8c) = 0
                                    rdx_42[0x13] = 0
                                    rdx_42[0x14].d = 0
                                    __builtin_memset(&rdx_42[0x15], 0, 0x21)
                                
                                int64_t* var_520 = rdx_42
                                
                                if (rsi_6.d s> *(rdx_42 + 0x14))
                                    sub_1405a5310(&rdx_42[1], rsi_6.d)
                                
                                int64_t r12_2 = 0
                                uint64_t r15_15 = (rdi_23 - r13_3 + 7) u>> 3
                                
                                if (r13_3 u> rdi_23)
                                    r15_15 = 0
                                
                                int64_t* r14_4 = r13_3
                                
                                if (r15_15 != 0)
                                    do
                                        int64_t* rdi_24 = var_520
                                        int64_t* r13_5 = *r14_4
                                        int64_t rsi_8 = sx.q(rdi_24[2].d)
                                        int32_t rax_58 = (rsi_8 + 1).d
                                        rdi_24[2].d = rax_58
                                        
                                        if (rax_58 s> *(rdi_24 + 0x14))
                                            sub_1405c5060(&rdi_24[1])
                                        
                                        sub_141c913c0(rsi_8 * 0x50 + rdi_24[1], r13_5)
                                        r14_4 = &r14_4[1]
                                        r12_2 += 1
                                    while (r12_2 != r15_15)
                                    
                                    r13_3 = var_508
                                
                                void* r14_6 = &var_520[3]
                                
                                if (r14_6 != &var_388)
                                    int64_t rsi_9 = var_388
                                    int32_t r8_21 = *(r14_6 + 0xc)
                                    *(r14_6 + 8) = var_380_1
                                    
                                    if (var_380_1 != 0 || r8_21 != 0)
                                        sub_140874c00(r14_6, var_380_1, r8_21)
                                        memcpy(*r14_6, rsi_9, var_380_1 * 0x38)
                                    else
                                        *(r14_6 + 0xc) = 0
                                
                                if (r14_6 + 0x10 != &var_378)
                                    int64_t rsi_10 = sx.q(var_370_1)
                                    int64_t r15_16 = var_378
                                    int32_t r8_23 = *(r14_6 + 0x1c)
                                    *(r14_6 + 0x18) = rsi_10.d
                                    
                                    if (rsi_10.d != 0 || r8_23 != 0)
                                        sub_141add040(r14_6 + 0x10, rsi_10.d, r8_23)
                                        memcpy(*(r14_6 + 0x10), r15_16, (rsi_10 << 7).d)
                                    else
                                        *(r14_6 + 0x1c) = 0
                                
                                if (r14_6 + 0x20 != &var_368)
                                    int32_t i_20 = *(r14_6 + 0x28)
                                    uint64_t rdi_27 = *(r14_6 + 0x20)
                                    
                                    if (i_20 != 0)
                                        int32_t i_9
                                        
                                        do
                                            int64_t rcx_86 = *rdi_27
                                            
                                            if (rcx_86 != 0)
                                                sub_140a74f90(rcx_86)
                                            
                                            rdi_27 += 0x10
                                            i_9 = i_20
                                            i_20 -= 1
                                        while (i_9 != 1)
                                    
                                    var_5a8_1.d = 0
                                    sub_141925e50(r14_6 + 0x20, var_368, var_360_1, 
                                        *(r14_6 + 0x2c), var_5a8_1.d)
                                
                                sub_140780c40(r14_6 + 0x30, &var_358)
                                int64_t var_348
                                sub_141c94f90(r14_6 + 0x40, &var_348)
                                r12 = arg1
                                *(r14_6 + 0x90) = var_2f8
                                *(r14_6 + 0x98) = var_2f0.o
                                *(r14_6 + 0xa8) = var_2e0.o
                                *(r14_6 + 0xb8) = var_2d0
                                int64_t rsi_11 = sx.q(r12[0x1d].d)
                                int32_t rax_60 = (rsi_11 + 1).d
                                r12[0x1d].d = rax_60
                                
                                if (rax_60 s> *(r12 + 0xec))
                                    sub_1405a4d70(&r12[0x1c])
                                
                                *(r12[0x1c] + (rsi_11 << 3)) = var_520
                                int64_t* var_468 = &var_510
                                void** var_460_1 = &var_520
                                void var_47c
                                sub_140bbe950(&r12[0x28], &var_47c, &var_468, nullptr)
                        else if (var_597 != 0)
                            int64_t rdi_28 = sx.q(var_548_1.d)
                            int32_t rax_62 = (rdi_28 + 1).d
                            var_548_1.d = rax_62
                            
                            if (rax_62 s> var_548_1:4.d)
                                sub_1405a4df0(&var_550)
                            
                            int64_t* rdi_29 = var_550 + rdi_28 * 0x18
                            sub_140596d10(rdi_29, r15_6)
                            rdi_29[2] = r15_6[2]
                        
                    label_141cae3f7:
                        r14 = var_4d8
                        uint64_t rdi_30 = r14
                        
                        if (i_19 != 0)
                            int32_t i_10
                            
                            do
                                int64_t rcx_96 = *rdi_30
                                
                                if (rcx_96 != 0)
                                    sub_140a74f90(rcx_96)
                                
                                rdi_30 += 0x10
                                i_10 = i_19
                                i_19 -= 1
                            while (i_10 != 1)
                        
                        if (r14 != 0)
                            sub_140a74f90(r14)
                        
                        arg2 = sub_140cad990(&var_388)
                        
                        if (r13_3 != 0)
                            arg2 = sub_140a74f90(r13_3)
                        
                        r15_6 = var_528_1
                    
                    r15_6 = &r15_6[3]
                    var_528_1 = r15_6
                while (r15_6 != rbx_2)
                
                lpCriticalSection = &r12[1]
            
            int32_t i_21 = var_568_1.d
            int64_t* rdi_31 = var_570
            int32_t rsi_12
            
            if (var_568_1:4.d s< 0)
                int32_t i_11
                
                do
                    int64_t rcx_101 = *rdi_31
                    
                    if (rcx_101 != 0)
                        arg2 = sub_140a74f90(rcx_101)
                    
                    rdi_31 = &rdi_31[3]
                    i_11 = i_21
                    i_21 -= 1
                while (i_11 != 1)
                rsi_12 = 0
                var_568_1.d = 0
                
                if (var_568_1:4.d != 0)
                    sub_1405a5130(&var_570, 0)
                    rsi_12 = var_568_1.d
            else
                int32_t i_12
                
                do
                    int64_t rcx_100 = *rdi_31
                    
                    if (rcx_100 != 0)
                        arg2 = sub_140a74f90(rcx_100)
                    
                    rdi_31 = &rdi_31[3]
                    i_12 = i_21
                    i_21 -= 1
                while (i_12 != 1)
                rsi_12 = 0
                var_568_1.d = 0
            
            int32_t rax_65 = var_548_1.d
            
            if (rax_65 != 0)
                int32_t rdx_57 = rax_65 + rsi_12
                
                if (rdx_57 s> var_568_1:4.d)
                    sub_1405a5130(&var_570, rdx_57)
                    rsi_12 = var_568_1.d
                
                void* rdx_58 = var_550
                r14 = zx.q(var_548_1.d)
                void* rdi_32 = rdx_58 + 0x10
                void* r15_21 = sx.q(rsi_12) * 0x18 - rdx_58 + var_570
                int32_t i_13
                
                do
                    sub_140596d10(rdi_32 - 0x10 + r15_21, rdi_32 - 0x10)
                    *(r15_21 + rdi_32) = *rdi_32
                    rdi_32 += 0x18
                    i_13 = r14.d
                    r14 = zx.q(r14.d - 1)
                while (i_13 != 1)
                var_568_1.d = rsi_12 + var_548_1.d
            
            int32_t i_22 = var_548_1.d
            void* rdi_33 = var_550
            
            if (var_548_1:4.d s< 0)
                if (i_22 != 0)
                    int32_t i_14
                    
                    do
                        int64_t rcx_107 = *rdi_33
                        
                        if (rcx_107 != 0)
                            arg2 = sub_140a74f90(rcx_107)
                        
                        rdi_33 += 0x18
                        i_14 = i_22
                        i_22 -= 1
                    while (i_14 != 1)
                
                bool cond:8_1 = var_548_1:4.d == 0
                var_548_1.d = 0
                
                if (not(cond:8_1))
                    sub_1405a5130(&var_550, 0)
            else
                if (i_22 != 0)
                    int32_t i_15
                    
                    do
                        int64_t rcx_106 = *rdi_33
                        
                        if (rcx_106 != 0)
                            arg2 = sub_140a74f90(rcx_106)
                        
                        rdi_33 += 0x18
                        i_15 = i_22
                        i_22 -= 1
                    while (i_15 != 1)
                
                var_548_1.d = 0
            
            if (r12[0x19].b != 0 && var_53c s>= 0xc350)
                void var_2b8
                sub_141c93490(&var_2b8, *var_4c8, &var_4c0[0x1a], arg2)
                int32_t var_4f0 = 6
                int512_t zmm1_6 =
                    sub_141cb2c90(var_4c0, &var_2b8, sub_141cb4090(&var_2b8, &var_4f0, arg2))
                *var_4b8 = 0
                arg2 = sub_141c94860(&var_2b8, zmm1_6)
        
        int32_t i_23 = var_548_1.d
        void* rdi_35 = var_550
        
        if (i_23 != 0)
            int32_t i_16
            
            do
                int64_t rcx_115 = *rdi_35
                
                if (rcx_115 != 0)
                    arg2 = sub_140a74f90(rcx_115)
                
                rdi_35 += 0x18
                i_16 = i_23
                i_23 -= 1
            while (i_16 != 1)
        
        void* rdx_63 = var_550
        rsi_1 = &r12[0xc]
        r15 = &r12[0xe]
        r13 = &r12[0x10]
        
        if (rdx_63 != 0)
            arg2 = sub_140a74f90(rdx_63)
            r15 = &r12[0xe]
            r13 = &r12[0x10]
            break
