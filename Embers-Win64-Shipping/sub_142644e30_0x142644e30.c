// 函数: sub_142644e30
// 地址: 0x142644e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x380)
void* rdi = arg1
int32_t i_1 = *(arg1 + 0x388)

if (rcx != 0)
    rdi = rcx

if (i_1 != 0)
    void* rdi_1 = rdi + 0x28
    int32_t i
    
    do
        int64_t* rbx_1 = *rdi_1
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t rax = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (rax == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        rdi_1 += 0x38
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *(arg1 + 0x380)

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall
