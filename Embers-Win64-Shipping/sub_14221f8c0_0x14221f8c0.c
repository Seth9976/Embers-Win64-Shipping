// 函数: sub_14221f8c0
// 地址: 0x14221f8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
    return zx.q(arg1)

int64_t* rax = sub_142565030()
void* rax_1 = rax[0x23]

if (rax_1 == 0)
    (*(*rax + 0x390))(rax)
    rax_1 = rax[0x23]

char rcx_1 = *(rax_1 + 0x8d)
uint64_t result = 4

if (rcx_1 != 3)
    result = zx.q(arg1)

if (rcx_1 == 2)
    if (rcx_1 == 0)
        return 1
    
    return 3

if (rcx_1 == 1)
    result = 2

if (rcx_1 == 0)
    return 1

return result
