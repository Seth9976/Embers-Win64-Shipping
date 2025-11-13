// 函数: sub_142688b80
// 地址: 0x142688b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0

if (arg1 == 0)
    return 0

int32_t rdi = 0

if (sub_1405f8990(arg1) s> 0)
    int32_t rax_2
    
    do
        void* rax_1 = sub_142610d00(arg1, rdi)
        
        if (rax_1 != 0 && *(rax_1 + 8) != 0 && *(rax_1 + 0x60) s> 0)
            rbx += 1
        
        rdi += 1
        rax_2 = sub_1405f8990(arg1)
    while (rdi s< rax_2)

return zx.q(rbx)
