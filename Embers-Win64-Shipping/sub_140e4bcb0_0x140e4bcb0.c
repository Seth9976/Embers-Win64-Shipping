// 函数: sub_140e4bcb0
// 地址: 0x140e4bcb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_3b8
int64_t rax_1 = __security_cookie ^ &var_3b8
int64_t* rdi = arg5
*arg1 = 0
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
arg1[0x20] = 0
__builtin_memset(&arg1[0x28], 0, 0x88)
*(arg1 + 0xb4) &= 0xffffff00
*(arg1 + 0xb0) = 0x20702
char* r12 = *(arg3 + 8)
arg4[2] = r12
int64_t* var_388 = rdi

if (*arg1 == 0)
    int32_t i = *arg3
    int128_t zmm6 = zx.o(0)
    
    while (i s>= 0)
        void* rax_2 = *(arg3 + 8)
        int64_t i_1 = sx.q(i)
        void* r9 = rax_2 + 8
        void* rcx = *(r9 + 0x120)
        
        if (rcx != 0)
            r9 = rcx
        
        void var_248
        sub_140d94310(&var_248, r9 + i_1 * 0x48, (i_1 << 4) + *(rax_2 + 0x150))
        void** var_378
        sub_140e51390(&var_378, arg4)
        int32_t* var_200
        
        if (var_200 != 0)
            int32_t var_360_1 = *var_200
            int32_t var_35c_1 = var_200[1]
            int32_t var_358_1 = var_200[2]
            int32_t var_354_1 = var_200[3]
        
        int32_t var_254 = var_254 & 0xffffff00
        int64_t var_300_1 = 0
        int64_t* var_2f8_1 = nullptr
        char var_2e8_1 = 0
        int64_t var_2e0_1 = 0
        int64_t* var_288
        __builtin_memset(&var_288, 0, 0x30)
        int64_t* rax_4 = *rdi
        char var_308 = 0
        int64_t var_2d8_1 = (zx.o(0)).q
        int64_t var_2c8_1 = (zx.o(0)).q
        int64_t r9_1 = *rax_4
        int64_t var_2b8_1 = (zx.o(0)).q
        int64_t var_2a8_1 = (zx.o(0)).q
        int64_t var_298_1 = (zx.o(0)).q
        int32_t var_258_1 = 0x20702
        void*** var_398
        int32_t var_390
        int64_t* var_210
        
        if (r9_1 != 0)
            void var_1e8
            sub_1405979f0(&var_308, 
                (*(*var_210 + 0xe0))(var_210, &var_1e8, &var_248, r9_1, var_398, var_390, var_388))
            sub_140597700(&var_1e8)
        
        int32_t var_314
        
        if ((r9_1 == 0 || var_308 == 0) && not(var_314 f== zmm6.d))
            void var_128
            sub_1405979f0(&var_308, 
                (*(*var_210 + 0x88))(var_210, &var_128, &var_248, &var_378, var_398, var_390, 
                    var_388))
            sub_140597700(&var_128)
        
        int64_t* var_208
        
        if (var_208 != 0)
            var_208[1].d += 1
        
        int64_t* rdi_1 = var_2f8_1
        int64_t* var_300_2 = var_210
        
        if (var_208 != rdi_1)
            var_2f8_1 = var_208
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp4_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
        else if (var_208 != 0)
            var_208[1].d -= 1
            
            if (var_208[1].d == 1)
                (**var_208)(var_208)
                int32_t temp3_1 = *(var_208 + 0xc)
                *(var_208 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*var_208 + 8))(var_208, 1)
        
        sub_140e54f20(arg1, &var_308)
        int128_t var_268
        int64_t* rbx_3 = var_268:8.q
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t temp6_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
        
        int128_t var_278
        int64_t* rbx_4 = var_278:8.q
        
        if (rbx_4 != 0)
            rbx_4[1].d -= 1
            
            if (rbx_4[1].d == 1)
                (**rbx_4)(rbx_4)
                int32_t temp8_1 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*(*rbx_4 + 8))(rbx_4, 1)
        
        int64_t* rcx_17 = var_288
        
        if (rcx_17 != 0)
            int32_t temp7_1 = *(rcx_17 + 0xc)
            *(rcx_17 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rcx_17 + 8))(rcx_17, 1)
        
        if (var_298_1 != 0)
            int32_t temp9_1 = *(var_298_1 + 0xc)
            *(var_298_1 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*var_298_1 + 8))(var_298_1, 1)
        
        if (var_2a8_1 != 0)
            int32_t temp10_1 = *(var_2a8_1 + 0xc)
            *(var_2a8_1 + 0xc) -= 1
            
            if (temp10_1 == 1)
                (*(*var_2a8_1 + 8))(var_2a8_1, 1)
        
        if (var_2b8_1 != 0)
            int32_t temp11_1 = *(var_2b8_1 + 0xc)
            *(var_2b8_1 + 0xc) -= 1
            
            if (temp11_1 == 1)
                (*(*var_2b8_1 + 8))(var_2b8_1, 1)
        
        if (var_2c8_1 != 0)
            int32_t temp12_1 = *(var_2c8_1 + 0xc)
            *(var_2c8_1 + 0xc) -= 1
            
            if (temp12_1 == 1)
                (*(*var_2c8_1 + 8))(var_2c8_1, 1)
        
        if (var_2d8_1 != 0)
            int32_t temp13_1 = *(var_2d8_1 + 0xc)
            *(var_2d8_1 + 0xc) -= 1
            
            if (temp13_1 == 1)
                (*(*var_2d8_1 + 8))(var_2d8_1, 1)
        
        if (var_2f8_1 != 0)
            var_2f8_1[1].d -= 1
            
            if (var_2f8_1[1].d == 1)
                (**var_2f8_1)(var_2f8_1)
                int32_t temp16_1 = *(var_2f8_1 + 0xc)
                *(var_2f8_1 + 0xc) -= 1
                
                if (temp16_1 == 1)
                    (*(*var_2f8_1 + 8))(var_2f8_1, 1)
        
        int32_t var_36c
        var_390 = var_36c
        var_398 = &var_378
        zmm6 = MRECmpImpl::FPushFile(arg2, r12, arg1, r12, var_398, var_390)
        int64_t* var_330
        
        if (var_330 != 0)
            var_330[1].d -= 1
            
            if (var_330[1].d == 1)
                (**var_330)(var_330)
                int32_t temp18_1 = *(var_330 + 0xc)
                *(var_330 + 0xc) -= 1
                
                if (temp18_1 == 1)
                    (*(*var_330 + 8))(var_330, 1)
        
        var_378 = &data_142d7f690
        int64_t* var_1f8
        
        if (var_1f8 != 0)
            var_1f8[1].d -= 1
            
            if (var_1f8[1].d == 1)
                (**var_1f8)(var_1f8)
                int32_t temp20_1 = *(var_1f8 + 0xc)
                *(var_1f8 + 0xc) -= 1
                
                if (temp20_1 == 1)
                    (*(*var_1f8 + 8))(var_1f8, 1)
        
        if (var_208 != 0)
            var_208[1].d -= 1
            
            if (var_208[1].d == 1)
                (**var_208)(var_208)
                int32_t temp21_1 = *(var_208 + 0xc)
                *(var_208 + 0xc) -= 1
                
                if (temp21_1 == 1)
                    (*(*var_208 + 8))(var_208, 1)
        
        *arg3 -= 1
        i = *arg3
        rdi = var_388
        
        if (*arg1 != 0)
            break

sub_140e6d8b0(arg2, arg4, arg1)
sub_140e29130(arg4)
__security_check_cookie(rax_1 ^ &var_3b8)
return arg1
