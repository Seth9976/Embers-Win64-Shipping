// 函数: sub_142687960
// 地址: 0x142687960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi
int64_t* var_18 = rdi
char rax = 0
int32_t arg_8 = 0
char rax_11

if (*(arg1 + 0x4a8) != 0)
    rdi = arg5[1]
    void* r15_1 = *arg5
    
    if (rdi != 0)
        rdi[1].d += 1
    
    int64_t* rbx_1
    
    if (r15_1 == 0)
        rbx_1 = *(arg1 + 0x340)
        r15_1 = *(arg1 + 0x338)
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        rax = 1
    else
        rbx_1 = arg5
    
    if ((rax & 1) != 0 && rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            arg3 = (**rbx_1)(rbx_1)
            int32_t rax_3 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rax_3 == 1)
                arg3 = (*(*rbx_1 + 8))(rbx_1, 1)
    
    if (rdi != 0)
        rdi[1].d -= 1
        
        if (rdi[1].d == 1)
            arg3 = (**rdi)(rdi)
            int32_t rax_7 = *(rdi + 0xc)
            *(rdi + 0xc) -= 1
            
            if (rax_7 == 1)
                arg3 = (*(*rdi + 8))(rdi, 1)
    
    rax_11 = sub_142687b00(*(arg1 + 0x4a8), arg2, arg3, r15_1, arg6, arg4, arg7)

if (*(arg1 + 0x4a8) == 0 || rax_11 == 0)
    rdi.b = 0
else
    rdi.b = 1

int64_t* rbx_2 = arg5[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t rsi_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rsi_1 == 1)
            int64_t r8_1 = *rbx_2
            (*(r8_1 + 8))(rbx_2, zx.q(rsi_1), r8_1)

return zx.q(rdi.b)
