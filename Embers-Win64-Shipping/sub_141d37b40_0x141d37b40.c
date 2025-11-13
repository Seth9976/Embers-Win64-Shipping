// 函数: sub_141d37b40
// 地址: 0x141d37b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = j_sub_140a82f30(0x50)

if (rax == 0)
    return rax

*rax = 0
rax[2] = *arg2
rax[4] = 0

if (rax[2] != 0)
    void* rax_1 = arg2[2]
    void* rcx = &arg2[4]
    
    if (rax_1 != 0)
        rcx = rax_1
    
    (**rcx)(rcx)

int64_t* temp0 = *arg1
*arg1 = rax
*temp0 = rax
int64_t** rax_4
rax_4.b = 1
return rax_4
