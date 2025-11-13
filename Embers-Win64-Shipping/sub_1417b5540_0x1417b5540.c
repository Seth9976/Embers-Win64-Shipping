// 函数: sub_1417b5540
// 地址: 0x1417b5540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)

if (arg2 s> rdi.d)
    int32_t i_1 = arg2 - rdi.d
    arg1[1].d = arg2
    
    if (arg2 s> *(arg1 + 0xc))
        sub_1405c4ec0(arg1)
    
    int64_t* rdx_1 = *arg1 + rdi * 0x28
    
    if (i_1 != 0)
        void* rax = rdx_1 + 0x1c
        int32_t i
        
        do
            *rdx_1 = 0
            rdx_1 = &rdx_1[5]
            *(rax - 0x14) = 0
            *(rax - 0xc) = 0xffffffff
            *rax = 0
            *(rax - 8) = 0
            *(rax + 8) = 0
            rax += 0x28
            i = i_1
            i_1 -= 1
        while (i != 1)
else if (arg2 s< rdi.d)
    return sub_1417b4250(arg1, arg2, rdi.d - arg2, arg3) __tailcall
