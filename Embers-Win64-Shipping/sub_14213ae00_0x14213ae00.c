// 函数: sub_14213ae00
// 地址: 0x14213ae00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg2
int64_t r9 = *arg1
(*(r9 + 8))(arg1, sx.q(*(arg2 + 0xc8)) * 0xc, sx.q(*(arg2 + 0xcc)) * 0xc, r9)
int32_t rax_2

if ((arg1[5].b & 1) == 0)
    rax_2 = *(rdi + 0xc8)
else
    rax_2 = 0

int64_t* rcx = arg1[1]
int32_t arg_8 = rax_2
int32_t* rdx_2 = *rcx

if (&rdx_2[1] u> rcx[1])
    int32_t* rdx_3 = &arg_8
    
    if ((*(arg1 + 0x29) & 0x20) != 0)
        sub_140b54070(arg1, rdx_3, arg3)
    else
        (*(*arg1 + 0x150))(arg1, rdx_3, 4)
else
    arg_8 = *rdx_2
    *rcx += 4

int32_t rax_7 = arg_8

if (rax_7 != 0)
    char rcx_3 = *(arg1 + 0x29)
    
    if ((rcx_3 & 1) == 0 && rax_7 s> 0 && ((*(arg1 + 0x2b) & 8) == 0 || rax_7 s<= 0x155555))
        *(rdi + 0xc8) = rax_7
        
        if ((arg1[5].b & 1) != 0)
            sub_142152c20(rdi, rax_7, *(rdi + 0xcc))
            rax_7 = *(rdi + 0xc8)
        
        void* rcx_5 = *(rdi + 0xc0)
        int64_t r9_1 = *arg1
        
        if (rcx_5 != 0)
            rdi = rcx_5
        
        (*(r9_1 + 0x150))(arg1, rdi, sx.q(rax_7) * 0xc, r9_1)
        return arg1
    
    *(arg1 + 0x29) = rcx_3 | 1
else if ((arg1[5].b & 1) != 0)
    *(rdi + 0xc8) = rax_7
    
    if (*(rdi + 0xcc) != rax_7)
        sub_141eca490(rdi, 0)

return arg1
