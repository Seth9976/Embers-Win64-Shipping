// 函数: sub_141bab3c0
// 地址: 0x141bab3c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xe8) != 0)
    int64_t* rdx = *(arg1 + 0xf0)
    
    if (rdx != 0)
        int32_t rax_1 = rdx[1].d
        
        if (rax_1 s> 0)
            int64_t rcx = 0
            int64_t* rdi = rdx
            
            if (rdx != 0)
                if (rax_1 != 0)
                    rdx[1].d = rax_1 + 1
                    rax_1.b = 1
                
                if (rax_1.b == 0)
                    rdx = nullptr
                    rdi = nullptr
            
            if (rdi != 0)
                rcx = *(arg1 + 0xe8)
            
            *arg2 = rcx
            arg2[1] = rdx
            
            if (rdx != 0)
                rdx[1].d += 1
            
            if (rdi != 0)
                rdi[1].d -= 1
                
                if (rdi[1].d == 1)
                    (**rdi)(rdi)
                    int32_t temp1_1 = *(rdi + 0xc)
                    *(rdi + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        (*(*rdi + 8))(rdi, 1)
            
            return arg2

*arg2 = 0
void* rdx_1 = *(arg1 + 0xe0)
arg2[1] = rdx_1

if (rdx_1 != 0)
    int32_t rax_5 = *(rdx_1 + 8)
    int64_t rdx_2
    
    if (rax_5 == 0)
        arg2[1] = 0
        rdx_2 = 0
    else
        *(rdx_1 + 8) = rax_5 + 1
        rdx_2 = arg2[1]
    
    if (rdx_2 != 0)
        *arg2 = *(arg1 + 0xd8)

return arg2
