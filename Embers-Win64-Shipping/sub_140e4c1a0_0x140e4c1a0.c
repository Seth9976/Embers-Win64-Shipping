// 函数: sub_140e4c1a0
// 地址: 0x140e4c1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_5a8
int64_t rax_1 = __security_cookie ^ &var_5a8
*arg1 = 0
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
arg1[0x20] = 0
int64_t* rax_2 = arg2
__builtin_memset(&arg1[0x28], 0, 0x88)
*(arg1 + 0xb4) &= 0xffffff00
*(arg1 + 0xb0) = 0x20702
char* r12 = *(arg3 + 8)
arg4[2] = r12

if (*arg1 == 0)
    int32_t i = *arg3
    
    while (i s>= 0)
        void* rax_3 = *(arg3 + 8)
        int64_t i_1 = sx.q(i)
        void* r9 = rax_3 + 8
        void* rcx = *(r9 + 0x120)
        
        if (rcx != 0)
            r9 = rcx
        
        void var_3b8
        sub_140d94310(&var_3b8, r9 + i_1 * 0x48, (i_1 << 4) + *(rax_3 + 0x150))
        void** var_568
        sub_140e51390(&var_568, arg4)
        int32_t var_550
        int128_t* var_370
        
        if (var_370 != 0)
            var_550 = (*var_370).d
            int32_t var_54c_1 = *(var_370 + 4)
            int32_t var_548_1 = (*(var_370 + 8)).d
            int32_t var_544_1 = *(var_370 + 0xc)
        
        void*** var_588
        int32_t var_580
        int32_t var_55c
        int64_t* var_520
        int64_t* var_380
        void var_358
        void* rcx_12
        char var_50c
        
        if (**arg5 == 0)
            int32_t var_3c4 = var_3c4 & 0xffffff00
            char var_478 = 0
            int64_t var_470_1 = 0
            int64_t var_468_1 = 0
            char var_458_1 = 0
            int64_t var_450
            __builtin_memset(&var_450, 0, 0x88)
            int32_t var_3c8_1 = 0x20702
            void var_118
            
            if (var_50c == 0)
                sub_1405979f0(&var_478, 
                    (*(*var_380 + 0x68))(var_380, &var_118, &var_3b8, &var_568, var_588, var_580, 
                        arg2))
                sub_140597700(&var_118)
            else
                void var_1d8
                sub_1405979f0(&var_478, 
                    (*(*var_380 + 0xf8))(var_380, &var_1d8, &var_3b8, &var_568, var_588, var_580, 
                        arg2))
                sub_140597700(&var_1d8)
                
                if (var_50c == 0)
                    sub_1405979f0(&var_478, 
                        (*(*var_380 + 0x68))(var_380, &var_118, &var_3b8, &var_568, var_588, 
                            var_580, arg2))
                    sub_140597700(&var_118)
                else if (var_478 == 0 && *(arg5[2] + 0x460) != 0)
                    sub_1405979f0(&var_478, 
                        (*(*var_380 + 0x68))(var_380, &var_118, &var_3b8, &var_568, var_588, 
                            var_580, arg2))
                    sub_140597700(&var_118)
            sub_140e51550(&var_358, &var_478)
            rcx_12 = &var_478
        else
            int64_t* rax_6 = arg5[1]
            int64_t* rbx_2 = rax_6[1]
            int64_t rcx_3 = *rax_6
            
            if (rbx_2 != 0)
                rbx_2[1].d += 1
            
            int16_t var_560
            int16_t var_4f0_1 = var_560
            char var_55e
            char var_4ee_1 = var_55e
            int32_t var_4ec_1 = var_55c
            int64_t var_558
            int64_t var_4e8_1 = var_558
            void** const var_4f8 = &data_142ecfd88
            int64_t var_538
            int64_t var_4c8_1 = var_538
            int64_t var_530
            int64_t var_4c0_1 = var_530
            int64_t var_528
            int64_t var_4b8_1 = var_528
            int32_t var_53c
            int32_t var_4cc_1 = var_53c
            int128_t var_4e0_1 = var_550.o
            int32_t var_540
            int32_t var_4d0_1 = var_540.d
            
            if (var_520 != 0)
                var_520[1].d += 1
            
            int32_t var_518
            int32_t var_4a8_1 = var_518
            int32_t var_514
            int32_t var_4a4_1 = var_514
            char var_49c_1 = var_50c
            char var_50b
            char var_49b_1 = var_50b
            char var_500
            char var_490_1 = var_500
            char var_4ff
            char var_48f_1 = var_4ff
            char var_4fe
            char var_48e_1 = var_4fe
            int32_t var_510
            int32_t var_4a0_1 = var_510.d
            var_4f8 = &data_142ed7318
            int32_t var_508
            int32_t var_498_1 = var_508.d
            int32_t var_504
            int32_t var_494_1 = var_504
            int64_t var_488_1 = rcx_3
            
            if (rbx_2 != 0)
                int32_t rax_22 = rbx_2[1].d
                rbx_2[1].d = rax_22
                
                if (rax_22 == 0)
                    (**rbx_2)(rbx_2)
                    int32_t temp1_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
            
            void var_298
            (*(*var_380 + 0xd8))(var_380, &var_298, &var_3b8, &var_4f8, var_588, var_580, arg2)
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t temp3_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
            
            if (var_520 != 0)
                var_520[1].d -= 1
                
                if (var_520[1].d == 1)
                    (**var_520)(var_520)
                    int32_t temp6_1 = *(var_520 + 0xc)
                    *(var_520 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        (*(*var_520 + 8))(var_520, 1)
            
            var_4f8 = &data_142d7f690
            sub_140596b00(&var_358, &var_298)
            rcx_12 = &var_298
        sub_140597700(rcx_12)
        int64_t* var_378
        
        if (var_378 != 0)
            var_378[1].d += 1
        
        int64_t* var_348
        int64_t* rdi_2 = var_348
        int64_t* var_350_1 = var_380
        
        if (var_378 != rdi_2)
            var_348 = var_378
            
            if (rdi_2 != 0)
                rdi_2[1].d -= 1
                
                if (rdi_2[1].d == 1)
                    (**rdi_2)(rdi_2)
                    int32_t temp9_1 = *(rdi_2 + 0xc)
                    *(rdi_2 + 0xc) -= 1
                    
                    if (temp9_1 == 1)
                        (*(*rdi_2 + 8))(rdi_2, 1)
        else if (var_378 != 0)
            var_378[1].d -= 1
            
            if (var_378[1].d == 1)
                (**var_378)(var_378)
                int32_t temp8_1 = *(var_378 + 0xc)
                *(var_378 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*(*var_378 + 8))(var_378, 1)
        
        sub_140e54f20(arg1, &var_358)
        int64_t* var_2b0
        
        if (var_2b0 != 0)
            var_2b0[1].d -= 1
            
            if (var_2b0[1].d == 1)
                (**var_2b0)(var_2b0)
                int32_t temp11_1 = *(var_2b0 + 0xc)
                *(var_2b0 + 0xc) -= 1
                
                if (temp11_1 == 1)
                    (*(*var_2b0 + 8))(var_2b0, 1)
        
        int64_t* var_2c0
        
        if (var_2c0 != 0)
            var_2c0[1].d -= 1
            
            if (var_2c0[1].d == 1)
                (**var_2c0)(var_2c0)
                int32_t temp13_1 = *(var_2c0 + 0xc)
                *(var_2c0 + 0xc) -= 1
                
                if (temp13_1 == 1)
                    (*(*var_2c0 + 8))(var_2c0, 1)
        
        int64_t* var_2d8
        
        if (var_2d8 != 0)
            int32_t temp12_1 = *(var_2d8 + 0xc)
            *(var_2d8 + 0xc) -= 1
            
            if (temp12_1 == 1)
                (*(*var_2d8 + 8))(var_2d8, 1)
        
        int64_t* var_2e8
        
        if (var_2e8 != 0)
            int32_t temp14_1 = *(var_2e8 + 0xc)
            *(var_2e8 + 0xc) -= 1
            
            if (temp14_1 == 1)
                (*(*var_2e8 + 8))(var_2e8, 1)
        
        int64_t* var_2f8
        
        if (var_2f8 != 0)
            int32_t temp15_1 = *(var_2f8 + 0xc)
            *(var_2f8 + 0xc) -= 1
            
            if (temp15_1 == 1)
                (*(*var_2f8 + 8))(var_2f8, 1)
        
        int64_t* var_308
        
        if (var_308 != 0)
            int32_t temp16_1 = *(var_308 + 0xc)
            *(var_308 + 0xc) -= 1
            
            if (temp16_1 == 1)
                (*(*var_308 + 8))(var_308, 1)
        
        int64_t* var_318
        
        if (var_318 != 0)
            int32_t temp17_1 = *(var_318 + 0xc)
            *(var_318 + 0xc) -= 1
            
            if (temp17_1 == 1)
                (*(*var_318 + 8))(var_318, 1)
        
        int64_t* var_328
        
        if (var_328 != 0)
            int32_t temp18_1 = *(var_328 + 0xc)
            *(var_328 + 0xc) -= 1
            
            if (temp18_1 == 1)
                (*(*var_328 + 8))(var_328, 1)
        
        if (var_348 != 0)
            var_348[1].d -= 1
            
            if (var_348[1].d == 1)
                (**var_348)(var_348)
                int32_t temp21_1 = *(var_348 + 0xc)
                *(var_348 + 0xc) -= 1
                
                if (temp21_1 == 1)
                    (*(*var_348 + 8))(var_348, 1)
        
        var_580 = var_55c
        var_588 = &var_568
        MRECmpImpl::FPushFile(arg2, r12, arg1, r12, var_588, var_580)
        
        if (var_520 != 0)
            var_520[1].d -= 1
            
            if (var_520[1].d == 1)
                (**var_520)(var_520)
                int32_t temp23_1 = *(var_520 + 0xc)
                *(var_520 + 0xc) -= 1
                
                if (temp23_1 == 1)
                    (*(*var_520 + 8))(var_520, 1)
        
        var_568 = &data_142d7f690
        int64_t* var_368
        
        if (var_368 != 0)
            var_368[1].d -= 1
            
            if (var_368[1].d == 1)
                (**var_368)(var_368)
                int32_t temp25_1 = *(var_368 + 0xc)
                *(var_368 + 0xc) -= 1
                
                if (temp25_1 == 1)
                    (*(*var_368 + 8))(var_368, 1)
        
        if (var_378 != 0)
            var_378[1].d -= 1
            
            if (var_378[1].d == 1)
                (**var_378)(var_378)
                int32_t temp26_1 = *(var_378 + 0xc)
                *(var_378 + 0xc) -= 1
                
                if (temp26_1 == 1)
                    (*(*var_378 + 8))(var_378, 1)
        
        *arg3 -= 1
        i = *arg3
        
        if (*arg1 != 0)
            break
    
    rax_2 = arg2

sub_140e6d8b0(rax_2, arg4, arg1)
sub_140e29130(arg4)
__security_check_cookie(rax_1 ^ &var_5a8)
return arg1
