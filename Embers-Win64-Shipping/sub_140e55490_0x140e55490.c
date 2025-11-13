// 函数: sub_140e55490
// 地址: 0x140e55490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg2 + 0x58)
void* rsi_2 = (sx.q(*(arg2 + 0x60)) << 4) + rdi

if (rdi == rsi_2)
    return 

while (true)
    int64_t* rbx_1 = *(rdi + 8)
    
    if (rbx_1 == 0)
        break
    
    int32_t rax = rbx_1[1].d
    
    if (rax == 0)
        break
    
    rbx_1[1].d = rax + 1
    int64_t* rcx = *rdi
    
    if (rcx == 0)
        if (rbx_1 != 0)
            rbx_1[1].d = rax
            
            if (rax == 0)
                (**rbx_1)(rbx_1)
                int32_t temp3_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        break
    
    (*(*rcx + 0x138))(rcx)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)
    
    rdi += 0x10
    
    if (rdi == rsi_2)
        return 
