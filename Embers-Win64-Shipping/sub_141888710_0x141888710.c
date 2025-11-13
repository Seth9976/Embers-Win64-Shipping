// 函数: sub_141888710
// 地址: 0x141888710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** rax

if (arg2 == *(arg1 + 0xd0))
    rax = 0xd8
label_141888744:
    void* rbx_1 = arg1 + rax
    
    if (rbx_1 != 0)
        int64_t* rcx = *arg3
        
        if ((*(*rcx + 0x10))(rcx) == 0)
            int128_t var_88 = zx.o(0)
            sub_141819990(rbx_1, &var_88, arg6, arg4, arg5)
            void* rcx_9 = var_88:8.q
            
            if (rcx_9 != 0)
                rax = zx.q(*(rcx_9 + 8))
                *(rcx_9 + 8) -= 1
                
                if (rax.d == 1)
                    int64_t* rbx_4 = var_88:8.q
                    (**rbx_4)(rbx_4)
                    int32_t rdi_2 = *(rbx_4 + 0xc)
                    *(rbx_4 + 0xc) -= 1
                    
                    if (rdi_2 == 1)
                        int64_t* rcx_7 = var_88:8.q
                        (*(*rcx_7 + 8))(rcx_7, 1)
        else
            int64_t var_48[0x2]
            var_48[0] = 0
            int64_t var_38_1 = 0
            int64_t var_68 = *arg3
            int64_t* rax_4 = arg3[1]
            
            if (rax_4 != 0)
                rax_4[1].d += 1
            
            void* var_58_1 = rbx_1
            void* var_78
            sub_141856320(&var_78, 3, &var_68, &var_48, arg6, arg4)
            int64_t* var_70
            
            if (var_70 != 0)
                var_70[1].d -= 1
                
                if (var_70[1].d == 1)
                    (**var_70)(var_70)
                    rax = zx.q(*(var_70 + 0xc))
                    *(var_70 + 0xc) -= 1
                    
                    if (rax.d == 1)
                        (*(*var_70 + 8))(var_70, 1)
            
            if (rax_4 != 0)
                rax_4[1].d -= 1
                
                if (rax_4[1].d == 1)
                    (**rax_4)(rax_4)
                    int32_t rdi_1 = *(rax_4 + 0xc)
                    *(rax_4 + 0xc) -= 1
                    
                    if (rdi_1 == 1)
                        (*(*rax_4 + 8))(rax_4, 1)
else if (arg2 == *(arg1 + 0xd4))
    rax = 0xf0
    goto label_141888744
