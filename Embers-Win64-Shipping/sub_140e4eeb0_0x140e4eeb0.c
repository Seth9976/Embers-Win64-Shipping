// 函数: sub_140e4eeb0
// 地址: 0x140e4eeb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_378
int64_t rax_1 = __security_cookie ^ &var_378
int32_t rsi = 0
int32_t var_340 = 0
*arg1 = 0
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
int64_t* rax_2 = arg2
arg1[0x20] = 0
__builtin_memset(&arg1[0x28], 0, 0x88)
*(arg1 + 0xb4) &= 0xffffff00
*(arg1 + 0xb0) = 0x20702
char* r12 = *(arg3 + 8)
arg4[2] = r12

if (*arg1 == 0)
    int32_t rcx = *arg3
    
    do
        void* r9 = *(arg3 + 8)
        
        if (rcx s>= *(r9 + 0x130))
            break
        
        int64_t rcx_1 = sx.q(rcx)
        void* rdx = r9 + 8
        void* rax_3 = *(rdx + 0x120)
        
        if (rax_3 != 0)
            rdx = rax_3
        
        void var_238
        sub_140d94310(&var_238, rdx + rcx_1 * 0x48, (rcx_1 << 4) + *(r9 + 0x150))
        int16_t var_330_1 = arg4[1].w
        char var_32e_1 = *(arg4 + 0xa)
        int32_t rax_7 = *(arg4 + 0xc)
        int64_t var_328_1 = arg4[2]
        int64_t var_320_1 = arg4[3]
        int64_t var_318_1 = arg4[4]
        int64_t* rax_11 = arg4[5]
        void** const var_338 = &data_142d7f6a8
        
        if (rax_11 != 0)
            rax_11[1].d += 1
        
        int64_t* var_200
        int64_t* rcx_3 = var_200
        int32_t var_308_1 = arg4[6].d
        int32_t var_304_1 = *(arg4 + 0x34)
        char* rbx_1 = &rcx_3[0x32]
        
        if (*(rbx_1 + 0x10) != 0)
            int64_t* rdx_2 = *(rbx_1 + 8)
            
            if (rdx_2 != 0)
                if ((*(*rdx_2 + 0x28))(rdx_2) != 0)
                    int64_t* rcx_5
                    
                    if (*(rbx_1 + 0x10) == 0)
                        rcx_5 = nullptr
                    else
                        rcx_5 = *(rbx_1 + 8)
                    
                    *rbx_1 = (*(*rcx_5 + 0x48))(rcx_5)
                
                rcx_3 = var_200
        
        void* const var_358
        int32_t var_350
        char var_2f8
        void var_118
        char* rax_19
        
        if (*rbx_1 == 0)
            var_2f8 = 0
            rsi |= 2
            int32_t var_244 = var_244 & 0xffffff00
            rax_19 = &var_2f8
            int64_t var_2f0_1 = 0
            int64_t var_2e8_1 = 0
            char var_2d8_1 = 0
            int64_t var_2d0
            __builtin_memset(&var_2d0, 0, 0x88)
            int32_t var_248_1 = 0x20702
        else
            rsi |= 1
            rax_19 = (*(*rcx_3 + 0x38))(rcx_3, &var_118, &var_238, &var_338, var_358, var_350, 
                arg2, var_340)
        
        void var_1d8
        sub_140e51550(&var_1d8, rax_19)
        
        if ((rsi.b & 2) != 0)
            rsi &= 0xfffffffd
            sub_140597700(&var_2f8)
        
        if ((rsi.b & 1) != 0)
            rsi &= 0xfffffffe
            sub_140597700(&var_118)
        
        int64_t* var_1f8
        
        if (var_1f8 != 0)
            var_1f8[1].d += 1
        
        int64_t* var_1c8
        int64_t* rdi_1 = var_1c8
        int64_t* var_1d0_1 = var_200
        
        if (var_1f8 != rdi_1)
            var_1c8 = var_1f8
            
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
        
        sub_140e54f20(arg1, &var_1d8)
        int64_t* var_130
        
        if (var_130 != 0)
            var_130[1].d -= 1
            
            if (var_130[1].d == 1)
                (**var_130)(var_130)
                int32_t temp6_1 = *(var_130 + 0xc)
                *(var_130 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*var_130 + 8))(var_130, 1)
        
        int64_t* var_140
        
        if (var_140 != 0)
            var_140[1].d -= 1
            
            if (var_140[1].d == 1)
                (**var_140)(var_140)
                int32_t temp8_1 = *(var_140 + 0xc)
                *(var_140 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*(*var_140 + 8))(var_140, 1)
        
        int64_t* var_158
        
        if (var_158 != 0)
            int32_t temp7_1 = *(var_158 + 0xc)
            *(var_158 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*var_158 + 8))(var_158, 1)
        
        int64_t* var_168
        
        if (var_168 != 0)
            int32_t temp9_1 = *(var_168 + 0xc)
            *(var_168 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*var_168 + 8))(var_168, 1)
        
        int64_t* var_178
        
        if (var_178 != 0)
            int32_t temp10_1 = *(var_178 + 0xc)
            *(var_178 + 0xc) -= 1
            
            if (temp10_1 == 1)
                (*(*var_178 + 8))(var_178, 1)
        
        int64_t* var_188
        
        if (var_188 != 0)
            int32_t temp11_1 = *(var_188 + 0xc)
            *(var_188 + 0xc) -= 1
            
            if (temp11_1 == 1)
                (*(*var_188 + 8))(var_188, 1)
        
        int64_t* var_198
        
        if (var_198 != 0)
            int32_t temp12_1 = *(var_198 + 0xc)
            *(var_198 + 0xc) -= 1
            
            if (temp12_1 == 1)
                (*(*var_198 + 8))(var_198, 1)
        
        int64_t* var_1a8
        
        if (var_1a8 != 0)
            int32_t temp13_1 = *(var_1a8 + 0xc)
            *(var_1a8 + 0xc) -= 1
            
            if (temp13_1 == 1)
                (*(*var_1a8 + 8))(var_1a8, 1)
        
        if (var_1c8 != 0)
            var_1c8[1].d -= 1
            
            if (var_1c8[1].d == 1)
                (**var_1c8)(var_1c8)
                int32_t temp16_1 = *(var_1c8 + 0xc)
                *(var_1c8 + 0xc) -= 1
                
                if (temp16_1 == 1)
                    (*(*var_1c8 + 8))(var_1c8, 1)
        
        var_350 = rax_7
        var_358 = nullptr
        MRECmpImpl::FPushFile(arg2, r12, arg1, r12, var_358, var_350)
        
        if (rax_11 != 0)
            rax_11[1].d -= 1
            
            if (rax_11[1].d == 1)
                (**rax_11)(rax_11)
                int32_t temp18_1 = *(rax_11 + 0xc)
                *(rax_11 + 0xc) -= 1
                
                if (temp18_1 == 1)
                    (*(*rax_11 + 8))(rax_11, 1)
        
        var_338 = &data_142d7f690
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
        
        *arg3 += 1
        rcx = *arg3
    while (*arg1 == 0)
    
    rax_2 = arg2

sub_140e6d8b0(rax_2, arg4, arg1)
sub_140647390(arg4)
__security_check_cookie(rax_1 ^ &var_378)
return arg1
