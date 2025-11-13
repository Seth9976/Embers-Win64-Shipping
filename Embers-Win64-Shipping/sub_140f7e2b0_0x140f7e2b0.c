// 函数: sub_140f7e2b0
// 地址: 0x140f7e2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t arg_10
sub_140e679c0(data_143e29f28, &arg_10)
char rax = arg_10.b
int64_t* rbx

if ((rax & 1) != 0 || (rax & 2) != 0)
    rbx = *(arg1 + 0x398)
    
    if (rbx != 0)
        int32_t rax_3 = rbx[1].d
        
        if (rax_3 != 0)
            rbx[1].d = rax_3 + 1
            rax_3.b = 1
        
        if (rax_3.b == 0)
            rbx = nullptr
    
    int64_t* rcx_2 = nullptr
    
    if (rbx != 0)
        rcx_2 = *(arg1 + 0x390)
    
    (*(*rcx_2 + 0x60))(rcx_2)
else
    rbx = *(arg1 + 0x398)
    
    if (rbx != 0)
        int32_t rax_1 = rbx[1].d
        
        if (rax_1 != 0)
            rbx[1].d = rax_1 + 1
            rax_1.b = 1
        
        if (rax_1.b == 0)
            rbx = nullptr
    
    int64_t* rcx_1 = nullptr
    
    if (rbx != 0)
        rcx_1 = *(arg1 + 0x390)
    
    (*(*rcx_1 + 0x20))(rcx_1)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

*arg2 = 1
*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
return arg2
