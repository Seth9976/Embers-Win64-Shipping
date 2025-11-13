// 函数: sub_140b54140
// 地址: 0x140b54140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rbx = arg2
int64_t r10 = sx.q(arg3)

if ((arg1[5].b & 1) == 0)
    if (r10 - 1 s> 0)
        void* rdx_1 = arg2 + r10 - 1
        arg4 = neg.q(rbx)
        char* r8_3 = rbx
        
        do
            char rax_5 = *r8_3
            r8_3 = &r8_3[1]
            char rcx_2 = *rdx_1
            *rdx_1 = rax_5
            rdx_1 -= 1
            r8_3[-1] = rcx_2
        while (&r8_3[arg4] s< rdx_1 + arg4)
    
    (*(*arg1 + 0x150))(arg1, rbx, r10, arg4)
    
    if (r10 - 1 s> 0)
        char* rdx_3 = r10 - 1 + rbx
        int64_t r8_6 = neg.q(rbx)
        
        do
            char rax_8 = *rbx
            rbx = &rbx[1]
            char rcx_5 = *rdx_3
            *rdx_3 = rax_8
            rdx_3 = &rdx_3[-1]
            rbx[-1] = rcx_5
        while (&rbx[r8_6] s< &rdx_3[r8_6])
else
    (*(*arg1 + 0x150))(arg1, arg5, r10)
    
    if (r10 - 1 s> 0)
        char* rdx = r10 - 1 + rbx
        int64_t r8_2 = neg.q(rbx)
        
        do
            char rax_2 = *rbx
            rbx = &rbx[1]
            char rcx = *rdx
            *rdx = rax_2
            rdx = &rdx[-1]
            rbx[-1] = rcx
        while (&rbx[r8_2] s< &rdx[r8_2])

return arg1
