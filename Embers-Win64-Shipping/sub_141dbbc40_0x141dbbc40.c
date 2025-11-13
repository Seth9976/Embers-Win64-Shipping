// 函数: sub_141dbbc40
// 地址: 0x141dbbc40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi
rsi.b = 0
int64_t rax_1 = (*(*arg1 + 0x150))()
void* rax_2 = sub_1423de4b0(data_143f5b298, rax_1)

if (rax_2 == 0)
    return 0

int64_t* rbx = *(rax_2 + 0x220)
void* rdi_2 = &rbx[sx.q(*(rax_2 + 0x228)) * 2]

if (rbx == rdi_2)
    return 0

do
    int64_t* rcx_1 = *rbx
    
    if (rcx_1 != 0 && (*(*rcx_1 + 0x3d0))(rcx_1, arg1, arg2) != 0)
        int64_t* rcx_2 = *rbx
        (*(*rcx_2 + 0x2e0))(rcx_2, arg1, arg2, arg3, arg4, arg5, 0)
        rsi.b = 1
    
    rbx = &rbx[2]
while (rbx != rdi_2)

return zx.q(rsi.b)
