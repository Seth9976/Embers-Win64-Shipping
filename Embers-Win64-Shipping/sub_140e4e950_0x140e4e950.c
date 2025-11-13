// 函数: sub_140e4e950
// 地址: 0x140e4e950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_528
int64_t rax_1 = __security_cookie ^ &var_528
*arg1 = 0
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
arg1[0x20] = 0
int64_t* rbx = arg2
__builtin_memset(&arg1[0x28], 0, 0x88)
*(arg1 + 0xb4) &= 0xffffff00
*(arg1 + 0xb0) = 0x20702
char* r12 = *(arg3 + 8)
arg4[2] = r12

if (*arg1 == 0)
    do
        if (sub_140e8b130(arg3) == 0)
            break
        
        void* rcx_1 = *(arg3 + 8)
        void* r10_1 = rcx_1 + 8
        void* r9 = *(r10_1 + 0x120)
        int64_t rdx = sx.q(*(rcx_1 + 0x130) - 1)
        
        if (r9 != 0)
            r10_1 = r9
        
        void var_3b8
        sub_140d94310(&var_3b8, r10_1 + rdx * 0x48, (rdx << 4) + *(rcx_1 + 0x150))
        void** var_4e8
        sub_140e51390(&var_4e8, arg4)
        int32_t* var_370
        
        if (var_370 != 0)
            int32_t var_4d0_1 = *var_370
            int32_t var_4cc_1 = var_370[1]
            int32_t var_4c8_1 = var_370[2]
            int32_t var_4c4_1 = var_370[3]
        
        int32_t var_3c4 = var_3c4 & 0xffffff00
        char var_478 = 0
        int32_t* rbx_1
        rbx_1.b = 1
        int64_t var_470_1 = 0
        int64_t* var_468_1 = nullptr
        char var_458_1 = 0
        int64_t var_450_1 = 0
        int64_t var_448_1 = (zx.o(0)).q
        int64_t var_438_1 = (zx.o(0)).q
        int64_t var_428_1 = (zx.o(0)).q
        int64_t var_418_1 = (zx.o(0)).q
        int64_t var_408_1 = (zx.o(0)).q
        int64_t* var_3f8
        __builtin_memset(&var_3f8, 0, 0x30)
        int32_t var_3c8_1 = 0x20702
        void*** var_508
        int32_t var_500
        char var_48c
        int64_t* var_380
        void var_118
        
        if (var_48c == 0)
            sub_1405979f0(&var_478, 
                (*(*var_380 + 0x70))(var_380, &var_118, &var_3b8, &var_4e8, var_508, var_500, arg2))
            sub_140597700(&var_118)
        else
            void*** r9_1 = &var_4e8
            void* r8_3 = &var_3b8
            int64_t rax_6 = *var_380
            char var_47f
            char var_47e
            
            if (var_47f != 0)
                void var_358
                sub_1405979f0(&var_478, 
                    (*(rax_6 + 0x100))(var_380, &var_358, r8_3, r9_1, var_508, var_500, arg2))
                sub_140597700(&var_358)
                rbx_1.b = 0
            else if (var_47e == 0)
                void var_1d8
                sub_1405979f0(&var_478, 
                    (*(rax_6 + 0xf0))(var_380, &var_1d8, r8_3, r9_1, var_508, var_500, arg2))
                sub_140597700(&var_1d8)
            else
                void var_298
                sub_1405979f0(&var_478, 
                    (*(rax_6 + 0x108))(var_380, &var_298, r8_3, r9_1, var_508, var_500, arg2))
                sub_140597700(&var_298)
                rbx_1.b = 0
            
            if (var_48c == 0 && rbx_1.b != 0)
                sub_1405979f0(&var_478, 
                    (*(*var_380 + 0x70))(var_380, &var_118, &var_3b8, &var_4e8, var_508, var_500, 
                        arg2))
                sub_140597700(&var_118)
            else if (var_478 == 0 && *(*arg5 + 0x460) != 0)
                sub_1405979f0(&var_478, 
                    (*(*var_380 + 0x70))(var_380, &var_118, &var_3b8, &var_4e8, var_508, var_500, 
                        arg2))
                sub_140597700(&var_118)
        int64_t* var_378
        
        if (var_378 != 0)
            var_378[1].d += 1
        
        int64_t* rdi_1 = var_468_1
        int64_t* var_470_2 = var_380
        
        if (var_378 != rdi_1)
            var_468_1 = var_378
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp4_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
        else if (var_378 != 0)
            var_378[1].d -= 1
            
            if (var_378[1].d == 1)
                (**var_378)(var_378)
                int32_t temp3_1 = *(var_378 + 0xc)
                *(var_378 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*var_378 + 8))(var_378, 1)
        
        sub_140e54f20(arg1, &var_478)
        int128_t var_3d8
        int64_t* rbx_3 = var_3d8:8.q
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t temp6_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
        
        int128_t var_3e8
        int64_t* rbx_4 = var_3e8:8.q
        
        if (rbx_4 != 0)
            rbx_4[1].d -= 1
            
            if (rbx_4[1].d == 1)
                (**rbx_4)(rbx_4)
                int32_t temp8_1 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*(*rbx_4 + 8))(rbx_4, 1)
        
        int64_t* rcx_22 = var_3f8
        
        if (rcx_22 != 0)
            int32_t temp7_1 = *(rcx_22 + 0xc)
            *(rcx_22 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rcx_22 + 8))(rcx_22, 1)
        
        if (var_408_1 != 0)
            int32_t temp9_1 = *(var_408_1 + 0xc)
            *(var_408_1 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*var_408_1 + 8))(var_408_1, 1)
        
        if (var_418_1 != 0)
            int32_t temp10_1 = *(var_418_1 + 0xc)
            *(var_418_1 + 0xc) -= 1
            
            if (temp10_1 == 1)
                (*(*var_418_1 + 8))(var_418_1, 1)
        
        if (var_428_1 != 0)
            int32_t temp11_1 = *(var_428_1 + 0xc)
            *(var_428_1 + 0xc) -= 1
            
            if (temp11_1 == 1)
                (*(*var_428_1 + 8))(var_428_1, 1)
        
        if (var_438_1 != 0)
            int32_t temp12_1 = *(var_438_1 + 0xc)
            *(var_438_1 + 0xc) -= 1
            
            if (temp12_1 == 1)
                (*(*var_438_1 + 8))(var_438_1, 1)
        
        if (var_448_1 != 0)
            int32_t temp13_1 = *(var_448_1 + 0xc)
            *(var_448_1 + 0xc) -= 1
            
            if (temp13_1 == 1)
                (*(*var_448_1 + 8))(var_448_1, 1)
        
        if (var_468_1 != 0)
            var_468_1[1].d -= 1
            
            if (var_468_1[1].d == 1)
                (**var_468_1)(var_468_1)
                int32_t temp16_1 = *(var_468_1 + 0xc)
                *(var_468_1 + 0xc) -= 1
                
                if (temp16_1 == 1)
                    (*(*var_468_1 + 8))(var_468_1, 1)
        
        int32_t var_4dc
        var_500 = var_4dc
        var_508 = &var_4e8
        MRECmpImpl::FPushFile(arg2, r12, arg1, r12, var_508, var_500)
        int64_t* var_4a0
        
        if (var_4a0 != 0)
            var_4a0[1].d -= 1
            
            if (var_4a0[1].d == 1)
                (**var_4a0)(var_4a0)
                int32_t temp18_1 = *(var_4a0 + 0xc)
                *(var_4a0 + 0xc) -= 1
                
                if (temp18_1 == 1)
                    (*(*var_4a0 + 8))(var_4a0, 1)
        
        var_4e8 = &data_142d7f690
        int64_t* var_368
        
        if (var_368 != 0)
            var_368[1].d -= 1
            
            if (var_368[1].d == 1)
                (**var_368)(var_368)
                int32_t temp20_1 = *(var_368 + 0xc)
                *(var_368 + 0xc) -= 1
                
                if (temp20_1 == 1)
                    (*(*var_368 + 8))(var_368, 1)
        
        if (var_378 != 0)
            var_378[1].d -= 1
            
            if (var_378[1].d == 1)
                (**var_378)(var_378)
                int32_t temp21_1 = *(var_378 + 0xc)
                *(var_378 + 0xc) -= 1
                
                if (temp21_1 == 1)
                    (*(*var_378 + 8))(var_378, 1)
        
        *arg3 = 1
    while (*arg1 == 0)
    
    rbx = arg2

sub_140e6d8b0(rbx, arg4, arg1)
sub_140e29130(arg4)
__security_check_cookie(rax_1 ^ &var_528)
return arg1
