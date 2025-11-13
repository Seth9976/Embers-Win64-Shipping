// 函数: sub_140e4d270
// 地址: 0x140e4d270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_238
int64_t rax_1 = __security_cookie ^ &var_238
int64_t* rdi = arg5
*arg1 = 0
int64_t* var_200 = rdi
*(arg1 + 8) = 0
int64_t* rax_2 = arg2
*(arg1 + 0x10) = 0
arg1[0x20] = 0
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
        
        void var_178
        sub_140d94310(&var_178, r9 + i_1 * 0x48, (i_1 << 4) + *(rax_3 + 0x150))
        void** var_1f8
        sub_140e51390(&var_1f8, arg4)
        int32_t* var_130
        
        if (var_130 != 0)
            int32_t var_1e0_1 = *var_130
            int32_t var_1dc_1 = var_130[1]
            int32_t var_1d8_1 = var_130[2]
            int32_t var_1d4_1 = var_130[3]
        
        void var_118
        char* rax_5 = sub_140e55f50(rdi, &var_118, &var_178, &var_1f8)
        int64_t* var_138
        
        if (var_138 != 0)
            var_138[1].d += 1
        
        void var_188
        
        if (&rax_5[8] == &var_188)
        label_140e4d439:
            
            if (var_138 != 0)
                var_138[1].d -= 1
                
                if (var_138[1].d == 1)
                    (**var_138)(var_138)
                    int32_t temp2_1 = *(var_138 + 0xc)
                    *(var_138 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*(*var_138 + 8))(var_138, 1)
        else
            int64_t var_140
            *(rax_5 + 8) = var_140
            int64_t* rdi_1 = *(rax_5 + 0x10)
            
            if (var_138 == rdi_1)
                goto label_140e4d439
            
            *(rax_5 + 0x10) = var_138
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp6_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
        
        sub_140e54f20(arg1, rax_5)
        int64_t* var_70
        
        if (var_70 != 0)
            var_70[1].d -= 1
            
            if (var_70[1].d == 1)
                (**var_70)(var_70)
                int32_t temp5_1 = *(var_70 + 0xc)
                *(var_70 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*var_70 + 8))(var_70, 1)
        
        int64_t* var_80
        
        if (var_80 != 0)
            var_80[1].d -= 1
            
            if (var_80[1].d == 1)
                (**var_80)(var_80)
                int32_t temp8_1 = *(var_80 + 0xc)
                *(var_80 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*(*var_80 + 8))(var_80, 1)
        
        int64_t* var_98
        
        if (var_98 != 0)
            int32_t temp7_1 = *(var_98 + 0xc)
            *(var_98 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*var_98 + 8))(var_98, 1)
        
        int64_t* var_a8
        
        if (var_a8 != 0)
            int32_t temp9_1 = *(var_a8 + 0xc)
            *(var_a8 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*var_a8 + 8))(var_a8, 1)
        
        int64_t* var_b8
        
        if (var_b8 != 0)
            int32_t temp10_1 = *(var_b8 + 0xc)
            *(var_b8 + 0xc) -= 1
            
            if (temp10_1 == 1)
                (*(*var_b8 + 8))(var_b8, 1)
        
        int64_t* var_c8
        
        if (var_c8 != 0)
            int32_t temp11_1 = *(var_c8 + 0xc)
            *(var_c8 + 0xc) -= 1
            
            if (temp11_1 == 1)
                (*(*var_c8 + 8))(var_c8, 1)
        
        int64_t* var_d8
        
        if (var_d8 != 0)
            int32_t temp12_1 = *(var_d8 + 0xc)
            *(var_d8 + 0xc) -= 1
            
            if (temp12_1 == 1)
                (*(*var_d8 + 8))(var_d8, 1)
        
        int64_t* var_e8
        
        if (var_e8 != 0)
            int32_t temp13_1 = *(var_e8 + 0xc)
            *(var_e8 + 0xc) -= 1
            
            if (temp13_1 == 1)
                (*(*var_e8 + 8))(var_e8, 1)
        
        char var_f8_1 = 0
        int64_t* var_108
        
        if (var_108 != 0)
            var_108[1].d -= 1
            
            if (var_108[1].d == 1)
                (**var_108)(var_108)
                int32_t temp16_1 = *(var_108 + 0xc)
                *(var_108 + 0xc) -= 1
                
                if (temp16_1 == 1)
                    (*(*var_108 + 8))(var_108, 1)
        
        int32_t var_1ec
        MRECmpImpl::FPushFile(arg2, r12, arg1, r12, &var_1f8, var_1ec)
        int64_t* var_1b0
        
        if (var_1b0 != 0)
            var_1b0[1].d -= 1
            
            if (var_1b0[1].d == 1)
                (**var_1b0)(var_1b0)
                int32_t temp18_1 = *(var_1b0 + 0xc)
                *(var_1b0 + 0xc) -= 1
                
                if (temp18_1 == 1)
                    (*(*var_1b0 + 8))(var_1b0, 1)
        
        var_1f8 = &data_142d7f690
        int64_t* var_128
        
        if (var_128 != 0)
            var_128[1].d -= 1
            
            if (var_128[1].d == 1)
                (**var_128)(var_128)
                int32_t temp20_1 = *(var_128 + 0xc)
                *(var_128 + 0xc) -= 1
                
                if (temp20_1 == 1)
                    (*(*var_128 + 8))(var_128, 1)
        
        if (var_138 != 0)
            var_138[1].d -= 1
            
            if (var_138[1].d == 1)
                (**var_138)(var_138)
                int32_t temp21_1 = *(var_138 + 0xc)
                *(var_138 + 0xc) -= 1
                
                if (temp21_1 == 1)
                    (*(*var_138 + 8))(var_138, 1)
        
        *arg3 -= 1
        i = *arg3
        rdi = var_200
        
        if (*arg1 != 0)
            break
    
    rax_2 = arg2

sub_140e6d8b0(rax_2, arg4, arg1)
sub_140e29130(arg4)
__security_check_cookie(rax_1 ^ &var_238)
return arg1
