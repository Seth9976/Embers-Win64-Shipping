// 函数: sub_14268f0a0
// 地址: 0x14268f0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = 0
uint64_t rdi
rdi.b = 0
int32_t arg_8 = 0

if (*(arg1 + 0x288) != 0)
    int64_t* rdi_1 = arg5[1]
    void* rbp_1 = *arg5
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    int64_t* rbx_1
    
    if (rbp_1 == 0)
        rbx_1 = *(arg1 + 0x120)
        rbp_1 = *(arg1 + 0x118)
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        rax = 1
    else
        rbx_1 = arg5
    
    if ((rax & 1) != 0 && rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t rax_3 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rax_3 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t rax_7 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (rax_7 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
    
    rdi = zx.q(sub_14268f6f0(*(arg1 + 0x288), arg2, arg3, arg4, rbp_1, arg6))

int64_t* rbx_2 = arg5[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t rsi_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, zx.q(rsi_1))

return zx.q(rdi.b)
