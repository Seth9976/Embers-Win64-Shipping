// 函数: sub_14094dfb0
// 地址: 0x14094dfb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 8)
char rax

if (rcx != 0)
    rax = (*(*rcx + 0x28))(rcx)

int64_t rbx

if (rcx == 0 || rax == 0)
    rbx.b = 0
else
    rbx.b = 1

int64_t* rcx_1 = *(arg2 + 8)

if (rcx_1 != 0)
    rax = (*(*rcx_1 + 0x28))(rcx_1)

if (rcx_1 == 0 || rax == 0)
    rax = 0
else
    rax = 1

if (rbx.b == rax)
    if (rbx.b != 0)
        int64_t* rcx_2 = *(arg1 + 8)
        rax = (**rcx_2)(rcx_2, *(arg2 + 8))
    
    if (rbx.b == 0 || rax != 0)
        return 1

return 0
