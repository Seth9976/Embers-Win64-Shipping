// 函数: sub_14281a814
// 地址: 0x14281a814
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg2
void* rcx = *arg1
int64_t rbp_1 = *(rcx + 0xc8) + sub_14281e72c(rcx)
class std::wostream* result = *arg1

if (result->__offset(0xd0).b == 0 && result->__offset(0xd2).b == 0 && result->__offset(0xd3).b == 0)
    if (result->__offset(0xd1).b != 0)
        sub_14281f460(&arg1[1], &(*U""\tv 0")[3], 1)
    
    result, arg2 = sub_14281f460(&arg1[1], &data_142d6bc34, 1)

if (rdi s> 0)
    if (rdi s<= 3)
        arg2.b = 1
        return sub_14281ba8c(arg1, arg2.b, rbp_1)
    
    if (rdi == 4)
        return sub_14281f460(&arg1[1], &data_14370209c, 1)
    
    if (rdi == 5)
        arg2.b = 1
        return sub_14281ba8c(arg1, arg2.b, rbp_1)
    
    if (rdi == 6)
        return sub_14281f460(&arg1[1], &data_14370209c, 1)

return result
