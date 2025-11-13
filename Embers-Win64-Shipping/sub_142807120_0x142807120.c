// 函数: sub_142807120
// 地址: 0x142807120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = arg1[2]
int64_t* rbx = rax
int64_t rsi = 0
void* r8 = &rax[zx.q(arg1[3].d)]
uint64_t rbp_3 = (r8 - rax + 7) u>> 3

if (rax u> r8)
    rbp_3 = 0

if (rbp_3 != 0)
    do
        int64_t* rcx = **arg1
        (*(*rcx + 0x10))(rcx, *rbx)
        rsi += 1
        rbx = &rbx[1]
    while (rsi != rbp_3)

arg1[3].d = 0
sub_142807710(&arg1[4])
int64_t rdx_2 = arg1[5]

if (rdx_2 != 0)
    int64_t* rcx_2 = *arg1[4]
    (*(*rcx_2 + 0x10))(rcx_2, rdx_2)

int32_t result = *(arg1 + 0x1c)

if ((result & 0x7fffffff) != 0 && result s>= 0)
    int64_t rdx_3 = arg1[2]
    
    if (rdx_3 != 0)
        int64_t* rcx_3 = *arg1[1]
        return (*(*rcx_3 + 0x10))(rcx_3, rdx_3)

return result
