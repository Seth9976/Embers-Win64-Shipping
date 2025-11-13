// 函数: sub_140e45210
// 地址: 0x140e45210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0 = *arg4
int64_t* rdi = arg3[1]
int64_t rbx = *arg3

if (rdi != 0)
    rdi[1].d += 1
    
    if (rdi != 0)
        rdi[1].d += 1

void*** rax = sub_140a84c80(0, 0x40, 0)

if (rax != 0)
    *rax = &data_142ecd328
    rax[1] = rbx
    rax[2] = rdi
    
    if (rdi != 0)
        *(rdi + 0xc) += 1
    
    *(rax + 0x18) = zmm0
    rax[6] = sub_140a387b0()
    *rax = &data_142ecd380

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

*arg2 = 0

if (rax != 0)
    sub_140599630(arg1, 1)
    void arg_10
    int64_t* rax_5 = (*rax)[6](rax, &arg_10)
    int64_t r15_1 = sx.q(arg1[1].d)
    int64_t rbx_1 = *rax_5
    int32_t rax_6 = (r15_1 + 1).d
    arg1[1].d = rax_6
    
    if (rax_6 s> *(arg1 + 0xc))
        sub_1405a4f90(arg1)
    
    *arg2 = rbx_1
    void**** rax_9 = (r15_1 << 4) + *arg1
    *rax_9 = rax
    rax_9[1].d = 4

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp3_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi + 8))(rdi, 1)

return arg2
