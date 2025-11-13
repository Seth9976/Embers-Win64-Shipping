// 函数: sub_140fc4ef0
// 地址: 0x140fc4ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

SOCKET rax = accept(*(arg1 + 0x28), nullptr, nullptr)

if (rax == -1)
    return 0

int64_t* rcx_1 = *(arg1 + 0x38)
return (*(*rcx_1 + 0x158))(rcx_1, rax, zx.q(*(arg1 + 8)), arg2, arg1 + 0x20)
