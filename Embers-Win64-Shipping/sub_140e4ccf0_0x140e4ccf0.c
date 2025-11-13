// 函数: sub_140e4ccf0
// 地址: 0x140e4ccf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3e8
int64_t rax_1 = __security_cookie ^ &var_3e8
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
        
        int128_t var_238
        sub_140d94310(&var_238, r9 + i_1 * 0x48, (i_1 << 4) + *(rax_3 + 0x150))
        void** var_368
        sub_140e51390(&var_368, arg4)
        int128_t* var_1f0
        
        if (var_1f0 != 0)
            int32_t var_350_1 = (*var_1f0).d
            int32_t var_34c_1 = (*(var_1f0 + 4)).d
            int32_t var_348_1 = (*(var_1f0 + 8)).d
            int32_t var_344_1 = (*(var_1f0 + 0xc)).d
        
        int64_t* var_200
        int64_t* rcx_3 = var_200
        int64_t* var_378_1 = rcx_3
        int128_t var_3b0 = var_238
        uint128_t var_228
        uint128_t var_3a0_1 = var_228
        int64_t var_208
        uint64_t var_380_1 = var_208
        int128_t var_218
        int128_t var_390_1 = var_218
        int64_t* var_1f8
        
        if (var_1f8 != 0)
            var_1f8[1].d += 1
            rcx_3 = var_378_1
        
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
        void*** var_3c8
        int32_t var_3c0
        char var_30c
        void var_118
        
        if (var_30c == 0)
            sub_1405979f0(&var_2f8, 
                (*(*rcx_3 + 0x58))(rcx_3, &var_118, &var_3b0, &var_368, var_3c8, var_3c0, arg2))
            sub_140597700(&var_118)
        else
            void var_1d8
            sub_1405979f0(&var_2f8, 
                (*(*rcx_3 + 0xe8))(rcx_3, &var_1d8, &var_3b0, &var_368, var_3c8, var_3c0, arg2))
            sub_140597700(&var_1d8)
            
            if (var_30c == 0)
            label_140e4cf5c:
                sub_1405979f0(&var_2f8, 
                    (*(*var_378_1 + 0x58))(var_378_1, &var_118, &var_3b0, &var_368, var_3c8, 
                        var_3c0, arg2))
                sub_140597700(&var_118)
            else if (var_2f8 == 0 && *(*arg5 + 0x460) != 0)
                goto label_140e4cf5c
        
        if (var_1f8 != 0)
            var_1f8[1].d -= 1
            
            if (var_1f8[1].d == 1)
                (**var_1f8)(var_1f8)
                int32_t temp1_1 = *(var_1f8 + 0xc)
                *(var_1f8 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*var_1f8 + 8))(var_1f8, 1)
        
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
                    int32_t temp6_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
        else if (var_1f8 != 0)
            var_1f8[1].d -= 1
            
            if (var_1f8[1].d == 1)
                (**var_1f8)(var_1f8)
                int32_t temp5_1 = *(var_1f8 + 0xc)
                *(var_1f8 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*var_1f8 + 8))(var_1f8, 1)
        
        sub_140e54f20(arg1, &var_2f8)
        int128_t var_258
        int64_t* rbx_4 = var_258:8.q
        
        if (rbx_4 != 0)
            rbx_4[1].d -= 1
            
            if (rbx_4[1].d == 1)
                (**rbx_4)(rbx_4)
                int32_t temp8_1 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*(*rbx_4 + 8))(rbx_4, 1)
        
        int128_t var_268
        int64_t* rbx_5 = var_268:8.q
        
        if (rbx_5 != 0)
            rbx_5[1].d -= 1
            
            if (rbx_5[1].d == 1)
                (**rbx_5)(rbx_5)
                int32_t temp10_1 = *(rbx_5 + 0xc)
                *(rbx_5 + 0xc) -= 1
                
                if (temp10_1 == 1)
                    (*(*rbx_5 + 8))(rbx_5, 1)
        
        int64_t* rcx_18 = var_278
        
        if (rcx_18 != 0)
            int32_t temp9_1 = *(rcx_18 + 0xc)
            *(rcx_18 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*rcx_18 + 8))(rcx_18, 1)
        
        if (var_288_1 != 0)
            int32_t temp11_1 = *(var_288_1 + 0xc)
            *(var_288_1 + 0xc) -= 1
            
            if (temp11_1 == 1)
                (*(*var_288_1 + 8))(var_288_1, 1)
        
        if (var_298_1 != 0)
            int32_t temp12_1 = *(var_298_1 + 0xc)
            *(var_298_1 + 0xc) -= 1
            
            if (temp12_1 == 1)
                (*(*var_298_1 + 8))(var_298_1, 1)
        
        if (var_2a8_1 != 0)
            int32_t temp13_1 = *(var_2a8_1 + 0xc)
            *(var_2a8_1 + 0xc) -= 1
            
            if (temp13_1 == 1)
                (*(*var_2a8_1 + 8))(var_2a8_1, 1)
        
        if (var_2b8_1 != 0)
            int32_t temp14_1 = *(var_2b8_1 + 0xc)
            *(var_2b8_1 + 0xc) -= 1
            
            if (temp14_1 == 1)
                (*(*var_2b8_1 + 8))(var_2b8_1, 1)
        
        if (var_2c8_1 != 0)
            int32_t temp15_1 = *(var_2c8_1 + 0xc)
            *(var_2c8_1 + 0xc) -= 1
            
            if (temp15_1 == 1)
                (*(*var_2c8_1 + 8))(var_2c8_1, 1)
        
        if (var_2e8_1 != 0)
            var_2e8_1[1].d -= 1
            
            if (var_2e8_1[1].d == 1)
                (**var_2e8_1)(var_2e8_1)
                int32_t temp18_1 = *(var_2e8_1 + 0xc)
                *(var_2e8_1 + 0xc) -= 1
                
                if (temp18_1 == 1)
                    (*(*var_2e8_1 + 8))(var_2e8_1, 1)
        
        int32_t var_35c
        var_3c0 = var_35c
        var_3c8 = &var_368
        MRECmpImpl::FPushFile(arg2, r12, arg1, r12, var_3c8, var_3c0)
        int64_t* var_320
        
        if (var_320 != 0)
            var_320[1].d -= 1
            
            if (var_320[1].d == 1)
                (**var_320)(var_320)
                int32_t temp20_1 = *(var_320 + 0xc)
                *(var_320 + 0xc) -= 1
                
                if (temp20_1 == 1)
                    (*(*var_320 + 8))(var_320, 1)
        
        var_368 = &data_142d7f690
        int64_t* var_1e8
        
        if (var_1e8 != 0)
            var_1e8[1].d -= 1
            
            if (var_1e8[1].d == 1)
                (**var_1e8)(var_1e8)
                int32_t temp22_1 = *(var_1e8 + 0xc)
                *(var_1e8 + 0xc) -= 1
                
                if (temp22_1 == 1)
                    (*(*var_1e8 + 8))(var_1e8, 1)
        
        if (var_1f8 != 0)
            var_1f8[1].d -= 1
            
            if (var_1f8[1].d == 1)
                (**var_1f8)(var_1f8)
                int32_t temp23_1 = *(var_1f8 + 0xc)
                *(var_1f8 + 0xc) -= 1
                
                if (temp23_1 == 1)
                    (*(*var_1f8 + 8))(var_1f8, 1)
        
        *arg3 -= 1
        i = *arg3
        
        if (*arg1 != 0)
            break
    
    rax_2 = arg2

sub_140e6d8b0(rax_2, arg4, arg1)
sub_140e29130(arg4)
__security_check_cookie(rax_1 ^ &var_3e8)
return arg1
