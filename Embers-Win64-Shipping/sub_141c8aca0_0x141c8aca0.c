// 函数: sub_141c8aca0
// 地址: 0x141c8aca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg1 + 0x130) s<= 0
int512_t result
result.o = zx.o(0)
int128_t var_28 = zx.o(0)

if (not(cond:0))
    do
        int64_t* rcx = **(arg1 + 0x128)
        
        if (*(*(*rcx + 0x68))(rcx) s> *(arg1 + 0x120))
            break
        
        void arg_8
        sub_141c81200(arg1 + 0x128, &var_28, &arg_8, 1)
        int64_t* rcx_3 = var_28:8.q
        int64_t var_38 = var_28.q
        
        if (rcx_3 != 0)
            rcx_3[1].d += 1
        
        result = sub_141c859d0(arg1, &var_38)
        
        if (rcx_3 != 0)
            rcx_3[1].d -= 1
            
            if (rcx_3[1].d == 1)
                (**rcx_3)(rcx_3)
                int32_t rax_7 = *(rcx_3 + 0xc)
                *(rcx_3 + 0xc) -= 1
                
                if (rax_7 == 1)
                    (*(*rcx_3 + 8))(rcx_3, 1)
    while (*(arg1 + 0x130) s> 0)
    
    void* rcx_7 = var_28:8.q
    
    if (rcx_7 != 0)
        int32_t rax_9 = *(rcx_7 + 8)
        *(rcx_7 + 8) -= 1
        
        if (rax_9 == 1)
            int64_t* rbx_2 = var_28:8.q
            (**rbx_2)(rbx_2)
            int32_t rsi_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (rsi_1 == 1)
                int64_t* rcx_9 = var_28:8.q
                (*(*rcx_9 + 8))(rcx_9, zx.q(rsi_1))

return result
