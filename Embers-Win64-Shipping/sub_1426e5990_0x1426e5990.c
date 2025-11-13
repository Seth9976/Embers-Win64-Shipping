// 函数: sub_1426e5990
// 地址: 0x1426e5990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = sub_1426b0430(*arg2, arg1)
uint64_t result = sub_1426b2b20(*arg2, arg1, rax)

if (result != 0)
    int64_t rdx_2 = *arg1
    uint32_t rcx_3 = zx.d((*(rdx_2 + 0x298))(arg1, rdx_2))
    void* const rbx_2
    
    if (rcx_3 == 0)
        rbx_2 = nullptr
    else
        rbx_2 = result - (zx.q(rcx_3 + 3) & 0xfffffffffffffffc)
    
    result = zx.q(arg1[0xd].d)
    *(rbx_2 + 4) = result.d
    *(rbx_2 + 8) = 0

return result
