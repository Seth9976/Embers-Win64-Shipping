// 函数: sub_1418acac0
// 地址: 0x1418acac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x40)

if (rax != 0)
    rax[1].d = 1
    *rax = &data_142fe81e8
    *(rax + 0xc) = 1
    rax[4].b = 0
    rax[5] = *arg2
    void* rcx_1 = arg2[1]
    rax[6] = rcx_1
    
    if (rcx_1 != 0)
        *(rcx_1 + 8) += 1
    
    rax[7].b = 1

if (rax != 0)
    rax[1].d += 1

CRITICAL_SECTION* rsi = arg1[0x1a]
void var_18

if (rsi + 0x80 == &var_18)
label_1418acb98:
    
    if (rax != 0)
        rax[1].d -= 1
        
        if (rax[1].d == 1)
            (**rax)(rax)
            int32_t temp2_1 = *(rax + 0xc)
            *(rax + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*rax)[1](rax, 1)
else
    *(rsi + 0x80) = &rax[2]
    void*** rdi_1 = *(rsi + 0x88)
    
    if (rax == rdi_1)
        goto label_1418acb98
    
    *(rsi + 0x88) = rax
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp5_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*rdi_1)[1](rdi_1, 1)

sub_1405fc0f0(rsi, arg5, arg3, arg4)

if (rax != 0)
    rax[1].d -= 1
    
    if (rax[1].d == 1)
        (**rax)(rax)
        int32_t temp4_1 = *(rax + 0xc)
        *(rax + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*rax)[1](rax, 1)

(*(*arg1 + 8))(arg1)
void* rdx_1 = arg1[0xc]
void* rcx_10 = &arg1[0xe]

if (rdx_1 != 0)
    rcx_10 = rdx_1

int64_t rdx_2 = *rcx_10
(*(rdx_2 + 8))(rcx_10, rdx_2)
jump(arg1[0xa])
