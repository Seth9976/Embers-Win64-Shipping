// 函数: sub_140a5bd30
// 地址: 0x140a5bd30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
*(arg1 + 8) = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x18) = 2
int64_t* rax = j_sub_140a82f30(0x2e0)
int64_t* result

if (rax == 0)
    result = nullptr
else
    result = sub_140a60990(rax, arg1)

*(arg1 + 0x20) = result
__builtin_memset(&arg1[0x28], 0, 0x70)
return result
