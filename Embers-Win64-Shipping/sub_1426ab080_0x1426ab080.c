// 函数: sub_1426ab080
// 地址: 0x1426ab080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x1c] != 0)
    void* rax = (*(*arg1 + 0x150))()
    
    if (rax != 0)
        void* rsi_1 = *(rax + 0x188)
        void* rsi_2
        
        if (rsi_1 == 0)
            rsi_2 = *(rax + 0x300)
        else
            rsi_2 = *(rsi_1 + 0xc0)
        
        if (sub_1423dce10(rsi_2, &arg1[0x1c]) != 0)
            sub_1423e60e0(rsi_2, arg1[0x1c])
        
        arg1[0x1c] = 0

int64_t rcx_2 = arg1[0x18]

if (rcx_2 == 0)
    return 

sub_1405c2d80(rcx_2 + 0x80, arg1[0x1a])
int64_t* var_10 = nullptr
int64_t var_18

if (&arg1[0x18] == &var_18)
    return 

arg1[0x18] = 0
var_18 = 0
sub_1405aeff0(&arg1[0x19], &var_10)
int64_t* rcx_5 = var_10

if (rcx_5 == 0)
    return 

rcx_5[1].d -= 1

if (rcx_5[1].d != 1)
    return 

int64_t* rbx_1 = var_10
(**rbx_1)(rbx_1)
int32_t rdi_1 = *(rbx_1 + 0xc)
*(rbx_1 + 0xc) -= 1

if (rdi_1 == 1)
    int64_t* rcx_7 = var_10
    (*(*rcx_7 + 8))(rcx_7, zx.q(rdi_1))
