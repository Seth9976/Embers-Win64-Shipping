// 函数: sub_14281ec8c
// 地址: 0x14281ec8c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = *(arg1 + 0xa0)

for (int64_t* i = *(arg1 + 0x98); i != rdi; i = &i[1])
    int64_t* rcx = *i
    (*(*rcx + 8))(rcx)
