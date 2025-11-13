// 函数: sub_140917510
// 地址: 0x140917510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int32_t i_1 = arg2
void* rdi_1 = arg1 + 0x28
int32_t i

do
    sub_140917510(*rdi_1, zx.q(*(rdi_1 + 8)))
    int64_t rcx_1 = *rdi_1
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    int64_t* rbx_1 = *(rdi_1 - 0x10)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t rax = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rax == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    int64_t rcx_4 = *(rdi_1 - 0x28)
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    rdi_1 += 0x38
    i = i_1
    i_1 -= 1
while (i != 1)
