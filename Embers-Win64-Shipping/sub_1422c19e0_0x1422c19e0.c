// 函数: sub_1422c19e0
// 地址: 0x1422c19e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = 0
int64_t* rdi = *(arg1 + 0x18)

if (rdi != 0)
    int32_t rax_1 = rdi[1].d
    
    if (rax_1 != 0)
        rdi[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rdi = nullptr
    
    if (rdi != 0)
        rcx = *(arg1 + 0x10)

*arg2 = 0
arg2[1] = 0
arg2[2] = rcx
arg2[3] = rdi

if (rdi != 0)
    int32_t rax_2 = rdi[1].d
    rdi[1].d = rax_2
    
    if (rax_2 == 0)
        (**rdi)(rdi)
        int32_t temp0_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp0_1 == 1)
            (*(*rdi + 8))(rdi, 1)

if (*(arg1 + 0x30) != 0 && *(arg1 + 0x24) != 0)
    sub_1422ca6c0(arg1, arg2, arg3)

return arg2
