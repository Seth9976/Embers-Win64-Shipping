// 函数: sub_140db8b60
// 地址: 0x140db8b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0x10)
uint64_t rbx = zx.q(arg4)
int64_t* rcx = *rdi
char rax_2

if (rcx != 0)
    rax_2 = (*(*rcx + 0x10))(rcx, zx.q(arg2))

if (rcx == 0 || rax_2 != 0)
    if (rbx.d == 0)
        return zx.q(rbx.d)
    
    int64_t* rcx_1 = *rdi
    
    if (rcx_1 != 0 && (*(*rcx_1 + 0x20))(rcx_1, arg3, rbx) != 0)
        return zx.q(rbx.d)

return 0
