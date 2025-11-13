// 函数: sub_142aeaf50
// 地址: 0x142aeaf50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rbx = arg1
int64_t r13 = sx.q(arg2)
void* r14

if (arg1 == 0)
    r14 = nullptr
else
    r14 = &arg1[r13]

int32_t rcx = 0
int32_t rdi = 0
int32_t arg_8 = 0

if (arg5 s> 0)
    while (rbx u< r14)
        int64_t rax_1 = sx.q(rcx)
        rcx += 1
        uint32_t r9 = zx.d(*(rax_1 + arg4))
        arg_8 = rcx
        
        if (r9 s> 0x7f)
            int32_t rax_2 = sub_142a9bc10(arg4, &arg_8, arg5, r9, 0xfd)
            int16_t rcx_2 = rax_2.w
            
            if (rax_2 u> 0xffff)
                *rbx = (rax_2 s>> 0xa).w - 0x2840
                rbx = &rbx[1]
                
                if (rbx u>= r14)
                    rcx = arg_8
                    rdi = 1
                    break
                
                rcx_2 = (rcx_2 & 0x3ff) | 0xdc00
            
            *rbx = rcx_2
            rcx = arg_8
        else
            *rbx = r9.w
        
        rbx = &rbx[1]
        
        if (rcx s>= arg5)
            break
    
    while (rcx s< arg5)
        int64_t rax_4 = sx.q(rcx)
        rcx += 1
        uint32_t r9_1 = zx.d(*(rax_4 + arg4))
        arg_8 = rcx
        int32_t rdx_1
        
        if (r9_1 s> 0x7f)
            int32_t rax_5 = sub_142a9bc10(arg4, &arg_8, arg5, r9_1, 0xfd)
            rcx = arg_8
            int32_t rdx_3
            rdx_3.b = rax_5 u> 0xffff
            rdx_1 = rdx_3 + 1
        else
            rdx_1 = 1
        
        rdi += rdx_1

int32_t rdi_1 = rdi + ((rbx - arg1) s>> 1).d

if (arg3 != 0)
    *arg3 = rdi_1

sub_142a8c440(arg1, r13.d, rdi_1, arg6)
return arg1
