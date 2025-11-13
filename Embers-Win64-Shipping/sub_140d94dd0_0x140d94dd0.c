// 函数: sub_140d94dd0
// 地址: 0x140d94dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x10)
void* rdi = arg1
int32_t i_1 = *(arg1 + 0x18)

if (rcx != 0)
    rdi = rcx

if (i_1 != 0)
    void* rdi_1 = rdi + 8
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
        
        rdi_1 += 0x10
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *(arg1 + 0x10)

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall
