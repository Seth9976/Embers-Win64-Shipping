// 函数: sub_1408234c0
// 地址: 0x1408234c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0 || *(arg1 + 0xa4) != 1)
    return 

void* rax = *(arg2 + 0x80)
int64_t* rcx = arg1[0x3c]
arg1[0x3c] = rax

if (rax != 0)
    *(rax + 8) += 1

if (rcx != 0)
    rcx[1].d -= 1
    
    if (rcx[1].d == 1)
        (**rcx)(rcx, 1)

void* rdi_1 = arg1[0x3c]

if (rdi_1 != 0)
    rax = (*(*arg1 + 0x58))(arg1)
    *(rdi_1 + 0x10) += rax.d
