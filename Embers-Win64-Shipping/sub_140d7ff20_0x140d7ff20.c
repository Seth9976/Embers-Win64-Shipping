// 函数: sub_140d7ff20
// 地址: 0x140d7ff20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 - 0x28) != 0)
    int64_t* rcx = *(arg1 - 0x20)
    
    if ((*(*rcx + 0x10))(rcx) != 0)
        int64_t rdi_1 = 0
        int128_t var_28 = zx.o(0)
        int128_t var_18
        int64_t* rax_5
        
        if (arg2 == 0)
            int64_t* rcx_7 = *(arg1 - 0x20)
            rax_5 = (*(*rcx_7 + 0x28))(rcx_7, &var_18)
        label_140d8000c:
            
            if (&var_28 != rax_5)
                var_28.q = *rax_5
                *rax_5 = 0
                int64_t rcx_9 = rax_5[1]
                
                if (rcx_9 != 0)
                    rax_5[1] = 0
                    var_28:8.q = rcx_9
            
            int64_t* var_10
            
            if (var_10 != 0)
                var_10[1].d -= 1
                
                if (var_10[1].d == 1)
                    (**var_10)(var_10)
                    int32_t temp4_1 = *(var_10 + 0xc)
                    *(var_10 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*var_10 + 8))(var_10, 1)
            
            if (var_28.q != 0)
                void* rbx_5 = var_28:8.q
                var_18 = var_28
                
                if (rbx_5 != 0)
                    *(rbx_5 + 8) += 1
                
                int64_t rax_14 = sub_140d7d8b0(*(arg1 - 0x28), &var_18)
                
                if (rax_14 != 0)
                    rdi_1 = rax_14 + 0x30
        else
            if (arg2 == 1)
                int64_t* rcx_6 = *(arg1 - 0x20)
                rax_5 = (*(*rcx_6 + 0x30))(rcx_6, &var_18)
                goto label_140d8000c
            
            if (arg2 == 2)
                int64_t* rcx_5 = *(arg1 - 0x20)
                rax_5 = (*(*rcx_5 + 0x38))(rcx_5, &var_18)
                goto label_140d8000c
            
            if (arg2 == 3)
                int64_t* rcx_3 = *(arg1 - 0x20)
                
                if ((*(*rcx_3 + 0x48))(rcx_3) s> 0)
                    int64_t* rcx_4 = *(arg1 - 0x20)
                    rax_5 = (*(*rcx_4 + 0x40))(rcx_4, &var_18, 0)
                    goto label_140d8000c
            else if (arg2 == 4)
                int64_t* rcx_1 = *(arg1 - 0x20)
                int32_t rax_4 = (*(*rcx_1 + 0x48))(rcx_1)
                
                if (rax_4 s> 0)
                    int64_t* rcx_2 = *(arg1 - 0x20)
                    int64_t r9_1 = *rcx_2
                    rax_5 = (*(r9_1 + 0x40))(rcx_2, &var_18, zx.q(rax_4 - 1), r9_1)
                    goto label_140d8000c
        *arg3 = rdi_1
        int64_t* rbx_6 = var_28:8.q
        
        if (rbx_6 != 0)
            rbx_6[1].d -= 1
            
            if (rbx_6[1].d == 1)
                (**rbx_6)(rbx_6)
                int32_t temp6_1 = *(rbx_6 + 0xc)
                *(rbx_6 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rbx_6 + 8))(rbx_6, 1)
        
        return 0

return 0x80040201
