// 函数: sub_142307970
// 地址: 0x142307970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg1[1].d)

if (rbp s> 0)
    int64_t rbx_1 = 0
    
    do
        int64_t* rdi_1 = *(*arg1 + (rbx_1 << 3))
        
        if (arg1[2].b != 0)
            (*(*rdi_1 + 0x498))(rdi_1)
        
        char rax = rdi_1[0x11].b
        
        if ((rax & 1) != 0 && (rax & 2) == 0)
            (*(*rdi_1 + 0x2d0))(rdi_1, 0)
        
        rbx_1 += 1
    while (rbx_1 s< rbp)

int64_t rcx_2 = *arg1

if (rcx_2 == 0)
    return 

return sub_140a74f90(rcx_2) __tailcall
