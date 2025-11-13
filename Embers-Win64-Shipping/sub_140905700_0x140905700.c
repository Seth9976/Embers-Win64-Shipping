// 函数: sub_140905700
// 地址: 0x140905700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_18
sub_140908440(&arg_18, arg2, 2)
char rax = sub_140902800(arg1, &arg_18, &arg3[3])
int32_t rax_1
int32_t rcx_2
int32_t rdx_1

if (rax != 0)
    rdx_1 = *(arg3 + 0x2c)
    rax_1 = rdx_1
    rcx_2 = arg3[5].d
    
    if (rcx_2 s<= rdx_1)
        rax_1 = rcx_2

int64_t* rbx

if (rax == 0 || rax_1 s<= 0)
    rbx.b = 0
else
    int64_t rbp_2 = sx.q(rcx_2 * rdx_1) << 3
    int64_t rax_2 = sub_140a82f30(rbp_2, 0x40)
    sub_1409088b0(&arg_18, rax_2, &arg3[5])
    *(arg3 + 0x2c)
    sub_140908880(&arg_18)
    int64_t* rax_3 = j_sub_140a82f30(0x20)
    rbx = rax_3
    
    if (rax_3 == 0)
        rbx = nullptr
    else
        rax_3[2] = rbp_2
        rax_3[1].d = 1
        *(rax_3 + 0xc) = 1
        *rbx = &data_142e1b2b0
        rbx[3] = rax_2
    
    int64_t var_28 = rax_2
    int64_t* var_20 = rbx
    
    if (arg3 != &var_28)
        *arg3 = rax_2
        var_28 = 0
        sub_1405aeff0(&arg3[1], &var_20)
        rbx = var_20
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t rsi_2 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (rsi_2 == 1)
                (*(*rbx + 8))(rbx, zx.q(rsi_2))
    
    rbx.b = 1
    arg3[2].d = 0xb
    arg3[0xb].d = arg3[5].d << 3

sub_1405ec9e0(&arg_18)
return zx.q(rbx.b)
