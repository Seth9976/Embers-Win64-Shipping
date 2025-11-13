// 函数: sub_1420aa350
// 地址: 0x1420aa350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0

if (*(arg1 + 0x38) s<= 0)
    return 

int64_t* rbx_1 = nullptr

while (*(arg3 + 0x40) != 0)
    int64_t* rcx = *(rbx_1 + *(arg1 + 0x30))
    int64_t r8 = *(rbx_1 + *(arg3 + 0x38))
    
    if ((rcx[0xd].b & 0x84) == 0)
        int64_t rax_2 = *rcx
        
        if (arg4 == 0)
            (*(rax_2 + 0x2d8))(rcx, arg2, r8, zx.q(arg6), arg5)
        else
            (*(rax_2 + 0x2d0))(rcx, arg2, r8)
    
    rdi += 1
    rbx_1 = &rbx_1[1]
    
    if (rdi s>= *(arg1 + 0x38))
        break
