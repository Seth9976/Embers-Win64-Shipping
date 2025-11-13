// 函数: sub_141227c90
// 地址: 0x141227c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg2
int64_t rbx = 0
int64_t r8

if (rax != 0)
    void* rdx = *(rax + 0x20)
    r8 = *(rax + 0x28)
    
    if (rdx != 0)
        rbx = *(rdx + 0x48)

if (rax == 0 || r8 == 0)
    r8 = data_1439b64f8

if (rbx == 0)
    rbx = data_143a2fde8

int64_t rdi_2

if (arg1 == 0)
    rdi_2 = data_1439b6520
else
    void* rdi_1 = *(arg1 + 0x110)
    
    if (rdi_1 == 0)
        rdi_2 = data_1439b6520
    else
        rdi_2 = *(rdi_1 + 0x70)
        
        if (rdi_2 == 0)
            rdi_2 = data_1439b6520

sub_14108daf0(arg4, arg3, r8)
sub_14108daf0(arg4, &arg3[1], rdi_2)
return sub_14108daf0(arg4, &arg3[2], rbx) __tailcall
