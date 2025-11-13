// 函数: sub_142a60260
// 地址: 0x142a60260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142ac3f10(&arg1[5])
int64_t rcx_1 = *arg1

if (rcx_1 != 0 && rcx_1 != &arg1[0xd])
    sub_142a7dcd0(rcx_1)

int64_t rcx_2 = arg1[1]

if (rcx_2 != 0)
    sub_142a7dcd0(rcx_2)

void* rax_2 = arg1[4]

if (rax_2 != 0)
    *(rax_2 + 0x6c) -= 1

void* rax_3 = arg1[3]

if (rax_3 != 0)
    int64_t* rcx_3 = rax_3 + 0x18
    
    while (*(rax_3 + 0x18) != 0)
        rax_3 = *rcx_3
        rcx_3 = rax_3 + 0x18
    
    *(rax_3 + 0x6c) -= 1

return sub_142a7dcd0(arg1) __tailcall
