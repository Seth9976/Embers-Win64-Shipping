// 函数: sub_141f44ed0
// 地址: 0x141f44ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax

if (arg1[0x2f].d s<= 0)
    int64_t rdx_1 = *(*arg1 + 0x498)
    
    if (arg2 == 0)
        rax = rdx_1(arg1, arg5, arg2)
        
        if (arg1[0x1b].d s> 0)
            rax = sub_141f4d0f0(arg1, 0, 0)
        
        if ((arg1[0x11].b & 1) != 0)
            return sub_141ee8690(arg1) __tailcall
    else
        rax = rdx_1(arg1, arg5, arg2)
        
        if ((arg1[0x11].b & 1) != 0)
            if ((*(arg1 + 0x14d) & 0x40) != 0)
                (*(*arg1 + 0x460))(arg1, zx.q(arg3), zx.q(arg4))
            
            int64_t r12
            r12.b = 0
            *(arg1 + 0x16c) += 1
            int32_t rax_4 = arg1[0x2c].d
            int32_t rcx_3 = *(arg1 + 0x16c)
            int64_t rsi_1 = sx.q(rax_4 - 1)
            
            if (rax_4 - 1 s>= 0)
                int64_t rdi_2 = rsi_1 << 4
                int64_t temp1_1
                
                do
                    int64_t rax_6 = arg1[0x2b]
                    
                    if (*(rdi_2 + rax_6 + 8) == 0)
                        r12.b = 1
                    else
                        int64_t* rcx_4 = *(rdi_2 + rax_6)
                        
                        if (rcx_4 == 0)
                            r12.b = 1
                        else if ((*(*rcx_4 + 0x50))(rcx_4, arg1, zx.q(arg3), zx.q(arg4)) == 0)
                            r12.b = 1
                    
                    rdi_2 -= 0x10
                    temp1_1 = rsi_1
                    rsi_1 -= 1
                while (temp1_1 - 1 s>= 0)
                rcx_3 = *(arg1 + 0x16c)
            
            *(arg1 + 0x16c) = rcx_3 - 1
            
            if (r12.b != 0)
                sub_140599630(&arg1[0x2b], 0)
            
            rax = sub_141ee8690(arg1)
        
        if (arg1[0x1b].d s> 0)
            rax = sub_141f4d0f0(arg1, arg3 & 0xfffffffe, arg4)
        
        if ((*(arg1 + 0x8a) & 4) != 0 && (arg1[0x11].b & 1) != 0)
            void* rdi_3 = arg1[0x15]
            
            if (rdi_3 != 0)
            label_141f45062:
                char rax_10 = sub_14243ade0(rdi_3)
                
                if (rax_10 != 0)
                    rax = sub_14243ac50(rdi_3)
                
                if (rax_10 == 0 || rax.d != 3)
                    return sub_141df0440(arg1)
            else
                rax = sub_141ee69e0(arg1)
                rdi_3 = rax
                
                if (rax != 0)
                    goto label_141f45062
else
    rax = arg1[0x2e]
    void* rdx = *(rax + (sx.q(arg1[0x2f].d) << 3) - 8)
    
    if (rdx != 0 && arg4 != 0)
        char rcx_1 = *(rdx + 0x14)
        
        if (arg4 u> rcx_1)
            rcx_1 = arg4
        
        *(rdx + 0x14) = rcx_1
        return arg4

return rax
