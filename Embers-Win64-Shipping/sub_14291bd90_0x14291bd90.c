// 函数: sub_14291bd90
// 地址: 0x14291bd90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

__chkstk(0x28)
int64_t rcx = *arg1

if (rcx == 0)
    return 

void* const rax = *(arg2 + 0x18)

if (rax == 0 || (*(rax + 8) & 2) == 0)
    return 

int64_t rbx_1 = sx.q(*(rax + 0x20))
int64_t* rbx_2 = rbx_1 + rcx

if (rbx_1 == neg.q(rcx))
    return 

sub_1428a6780(*rbx_2)
*(rbx_2 + 0xc) = 1
*rbx_2 = 0
rbx_2[1].d = 0
