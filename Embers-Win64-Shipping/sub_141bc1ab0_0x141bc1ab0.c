// 函数: sub_141bc1ab0
// 地址: 0x141bc1ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rsi = 0

if (*(arg1 + 0x75c) != 0 && arg1[0x92].d != 0)
    int64_t* rcx = arg1[0x91]
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (arg1[0x92].d == 0)
            rcx_1 = nullptr
        else
            rcx_1 = arg1[0x91]
        
        arg1[0x90].d = (*(*rcx_1 + 0x48))(rcx_1)

int64_t* rbx
int64_t rbp

if (*(arg1 + 0x75c) == 0 || arg1[0x90].d == 0)
    rbx = 0.q
    rbp.b = 0
else
    rbx = *(arg4 + 0x48)
    
    if (rbx != 0)
        rbx[1].d += 1
    
    rsi = 1
    
    if (*(arg4 + 0x38) != data_143e1e020)
        rbp.b = 0
    else
        char rax_6 = (*(arg4 + 8)).b
        
        if ((rax_6 & 0xc) != 0 || (rax_6 & 3) != 0)
            rbp.b = 0
        else if (sub_140f7b490(arg1) != 0)
            rbp.b = 0
        else
            rbp = 1

if ((rsi & 1) != 0 && rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

if (rbp.b != 0 && (*(arg1[0x9f] + 0x70))(&arg1[0x9f]) s> 0)
    (*(arg1[0x9f] + 0x30))(&arg1[0x9f])
    (*(arg1[0x9f] + 0x40))(&arg1[0x9f], 2)

sub_140f80250(arg1, arg2, arg3, arg4)
return arg2
