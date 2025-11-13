// 函数: sub_140e4d6c0
// 地址: 0x140e4d6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_228
int64_t rax_1 = __security_cookie ^ &var_228
*arg1 = 0
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
arg1[0x20] = 0
__builtin_memset(&arg1[0x28], 0, 0x88)
*(arg1 + 0xb4) &= 0xffffff00
*(arg1 + 0xb0) = 0x20702
char* rax_2 = *(arg3 + 0x10)
int64_t* r13 = *(arg3 + 8)
arg4[2] = r13

if (*arg1 == 0)
    char i = *arg3
    
    while (i == 0)
        int128_t* rcx = *(arg3 + 0x18)
        int128_t var_178 = *rcx
        uint128_t var_168_1 = rcx[1]
        int128_t var_158_1 = rcx[2]
        uint64_t var_148_1 = rcx[3].q
        int64_t* rax_3 = *(rcx + 0x38)
        int64_t* rax_4 = rcx[4].q
        
        if (rax_4 != 0)
            rax_4[1].d += 1
        
        int32_t* rbx_1 = *(rcx + 0x48)
        int64_t* rax_5 = rcx[5].q
        
        if (rax_5 != 0)
            rax_5[1].d += 1
        
        void** var_1e8
        sub_140e51390(&var_1e8, arg4)
        
        if (rbx_1 != 0)
            int32_t var_1d0_1 = *rbx_1
            int32_t var_1cc_1 = rbx_1[1]
            int32_t var_1c8_1 = rbx_1[2]
            int32_t var_1c4_1 = rbx_1[3]
        
        void*** var_208
        int32_t var_200
        void var_118
        (*(*rax_3 + 0xb8))(rax_3, &var_118, &var_178, &var_1e8, var_208, var_200, rax_2)
        
        if (rax_4 != 0)
            rax_4[1].d += 1
        
        int64_t* var_108
        int64_t* rdi_1 = var_108
        int64_t* var_110_1 = rax_3
        
        if (rax_4 != rdi_1)
            var_108 = rax_4
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp4_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
        else if (rax_4 != 0)
            rax_4[1].d -= 1
            
            if (rax_4[1].d == 1)
                (**rax_4)(rax_4)
                int32_t temp3_1 = *(rax_4 + 0xc)
                *(rax_4 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rax_4 + 8))(rax_4, 1)
        
        sub_140e54f20(arg1, &var_118)
        int64_t* var_70
        
        if (var_70 != 0)
            var_70[1].d -= 1
            
            if (var_70[1].d == 1)
                (**var_70)(var_70)
                int32_t temp6_1 = *(var_70 + 0xc)
                *(var_70 + 0xc) -= 1
                
                if (temp6_1 == 1)
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
        
        if (var_108 != 0)
            var_108[1].d -= 1
            
            if (var_108[1].d == 1)
                (**var_108)(var_108)
                int32_t temp16_1 = *(var_108 + 0xc)
                *(var_108 + 0xc) -= 1
                
                if (temp16_1 == 1)
                    (*(*var_108 + 8))(var_108, 1)
        
        int32_t var_1dc
        var_200 = var_1dc
        var_208 = &var_1e8
        MRECmpImpl::FPushFile(arg2, r13, arg1, rax_2, var_208, var_200)
        int64_t* var_1a0
        
        if (var_1a0 != 0)
            var_1a0[1].d -= 1
            
            if (var_1a0[1].d == 1)
                (**var_1a0)(var_1a0)
                int32_t temp18_1 = *(var_1a0 + 0xc)
                *(var_1a0 + 0xc) -= 1
                
                if (temp18_1 == 1)
                    (*(*var_1a0 + 8))(var_1a0, 1)
        
        var_1e8 = &data_142d7f690
        
        if (rax_5 != 0)
            rax_5[1].d -= 1
            
            if (rax_5[1].d == 1)
                (**rax_5)(rax_5)
                int32_t temp20_1 = *(rax_5 + 0xc)
                *(rax_5 + 0xc) -= 1
                
                if (temp20_1 == 1)
                    (*(*rax_5 + 8))(rax_5, 1)
        
        if (rax_4 != 0)
            rax_4[1].d -= 1
            
            if (rax_4[1].d == 1)
                (**rax_4)(rax_4)
                int32_t temp21_1 = *(rax_4 + 0xc)
                *(rax_4 + 0xc) -= 1
                
                if (temp21_1 == 1)
                    (*(*rax_4 + 8))(rax_4, 1)
        
        *arg3 = 1
        i = 1
        
        if (*arg1 != 0)
            break

sub_140e6d8b0(arg2, arg4, arg1)
sub_140e29130(arg4)
__security_check_cookie(rax_1 ^ &var_228)
return arg1
