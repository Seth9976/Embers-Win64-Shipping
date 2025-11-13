// 函数: sub_1422b8cd0
// 地址: 0x1422b8cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0x28)
int64_t result = sx.q(*(arg1 + 0x30))

for (void* rdi_2 = &i[result * 6]; i != rdi_2; i = &i[6])
    int64_t* rcx = *i
    
    if (rcx != 0)
        result = (*(*rcx + 0x28))(rcx, arg2)

return result
