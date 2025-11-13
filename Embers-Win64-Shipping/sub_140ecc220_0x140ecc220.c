// 函数: sub_140ecc220
// 地址: 0x140ecc220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rbp = 0

if (*(arg1 + 0x76c) != 0 && arg1[0x92].d != 0)
    int64_t* rcx = arg1[0x91]
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (arg1[0x92].d == 0)
            rcx_1 = nullptr
        else
            rcx_1 = arg1[0x91]
        
        arg1[0x90].d = (*(*rcx_1 + 0x48))(rcx_1)

int64_t* rdi
int64_t r14

if (*(arg1 + 0x76c) == 0 || arg1[0x90].d == 0)
    rdi = 0.q
    r14.b = 0
else
    rdi = *(arg4 + 0x48)
    
    if (rdi != 0)
        rdi[1].d += 1
    
    rbp = 1
    
    if (*(arg4 + 0x38) != data_143e1e008)
        r14.b = 0
    else
        char rax_6 = (*(arg4 + 8)).b
        
        if ((rax_6 & 0xc) != 0 || (rax_6 & 3) != 0)
            r14.b = 0
        else
            r14 = 1

if ((rbp & 1) != 0 && rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

if (r14.b == 0)
    sub_140f7fc20(arg1, arg2, arg3, arg4, arg5)
else
    if ((*(arg1[0x9d] + 0x70))(&arg1[0x9d]) s> 0)
        (*(arg1[0x9d] + 0x30))(&arg1[0x9d])
        (*(arg1[0x9d] + 0x40))(&arg1[0x9d], 2)
    
    *arg2 = 1
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702

return arg2
