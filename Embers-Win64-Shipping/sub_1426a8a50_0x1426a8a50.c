// 函数: sub_1426a8a50
// 地址: 0x1426a8a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x84)

if (rcx != 1 && arg2 != 0)
    return zx.q(rcx)

int32_t rbx = 2
int32_t rax_1 = 4

if (rcx s< 2)
    *(arg1 + 0x84) = 2

int64_t rcx_1 = arg1[5]

if (rcx_1 != 0)
    rax_1 = sub_1426a8a50(rcx_1)
    
    if (rax_1 == 1)
        rax_1 = 4

if (arg2 == 0)
    int32_t rax_3 = (*(*arg1 + 0x2a8))(arg1, 0)
    rbx = rax_3
    
    if (rax_3 != 4)
        rbx = 4
else if (rax_1 s< 2)
    rbx = 4
else if (rax_1 s> 3)
    if (rax_1 != 4)
        rbx = 4
    else if ((arg1[0x12].b & 1) == 0)
        rbx = (*(*arg1 + 0x2a8))(arg1, zx.q(arg2))

if (rbx s> *(arg1 + 0x84))
    *(arg1 + 0x84) = rbx
    
    if (rbx == 4)
        sub_1426be890(arg1, rbx - 1)

return zx.q(rbx)
