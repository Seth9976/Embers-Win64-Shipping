// 函数: sub_140e50a10
// 地址: 0x140e50a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = &arg1[2]
*arg1 = 0
arg1[1] = 0
r8[2] = 0
r8[3].d = 0
*(r8 + 0x1c) = 0x80
int64_t* rax = r8[2]

if (rax != 0)
    r8 = rax

*r8 = 0
r8[1] = 0
arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
arg1[8] = 0
arg1[9].d = 0
sub_140e54a80(arg1, arg2)
arg1[0xa] = 0
int32_t i_1 = arg2[0xb].d
int64_t* rbp = arg2[0xa]
arg1[0xb].d = i_1

if (i_1 != 0)
    sub_140808ed0(&arg1[0xa], i_1, 0)
    int64_t* rdi_1 = arg1[0xa]
    void* rbx_1 = &rdi_1[4]
    int32_t i
    
    do
        *rdi_1 = 0
        int64_t* rcx_1 = rbx_1 - 0x10
        *(rbx_1 - 0x18) = 0
        *rbx_1 = 0
        *(rbx_1 + 8) = 0
        *(rbx_1 + 0xc) = 0x80
        int64_t* rax_1 = *rbx_1
        
        if (rax_1 != 0)
            rcx_1 = rax_1
        
        *rcx_1 = 0
        rcx_1[1] = 0
        *(rbx_1 + 0x10) = 0xffffffff
        *(rbx_1 + 0x14) = 0
        *(rbx_1 + 0x20) = 0
        *(rbx_1 + 0x28) = 0
        sub_140e549f0(rdi_1, rbp)
        rdi_1 = &rdi_1[0xa]
        rbx_1 += 0x50
        rbp = &rbp[0xa]
        i = i_1
        i_1 -= 1
    while (i != 1)
else
    *(arg1 + 0x5c) = 0

arg1[0xc] = arg2[0xc]
void* rax_3 = arg2[0xd]
arg1[0xd] = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

return arg1
