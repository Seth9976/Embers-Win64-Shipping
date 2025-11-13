// 函数: sub_140e89df0
// 地址: 0x140e89df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_408
int64_t rax_1 = __security_cookie ^ &var_408
char var_3d8 = arg4
int32_t rbx = 0
int32_t var_3b8 = 0
uint64_t result
void* var_3c8
int64_t* var_3c0
void* var_358
int64_t* var_350

if (sub_140db3500(arg3) == 0)
label_140e89fbc:
    int64_t* r12_1 = arg1[0x71]
    
    if (r12_1 != 0)
        int32_t rax_13 = r12_1[1].d
        
        if (rax_13 == 0)
            r12_1 = nullptr
        else
            r12_1[1].d = rax_13 + 1
        
        if (r12_1 != 0)
            int64_t* rcx_15 = arg1[0x70]
            
            if (rcx_15 != 0)
                (*(*rcx_15 + 0x10))(rcx_15)
    
    int32_t i_1 = *(arg2 + 0x60)
    int64_t* rdi_4 = *(arg2 + 0x58)
    int64_t* var_390 = nullptr
    int32_t i_2 = i_1
    
    if (i_1 != 0)
        sub_1405a4be0(&var_390, i_1, 0)
        int64_t* rcx_17 = var_390
        int32_t i
        
        do
            *rcx_17 = *rdi_4
            void* rax_17 = rdi_4[1]
            rcx_17[1] = rax_17
            
            if (rax_17 != 0)
                *(rax_17 + 0xc) += 1
            
            rcx_17 = &rcx_17[2]
            rdi_4 = &rdi_4[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
        i_1 = i_2
    else
        int32_t var_384_1 = 0
    
    int64_t var_380_1 = *(arg2 + 0x68)
    int64_t* rax_19 = *(arg2 + 0x70)
    
    if (rax_19 != 0)
        *(rax_19 + 0xc) += 1
        i_1 = i_2
    
    void* rax_24
    void** rcx_22
    int32_t rbx_2
    int64_t* rdi_5
    void* r14_1
    
    if (i_1 s<= 0)
        rdi_5 = arg3
        rcx_22 = &var_3c8
        rbx_2 = rbx | 8
        var_3c8.o = zx.o(0)
        rax_24 = nullptr
    else
        rbx_2 = rbx | 6
        int64_t* rcx_20 = &var_390[sx.q(i_1 - 1) * 2]
        rdi_5 = rcx_20[1]
        r14_1 = *rcx_20
        
        if (rdi_5 != 0)
            *(rdi_5 + 0xc) += 1
        
        var_358 = nullptr
        int64_t* rsi_1 = rdi_5
        var_350 = rdi_5
        
        if (rdi_5 != 0)
            int32_t rax_21 = rdi_5[1].d
            
            if (rax_21 == 0)
                rsi_1 = nullptr
                var_350 = nullptr
            else
                rdi_5[1].d = rax_21 + 1
            
            int32_t temp13_1 = *(rdi_5 + 0xc)
            *(rdi_5 + 0xc) -= 1
            
            if (temp13_1 == 1)
                (*(*rdi_5 + 8))(rdi_5, 1)
            
            rdi_5 = nullptr
        
        rax_24 = nullptr
        
        if (rsi_1 != 0)
            var_358 = r14_1
            rax_24 = r14_1
        
        rcx_22 = &var_358
    
    void* var_368 = rax_24
    int64_t* rax_25 = rcx_22[1]
    rcx_22[1] = 0
    *rcx_22 = nullptr
    
    if ((rbx_2.b & 8) != 0)
        rbx_2 &= 0xfffffff7
        
        if (var_3c0 != 0)
            var_3c0[1].d -= 1
            
            if (var_3c0[1].d == 1)
                (**var_3c0)(var_3c0)
                int32_t temp12_1 = *(var_3c0 + 0xc)
                *(var_3c0 + 0xc) -= 1
                
                if (temp12_1 == 1)
                    (*(*var_3c0 + 8))(var_3c0, 1)
    
    if ((rbx_2.b & 4) != 0)
        rbx_2 &= 0xfffffffb
        
        if (var_350 != 0)
            var_350[1].d -= 1
            
            if (var_350[1].d == 1)
                (**var_350)(var_350)
                int32_t temp17_1 = *(var_350 + 0xc)
                *(var_350 + 0xc) -= 1
                
                if (temp17_1 == 1)
                    (*(*var_350 + 8))(var_350, 1)
    
    if ((rbx_2.b & 2) != 0 && rdi_5 != 0)
        int32_t temp16_1 = *(rdi_5 + 0xc)
        *(rdi_5 + 0xc) -= 1
        
        if (temp16_1 == 1)
            (*(*rdi_5 + 8))(rdi_5, 1)
    
    void var_318
    sub_140d947e0(&var_318)
    uint128_t var_3a8 = zx.o(0)
    void* rdi_8
    char var_1b8
    
    if (sub_140db3500(arg3) == 0)
    label_140e8a34b:
        *(arg2 + 0x8c) += 1
        r14_1.b = 0
        int32_t r15_1 = *(arg2 + 0x8c)
        var_3b8.b = var_3d8
        int32_t rax_50 = *(arg2 + 0x18)
        *(arg1 + 0x554) += 1
        int32_t rcx_42 = *(arg1 + 0x554)
        int32_t var_3b4_1 = rax_50
        int32_t rax_51 = arg1[0xa9].d
        rdi_8 = sx.q(rax_51 - 1)
        int32_t* var_3e8
        int128_t* var_3e0
        
        if (rax_51 - 1 s>= 0)
            int64_t rbx_7 = rdi_8 << 4
            void* temp18_1
            
            do
                int64_t rax_53 = arg1[0xa8]
                
                if (*(rbx_7 + rax_53 + 8) == 0)
                    r14_1.b = 1
                else
                    int64_t* rcx_43 = *(rbx_7 + rax_53)
                    
                    if (rcx_43 == 0)
                        r14_1.b = 1
                    else
                        var_3e0 = &var_3a8
                        var_3e8 = &var_318
                        
                        if ((*(*rcx_43 + 0x50))(rcx_43, &var_3b8, &var_390, &var_368, var_3e8, 
                                var_3e0) == 0)
                            r14_1.b = 1
                
                rbx_7 -= 0x10
                temp18_1 = rdi_8
                rdi_8 -= 1
            while (temp18_1 - 1 s>= 0)
            rcx_42 = *(arg1 + 0x554)
        
        *(arg1 + 0x554) = rcx_42 - 1
        
        if (r14_1.b != 0)
            sub_140599630(&arg1[0xa8], 0)
        
        int64_t* rbx_9
        void* rsi_6
        
        if (i_2 s> 0)
            if (rax_19 != 0)
                int32_t rax_57 = rax_19[1].d
                
                if (rax_57 != 0)
                    rax_19[1].d = rax_57 + 1
                    rax_19[1].d -= 1
                    
                    if (rax_19[1].d == 1)
                        (**rax_19)(rax_19)
                        int32_t temp24_1 = *(rax_19 + 0xc)
                        *(rax_19 + 0xc) -= 1
                        
                        if (temp24_1 == 1)
                            (*(*rax_19 + 8))(rax_19, 1)
            
            rdi_8 = nullptr
            
            if (i_2 s<= 0)
                goto label_140e8a4c0
            
            rsi_6 = nullptr
            
            while (true)
                int64_t* rcx_47 = var_390
                rbx_9 = *(rcx_47 + rsi_6 + 8)
                
                if (rbx_9 != 0)
                    int32_t rax_61 = rbx_9[1].d
                    
                    if (rax_61 != 0)
                        rbx_9[1].d = rax_61 + 1
                        
                        if (rbx_9 != 0)
                            int64_t* rcx_48 = *(rcx_47 + rsi_6)
                            
                            if (rcx_48 != 0)
                                (*(*rcx_48 + 0x20))(rcx_48, &var_390, &var_318, &var_3b8, var_3e8, 
                                    var_3e0)
                                
                                if (r15_1 != *(arg2 + 0x8c))
                                    break
                            
                            rbx_9[1].d -= 1
                            
                            if (rbx_9[1].d == 1)
                                (**rbx_9)(rbx_9)
                                int32_t temp44_1 = *(rbx_9 + 0xc)
                                *(rbx_9 + 0xc) -= 1
                                
                                if (temp44_1 == 1)
                                    (*(*rbx_9 + 8))(rbx_9, 1)
                
                rdi_8 = zx.q(rdi_8.d + 1)
                rsi_6 += 0x10
                
                if (rdi_8.d s>= i_2)
                    goto label_140e8a4c0
            
            goto label_140e8a653
        
    label_140e8a4c0:
        char rax_67 = sub_140db3500(&var_318)
        
        if (rax_67 != 0)
            int64_t* rbx_10 = sub_140db22a0(&var_318, &var_3c8)[1]
            
            if (rbx_10 != 0)
                rbx_10[1].d += 1
                
                if (rbx_10 != 0)
                    rbx_10[1].d -= 1
                    
                    if (rbx_10[1].d == 1)
                        (**rbx_10)(rbx_10)
                        int32_t temp28_1 = *(rbx_10 + 0xc)
                        *(rbx_10 + 0xc) -= 1
                        
                        if (temp28_1 == 1)
                            (*(*rbx_10 + 8))(rbx_10, 1)
            
            if (var_3c0 != 0)
                var_3c0[1].d -= 1
                
                if (var_3c0[1].d == 1)
                    (**var_3c0)(var_3c0)
                    int32_t temp27_1 = *(var_3c0 + 0xc)
                    *(var_3c0 + 0xc) -= 1
                    
                    if (temp27_1 == 1)
                        (*(*var_3c0 + 8))(var_3c0, 1)
            
            rdi_8 = nullptr
        
        int32_t var_1e8
        void var_310
        void* var_1f0
        
        if (rax_67 == 0 || var_1e8 s<= 0)
        label_140e8a5de:
            rsi_6.b = 0
            char rax_78 = sub_140db3500(&var_318)
            char r15_2 = var_3d8
            
            if (rax_78 != 0)
                rsi_6.b = r15_2 == 1
                int64_t rbx_12 = sx.q(var_1e8 - 1)
                
                if (var_1e8 - 1 s>= 0)
                    rdi_8 = rbx_12 * 0x48
                    int64_t temp33_1
                    
                    do
                        void* rcx_62 = &var_310
                        
                        if (var_1f0 != 0)
                            rcx_62 = var_1f0
                        
                        int64_t* rcx_63 = *(rcx_62 + rdi_8 + 0x38)
                        (*(*rcx_63 + 0x118))(rcx_63, &var_3d8, zx.q(r15_2))
                        char var_3d7
                        
                        if (var_3d7 != 0)
                            rsi_6 = zx.q(var_3d8)
                            break
                        
                        rdi_8 -= 0x48
                        temp33_1 = rbx_12
                        rbx_12 -= 1
                    while (temp33_1 - 1 s>= 0)
            
            if (arg2 + 0x78 != &var_3c8)
                *(arg2 + 0x78) = 0
                int64_t* rbx_13 = *(arg2 + 0x80)
                
                if (rbx_13 != 0)
                    *(arg2 + 0x80) = 0
                    rbx_13[1].d -= 1
                    
                    if (rbx_13[1].d == 1)
                        (**rbx_13)(rbx_13)
                        int32_t temp29_1 = *(rbx_13 + 0xc)
                        *(rbx_13 + 0xc) -= 1
                        
                        if (temp29_1 == 1)
                            (*(*rbx_13 + 8))(rbx_13, 1)
            
            void var_338
            sub_140d94220(&var_338, &var_318)
            sub_140e553b0(arg2 + 0x58, &var_338)
            int64_t* var_320
            
            if (var_320 != 0)
                int32_t temp25_1 = *(var_320 + 0xc)
                *(var_320 + 0xc) -= 1
                
                if (temp25_1 == 1)
                    (*(*var_320 + 8))(var_320, 1)
            
            sub_140d94cb0(&var_338)
            void* rcx_72 = var_368
            *(arg2 + 0x88) = r15_2
            *(arg2 + 0x89) = rsi_6.b
            uint128_t zmm0_1
            
            if (rcx_72 != 0)
                if (rax_19 != 0)
                    int32_t rax_89 = rax_19[1].d
                    
                    if (rax_89 != 0)
                        rax_19[1].d = rax_89 + 1
                        rax_19[1].d -= 1
                        
                        if (rax_19[1].d == 1)
                            (**rax_19)(rax_19)
                            int32_t temp43_1 = *(rax_19 + 0xc)
                            *(rax_19 + 0xc) -= 1
                            
                            if (temp43_1 == 1)
                                (*(*rax_19 + 8))(rax_19, 1)
                        
                        rcx_72 = var_368
                
                (*(*rcx_72 + 0x18))(rcx_72, &var_3b8)
                zmm0_1 = var_368.o
                var_3c8.o = zmm0_1
                void* rax_94 = _mm_bsrli_si128(zmm0_1, 8).q
                
                if (rax_94 != 0)
                    *(rax_94 + 8) += 1
                
                rdi_8 = arg1[0x16]
                void* rsi_7 = arg1[0x15]
                
                if (rdi_8 != 0)
                    *(rdi_8 + 8) += 1
                
                int32_t* rax_95 = sub_140d6efb0(&var_358, 0)
                int32_t* rax_96
                int512_t zmm1
                rax_96, zmm1 = sub_140d6efb0(&var_338, 1)
                var_3e8 = rax_95
                sub_140e1f360(rsi_7, &var_3c8, 0, rax_96, zmm1, var_3e8)
                
                if (rdi_8 != 0)
                    int32_t temp49_1 = *(rdi_8 + 8)
                    *(rdi_8 + 8) -= 1
                    
                    if (temp49_1 == 1)
                        (**rdi_8)(rdi_8)
                        int32_t temp56_1 = *(rdi_8 + 0xc)
                        *(rdi_8 + 0xc) -= 1
                        
                        if (temp56_1 == 1)
                            (*(*rdi_8 + 8))(rdi_8, 1)
            
            if (var_3a8.q != 0)
                int64_t* rax_99 = sub_140db22a0(&var_318, &var_3c8)
                rdi_8 = rax_99[1]
                int64_t rsi_8 = *rax_99
                
                if (rdi_8 != 0)
                    *(rdi_8 + 8) += 1
                
                if (var_3c0 != 0)
                    var_3c0[1].d -= 1
                    
                    if (var_3c0[1].d == 1)
                        (**var_3c0)(var_3c0)
                        int32_t temp48_1 = *(var_3c0 + 0xc)
                        *(var_3c0 + 0xc) -= 1
                        
                        if (temp48_1 == 1)
                            (*(*var_3c0 + 8))(var_3c0, 1)
                
                if (rdi_8 != 0)
                    int32_t rax_102 = *(rdi_8 + 8)
                    *(rdi_8 + 8) = rax_102
                    
                    if (rax_102 == 0)
                        (**rdi_8)(rdi_8)
                        int32_t temp55_1 = *(rdi_8 + 0xc)
                        *(rdi_8 + 0xc) -= 1
                        
                        if (temp55_1 == 1)
                            (*(*rdi_8 + 8))(rdi_8, 1)
                
                arg1[0x34] = rsi_8
                int64_t* rcx_85 = arg1[0x35]
                
                if (rdi_8 != rcx_85)
                    if (rdi_8 != 0)
                        *(rdi_8 + 0xc) += 1
                        rcx_85 = arg1[0x35]
                    
                    if (rcx_85 != 0)
                        int32_t temp59_1 = *(rcx_85 + 0xc)
                        *(rcx_85 + 0xc) -= 1
                        
                        if (temp59_1 == 1)
                            (*(*rcx_85 + 8))(rcx_85, 1)
                    
                    arg1[0x35] = rdi_8
                
                void* r9_4 = &var_310
                int64_t* rcx_86 = var_3a8.q
                
                if (var_1f0 != 0)
                    r9_4 = var_1f0
                
                (*(*rcx_86 + 0x10))(rcx_86, &var_1b8, r9_4 + sx.q(var_1e8 - 1) * 0x48, &var_3b8, 
                    var_3e8, var_3e0)
                
                if (var_1b8 != 0)
                    var_3e0.d = *(arg2 + 0x18)
                    var_3e8 = nullptr
                    MRECmpImpl::FPushFile(arg1, arg3, &var_1b8, nullptr, var_3e8, var_3e0.d)
                
                zmm0_1 = var_3a8
                int64_t* rcx_88 = arg1[0x93]
                var_3c8.o = zmm0_1
                void* rax_111 = _mm_bsrli_si128(zmm0_1, 8).q
                var_3a8:8.q = rax_111
                
                if (rax_111 != 0)
                    *(rax_111 + 8) += 1
                
                zmm0_1 = var_368.o
                var_358.o = zmm0_1
                void* rax_112 = _mm_bsrli_si128(zmm0_1, 8).q
                
                if (rax_112 != 0)
                    *(rax_112 + 8) += 1
                
                (*(*rcx_88 + 0x30))(rcx_88, &var_358, &var_3c8, var_3b8.q, var_3e8, var_3e0)
                zmm0_1 = var_3a8
                var_3c8.o = zmm0_1
                void* rax_114 = _mm_bsrli_si128(zmm0_1, 8).q
                var_3a8:8.q = rax_114
                
                if (rax_114 != 0)
                    *(rax_114 + 8) += 1
                
                int64_t* rsi_9 = arg1[0x16]
                void* r14_3 = arg1[0x15]
                
                if (rsi_9 != 0)
                    rsi_9[1].d += 1
                
                int32_t* rax_115 = sub_140d6efb0(&var_338, 1)
                int32_t* rax_116
                int512_t zmm1_1
                rax_116, zmm1_1 = sub_140d6efb0(&var_358, 0)
                sub_140e1f360(r14_3, &var_3c8, 0, rax_116, zmm1_1, rax_115)
                
                if (rsi_9 != 0)
                    rsi_9[1].d -= 1
                    
                    if (rsi_9[1].d == 1)
                        (**rsi_9)(rsi_9)
                        int32_t temp62_1 = *(rsi_9 + 0xc)
                        *(rsi_9 + 0xc) -= 1
                        
                        if (temp62_1 == 1)
                            (*(*rsi_9 + 8))(rsi_9, 1)
                
                sub_140597700(&var_1b8)
                
                if (rdi_8 != 0)
                    int32_t temp61_1 = *(rdi_8 + 8)
                    *(rdi_8 + 8) -= 1
                    
                    if (temp61_1 == 1)
                        (**rdi_8)(rdi_8)
                        int32_t temp63_1 = *(rdi_8 + 0xc)
                        *(rdi_8 + 0xc) -= 1
                        
                        if (temp63_1 == 1)
                            (*(*rdi_8 + 8))(rdi_8, 1)
            
            rdi_8.b = 1
        else
            rsi_6 = nullptr
            
            while (true)
                void* rcx_57 = &var_310
                
                if (var_1f0 != 0)
                    rcx_57 = var_1f0
                
                rbx_9 = *(rcx_57 + rsi_6 + 0x40)
                int64_t* r10_1 = *(rcx_57 + rsi_6 + 0x38)
                
                if (rbx_9 != 0)
                    rbx_9[1].d += 1
                
                if (r10_1 != 0)
                    (*(*r10_1 + 0x20))(r10_1, &var_390, &var_318, &var_3b8, var_3e8, var_3e0)
                    
                    if (r15_1 != *(arg2 + 0x8c))
                        break
                
                if (rbx_9 != 0)
                    rbx_9[1].d -= 1
                    
                    if (rbx_9[1].d == 1)
                        (**rbx_9)(rbx_9)
                        int32_t temp57_1 = *(rbx_9 + 0xc)
                        *(rbx_9 + 0xc) -= 1
                        
                        if (temp57_1 == 1)
                            (*(*rbx_9 + 8))(rbx_9, 1)
                
                rdi_8 = zx.q(rdi_8.d + 1)
                rsi_6 += 0x48
                
                if (rdi_8.d s>= var_1e8)
                    goto label_140e8a5de
            
            if (rbx_9 == 0)
                rdi_8.b = 0
            else
            label_140e8a653:
                rbx_9[1].d -= 1
                
                if (rbx_9[1].d == 1)
                    (**rbx_9)(rbx_9)
                    int32_t temp51_1 = *(rbx_9 + 0xc)
                    *(rbx_9 + 0xc) -= 1
                    
                    if (temp51_1 == 1)
                        (*(*rbx_9 + 8))(rbx_9, 1)
                
                rdi_8.b = 0
    else
        int32_t rax_32 = arg3[0x26].d
        int64_t rbx_3 = sx.q(rax_32 - 1)
        
        if (rax_32 - 1 s< 0)
            goto label_140e8a34b
        
        int64_t rsi_5 = rbx_3 * 0x48
        
        while (true)
            void* rax_34 = arg3[0x25]
            void* rdi_7 = &arg3[1]
            
            if (rax_34 != 0)
                rdi_7 = rax_34
            
            rdi_8 = rdi_7 + rsi_5
            int64_t* rcx_30 = *(rdi_8 + 0x38)
            
            if ((*(*rcx_30 + 0x198))(rcx_30) != 0)
                break
            
            rsi_5 -= 0x48
            int64_t temp19_1 = rbx_3
            rbx_3 -= 1
            
            if (temp19_1 - 1 s< 0)
                goto label_140e8a34b
        
        void* rax_37 = var_368
        
        if (rax_37 == 0 || rax_37 != *(rdi_8 + 0x38))
            int64_t* rbx_4 = *(rdi_8 + 0x40)
            
            if (rbx_4 != 0)
                rbx_4[1].d += 1
            
            int64_t* rdi_9 = var_3a8:8.q
            var_3a8.q = *(rdi_8 + 0x38)
            
            if (rbx_4 != rdi_9)
                var_3a8:8.q = rbx_4
                
                if (rdi_9 != 0)
                    rdi_9[1].d -= 1
                    
                    if (rdi_9[1].d == 1)
                        (**rdi_9)(rdi_9)
                        int32_t temp35_1 = *(rdi_9 + 0xc)
                        *(rdi_9 + 0xc) -= 1
                        
                        if (temp35_1 == 1)
                            (*(*rdi_9 + 8))(rdi_9, 1)
            else if (rbx_4 != 0)
                rbx_4[1].d -= 1
                
                if (rbx_4[1].d == 1)
                    (**rbx_4)(rbx_4)
                    int32_t temp34_1 = *(rbx_4 + 0xc)
                    *(rbx_4 + 0xc) -= 1
                    
                    if (temp34_1 == 1)
                        (*(*rbx_4 + 8))(rbx_4, 1)
            
            int64_t* rbx_5 = var_3a8:8.q
            
            if (rbx_5 != 0)
                rbx_5[1].d += 1
            
            var_3c8 = var_3a8.q
            var_3c0 = rbx_5
            
            if (rbx_5 != 0)
                rbx_5[1].d += 1
            
            sub_140d963a0(&var_318, sub_140da8ef0(arg3, &var_1b8, &var_3c8))
            void var_68
            sub_140596d80(&var_68)
            int64_t* var_70
            
            if (var_70 != 0)
                var_70[1].d -= 1
                
                if (var_70[1].d == 1)
                    (**var_70)(var_70)
                    int32_t temp53_1 = *(var_70 + 0xc)
                    *(var_70 + 0xc) -= 1
                    
                    if (temp53_1 == 1)
                        (*(*var_70 + 8))(var_70, 1)
            
            void var_1b0
            sub_140d94d20(&var_1b0)
            
            if (rbx_5 != 0)
                rbx_5[1].d -= 1
                
                if (rbx_5[1].d == 1)
                    (**rbx_5)(rbx_5)
                    int32_t temp58_1 = *(rbx_5 + 0xc)
                    *(rbx_5 + 0xc) -= 1
                    
                    if (temp58_1 == 1)
                        (*(*rbx_5 + 8))(rbx_5, 1)
            
            goto label_140e8a34b
        
        rdi_8.b = 0
    int64_t* rbx_18 = var_3a8:8.q
    
    if (rbx_18 != 0)
        rbx_18[1].d -= 1
        
        if (rbx_18[1].d == 1)
            (**rbx_18)(rbx_18)
            int32_t temp37_1 = *(rbx_18 + 0xc)
            *(rbx_18 + 0xc) -= 1
            
            if (temp37_1 == 1)
                (*(*rbx_18 + 8))(rbx_18, 1)
    
    sub_140de0810(&var_318)
    
    if (rax_25 != 0)
        rax_25[1].d -= 1
        
        if (rax_25[1].d == 1)
            (**rax_25)(rax_25)
            int32_t temp41_1 = *(rax_25 + 0xc)
            *(rax_25 + 0xc) -= 1
            
            if (temp41_1 == 1)
                (*(*rax_25 + 8))(rax_25, 1)
    
    if (rax_19 != 0)
        int32_t temp40_1 = *(rax_19 + 0xc)
        *(rax_19 + 0xc) -= 1
        
        if (temp40_1 == 1)
            (*(*rax_19 + 8))(rax_19, 1)
    
    sub_140d94cb0(&var_390)
    
    if (r12_1 != 0)
        r12_1[1].d -= 1
        
        if (r12_1[1].d == 1)
            int64_t rdx_23 = *r12_1
            (*rdx_23)(r12_1, rdx_23)
            int32_t temp54_1 = *(r12_1 + 0xc)
            *(r12_1 + 0xc) -= 1
            
            if (temp54_1 == 1)
                int64_t r8_9 = *r12_1
                (*(r8_9 + 8))(r12_1, 1, r8_9)
    
    result = zx.q(rdi_8.b)
else
    sub_140db22a0(arg3, &var_358)
    result = zx.q(arg1[0x37].d)
    int32_t temp0_1 = result.d
    int64_t rsi
    
    if (temp0_1 == 0)
        rsi.b = 0
    else
        int64_t* rax_4
        void* rdx_1
        int64_t* rdi_1
        
        if (temp0_1 s<= 0)
            rdi_1 = arg3
            rdx_1 = nullptr
            rax_4 = nullptr
            rbx = 0x21
        else
            int64_t rax_3 = arg1[0x36]
            int64_t rcx_3 = sx.q(result.d) * 2
            rdi_1 = *(rax_3 + (rcx_3 << 3) - 8)
            rdx_1 = *(rax_3 + (rcx_3 << 3) - 0x10)
            
            if (rdi_1 != 0)
                rdi_1[1].d += 1
            
            rbx = 0x11
            rax_4 = rdi_1
        
        var_3c8 = rdx_1
        var_3c0 = rax_4
        
        if (rax_4 != 0)
            rax_4[1].d += 1
        
        if ((rbx.b & 0x20) != 0)
            rbx &= 0xffffffdf
        
        if ((rbx.b & 0x10) != 0)
            rbx &= 0xffffffef
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp10_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp10_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
        
        if (sub_140e1a690(var_358, &var_3c8, arg5).b != 0)
            rsi.b = 0
        else
            int64_t rdx_3 = *(arg1[0x36] + sx.q(arg1[0x37].d) * 0x10 - 0x10)
            
            if (rdx_3 == 0 || rdx_3 != var_358)
                rsi.b = 1
            else
                rsi.b = 0
    
    if ((rbx.b & 1) != 0)
        rbx &= 0xfffffffe
        
        if (var_3c0 != 0)
            var_3c0[1].d -= 1
            
            if (var_3c0[1].d == 1)
                (**var_3c0)(var_3c0)
                int32_t temp5_1 = *(var_3c0 + 0xc)
                *(var_3c0 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*var_3c0 + 8))(var_3c0, 1)
    
    if (rsi.b == 0)
        if (var_350 != 0)
            var_350[1].d -= 1
            
            if (var_350[1].d == 1)
                (**var_350)(var_350)
                int32_t temp6_1 = *(var_350 + 0xc)
                *(var_350 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*var_350 + 8))(var_350, 1)
        
        goto label_140e89fbc
    
    if (var_350 != 0)
        var_350[1].d -= 1
        
        if (var_350[1].d == 1)
            (**var_350)(var_350)
            int32_t temp7_1 = *(var_350 + 0xc)
            *(var_350 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*var_350 + 8))(var_350, 1)
    
    result.b = 0
__security_check_cookie(rax_1 ^ &var_408)
return result
