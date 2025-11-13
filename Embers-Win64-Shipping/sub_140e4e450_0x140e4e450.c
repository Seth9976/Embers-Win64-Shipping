// 函数: sub_140e4e450
// 地址: 0x140e4e450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3a8
int64_t rax_1 = __security_cookie ^ &var_3a8
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
        
        void var_238
        sub_140d94310(&var_238, r10_1 + rdx * 0x48, (rdx << 4) + *(rcx_1 + 0x150))
        void** var_368
        sub_140e51390(&var_368, arg4)
        int32_t* var_1f0
        
        if (var_1f0 != 0)
            int32_t var_350_1 = *var_1f0
            int32_t var_34c_1 = var_1f0[1]
            int32_t var_348_1 = var_1f0[2]
            int32_t var_344_1 = var_1f0[3]
        
        int32_t var_244 = var_244 & 0xffffff00
        char var_2f8 = 0
        int64_t var_2f0_1 = 0
        int64_t* var_2e8_1 = nullptr
        char var_2d8_1 = 0
        int64_t var_2d0_1 = 0
        int64_t var_2c8_1 = (zx.o(0)).q
        int64_t var_2b8_1 = (zx.o(0)).q
        int64_t var_2a8_1 = (zx.o(0)).q
        int64_t var_298_1 = (zx.o(0)).q
        int64_t var_288_1 = (zx.o(0)).q
        int64_t* var_278
        __builtin_memset(&var_278, 0, 0x30)
        int32_t var_248_1 = 0x20702
        void*** var_388
        int32_t var_380
        char var_30c
        int64_t* var_200
        void var_118
        
        if (var_30c == 0)
            sub_1405979f0(&var_2f8, 
                (*(*var_200 + 0x58))(var_200, &var_118, &var_238, &var_368, var_388, var_380, arg2))
            sub_140597700(&var_118)
        else
            void var_1d8
            sub_1405979f0(&var_2f8, 
                (*(*var_200 + 0xe8))(var_200, &var_1d8, &var_238, &var_368, var_388, var_380, arg2))
            sub_140597700(&var_1d8)
            
            if (var_30c == 0)
                sub_1405979f0(&var_2f8, 
                    (*(*var_200 + 0x58))(var_200, &var_118, &var_238, &var_368, var_388, var_380, 
                        arg2))
                sub_140597700(&var_118)
            else if (var_2f8 == 0 && *(*arg5 + 0x460) != 0)
                sub_1405979f0(&var_2f8, 
                    (*(*var_200 + 0x58))(var_200, &var_118, &var_238, &var_368, var_388, var_380, 
                        arg2))
                sub_140597700(&var_118)
        int64_t* var_1f8
        
        if (var_1f8 != 0)
            var_1f8[1].d += 1
        
        int64_t* rdi_1 = var_2e8_1
        int64_t* var_2f0_2 = var_200
        
        if (var_1f8 != rdi_1)
            var_2e8_1 = var_1f8
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp4_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
        else if (var_1f8 != 0)
            var_1f8[1].d -= 1
            
            if (var_1f8[1].d == 1)
                (**var_1f8)(var_1f8)
                int32_t temp3_1 = *(var_1f8 + 0xc)
                *(var_1f8 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*var_1f8 + 8))(var_1f8, 1)
        
        sub_140e54f20(arg1, &var_2f8)
        int128_t var_258
        int64_t* rbx_3 = var_258:8.q
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t temp6_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
        
        int128_t var_268
        int64_t* rbx_4 = var_268:8.q
        
        if (rbx_4 != 0)
            rbx_4[1].d -= 1
            
            if (rbx_4[1].d == 1)
                (**rbx_4)(rbx_4)
                int32_t temp8_1 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*(*rbx_4 + 8))(rbx_4, 1)
        
        int64_t* rcx_18 = var_278
        
        if (rcx_18 != 0)
            int32_t temp7_1 = *(rcx_18 + 0xc)
            *(rcx_18 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rcx_18 + 8))(rcx_18, 1)
        
        if (var_288_1 != 0)
            int32_t temp9_1 = *(var_288_1 + 0xc)
            *(var_288_1 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*var_288_1 + 8))(var_288_1, 1)
        
        if (var_298_1 != 0)
            int32_t temp10_1 = *(var_298_1 + 0xc)
            *(var_298_1 + 0xc) -= 1
            
            if (temp10_1 == 1)
                (*(*var_298_1 + 8))(var_298_1, 1)
        
        if (var_2a8_1 != 0)
            int32_t temp11_1 = *(var_2a8_1 + 0xc)
            *(var_2a8_1 + 0xc) -= 1
            
            if (temp11_1 == 1)
                (*(*var_2a8_1 + 8))(var_2a8_1, 1)
        
        if (var_2b8_1 != 0)
            int32_t temp12_1 = *(var_2b8_1 + 0xc)
            *(var_2b8_1 + 0xc) -= 1
            
            if (temp12_1 == 1)
                (*(*var_2b8_1 + 8))(var_2b8_1, 1)
        
        if (var_2c8_1 != 0)
            int32_t temp13_1 = *(var_2c8_1 + 0xc)
            *(var_2c8_1 + 0xc) -= 1
            
            if (temp13_1 == 1)
                (*(*var_2c8_1 + 8))(var_2c8_1, 1)
        
        if (var_2e8_1 != 0)
            var_2e8_1[1].d -= 1
            
            if (var_2e8_1[1].d == 1)
                (**var_2e8_1)(var_2e8_1)
                int32_t temp16_1 = *(var_2e8_1 + 0xc)
                *(var_2e8_1 + 0xc) -= 1
                
                if (temp16_1 == 1)
                    (*(*var_2e8_1 + 8))(var_2e8_1, 1)
        
        int32_t var_35c
        var_380 = var_35c
        var_388 = &var_368
        MRECmpImpl::FPushFile(arg2, r12, arg1, r12, var_388, var_380)
        int64_t* var_320
        
        if (var_320 != 0)
            var_320[1].d -= 1
            
            if (var_320[1].d == 1)
                (**var_320)(var_320)
                int32_t temp18_1 = *(var_320 + 0xc)
                *(var_320 + 0xc) -= 1
                
                if (temp18_1 == 1)
                    (*(*var_320 + 8))(var_320, 1)
        
        var_368 = &data_142d7f690
        int64_t* var_1e8
        
        if (var_1e8 != 0)
            var_1e8[1].d -= 1
            
            if (var_1e8[1].d == 1)
                (**var_1e8)(var_1e8)
                int32_t temp20_1 = *(var_1e8 + 0xc)
                *(var_1e8 + 0xc) -= 1
                
                if (temp20_1 == 1)
                    (*(*var_1e8 + 8))(var_1e8, 1)
        
        if (var_1f8 != 0)
            var_1f8[1].d -= 1
            
            if (var_1f8[1].d == 1)
                (**var_1f8)(var_1f8)
                int32_t temp21_1 = *(var_1f8 + 0xc)
                *(var_1f8 + 0xc) -= 1
                
                if (temp21_1 == 1)
                    (*(*var_1f8 + 8))(var_1f8, 1)
        
        *arg3 = 1
    while (*arg1 == 0)
    
    rbx = arg2

sub_140e6d8b0(rbx, arg4, arg1)
sub_140e29130(arg4)
__security_check_cookie(rax_1 ^ &var_3a8)
return arg1
