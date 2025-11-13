// 函数: sub_1427b3c70
// 地址: 0x1427b3c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *(arg1 + 0x30)
int64_t result = sx.q(*(arg1 + 0x38))

for (void* rdi_2 = &i[result * 6]; i != rdi_2; i = &i[6])
    int64_t* rcx = *i
    result = (*(*rcx + 0x270))(rcx, arg2)

return result
