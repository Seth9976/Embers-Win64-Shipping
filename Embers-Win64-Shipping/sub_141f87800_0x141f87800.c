// 函数: sub_141f87800
// 地址: 0x141f87800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0x10)
int64_t rcx = 0
int64_t* rax = rdi

if (rdi != 0)
    int32_t rax_1 = rdi[1].d
    
    if (rax_1 == 0)
        rdi = nullptr
        rax = nullptr
    else
        rdi[1].d = rax_1 + 1
        rax = rdi

int64_t* rbx

if (rax == 0 || *(arg1 + 8) == 0)
    rbx.b = 0
else
    rbx = *(arg1 + 0x10)
    
    if (rbx != 0)
        int32_t rax_3 = rbx[1].d
        
        if (rax_3 != 0)
            rbx[1].d = rax_3 + 1
            rax_3.b = 1
        
        if (rax_3.b == 0)
            rbx = nullptr
        
        if (rbx != 0)
            rcx = *(arg1 + 8)
    
    (*(arg1 + 0x18))(rcx)
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp3_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx + 8))(rbx, 1)
    
    rbx.b = 1

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        int64_t r8_1 = *rdi
        (*r8_1)(rdi, arg2, r8_1)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_2 = *rdi
            (*(r8_2 + 8))(rdi, 1, r8_2)

return zx.q(rbx.b)
