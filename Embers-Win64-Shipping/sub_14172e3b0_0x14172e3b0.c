// 函数: sub_14172e3b0
// 地址: 0x14172e3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0x10)
int64_t result = sx.q(*(arg1 + 0x18))

for (void* rdi = &i[result]; i != rdi; i = &i[1])
    int64_t* rcx = *i
    result = (*(*rcx + 0x68))(rcx, arg2, arg3)

return result
