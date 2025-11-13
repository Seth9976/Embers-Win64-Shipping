// 函数: sub_140aac8f0
// 地址: 0x140aac8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg3[1].d
void* rdi = *arg3
void* var_18 = nullptr
int32_t i_2 = i_1

if (i_1 != 0)
    sub_1405a4b40(&var_18, i_1, 0)
    int64_t* rdx_1 = rdi + 8
    int64_t* rcx_2 = var_18 + 8
    int32_t i
    
    do
        rcx_2[-1].d = rdx_1[-1].d
        *rcx_2 = *rdx_1
        *rcx_2 = *rdx_1
        *rcx_2 = *rdx_1
        *rcx_2 = *rdx_1
        rcx_2[4].b = 0
        
        if (rdx_1[4].b != 0)
            rcx_2[1] = rdx_1[1]
            void* rax_7 = rdx_1[2]
            rcx_2[2] = rax_7
            
            if (rax_7 != 0)
                *(rax_7 + 8) += 1
            
            rcx_2[3].d = rdx_1[3].d
            rcx_2[4].b = 1
        
        rcx_2 = &rcx_2[6]
        rdx_1 = &rdx_1[6]
        i = i_1
        i_1 -= 1
    while (i != 1)
else
    int32_t var_c_1 = 0

sub_140aacf70(arg1, arg2, &var_18, 0, 0)
sub_140596f50(&var_18)
int64_t* rbx = arg2[1]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rdi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*rbx + 8))(rbx, zx.q(rdi_1))

return arg1
