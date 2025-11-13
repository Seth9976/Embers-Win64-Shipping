// 函数: sub_140e81a30
// 地址: 0x140e81a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4f8
char* result = __security_cookie ^ &var_4f8
char* result_1 = result
bool cond:0 = *(arg1 + 0x30) == 0
*(arg1 + 0x31) = 0

if (not(cond:0) && *(arg1 + 0x20) != 0)
    if (data_143de5480 != 0)
        result.b = GetCurrentThreadId().d == data_143de5470
    
    if (data_143de5480 == 0 || result.b != 0)
        int64_t* rcx = *(arg1 + 0x1d0)
        int512_t zmm0
        zmm0.o = zx.o(0)
        int512_t zmm1
        zmm1.o = zx.o(0)
        int64_t* rdi_1 = data_143e29f28
        char var_498 = 0
        int64_t var_490_1 = 0
        int64_t var_488_1 = (zx.o(0)).q
        int128_t var_478
        __builtin_memset(&var_478, 0, 0x18)
        int32_t var_460_1 = 1
        char var_458
        
        if (rcx != 0)
            sub_140e54cd0(&var_498, (*(*rcx + 0x20))(rcx, zmm0, &var_458))
            sub_140ddf250(&var_458)
        
        int64_t* var_468
        
        if (rcx == 0 || var_498 == 0)
            void* rax_3 = data_143e20d18
            int64_t* rbx_1 = *(rax_3 + 0x10)
            int64_t r15_1 = *(rax_3 + 8)
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            int64_t r14_1 = *(arg1 + 0x20)
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp2_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            int32_t var_4b0
            sub_140e68880(arg1, &var_4b0, 0xa)
            int32_t var_4c0
            sub_140e68dd0(arg1, &var_4c0, 0xa)
            uint64_t var_378 = 0
            int64_t var_370
            __builtin_memset(&var_370, 0, 0x24)
            int32_t var_34c_1 = 0x80
            int32_t var_348_1 = 0xffffffff
            int32_t var_344_1 = 0
            int64_t var_338_1 = 0
            int32_t var_330_1 = 0
            void* r12_1
            
            if (r15_1 != r14_1)
                int16_t var_4c8
                r12_1 = &var_4c8
                var_4c8 &= 0xfe00
            else
                int64_t* rcx_7 = data_143e20d18
                void var_4c6
                (*(*rcx_7 + 0x58))(rcx_7, &var_4c6)
                r12_1 = &var_4c6
            
            uint64_t* rbx_2 = &rdi_1[0x24]
            
            if (r15_1 != r14_1)
                rbx_2 = &var_378
            
            int64_t* rcx_8 = rdi_1[0xc0]
            int32_t var_4bc
            int128_t zmm6 = var_4bc
            int32_t var_4ac
            int128_t zmm8
            zmm8.d = var_4ac.d f- zmm6.d
            int128_t zmm9
            zmm9.d = var_4b0.d f- var_4c0
            int32_t rax_8 = (**rcx_8)(rcx_8)
            zmm1.o = var_4c0
            uint64_t var_400_1 = var_4b0.q
            int32_t var_40c_1 = rax_8
            int16_t var_410_1 = *r12_1
            void** const var_418 = &data_142ecfd88
            zmm1.o = _mm_unpacklo_ps(zmm1.o, zmm6.q)
            int32_t var_3c0_1 = 0x3f800000
            int32_t var_3f0_1 = zmm9.d
            int32_t var_3ec_1 = zmm8.d
            char var_40e_1 = 0
            int64_t var_408_1 = 0
            int64_t var_3f8_1 = (zmm1.o).q
            uint64_t* var_3e8_1 = rbx_2
            int64_t var_3e0
            __builtin_memset(&var_3e0, 0, 0x18)
            int32_t var_3c8_1 = 0xa
            int32_t var_3c4_1 = 0
            int16_t var_3bc_1 = 0
            int64_t var_3b8_1 = 0
            int16_t var_3b0_1 = 0
            char var_3ae_1 = 0
            void var_328
            sub_140d947e0(&var_328)
            char var_4d8
            int32_t var_4d0
            void* var_4a8
            void var_1c8
            void var_1c0
            int64_t* var_80
            void var_78
            
            if (sub_140e6a060(arg1, 0xa) == 0)
                int64_t rbx_6 = *rdi_1
                int64_t* rax_23 = sub_140e67030(rdi_1, &var_4a8)
                var_4d0 = *(arg1 + 0x18)
                var_4d8 = 0
                sub_140d963a0(&var_328, 
                    (*(rbx_6 + 0xf8))(rdi_1, &var_1c8, var_4b0.q, rax_23, var_4d8, var_4d0))
                sub_140596d80(&var_78)
                
                if (var_80 != 0)
                    var_80[1].d -= 1
                    
                    if (var_80[1].d == 1)
                        (**var_80)(var_80)
                        int32_t temp9_1 = *(var_80 + 0xc)
                        *(var_80 + 0xc) -= 1
                        
                        if (temp9_1 == 1)
                            (*(*var_80 + 8))(var_80, 1)
                
                sub_140d94d20(&var_1c0)
                sub_140596d80(&var_4a8)
            else
                sub_140d947e0(&var_1c8)
                int32_t* rcx_17
                
                if (*(arg1 + 0x138) == *(arg1 + 0x164))
                label_140e81db1:
                    rcx_17 = nullptr
                else
                    void* r8_1 = arg1 + 0x168
                    void* rcx_13 = *(r8_1 + 8)
                    
                    if (rcx_13 != 0)
                        r8_1 = rcx_13
                    
                    int32_t rax_11 = *(r8_1 + (((sx.q(*(arg1 + 0x178)) - 1) & 0xa) << 2))
                    
                    if (rax_11 == 0xffffffff)
                    label_140e81db1_1:
                        rcx_17 = nullptr
                    else
                        while (true)
                            rcx_17 = sx.q(rax_11) * 0x30 + *(arg1 + 0x130)
                            
                            if (*rcx_17 == 0xa)
                                break
                            
                            rax_11 = rcx_17[0xa]
                            
                            if (rax_11 == 0xffffffff)
                                goto label_140e81db1_2
                        
                        if (rax_11 == 0xffffffff)
                        label_140e81db1_2:
                            rcx_17 = nullptr
                
                void* r10_1 = &rcx_17[2]
                
                if (rcx_17 == 0)
                    r10_1 = nullptr
                
                if (r10_1 != 0)
                    var_4d8 = data_1439ae51c
                    int32_t rax_13
                    rax_13, zmm1 = sub_140dbf070(r10_1, &var_1c8, 0, &var_418, 0x3f800000, var_4d8)
                    
                    if (rax_13 == 1)
                        zmm1 = sub_140e85470(arg1, 0xa)
                
                if (sub_140db3500(&var_1c8) != 0)
                    sub_140db22a0(&var_1c8, &var_4a8)
                    sub_140e65190(rdi_1, &var_4c0)
                    int64_t rax_15 = var_4c0.q
                    
                    if (rax_15 == 0)
                        sub_140d965b0(&var_328, &var_1c8)
                    else
                        void* rcx_23 = var_4a8
                        
                        if (rax_15 == rcx_23)
                            sub_140d965b0(&var_328, &var_1c8)
                        else if (sub_140e1a690(rcx_23, &var_4c0, zmm1) != 0)
                            sub_140d965b0(&var_328, &var_1c8)
                    
                    int64_t* var_4b8
                    
                    if (var_4b8 != 0)
                        var_4b8[1].d -= 1
                        
                        if (var_4b8[1].d == 1)
                            (**var_4b8)(var_4b8)
                            int32_t temp22_1 = *(var_4b8 + 0xc)
                            *(var_4b8 + 0xc) -= 1
                            
                            if (temp22_1 == 1)
                                (*(*var_4b8 + 8))(var_4b8, 1)
                    
                    int64_t* var_4a0
                    
                    if (var_4a0 != 0)
                        var_4a0[1].d -= 1
                        
                        if (var_4a0[1].d == 1)
                            (**var_4a0)(var_4a0)
                            int32_t temp23_1 = *(var_4a0 + 0xc)
                            *(var_4a0 + 0xc) -= 1
                            
                            if (temp23_1 == 1)
                                (*(*var_4a0 + 8))(var_4a0, 1)
                
                sub_140596d80(&var_78)
                
                if (var_80 != 0)
                    var_80[1].d -= 1
                    
                    if (var_80[1].d == 1)
                        (**var_80)(var_80)
                        int32_t temp17_1 = *(var_80 + 0xc)
                        *(var_80 + 0xc) -= 1
                        
                        if (temp17_1 == 1)
                            (*(*var_80 + 8))(var_80, 1)
                
                sub_140d94d20(&var_1c0)
            void var_320
            
            if (sub_140db3500(&var_328) == 0)
            label_140e82182:
                var_458 = 1
                int32_t var_420_1 = 1
                int128_t var_450
                __builtin_memset(&var_450, 0, 0x30)
                sub_140e54cd0(&var_498, &var_458)
                sub_140ddf250(&var_458)
            else
                int32_t var_1f8
                int64_t rbx_8 = sx.q(var_1f8 - 1)
                
                if (var_1f8 - 1 s>= 0)
                    int64_t rdi_3 = rbx_8 * 0x48
                    
                    while (true)
                        void* r8_4 = &var_320
                        void* var_200
                        
                        if (var_200 != 0)
                            r8_4 = var_200
                        
                        void* r8_5 = r8_4 + rdi_3
                        int64_t* rcx_42 = *(r8_5 + 0x38)
                        sub_140e54cd0(&var_498, 
                            (*(*rcx_42 + 0x90))(rcx_42, &var_458, r8_5, &var_418, var_4d8, var_4d0))
                        sub_140ddf250(&var_458)
                        
                        if (var_498 != 0)
                            int64_t r14_2 = var_478:8.q
                            
                            if (var_468 != 0)
                                var_468[1].d += 1
                                var_468[1].d -= 1
                                
                                if (var_468[1].d == 1)
                                    (**var_468)(var_468)
                                    int32_t temp20_1 = *(var_468 + 0xc)
                                    *(var_468 + 0xc) -= 1
                                    
                                    if (temp20_1 == 1)
                                        (*(*var_468 + 8))(var_468, 1)
                            
                            if (r14_2 == 0 && rbx_8 s>= 0)
                                int64_t rdi_6 = rbx_8 * 0x48
                                int64_t temp24_1
                                
                                do
                                    void* rcx_47 = &var_320
                                    
                                    if (var_200 != 0)
                                        rcx_47 = var_200
                                    
                                    int64_t* rcx_48 = *(rcx_47 + rdi_6 + 0x38)
                                    void* var_398
                                    (*(*rcx_48 + 0x98))(rcx_48, &var_398, &var_498)
                                    char var_388
                                    
                                    if (var_388 != 0)
                                        var_4a8 = var_398
                                        int64_t* var_390
                                        int64_t* var_4a0_1 = var_390
                                        
                                        if (var_390 != 0)
                                            var_390[1].d += 1
                                        
                                        void var_3a8
                                        int64_t* rax_40 = sub_140db22a0(&var_328, &var_3a8)
                                        var_4c0.q = *rax_40
                                        void* rcx_51 = rax_40[1]
                                        void* var_4b8_1 = rcx_51
                                        
                                        if (rcx_51 != 0)
                                            *(rcx_51 + 8) += 1
                                        
                                        sub_140e889e0(&var_498, &var_4c0, &var_4a8)
                                        int64_t* var_3a0
                                        
                                        if (var_3a0 != 0)
                                            var_3a0[1].d -= 1
                                            
                                            if (var_3a0[1].d == 1)
                                                (**var_3a0)(var_3a0)
                                                int32_t temp26_1 = *(var_3a0 + 0xc)
                                                *(var_3a0 + 0xc) -= 1
                                                
                                                if (temp26_1 == 1)
                                                    (*(*var_3a0 + 8))(var_3a0, 1)
                                        
                                        if (var_388 != 0)
                                            char var_388_1 = 0
                                            
                                            if (var_390 != 0)
                                                var_390[1].d -= 1
                                                
                                                if (var_390[1].d == 1)
                                                    (**var_390)(var_390)
                                                    int32_t temp28_1 = *(var_390 + 0xc)
                                                    *(var_390 + 0xc) -= 1
                                                    
                                                    if (temp28_1 == 1)
                                                        (*(*var_390 + 8))(var_390, 1)
                                        
                                        break
                                    
                                    rdi_6 -= 0x48
                                    temp24_1 = rbx_8
                                    rbx_8 -= 1
                                while (temp24_1 - 1 s>= 0)
                            
                            break
                        
                        rdi_3 -= 0x48
                        int64_t temp16_1 = rbx_8
                        rbx_8 -= 1
                        
                        if (temp16_1 - 1 s< 0)
                            goto label_140e82176
                
                if (var_498 == 0)
                label_140e82176:
                    
                    if (sub_140db3500(&var_328) != 0)
                        goto label_140e82182
            
            void var_1d8
            sub_140596d80(&var_1d8)
            int64_t* var_1e0
            
            if (var_1e0 != 0)
                var_1e0[1].d -= 1
                
                if (var_1e0[1].d == 1)
                    (**var_1e0)(var_1e0)
                    int32_t temp13_1 = *(var_1e0 + 0xc)
                    *(var_1e0 + 0xc) -= 1
                    
                    if (temp13_1 == 1)
                        (*(*var_1e0 + 8))(var_1e0, 1)
            
            sub_140d94d20(&var_320)
            int128_t var_3d8
            int64_t* rbx_12 = var_3d8:8.q
            
            if (rbx_12 != 0)
                rbx_12[1].d -= 1
                
                if (rbx_12[1].d == 1)
                    (**rbx_12)(rbx_12)
                    int32_t temp15_1 = *(rbx_12 + 0xc)
                    *(rbx_12 + 0xc) -= 1
                    
                    if (temp15_1 == 1)
                        (*(*rbx_12 + 8))(rbx_12, 1)
            
            var_418 = &data_142d7f690
            int32_t var_330_2 = 0
            
            if (var_338_1 != 0)
                sub_140a74f90(var_338_1)
            
            sub_1407ece30(&var_378, 0)
            int64_t var_358
            
            if (var_358 != 0)
                sub_140a74f90(var_358)
            
            uint64_t rcx_69 = var_378
            
            if (rcx_69 != 0)
                sub_140a74f90(rcx_69)
        
        result = sub_140e7b000(arg1, &var_498)
        
        if (var_468 != 0)
            var_468[1].d -= 1
            
            if (var_468[1].d == 1)
                result = (**var_468)(var_468)
                int32_t temp4_1 = *(var_468 + 0xc)
                *(var_468 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    result = (*(*var_468 + 8))(var_468, 1)
        
        int64_t* rbx_14 = var_478.q
        
        if (rbx_14 != 0)
            rbx_14[1].d -= 1
            
            if (rbx_14[1].d == 1)
                result = (**rbx_14)(rbx_14)
                int32_t temp6_1 = *(rbx_14 + 0xc)
                *(rbx_14 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    result = (*(*rbx_14 + 8))(rbx_14, 1)
        
        if (var_488_1 != 0)
            int32_t temp5_1 = *(var_488_1 + 8)
            *(var_488_1 + 8) -= 1
            
            if (temp5_1 == 1)
                result = (**var_488_1)(var_488_1)
                int32_t temp7_1 = *(var_488_1 + 0xc)
                *(var_488_1 + 0xc) -= 1
                
                if (temp7_1 == 1)
                    result = (*(*var_488_1 + 8))(var_488_1, 1)

__security_check_cookie(result_1 ^ &var_4f8)
return result
