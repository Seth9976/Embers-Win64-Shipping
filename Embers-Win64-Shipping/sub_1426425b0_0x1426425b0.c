// 函数: sub_1426425b0
// 地址: 0x1426425b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = *arg6
void* rax_1 = arg6[1]
void* var_20 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

void* rdi = nullptr

if (arg2 != 0)
    void* rax_3 = (*(*arg2 + 8))(arg2)
    void* rax_4 = sub_140d41340()
    void* rcx_1 = *(rax_3 + 0x10)
    int64_t rdx = sx.q(*(rax_4 + 0x38))
    
    if (rdx.d s<= *(rcx_1 + 0x38) && *(*(rcx_1 + 0x30) + (rdx << 3)) == rax_4 + 0x30)
        rdi = rax_3

sub_142642ec0(arg1, rdi, arg4, arg5, &var_28, 0, 1, arg8)
sub_140d3a3a0(&arg1[0x10], arg3)
*(arg1 + 0x48) = *arg7
void* rax_7 = arg7[1]
*(arg1 + 0x50) = rax_7

if (rax_7 != 0)
    *(rax_7 + 8) += 1

sub_141dde360(&arg1[0x16], (*(*arg2 + 0x10))(arg2))

if (*(arg1 + 0x20) == 0 && sub_140d3e110(&arg1[0x10]) != 0)
    void* rax_11 = sub_140d3c6e0(&arg1[0x10])
    int64_t* rcx_9 = *(rax_11 + 0x340)
    int64_t rdx_4 = *(rax_11 + 0x338)
    int64_t var_38 = rdx_4
    int64_t* var_30 = rcx_9
    
    if (rcx_9 != 0)
        rcx_9[1].d += 1
        rcx_9 = var_30
        rdx_4 = var_38
    
    if (&arg1[8] != &var_38)
        *(arg1 + 0x20) = rdx_4
        var_38 = 0
        sub_1405aeff0(&arg1[0xa], &var_30)
        rcx_9 = var_30
    
    if (rcx_9 != 0)
        rcx_9[1].d -= 1
        
        if (rcx_9[1].d == 1)
            int64_t* rbx_2 = var_30
            (**rbx_2)(rbx_2)
            int32_t rax_14 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (rax_14 == 1)
                int64_t* rcx_12 = var_30
                (*(*rcx_12 + 8))(rcx_12, 1)

int64_t* rbx_3 = arg6[1]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t rax_18 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (rax_18 == 1)
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
