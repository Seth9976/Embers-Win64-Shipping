// 函数: sub_140a8cd80
// 地址: 0x140a8cd80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg1[1].d)

if (arg2 s> rbx.d)
    int32_t i_1 = arg2 - rbx.d
    arg1[1].d = arg2
    
    if (arg2 s> *(arg1 + 0xc))
        sub_140a89090(arg1)
    
    int64_t* r8_1 = rbx * 0xc8 + *arg1
    
    if (i_1 != 0)
        void* rax = &r8_1[9]
        int32_t i
        
        do
            *r8_1 = 0
            int64_t* rdx_1 = rax - 0x10
            __builtin_memset(rax - 0x40, 0, 0x1a)
            r8_1 = &r8_1[0x19]
            __builtin_memset(rax + 0x10, 0, 0x20)
            __builtin_memset(rax - 0x20, 0, 0x20)
            *rax = 0
            *(rax + 8) = 0
            *(rax + 0xc) = 0x80
            int64_t* rcx = *rax
            
            if (rcx != 0)
                rdx_1 = rcx
            
            *rdx_1 = 0
            rdx_1[1] = 0
            void* rdx_2 = rax + 0x40
            *(rax + 0x10) = 0xffffffff
            *(rax + 0x14) = 0
            *(rax + 0x20) = 0
            *(rax + 0x28) = 0
            __builtin_memset(rax + 0x60, 0, 0x1c)
            *(rax + 0x70) = 0
            *(rax + 0x78) = 0
            __builtin_memset(rax + 0x30, 0, 0x2c)
            *(rax + 0x5c) = 0x80
            void* rcx_1 = *(rax + 0x50)
            rax += 0xc8
            
            if (rcx_1 != 0)
                rdx_2 = rcx_1
            
            *rdx_2 = 0
            *(rdx_2 + 8) = 0
            *(rax - 0x68) = 0xffffffff
            i = i_1
            i_1 -= 1
        while (i != 1)
else if (arg2 s< rbx.d)
    return sub_140a877c0(arg1, arg2, rbx.d - arg2, arg3) __tailcall
