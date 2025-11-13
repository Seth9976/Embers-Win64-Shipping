// 函数: sub_141f81c70
// 地址: 0x141f81c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int32_t i = 0

if (*(arg1 + 0x18) s> 0)
    int64_t* rdi_1 = nullptr
    
    do
        int64_t* rcx = *(rdi_1 + *(arg1 + 0x10))
        int64_t rdx_1 = *rcx
        i += 1
        rdi_1 = &rdi_1[1]
        rbx += (*(rdx_1 + 0x20))(rcx, rdx_1, zx.q(arg3))
    while (i s< *(arg1 + 0x18))

return zx.q(rbx)
