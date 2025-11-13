// 函数: sub_140e4aa00
// 地址: 0x140e4aa00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_288
int64_t rax_1 = __security_cookie ^ &var_288
*arg1 = 0
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
arg1[0x20] = 0
__builtin_memset(&arg1[0x28], 0, 0x88)
*(arg1 + 0xb4) &= 0xffffff00
*(arg1 + 0xb0) = 0x20702
char* r15 = *(arg3 + 8)
arg4[2] = r15

if (*arg1 == 0)
    int32_t i = *arg3
    
    while (i s>= 0)
        void* rax_2 = *(arg3 + 8)
        int64_t i_1 = sx.q(i)
        void* r9 = rax_2 + 8
        void* rcx = *(r9 + 0x120)
        
        if (rcx != 0)
            r9 = rcx
        
        void var_178
        sub_140d94310(&var_178, r9 + i_1 * 0x48, (i_1 << 4) + *(rax_2 + 0x150))
        int64_t* var_140
        int64_t* rcx_2 = var_140
        int16_t var_250_1 = arg4[1].w
        char var_24e_1 = *(arg4 + 0xa)
        int32_t rax_6 = *(arg4 + 0xc)
        int64_t var_248_1 = arg4[2]
        int16_t rax_8 = arg4[3].w
        void** const var_258 = &data_142ecfd70
        char* rbx_1 = &rcx_2[0x32]
        int16_t var_240_1 = rax_8
        
        if (*(rbx_1 + 0x10) != 0)
            int64_t* rdx_1 = *(rbx_1 + 8)
            
            if (rdx_1 != 0)
                if ((*(*rdx_1 + 0x28))(rdx_1) != 0)
                    int64_t* rcx_4
                    
                    if (*(rbx_1 + 0x10) == 0)
                        rcx_4 = nullptr
                    else
                        rcx_4 = *(rbx_1 + 8)
                    
                    *rbx_1 = (*(*rcx_4 + 0x48))(rcx_4)
                
                rcx_2 = var_140
        
        void* const var_268
        int32_t var_260
        char var_238
        int64_t* var_228
        int64_t* var_208
        int64_t* var_1f8
        int64_t* var_1e8
        int64_t* var_1d8
        int64_t* var_1c8
        int64_t* var_1b8
        int64_t* rbx_2
        
        if (*rbx_1 == 0)
            int32_t var_184 = var_184 & 0xffffff00
            var_208 = (zx.o(0)).q
            rbx_2 = nullptr
            var_1f8 = (zx.o(0)).q
            var_228 = nullptr
            var_1e8 = (zx.o(0)).q
            var_1d8 = (zx.o(0)).q
            var_1c8 = (zx.o(0)).q
            var_238 = 0
            char var_218_1 = 0
            int64_t var_210_1 = 0
            __builtin_memset(&var_1b8, 0, 0x30)
            int32_t var_188_1 = 0x20702
        else
            void var_118
            (*(*rcx_2 + 0x30))(rcx_2, &var_118, &var_178, &var_258, var_268, var_260)
            sub_140596b00(&var_238, &var_118)
            sub_140597700(&var_118)
            rcx_2 = var_140
            rbx_2 = var_228
        
        int64_t* var_138
        
        if (var_138 != 0)
            var_138[1].d += 1
        
        int64_t* var_230_1 = rcx_2
        
        if (var_138 != rbx_2)
            var_228 = var_138
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t temp4_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
        else if (var_138 != 0)
            var_138[1].d -= 1
            
            if (var_138[1].d == 1)
                (**var_138)(var_138)
                int32_t temp3_1 = *(var_138 + 0xc)
                *(var_138 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*var_138 + 8))(var_138, 1)
        
        sub_140e54f20(arg1, &var_238)
        int128_t var_198
        int64_t* rbx_3 = var_198:8.q
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t temp6_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
        
        int128_t var_1a8
        int64_t* rbx_4 = var_1a8:8.q
        
        if (rbx_4 != 0)
            rbx_4[1].d -= 1
            
            if (rbx_4[1].d == 1)
                (**rbx_4)(rbx_4)
                int32_t temp8_1 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*(*rbx_4 + 8))(rbx_4, 1)
        
        int64_t* rcx_15 = var_1b8
        
        if (rcx_15 != 0)
            int32_t temp7_1 = *(rcx_15 + 0xc)
            *(rcx_15 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rcx_15 + 8))(rcx_15, 1)
        
        if (var_1c8 != 0)
            int32_t temp9_1 = *(var_1c8 + 0xc)
            *(var_1c8 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*var_1c8 + 8))(var_1c8, 1)
        
        if (var_1d8 != 0)
            int32_t temp10_1 = *(var_1d8 + 0xc)
            *(var_1d8 + 0xc) -= 1
            
            if (temp10_1 == 1)
                (*(*var_1d8 + 8))(var_1d8, 1)
        
        if (var_1e8 != 0)
            int32_t temp11_1 = *(var_1e8 + 0xc)
            *(var_1e8 + 0xc) -= 1
            
            if (temp11_1 == 1)
                (*(*var_1e8 + 8))(var_1e8, 1)
        
        if (var_1f8 != 0)
            int32_t temp12_1 = *(var_1f8 + 0xc)
            *(var_1f8 + 0xc) -= 1
            
            if (temp12_1 == 1)
                (*(*var_1f8 + 8))(var_1f8, 1)
        
        if (var_208 != 0)
            int32_t temp13_1 = *(var_208 + 0xc)
            *(var_208 + 0xc) -= 1
            
            if (temp13_1 == 1)
                (*(*var_208 + 8))(var_208, 1)
        
        if (var_228 != 0)
            var_228[1].d -= 1
            
            if (var_228[1].d == 1)
                (**var_228)(var_228)
                int32_t temp16_1 = *(var_228 + 0xc)
                *(var_228 + 0xc) -= 1
                
                if (temp16_1 == 1)
                    (*(*var_228 + 8))(var_228, 1)
        
        var_260 = rax_6
        var_268 = nullptr
        MRECmpImpl::FPushFile(arg2, r15, arg1, r15, var_268, var_260)
        var_258 = &data_142d7f690
        int64_t* var_128
        
        if (var_128 != 0)
            var_128[1].d -= 1
            
            if (var_128[1].d == 1)
                (**var_128)(var_128)
                int32_t temp18_1 = *(var_128 + 0xc)
                *(var_128 + 0xc) -= 1
                
                if (temp18_1 == 1)
                    (*(*var_128 + 8))(var_128, 1)
        
        if (var_138 != 0)
            var_138[1].d -= 1
            
            if (var_138[1].d == 1)
                (**var_138)(var_138)
                int32_t temp19_1 = *(var_138 + 0xc)
                *(var_138 + 0xc) -= 1
                
                if (temp19_1 == 1)
                    (*(*var_138 + 8))(var_138, 1)
        
        *arg3 -= 1
        i = *arg3
        
        if (*arg1 != 0)
            break

sub_140e6d8b0(arg2, arg4, arg1)
*arg4 = &data_142d7f690
__security_check_cookie(rax_1 ^ &var_288)
return arg1
