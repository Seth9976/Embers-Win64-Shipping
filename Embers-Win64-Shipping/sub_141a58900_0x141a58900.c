// 函数: sub_141a58900
// 地址: 0x141a58900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[1]
int64_t rbp = 0

if (rdi != 0)
    int32_t rax_1 = rdi[1].d
    
    if (rax_1 != 0)
        rdi[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rdi = nullptr
    
    if (rdi != 0)
        rbp = *arg1
        rdi[1].d += 1
        *(rdi + 0xc) += 1
        rdi[1].d -= 1
        
        if (rdi[1].d == 1)
            (**rdi)(rdi)
            int32_t temp4_1 = *(rdi + 0xc)
            *(rdi + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rdi + 8))(rdi, 1)
        
        rdi[1].d -= 1
        
        if (rdi[1].d == 1)
            (**rdi)(rdi)
            int32_t temp5_1 = *(rdi + 0xc)
            *(rdi + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rdi + 8))(rdi, 1)
        
        *(rdi + 0xc) += 1

*arg2 = rbp
arg2[1] = rdi

if (rdi != 0)
    *(rdi + 0xc) += 1

arg2[2] = arg3
arg2[3].d = arg4

if (rdi != 0)
    int32_t temp0_1 = *(rdi + 0xc)
    *(rdi + 0xc) -= 1
    int32_t rax_6 = *(rdi + 0xc)
    
    if (temp0_1 == 1)
        (*(*rdi + 8))(rdi, 1)
        rax_6 = *(rdi + 0xc)
    
    *(rdi + 0xc) = rax_6 - 1
    
    if (rax_6 == 1)
        (*(*rdi + 8))(rdi, 1)

return arg2
