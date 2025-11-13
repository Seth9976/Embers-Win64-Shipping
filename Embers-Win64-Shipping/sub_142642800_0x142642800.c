// 函数: sub_142642800
// 地址: 0x142642800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = *arg6
void* rax_1 = arg6[1]
void* var_20 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

sub_142642ec0(arg1, arg2, arg4, arg5, &var_28, 0, 1, arg8)
sub_140d3a3a0(&arg1[0x10], arg3)
*(arg1 + 0x48) = *arg7
void* rax_3 = arg7[1]
*(arg1 + 0x50) = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

sub_141dde360(&arg1[0x16], arg3 + 0x230)

if (*(arg1 + 0x20) == 0 && sub_140d3e110(&arg1[0x10]) != 0)
    void* rax_5 = sub_140d3c6e0(&arg1[0x10])
    int64_t* rcx_4 = *(rax_5 + 0x340)
    int64_t rdx_2 = *(rax_5 + 0x338)
    int64_t var_38 = rdx_2
    int64_t* var_30 = rcx_4
    
    if (rcx_4 != 0)
        rcx_4[1].d += 1
        rcx_4 = var_30
    
    if (&arg1[8] != &var_38)
        *(arg1 + 0x20) = rdx_2
        var_38 = 0
        sub_1405aeff0(&arg1[0xa], &var_30)
        rcx_4 = var_30
    
    if (rcx_4 != 0)
        rcx_4[1].d -= 1
        
        if (rcx_4[1].d == 1)
            int64_t* rbx_2 = var_30
            (**rbx_2)(rbx_2)
            int32_t rax_8 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (rax_8 == 1)
                int64_t* rcx_7 = var_30
                (*(*rcx_7 + 8))(rcx_7, 1)

int64_t* rbx_3 = arg6[1]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t rax_12 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (rax_12 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

int64_t* rbx_4 = arg7[1]

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        (**rbx_4)(rbx_4)
        int32_t rdi_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*rbx_4 + 8))(rbx_4, zx.q(rdi_1))

return arg1
