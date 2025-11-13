// 函数: sub_140f5e6f0
// 地址: 0x140f5e6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_718
int64_t rax_1 = __security_cookie ^ &var_718
int64_t* r15 = nullptr
int32_t var_6b4 = arg4
int32_t var_6b0 = 0
char var_6b8 = arg3
char* result

if (arg1[0x68].b != 0 && arg1[0x58] != 0)
    result = arg1[0x59]

if (arg1[0x68].b == 0 || arg1[0x58] == 0 || result == 0 || *(result + 8) s<= 0)
    result.b = 0
else
    result.b = 1

if (result.b != arg2)
    if (arg2 == 0)
        if (arg1[0x58] != 0)
            int64_t* rbx_27 = arg1[0x59]
            
            if (rbx_27 != 0)
                int32_t rax_144 = rbx_27[1].d
                
                if (rax_144 s> 0)
                    if (rbx_27 != 0)
                        if (rax_144 != 0)
                            rbx_27[1].d = rax_144 + 1
                            rax_144.b = 1
                        
                        if (rax_144.b == 0)
                            rbx_27 = nullptr
                        
                        if (rbx_27 != 0)
                            r15 = arg1[0x58]
                    
                    (*(*r15 + 0x38))(r15)
                    
                    if (rbx_27 != 0)
                        rbx_27[1].d -= 1
                        
                        if (rbx_27[1].d == 1)
                            (**rbx_27)(rbx_27)
                            int32_t temp2_1 = *(rbx_27 + 0xc)
                            *(rbx_27 + 0xc) -= 1
                            
                            if (temp2_1 == 1)
                                (*(*rbx_27 + 8))(rbx_27, 1)
        
        result = sub_140f5bee0(arg1)
    else
        if (arg1[0x61].d != 0)
            int64_t* rcx = arg1[0x60]
            
            if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
                int64_t* rcx_1
                
                if (arg1[0x61].d == 0)
                    rcx_1 = nullptr
                else
                    rcx_1 = arg1[0x60]
                
                void var_478
                (*(*rcx_1 + 0x48))(rcx_1, &var_478)
                (*(*arg1 + 0x240))(arg1, &var_478)
        
        if (arg1[0x5c] != 0)
            if (arg1[0x63].d != 0)
                int64_t* rcx_3 = arg1[0x62]
                
                if (rcx_3 != 0)
                    char rax_7
                    int64_t rdx_2
                    rax_7, rdx_2 = (*(*rcx_3 + 0x28))(rcx_3)
                    
                    if (rax_7 != 0)
                        int64_t* rcx_4
                        
                        if (arg1[0x63].d == 0)
                            rcx_4 = nullptr
                        else
                            rcx_4 = arg1[0x62]
                        
                        rdx_2.b = 1
                        (*(*rcx_4 + 0x48))(rcx_4, rdx_2)
            
            void var_428
            sub_140d947e0(&var_428)
            int64_t* rbx_1 = arg1[2]
            int64_t (* rcx_6)(int64_t* arg1, void* arg2) = nullptr
            
            if (rbx_1 != 0)
                int32_t rax_9 = rbx_1[1].d
                
                if (rax_9 != 0)
                    rbx_1[1].d = rax_9 + 1
                    rax_9.b = 1
                
                if (rax_9.b == 0)
                    rbx_1 = nullptr
                
                if (rbx_1 != 0)
                    rcx_6 = arg1[1]
            
            int64_t (* var_618)(int64_t* arg1, void* arg2) = rcx_6
            int64_t* var_610_1 = rbx_1
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            int128_t zmm0
            int128_t zmm6_1
            zmm0, zmm6_1 = sub_140e649d0(data_143e29f28, &var_618, &var_428, data_1439ae51c, arg5)
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp4_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            if (sub_140db3500(&var_428) != 0)
                void var_420
                void* r13_1 = &var_420
                void* var_300
                
                if (var_300 != 0)
                    r13_1 = var_300
                
                int128_t var_48_1 = zmm6_1
                int32_t var_2f8
                int64_t rdi_1 = sx.q(var_2f8) * 9
                zmm6_1 = *(r13_1 + (rdi_1 << 3) - 0x40)
                int64_t var_698 = rdi_1
                int128_t zmm0_1
                int128_t zmm6_2
                zmm0_1, zmm6_2 = sub_140e25880(arg1, zmm6_1, zmm0)
                int64_t* rax_15 = arg1[0x5d]
                int64_t* rcx_12 = arg1[0x5c]
                int64_t* var_6a8 = rcx_12
                
                if (rax_15 != 0)
                    rax_15[1].d += 1
                    rcx_12 = var_6a8
                
                sub_140e25880(rcx_12, zmm6_2, zmm0_1)
                int64_t var_690
                sub_140e13cf0(var_6a8, &var_690)
                int32_t* rax_16 = sub_140ebd5a0(&arg1[0x64])
                uint128_t zmm0_2 = zx.o(*(r13_1 + (rdi_1 << 3) - 0x3c))
                int32_t r12_1 = 2
                uint128_t zmm1_3 = zx.o(var_690)
                int32_t rcx_15 = *rax_16
                uint64_t var_680 = zmm0_2.q
                uint64_t var_688 = zmm1_3.q
                var_6b0 = 0
                uint128_t zmm2_1
                uint128_t zmm3_1
                
                if (rcx_15 - 3 u<= 1)
                    zmm0_2 = var_690:4.d
                    var_6b0 = 1
                    var_688 = (_mm_unpacklo_ps(
                        __maxss_xmmss_memss((*(r13_1 + (rdi_1 << 3) - 0x48)).d, var_690.d), 
                        zmm0_2.q)).q
                else if (rcx_15 == 0)
                    var_6b0 = 2
                else if (rcx_15 == 5)
                    var_6b0 = 3
                    zmm2_1 = *(r13_1 + (rdi_1 << 3) - 0x44)
                    zmm3_1 = *(r13_1 + (rdi_1 << 3) - 0x48)
                    zmm1_3.d = zmm2_1.d f* *(r13_1 + (rdi_1 << 3) - 0x24)
                    zmm0_2.d = zmm3_1.d f* *(r13_1 + (rdi_1 << 3) - 0x2c)
                    zmm3_1.d = zmm3_1.d f* *(r13_1 + (rdi_1 << 3) - 0x28)
                    zmm2_1.d = zmm2_1.d f* *(r13_1 + (rdi_1 << 3) - 0x20)
                    zmm1_3.d = zmm1_3.d f+ zmm0_2.d
                    zmm3_1.d = zmm3_1.d f+ zmm2_1.d
                    zmm0_2 = _mm_unpacklo_ps(zmm1_3, zmm3_1.q)
                    var_688 = zmm0_2.q
                
                uint128_t var_600
                uint128_t var_510
                char* rdx_5
                
                if (*(arg1 + 0x33c) == 0)
                    int64_t rdi_2 = sx.q(var_2f8 - 1)
                    char var_608
                    
                    if (var_2f8 - 1 s< 0)
                    label_140f5eac1:
                        zmm0_2 = zx.o(0)
                        var_608 = 1
                        var_600 = zmm0_2
                        int16_t var_5f0_1 = 0x100
                    else
                        int64_t r14_2 = rdi_2 * 0x48
                        
                        while (true)
                            void* rcx_16 = &var_420
                            
                            if (var_300 != 0)
                                rcx_16 = var_300
                            
                            int64_t* rcx_17 = *(rcx_16 + r14_2 + 0x38)
                            char var_538
                            (*(*rcx_17 + 0x120))(rcx_17, &var_538)
                            char rax_23 = var_538
                            int64_t* var_528
                            
                            if (rax_23 != 0)
                                var_608 = rax_23
                                int64_t var_530
                                var_600.q = var_530
                                var_600:8.q = var_528
                                int16_t var_5f0
                                int64_t var_520
                                var_5f0.b = var_520.b
                                var_5f0:1.b = (var_520 u>> 8).b
                                break
                            
                            if (var_528 != 0)
                                var_528[1].d -= 1
                                
                                if (var_528[1].d == 1)
                                    (**var_528)(var_528)
                                    int32_t temp12_1 = *(var_528 + 0xc)
                                    *(var_528 + 0xc) -= 1
                                    
                                    if (temp12_1 == 1)
                                        (*(*var_528 + 8))(var_528, 1)
                            
                            r14_2 -= 0x48
                            int64_t temp9_1 = rdi_2
                            rdi_2 -= 1
                            
                            if (temp9_1 - 1 s< 0)
                                goto label_140f5eac1
                    
                    rdi_1 = var_698
                    rdx_5 = &var_608
                else
                    char var_518
                    rdx_5 = &var_518
                    zmm0_2 = zx.o(0)
                    char var_500_1 = *(arg1 + 0x33b)
                    var_510 = zmm0_2
                    var_518 = 1
                    r12_1 = 1
                    char var_4ff_1 = 1
                
                sub_140f25ae0(&arg1[0x68], rdx_5)
                
                if ((r12_1.b & 2) != 0)
                    int64_t* rbx_3 = var_600:8.q
                    r12_1 &= 0xfffffffd
                    
                    if (rbx_3 != 0)
                        rbx_3[1].d -= 1
                        
                        if (rbx_3[1].d == 1)
                            (**rbx_3)(rbx_3)
                            int32_t temp8_1 = *(rbx_3 + 0xc)
                            *(rbx_3 + 0xc) -= 1
                            
                            if (temp8_1 == 1)
                                (*(*rbx_3 + 8))(rbx_3, 1)
                
                if ((r12_1.b & 1) != 0)
                    int64_t* rbx_4 = var_510:8.q
                    
                    if (rbx_4 != 0)
                        rbx_4[1].d -= 1
                        
                        if (rbx_4[1].d == 1)
                            (**rbx_4)(rbx_4)
                            int32_t temp11_1 = *(rbx_4 + 0xc)
                            *(rbx_4 + 0xc) -= 1
                            
                            if (temp11_1 == 1)
                                (*(*rbx_4 + 8))(rbx_4, 1)
                
                char rax_30 = arg1[0x6b].b
                uint64_t var_660
                uint128_t var_658
                
                if (*(arg1 + 0x361) != 0)
                    int64_t* rbx_9
                    char var_6f8
                    int32_t var_6e8
                    
                    if (rax_30 != 0)
                        void var_4f8
                        int64_t* rax_49 = sub_140db22a0(&var_428, &var_4f8)
                        arg1[0x56] = *rax_49
                        void* rbx_10 = rax_49[1]
                        int64_t* rcx_41 = arg1[0x57]
                        
                        if (rbx_10 != rcx_41)
                            if (rbx_10 != 0)
                                *(rbx_10 + 0xc) += 1
                                rcx_41 = arg1[0x57]
                            
                            if (rcx_41 != 0)
                                int32_t temp18_1 = *(rcx_41 + 0xc)
                                *(rcx_41 + 0xc) -= 1
                                
                                if (temp18_1 == 1)
                                    (*(*rcx_41 + 8))(rcx_41, 1)
                            
                            arg1[0x57] = rbx_10
                        
                        int64_t* var_4f0
                        
                        if (var_4f0 != 0)
                            var_4f0[1].d -= 1
                            
                            if (var_4f0[1].d == 1)
                                (**var_4f0)(var_4f0)
                                int32_t temp17_1 = *(var_4f0 + 0xc)
                                *(var_4f0 + 0xc) -= 1
                                
                                if (temp17_1 == 1)
                                    (*(*var_4f0 + 8))(var_4f0, 1)
                        
                        char r12_3 = var_6b8
                        int32_t r13_2 = var_6b4
                        
                        if (r12_3 != 0)
                            zmm0_2 = sub_140e852d0(data_143e29f28, zx.q(r13_2))
                        
                        rbx_9 = arg1[2]
                        int64_t rdi_3 = 0
                        
                        if (rbx_9 != 0)
                            int32_t rax_53 = rbx_9[1].d
                            
                            if (rax_53 != 0)
                                rbx_9[1].d = rax_53 + 1
                                rax_53.b = 1
                            
                            if (rax_53.b == 0)
                                rbx_9 = nullptr
                            
                            if (rbx_9 != 0)
                                int32_t rax_54 = rbx_9[1].d
                                rdi_3 = arg1[1]
                                rbx_9[1].d = rax_54
                                
                                if (rax_54 == 0)
                                    (**rbx_9)(rbx_9)
                                    int32_t temp33_1 = *(rbx_9 + 0xc)
                                    *(rbx_9 + 0xc) -= 1
                                    
                                    if (temp33_1 == 1)
                                        (*(*rbx_9 + 8))(rbx_9, 1)
                        
                        int64_t var_5e8
                        
                        if (rdi_3 == 0)
                            var_5e8 = 0
                        else
                            var_5e8 = rdi_3 + 0x2a8
                        
                        if (rbx_9 != 0)
                            rbx_9[1].d += 1
                        
                        int64_t var_5a8 = rdi_3
                        
                        if (rbx_9 != 0)
                            rbx_9[1].d += 1
                        
                        char var_6e0
                        var_6e0.q = &var_6b0
                        var_6e8.q = &arg1[0x5e]
                        var_6f8.q = &var_5e8
                        void*** var_598
                        sub_140e802f0(data_143e29f28, &var_598, &var_5a8, &var_428, zmm0_2, 
                            var_6f8, &var_6a8, var_6e8, var_6e0, *(arg1 + 0x359), *(arg1 + 0x33a))
                        
                        if (rbx_9 != 0)
                            rbx_9[1].d -= 1
                            
                            if (rbx_9[1].d == 1)
                                (**rbx_9)(rbx_9)
                                int32_t temp41_1 = *(rbx_9 + 0xc)
                                *(rbx_9 + 0xc) -= 1
                                
                                if (temp41_1 == 1)
                                    (*(*rbx_9 + 8))(rbx_9, 1)
                        
                        if (rbx_9 != 0)
                            rbx_9[1].d -= 1
                            
                            if (rbx_9[1].d == 1)
                                (**rbx_9)(rbx_9)
                                int32_t temp45_1 = *(rbx_9 + 0xc)
                                *(rbx_9 + 0xc) -= 1
                                
                                if (temp45_1 == 1)
                                    (*(*rbx_9 + 8))(rbx_9, 1)
                        
                        arg1[0x58] = var_598
                        int64_t* rcx_52 = arg1[0x59]
                        int64_t* var_590
                        
                        if (var_590 != rcx_52)
                            if (var_590 != 0)
                                *(var_590 + 0xc) += 1
                                rcx_52 = arg1[0x59]
                            
                            if (rcx_52 != 0)
                                int32_t temp48_1 = *(rcx_52 + 0xc)
                                *(rcx_52 + 0xc) -= 1
                                
                                if (temp48_1 == 1)
                                    (*(*rcx_52 + 8))(rcx_52, 1)
                            
                            arg1[0x59] = var_590
                        
                        int64_t* rdi_7 = arg1[0x5f]
                        int64_t var_558 = arg1[0x5e]
                        int64_t* var_550_1 = rdi_7
                        
                        if (rdi_7 != 0)
                            rdi_7[1].d += 1
                        
                        sub_140de1b90(*(arg1[0x71] + 8) + 0x10, &var_558)
                        
                        if (rdi_7 != 0)
                            rdi_7[1].d -= 1
                            
                            if (rdi_7[1].d == 1)
                                (**rdi_7)(rdi_7)
                                int32_t temp51_1 = *(rdi_7 + 0xc)
                                *(rdi_7 + 0xc) -= 1
                                
                                if (temp51_1 == 1)
                                    (*(*rdi_7 + 8))(rdi_7, 1)
                        
                        if (r12_3 != 0)
                            uint128_t zmm0_4 = var_6a8.o
                            var_658 = zmm0_4
                            uint128_t temp0_4 = _mm_bsrli_si128(zmm0_4, 8)
                            void* rax_70 = temp0_4.q
                            
                            if (rax_70 != 0)
                                *(rax_70 + 8) += 1
                            
                            sub_140e8ab30(data_143e29f28, r13_2, &var_658, 2, temp0_4)
                            int64_t* rdi_8 = var_658:8.q
                            
                            if (rdi_8 != 0)
                                rdi_8[1].d -= 1
                                
                                if (rdi_8[1].d == 1)
                                    (**rdi_8)(rdi_8)
                                    int32_t temp61_1 = *(rdi_8 + 0xc)
                                    *(rdi_8 + 0xc) -= 1
                                    
                                    if (temp61_1 == 1)
                                        (*(*rdi_8 + 8))(rdi_8, 1)
                        
                        if (var_590 != 0)
                            var_590[1].d -= 1
                            
                            if (var_590[1].d == 1)
                                (**var_590)(var_590)
                                int32_t temp59_1 = *(var_590 + 0xc)
                                *(var_590 + 0xc) -= 1
                                
                                if (temp59_1 == 1)
                                    (*(*var_590 + 8))(var_590, 1)
                    else
                        int64_t* rcx_25 = arg1[2]
                        void* const rdx_7 = nullptr
                        var_6b4.w = 0x100
                        
                        if (rcx_25 != 0)
                            int32_t rax_31 = rcx_25[1].d
                            
                            if (rax_31 != 0)
                                rcx_25[1].d = rax_31 + 1
                                rax_31.b = 1
                            
                            if (rax_31.b == 0)
                                rcx_25 = nullptr
                            
                            if (rcx_25 != 0)
                                rdx_7 = arg1[1]
                        
                        char rax_32 = *(arg1 + 0x33a)
                        char r12_2 = var_6b8
                        char* var_6d0_1 = &var_6b4
                        uint64_t* var_6d8_1 = &var_688
                        var_6e8.q = &var_6b0
                        uint64_t* var_6f0_1 = &var_680
                        void* const var_5b8 = rdx_7
                        var_6f8.q = &var_6a8
                        int64_t* var_678
                        sub_140e80850(data_143e29f28, &var_678, &var_5b8, &var_428, zmm0_2, 
                            var_6f8, var_6f0_1, var_6e8, r12_2, var_6d8_1, var_6d0_1, rax_32)
                        
                        if (rcx_25 != 0)
                            rcx_25[1].d -= 1
                            
                            if (rcx_25[1].d == 1)
                                (**rcx_25)(rcx_25)
                                int32_t temp19_1 = *(rcx_25 + 0xc)
                                *(rcx_25 + 0xc) -= 1
                                
                                if (temp19_1 == 1)
                                    (*(*rcx_25 + 8))(rcx_25, 1)
                        
                        int64_t* rdx_9 = var_678
                        int64_t* var_670
                        
                        if (rdx_9 != 0)
                            arg1[0x58] = rdx_9
                            int64_t* rcx_29 = arg1[0x59]
                            
                            if (var_670 != rcx_29)
                                if (var_670 != 0)
                                    *(var_670 + 0xc) += 1
                                    rcx_29 = arg1[0x59]
                                    rdx_9 = var_678
                                
                                if (rcx_29 != 0)
                                    int32_t temp27_1 = *(rcx_29 + 0xc)
                                    *(rcx_29 + 0xc) -= 1
                                    
                                    if (temp27_1 == 1)
                                        (*(*rcx_29 + 8))(rcx_29, 1)
                                    
                                    rdx_9 = var_678
                                
                                arg1[0x59] = var_670
                            
                            var_610_1.d = 0
                            var_618 = sub_140f51940
                            int64_t rax_36 = *rdx_9
                            int128_t var_468 = var_618.o
                            sub_140f1a950((*(rax_36 + 0x28))(rdx_9), &var_660, arg1, &var_468)
                            int64_t* rcx_32 = var_678
                            void var_458
                            int64_t* rax_39 = (*(*rcx_32 + 0x18))(rcx_32, &var_458)
                            arg1[0x56] = *rax_39
                            void* rbx_7 = rax_39[1]
                            int64_t* rcx_34 = arg1[0x57]
                            
                            if (rbx_7 != rcx_34)
                                if (rbx_7 != 0)
                                    *(rbx_7 + 0xc) += 1
                                    rcx_34 = arg1[0x57]
                                
                                if (rcx_34 != 0)
                                    int32_t temp32_1 = *(rcx_34 + 0xc)
                                    *(rcx_34 + 0xc) -= 1
                                    
                                    if (temp32_1 == 1)
                                        (*(*rcx_34 + 8))(rcx_34, 1)
                                
                                arg1[0x57] = rbx_7
                            
                            int64_t* var_450
                            
                            if (var_450 != 0)
                                var_450[1].d -= 1
                                
                                if (var_450[1].d == 1)
                                    (**var_450)(var_450)
                                    int32_t temp31_1 = *(var_450 + 0xc)
                                    *(var_450 + 0xc) -= 1
                                    
                                    if (temp31_1 == 1)
                                        (*(*var_450 + 8))(var_450, 1)
                        
                        rbx_9 = var_670
                    
                    if (rbx_9 != 0)
                        rbx_9[1].d -= 1
                        
                        if (rbx_9[1].d == 1)
                            (**rbx_9)(rbx_9)
                            int32_t temp25_1 = *(rbx_9 + 0xc)
                            *(rbx_9 + 0xc) -= 1
                            
                            if (temp25_1 == 1)
                                (*(*rbx_9 + 8))(rbx_9, 1)
                else if (rax_30 != 0)
                    void var_498
                    int64_t* rax_115 = sub_140db22a0(&var_428, &var_498)
                    arg1[0x56] = *rax_115
                    sub_140ea4170(&arg1[0x57], rax_115[1])
                    int64_t* var_490
                    
                    if (var_490 != 0)
                        var_490[1].d -= 1
                        
                        if (var_490[1].d == 1)
                            (**var_490)(var_490)
                            int32_t temp14_1 = *(var_490 + 0xc)
                            *(var_490 + 0xc) -= 1
                            
                            if (temp14_1 == 1)
                                (*(*var_490 + 8))(var_490, 1)
                    
                    char r12_6 = var_6b8
                    
                    if (r12_6 != 0)
                        sub_140e852d0(data_143e29f28, zx.q(var_6b4))
                    
                    int64_t* rdi_17 = arg1[2]
                    int64_t rbx_24 = 0
                    
                    if (rdi_17 != 0)
                        int32_t rax_118 = rdi_17[1].d
                        
                        if (rax_118 != 0)
                            rdi_17[1].d = rax_118 + 1
                            rax_118.b = 1
                        
                        if (rax_118.b == 0)
                            rdi_17 = nullptr
                        
                        if (rdi_17 != 0)
                            int32_t rax_119 = rdi_17[1].d
                            rbx_24 = arg1[1]
                            rdi_17[1].d = rax_119
                            
                            if (rax_119 == 0)
                                (**rdi_17)(rdi_17)
                                int32_t temp28_1 = *(rdi_17 + 0xc)
                                *(rdi_17 + 0xc) -= 1
                                
                                if (temp28_1 == 1)
                                    (*(*rdi_17 + 8))(rdi_17, 1)
                    
                    void*** rax_122 = j_sub_140a82f30(0x58)
                    void*** r13_4
                    
                    if (rax_122 == 0)
                        r13_4 = nullptr
                    else
                        int64_t* var_540_1 = rdi_17
                        int64_t rcx_113 = rbx_24 + 0x2a8
                        
                        if (rbx_24 == 0)
                            rcx_113 = 0
                        
                        int64_t var_548 = rcx_113
                        
                        if (rdi_17 != 0)
                            rdi_17[1].d += 1
                        
                        r13_4 = sub_140e50ed0(rax_122, &var_548, &var_6a8, *(arg1 + 0x33a))
                    
                    void*** rax_124 = sub_140dd3780(r13_4)
                    int64_t* rcx_116 = &r13_4[1]
                    
                    if (r13_4 == 0)
                        rcx_116 = nullptr
                    
                    if (rcx_116 != 0)
                        void* rax_125
                        
                        if (*rcx_116 != 0)
                            rax_125 = rcx_116[1]
                        
                        if (*rcx_116 == 0 || rax_125 == 0 || *(rax_125 + 8) s<= 0)
                            if (rax_124 != 0)
                                rax_124[1].d += 1
                            
                            *rcx_116 = r13_4
                            sub_140ea4170(&rcx_116[1], rax_124)
                            
                            if (rax_124 != 0)
                                rax_124[1].d -= 1
                                
                                if (rax_124[1].d == 1)
                                    (**rax_124)(rax_124)
                                    int32_t temp43_1 = *(rax_124 + 0xc)
                                    *(rax_124 + 0xc) -= 1
                                    
                                    if (temp43_1 == 1)
                                        (*rax_124)[1](rax_124, 1)
                    
                    void*** var_628 = r13_4
                    void*** r14_6 = rax_124
                    
                    if (rax_124 != 0)
                        rax_124[1].d += 1
                    
                    if (&var_628 != &arg1[0x5a])
                        var_628.o = *(arg1 + 0x2d0)
                        r14_6 = rax_124
                        *(arg1 + 0x2d0) = var_628.o
                    
                    if (r14_6 != 0)
                        r14_6[1].d -= 1
                        
                        if (r14_6[1].d == 1)
                            (**r14_6)(r14_6)
                            int32_t temp42_1 = *(r14_6 + 0xc)
                            *(r14_6 + 0xc) -= 1
                            
                            if (temp42_1 == 1)
                                (*r14_6)[1](r14_6, 1)
                    
                    arg1[0x58] = arg1[0x5a]
                    sub_140ea4170(&arg1[0x59], arg1[0x5b])
                    sub_140de1b90(*(arg1[0x71] + 8) + 0x10, &var_6a8)
                    
                    if (r12_6 != 0)
                        uint128_t zmm0_9 = var_6a8.o
                        uint128_t var_568 = zmm0_9
                        uint128_t temp0_10 = _mm_bsrli_si128(zmm0_9, 8)
                        void* rax_132 = temp0_10.q
                        
                        if (rax_132 != 0)
                            *(rax_132 + 8) += 1
                        
                        sub_140e8ab30(data_143e29f28, var_6b4, &var_568, 2, temp0_10)
                        int64_t* r14_7 = var_568:8.q
                        
                        if (r14_7 != 0)
                            r14_7[1].d -= 1
                            
                            if (r14_7[1].d == 1)
                                (**r14_7)(r14_7)
                                int32_t temp50_1 = *(r14_7 + 0xc)
                                *(r14_7 + 0xc) -= 1
                                
                                if (temp50_1 == 1)
                                    (*(*r14_7 + 8))(r14_7, 1)
                    
                    if (rax_124 != 0)
                        *(rax_124 + 0xc) += 1
                    
                    int64_t r14_8 = sx.q(data_143e2a258)
                    int32_t rax_135 = (r14_8 + 1).d
                    bool cond:6_1 = rax_135 s<= data_143e2a25c
                    data_143e2a258 = rax_135
                    
                    if (not(cond:6_1))
                        sub_1405a4f90(&data_143e2a250)
                    
                    int64_t* rax_138 = (r14_8 << 4) + data_143e2a250
                    *rax_138 = r13_4
                    rax_138[1] = rax_124
                    
                    if (rax_124 != 0)
                        rax_124[1].d -= 1
                        
                        if (rax_124[1].d == 1)
                            (**rax_124)(rax_124)
                            int32_t temp53_1 = *(rax_124 + 0xc)
                            *(rax_124 + 0xc) -= 1
                            
                            if (temp53_1 == 1)
                                (*rax_124)[1](rax_124, 1)
                    
                    if (rdi_17 != 0)
                        rdi_17[1].d -= 1
                        
                        if (rdi_17[1].d == 1)
                            (**rdi_17)(rdi_17)
                            int32_t temp56_1 = *(rdi_17 + 0xc)
                            *(rdi_17 + 0xc) -= 1
                            
                            if (temp56_1 == 1)
                                (*(*rdi_17 + 8))(rdi_17, 1)
                else
                    zmm2_1 = var_680.d
                    zmm0_2 = var_680:4.d
                    zmm3_1.d = zmm2_1.d f+ *(r13_1 + (rdi_1 << 3) - 0x48)
                    int64_t* rcx_62 = data_143e29f28
                    zmm1_3.d = zmm0_2.d f+ *(r13_1 + (rdi_1 << 3) - 0x44)
                    int64_t* rbx_12 = var_6a8
                    int32_t var_5d0_1 = zmm3_1.d
                    int32_t rdi_10
                    rdi_10.b = var_6b0 != 3
                    int32_t var_5d8 = zmm2_1.d
                    int32_t var_5cc_1 = zmm1_3.d
                    int32_t var_5d4_1 = zmm0_2.d
                    (*(*rcx_62 + 0x48))(rcx_62)
                    sub_140e25880(rbx_12, zmm0_2, zmm0_2)
                    sub_140e13cf0(var_6a8, &var_698)
                    int64_t* rcx_65 = data_143e29f28
                    int64_t var_668
                    (*(*rcx_65 + 0x1b8))(rcx_65, &var_668, &var_5d8, &var_698, 0, &data_143dbb1f0, 
                        rdi_10)
                    char r12_4 = var_6b8
                    
                    if (r12_4 != 0)
                        sub_140e852d0(data_143e29f28, zx.q(var_6b4))
                    
                    int64_t* rdi_11 = var_6a8
                    
                    if (rax_15 != 0)
                        rax_15[1].d += 1
                    
                    void var_2c8
                    int64_t* rax_77 = sub_140dd5ed0(&var_2c8)
                    int64_t* var_648 = rdi_11
                    int64_t* rdi_12 = rax_15
                    rax_77[0x34].d = 1
                    *(rax_77 + 0x202) = 0x101
                    uint128_t zmm2_2 = zx.o(var_668)
                    *(rax_77 + 0x1e4) = var_668.d.d
                    *(rax_77 + 0x1e1) = 0
                    rax_77[0x3d].d = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55).d
                    uint128_t zmm0_5 = var_698.d
                    var_660 = zmm2_2.q
                    zmm2_2 = zx.o(var_698)
                    *(rax_77 + 0x1ec) = zmm0_5.d
                    *(rax_77 + 0x1fc) = 0x3f800000
                    rax_77[0x3f].d = 1
                    *(rax_77 + 0x205) = r12_4
                    rax_77[0x3e].d = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55).d
                    rax_77[0x41].d = zx.d(r12_4)
                    var_660 = zmm2_2.q
                    
                    if (rax_15 != 0)
                        rax_15[1].d += 1
                    
                    if (&var_648 != &rax_77[0x4c])
                        uint128_t zmm1_4 = var_648.o
                        uint128_t var_438_1 = zmm1_4
                        var_648.o = *(rax_77 + 0x260)
                        rdi_12 = rax_15
                        *(rax_77 + 0x260) = zmm1_4
                    
                    if (rdi_12 != 0)
                        rdi_12[1].d -= 1
                        
                        if (rdi_12[1].d == 1)
                            (**rdi_12)(rdi_12)
                            int32_t temp23_1 = *(rdi_12 + 0xc)
                            *(rdi_12 + 0xc) -= 1
                            
                            if (temp23_1 == 1)
                                (*(*rdi_12 + 8))(rdi_12, 1)
                    
                    if (rax_15 != 0)
                        rax_15[1].d -= 1
                        
                        if (rax_15[1].d == 1)
                            (**rax_15)(rax_15)
                            int32_t temp29_1 = *(rax_15 + 0xc)
                            *(rax_15 + 0xc) -= 1
                            
                            if (temp29_1 == 1)
                                (*(*rax_15 + 8))(rax_15, 1)
                    
                    void*** rax_84 = j_sub_140a82f30(0xa88)
                    void*** rdi_13 = rax_84
                    
                    if (rax_84 == 0)
                        rdi_13 = nullptr
                    else
                        rax_84[1].d = 1
                        *(rax_84 + 0xc) = 1
                        *rdi_13 = &data_142ecd2f8
                        
                        if (rdi_13 != -0x10)
                            sub_140dde300(&rdi_13[2])
                    
                    int64_t* var_588 = &rdi_13[2]
                    sub_140918950(&var_588, &rdi_13[2])
                    char var_6f8_1
                    var_6f8_1.q = 0xa78
                    char* var_578_1 = &var_6b8
                    int128_t var_5c8
                    sub_140de51f0(&var_588, &var_5c8, rax_77, sub_140e23ed0(&rdi_13[2], "SWindow"))
                    
                    if (rdi_13 != 0)
                        rdi_13[1].d -= 1
                        
                        if (rdi_13[1].d == 1)
                            (**rdi_13)(rdi_13)
                            int32_t temp39_1 = *(rdi_13 + 0xc)
                            *(rdi_13 + 0xc) -= 1
                            
                            if (temp39_1 == 1)
                                (*rdi_13)[1](rdi_13, 1)
                    
                    int64_t* var_60
                    
                    if (var_60 != 0)
                        var_60[1].d -= 1
                        
                        if (var_60[1].d == 1)
                            (**var_60)(var_60)
                            int32_t temp44_1 = *(var_60 + 0xc)
                            *(var_60 + 0xc) -= 1
                            
                            if (temp44_1 == 1)
                                (*(*var_60 + 8))(var_60, 1)
                    
                    char var_98_1 = 0
                    char var_a0_1 = 0
                    char var_a8_1 = 0
                    char var_b0_1 = 0
                    void var_f8
                    sub_140745b20(&var_f8)
                    int64_t* var_110
                    
                    if (var_110 != 0)
                        var_110[1].d -= 1
                        
                        if (var_110[1].d == 1)
                            (**var_110)(var_110)
                            int32_t rdi_14 = *(var_110 + 0xc)
                            *(var_110 + 0xc) -= 1
                            
                            if (rdi_14 == 1)
                                (*(*var_110 + 8))(var_110, zx.q(rdi_14))
                    
                    sub_140ddea30(&var_2c8)
                    
                    if (r12_4 != 0)
                        if (rax_15 != 0)
                            rax_15[1].d += 1
                        
                        void* rdi_15 = var_5c8.q
                        *(rdi_15 + 0x878) = var_6a8
                        int64_t* rcx_84 = *(rdi_15 + 0x880)
                        
                        if (rax_15 != rcx_84)
                            if (rax_15 != 0)
                                *(rax_15 + 0xc) += 1
                                rcx_84 = *(rdi_15 + 0x880)
                            
                            if (rcx_84 != 0)
                                int32_t temp58_1 = *(rcx_84 + 0xc)
                                *(rcx_84 + 0xc) -= 1
                                
                                if (temp58_1 == 1)
                                    (*(*rcx_84 + 8))(rcx_84, 1)
                            
                            *(rdi_15 + 0x880) = rax_15
                        
                        if (rax_15 != 0)
                            rax_15[1].d -= 1
                            
                            if (rax_15[1].d == 1)
                                (**rax_15)(rax_15)
                                int32_t temp57_1 = *(rax_15 + 0xc)
                                *(rax_15 + 0xc) -= 1
                                
                                if (temp57_1 == 1)
                                    (*(*rax_15 + 8))(rax_15, 1)
                    
                    void*** rax_96 = j_sub_140a82f30(0x58)
                    int128_t zmm6_4 = var_5c8
                    int64_t* var_5c0
                    void*** r12_5
                    
                    if (rax_96 == 0)
                        r12_5 = nullptr
                    else
                        uint128_t zmm0_6 = var_6a8.o
                        uint128_t var_4e8 = zmm0_6
                        void* rcx_87 = _mm_bsrli_si128(zmm0_6, 8).q
                        
                        if (rcx_87 != 0)
                            *(rcx_87 + 8) += 1
                        
                        int128_t var_4d8 = zmm6_4
                        
                        if (var_5c0 != 0)
                            var_5c0[1].d += 1
                        
                        r12_5 = sub_140e50f70(rax_96, &var_4d8, &var_4e8, *(arg1 + 0x33a))
                    
                    void*** rax_98 = j_sub_140a82f30(0x18)
                    void*** rdi_16 = rax_98
                    
                    if (rax_98 == 0)
                        rdi_16 = nullptr
                    else
                        rax_98[1].d = 1
                        *(rax_98 + 0xc) = 1
                        *rdi_16 = &data_142d42ea8
                        rdi_16[2] = r12_5
                    
                    void**** rbx_19 = &r12_5[1]
                    
                    if (r12_5 == 0)
                        rbx_19 = nullptr
                    
                    if (rbx_19 != 0)
                        void* rax_99
                        
                        if (*rbx_19 != 0)
                            rax_99 = rbx_19[1]
                        
                        if (*rbx_19 == 0 || rax_99 == 0 || *(rax_99 + 8) s<= 0)
                            if (rdi_16 != 0)
                                rdi_16[1].d += 1
                            
                            *rbx_19 = r12_5
                            int64_t* rcx_89 = rbx_19[1]
                            
                            if (rdi_16 != rcx_89)
                                if (rdi_16 != 0)
                                    *(rdi_16 + 0xc) += 1
                                    rcx_89 = rbx_19[1]
                                
                                if (rcx_89 != 0)
                                    int32_t temp67_1 = *(rcx_89 + 0xc)
                                    *(rcx_89 + 0xc) -= 1
                                    
                                    if (temp67_1 == 1)
                                        (*(*rcx_89 + 8))(rcx_89, 1)
                                
                                rbx_19[1] = rdi_16
                            
                            if (rdi_16 != 0)
                                rdi_16[1].d -= 1
                                
                                if (rdi_16[1].d == 1)
                                    (**rdi_16)(rdi_16)
                                    int32_t temp66_1 = *(rdi_16 + 0xc)
                                    *(rdi_16 + 0xc) -= 1
                                    
                                    if (temp66_1 == 1)
                                        (*rdi_16)[1](rdi_16, 1)
                    
                    int128_t var_4c8 = zmm6_4
                    
                    if (var_5c0 != 0)
                        var_5c0[1].d += 1
                    
                    void var_488
                    void var_448
                    sub_140e595a0(data_143e29f28, &var_488, &var_4c8, 
                        sub_140db22a0(&var_428, &var_448), 1)
                    int64_t* var_480
                    
                    if (var_480 != 0)
                        var_480[1].d -= 1
                        
                        if (var_480[1].d == 1)
                            (**var_480)(var_480)
                            int32_t temp63_1 = *(var_480 + 0xc)
                            *(var_480 + 0xc) -= 1
                            
                            if (temp63_1 == 1)
                                (*(*var_480 + 8))(var_480, 1)
                    
                    void*** var_638 = r12_5
                    
                    if (rdi_16 != 0)
                        rdi_16[1].d += 1
                    
                    if (&var_638 != &arg1[0x5a])
                        var_638.o = *(arg1 + 0x2d0)
                        *(arg1 + 0x2d0) = var_638.o
                    
                    if (rdi_16 != 0)
                        rdi_16[1].d -= 1
                        
                        if (rdi_16[1].d == 1)
                            (**rdi_16)(rdi_16)
                            int32_t temp69_1 = *(rdi_16 + 0xc)
                            *(rdi_16 + 0xc) -= 1
                            
                            if (temp69_1 == 1)
                                (*rdi_16)[1](rdi_16, 1)
                    
                    arg1[0x58] = arg1[0x5a]
                    sub_140ea4170(&arg1[0x59], arg1[0x5b])
                    var_658:8.d = 0
                    var_658.q = sub_140f51940
                    void** rax_109 = *r12_5
                    uint128_t var_4a8 = var_658
                    void var_4b8
                    sub_140f1a950(rax_109[5](r12_5), &var_4b8, arg1, &var_4a8)
                    arg1[0x56] = var_5c8.q
                    sub_140ea4170(&arg1[0x57], var_5c0)
                    
                    if (rdi_16 != 0)
                        rdi_16[1].d -= 1
                        
                        if (rdi_16[1].d == 1)
                            (**rdi_16)(rdi_16)
                            int32_t temp71_1 = *(rdi_16 + 0xc)
                            *(rdi_16 + 0xc) -= 1
                            
                            if (temp71_1 == 1)
                                (*rdi_16)[1](rdi_16, 1)
                    
                    if (var_5c0 != 0)
                        var_5c0[1].d -= 1
                        
                        if (var_5c0[1].d == 1)
                            (**var_5c0)(var_5c0)
                            int32_t temp72_1 = *(var_5c0 + 0xc)
                            *(var_5c0 + 0xc) -= 1
                            
                            if (temp72_1 == 1)
                                (*(*var_5c0 + 8))(var_5c0, 1)
                int512_t zmm6_3
                zmm6_3.o = var_48_1
                
                if (rax_15 != 0)
                    rax_15[1].d -= 1
                    
                    if (rax_15[1].d == 1)
                        (**rax_15)(rax_15)
                        int32_t temp30_1 = *(rax_15 + 0xc)
                        *(rax_15 + 0xc) -= 1
                        
                        if (temp30_1 == 1)
                            (*(*rax_15 + 8))(rax_15, 1)
            
            sub_140de0810(&var_428)
        
        result = sub_140e19ef0(arg1, 0xc)

__security_check_cookie(rax_1 ^ &var_718)
return result
