// 函数: sub_1409288b0
// 地址: 0x1409288b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg2[1].d
void* rdi = *arg2

if (i_1 != 0)
    int32_t i
    
    do
        sub_140917510(*(rdi + 0x28), *(rdi + 0x30))
        int64_t rcx_1 = *(rdi + 0x28)
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        int64_t* rbx_1 = *(rdi + 0x18)
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t rax = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (rax == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        int64_t rcx_4 = *rdi
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        rdi += 0x38
        i = i_1
        i_1 -= 1
    while (i != 1)

arg2[1].d = 0

if (*(arg2 + 0xc) == 0)
    return 

return sub_1408cf3a0(arg2, 0) __tailcall
