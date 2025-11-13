// 函数: sub_141755ec0
// 地址: 0x141755ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)

if (arg2 s> rdi.d)
    int32_t i_1 = arg2 - rdi.d
    arg1[1].d = arg2
    
    if (arg2 s> *(arg1 + 0xc))
        sub_1405a4df0(arg1)
    
    int32_t* rdx_1 = *arg1 + rdi * 0x18
    
    if (i_1 != 0)
        void* rax = &rdx_1[5]
        int32_t i
        
        do
            *rdx_1 = 0x7f7fffff
            rdx_1 = &rdx_1[6]
            *(rax - 0x10) = 0x7f7fffff
            *(rax - 0xc) = 0x7f7fffff
            *(rax - 8) = 0xff7fffff
            *(rax - 4) = 0xff7fffff
            *rax = 0xff7fffff
            rax += 0x18
            i = i_1
            i_1 -= 1
        while (i != 1)
else if (arg2 s< rdi.d)
    return sub_14174cd40(arg1, arg2, rdi.d - arg2, arg3) __tailcall
