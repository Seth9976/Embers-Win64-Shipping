// 函数: sub_1429cade0
// 地址: 0x1429cade0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = arg1[2]
int64_t r8 = arg1[1]
int64_t result = (r10 - r8) s>> 3

if (result u>= arg2)
    return result

int64_t rcx = *arg1
int64_t r8_2 = (r8 - rcx) s>> 3

if (0x1fffffffffffffff - r8_2 u< arg2)
    std::_Xlength_error("vector<T> too long")
    noreturn

int64_t rdx = arg2 + r8_2
int64_t r10_2 = (r10 - rcx) s>> 3
int64_t rcx_1 = 0
uint64_t rax_4 = r10_2 u>> 1

if (0x1fffffffffffffff - rax_4 u>= r10_2)
    rcx_1 = rax_4 + r10_2

if (rcx_1 u>= rdx)
    rdx = rcx_1

return sub_1429caae0(arg1, rdx) __tailcall
