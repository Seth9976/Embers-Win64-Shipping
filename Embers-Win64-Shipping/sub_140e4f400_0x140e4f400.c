// 函数: sub_140e4f400
// 地址: 0x140e4f400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_268
int64_t rax_1 = __security_cookie ^ &var_268
*arg1 = 0
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
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
        void* rax_2 = *(rdx + 0x120)
        
        if (rax_2 != 0)
            rdx = rax_2
        
        int128_t var_178
        sub_140d94310(&var_178, rdx + rcx_1 * 0x48, (rcx_1 << 4) + *(r9 + 0x150))
        void** var_1e8
        sub_140e51390(&var_1e8, arg4)
        int128_t* var_130
        
        if (var_130 != 0)
            int32_t var_1d0_1 = (*var_130).d
            int32_t var_1cc_1 = (*(var_130 + 4)).d
            int32_t var_1c8_1 = (*(var_130 + 8)).d
            int32_t var_1c4_1 = (*(var_130 + 0xc)).d
        
        int128_t var_238 = var_178
        uint128_t var_168
        uint128_t var_228_1 = var_168
        int64_t var_148
        uint64_t var_208_1 = var_148
        int128_t var_158
        int128_t var_218_1 = var_158
        int64_t* var_138
        
        if (var_138 != 0)
            var_138[1].d += 1
        
        void*** var_248
        int32_t var_240
        int64_t* var_140
        void var_118
        (*(*var_140 + 0x60))(var_140, &var_118, &var_238, &var_1e8, var_248, var_240)
        
        if (var_138 != 0)
            var_138[1].d -= 1
            
            if (var_138[1].d == 1)
                (**var_138)(var_138)
                int32_t temp1_1 = *(var_138 + 0xc)
                *(var_138 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*var_138 + 8))(var_138, 1)
        
        if (var_138 != 0)
            var_138[1].d += 1
        
        int64_t* var_108
        int64_t* rdi_1 = var_108
        int64_t* var_110_1 = var_140
        
        if (var_138 != rdi_1)
            var_108 = var_138
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp6_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
        else if (var_138 != 0)
            var_138[1].d -= 1
            
            if (var_138[1].d == 1)
                (**var_138)(var_138)
                int32_t temp5_1 = *(var_138 + 0xc)
                *(var_138 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*var_138 + 8))(var_138, 1)
        
        sub_140e54f20(arg1, &var_118)
        int64_t* var_70
        
        if (var_70 != 0)
            var_70[1].d -= 1
            
            if (var_70[1].d == 1)
                (**var_70)(var_70)
                int32_t temp8_1 = *(var_70 + 0xc)
                *(var_70 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*(*var_70 + 8))(var_70, 1)
        
        int64_t* var_80
        
        if (var_80 != 0)
            var_80[1].d -= 1
            
            if (var_80[1].d == 1)
                (**var_80)(var_80)
                int32_t temp10_1 = *(var_80 + 0xc)
                *(var_80 + 0xc) -= 1
                
                if (temp10_1 == 1)
                    (*(*var_80 + 8))(var_80, 1)
        
        int64_t* var_98
        
        if (var_98 != 0)
            int32_t temp9_1 = *(var_98 + 0xc)
            *(var_98 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*var_98 + 8))(var_98, 1)
        
        int64_t* var_a8
        
        if (var_a8 != 0)
            int32_t temp11_1 = *(var_a8 + 0xc)
            *(var_a8 + 0xc) -= 1
            
            if (temp11_1 == 1)
                (*(*var_a8 + 8))(var_a8, 1)
        
        int64_t* var_b8
        
        if (var_b8 != 0)
            int32_t temp12_1 = *(var_b8 + 0xc)
            *(var_b8 + 0xc) -= 1
            
            if (temp12_1 == 1)
                (*(*var_b8 + 8))(var_b8, 1)
        
        int64_t* var_c8
        
        if (var_c8 != 0)
            int32_t temp13_1 = *(var_c8 + 0xc)
            *(var_c8 + 0xc) -= 1
            
            if (temp13_1 == 1)
                (*(*var_c8 + 8))(var_c8, 1)
        
        int64_t* var_d8
        
        if (var_d8 != 0)
            int32_t temp14_1 = *(var_d8 + 0xc)
            *(var_d8 + 0xc) -= 1
            
            if (temp14_1 == 1)
                (*(*var_d8 + 8))(var_d8, 1)
        
        int64_t* var_e8
        
        if (var_e8 != 0)
            int32_t temp15_1 = *(var_e8 + 0xc)
            *(var_e8 + 0xc) -= 1
            
            if (temp15_1 == 1)
                (*(*var_e8 + 8))(var_e8, 1)
        
        char var_f8_1 = 0
        
        if (var_108 != 0)
            var_108[1].d -= 1
            
            if (var_108[1].d == 1)
                (**var_108)(var_108)
                int32_t temp18_1 = *(var_108 + 0xc)
                *(var_108 + 0xc) -= 1
                
                if (temp18_1 == 1)
                    (*(*var_108 + 8))(var_108, 1)
        
        int32_t var_1dc
        var_240 = var_1dc
        var_248 = &var_1e8
        MRECmpImpl::FPushFile(arg2, r12, arg1, r12, var_248, var_240)
        int64_t* var_1a0
        
        if (var_1a0 != 0)
            var_1a0[1].d -= 1
            
            if (var_1a0[1].d == 1)
                (**var_1a0)(var_1a0)
                int32_t temp20_1 = *(var_1a0 + 0xc)
                *(var_1a0 + 0xc) -= 1
                
                if (temp20_1 == 1)
                    (*(*var_1a0 + 8))(var_1a0, 1)
        
        var_1e8 = &data_142d7f690
        int64_t* var_128
        
        if (var_128 != 0)
            var_128[1].d -= 1
            
            if (var_128[1].d == 1)
                (**var_128)(var_128)
                int32_t temp22_1 = *(var_128 + 0xc)
                *(var_128 + 0xc) -= 1
                
                if (temp22_1 == 1)
                    (*(*var_128 + 8))(var_128, 1)
        
        if (var_138 != 0)
            var_138[1].d -= 1
            
            if (var_138[1].d == 1)
                (**var_138)(var_138)
                int32_t temp23_1 = *(var_138 + 0xc)
                *(var_138 + 0xc) -= 1
                
                if (temp23_1 == 1)
                    (*(*var_138 + 8))(var_138, 1)
        
        *arg3 += 1
        rcx = *arg3
    while (*arg1 == 0)

sub_140e6d8b0(arg2, arg4, arg1)
sub_140e29130(arg4)
__security_check_cookie(rax_1 ^ &var_268)
return arg1
