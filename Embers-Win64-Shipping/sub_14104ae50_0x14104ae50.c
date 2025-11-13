// 函数: sub_14104ae50
// 地址: 0x14104ae50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_20 = arg3
int64_t rax_1 = (*(*arg3 + 0x18))(arg3)
int32_t var_10 = 1
EnterCriticalSection(arg1 + 0x10)
int64_t* rax_2 = j_sub_140a82f30(0x28)

if (rax_2 != 0)
    *rax_2 = 0
    *(rax_2 + 8) = arg2.o
    *(rax_2 + 0x18) = rax_1.o
    int64_t** rdx = *(arg1 + 0x40)
    *(arg1 + 0x40) = rax_2
    *rdx = rax_2

*(arg1 + 0x50) += 1
return LeaveCriticalSection(arg1 + 0x10) __tailcall
