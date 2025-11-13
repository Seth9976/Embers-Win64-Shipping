// 函数: sub_1426b64f0
// 地址: 0x1426b64f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 0

if (*(arg2 + 0x84) s< 2)
    *(arg2 + 0x84) = 2

int64_t* rcx = arg2[5]

if (rcx != 0)
    sub_1426a8a50(rcx, 0)

int32_t rdi = (*(*arg2 + 0x2a8))(arg2, 0)

if (rdi != 4)
    rdi = 4

if (rdi s> *(arg2 + 0x84))
    *(arg2 + 0x84) = rdi
    
    if (rdi == 4)
        sub_1426be890(arg2, 3)

return zx.q(rdi)
