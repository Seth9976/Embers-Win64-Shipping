// 函数: sub_142095ff0
// 地址: 0x142095ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x20)
int64_t* result_2
int64_t* result_1

if (rcx != 0)
    result_2 = (*(*rcx + 0x260))(rcx)
    result_1 = result_2

if (rcx == 0 || result_2 == 0)
    int64_t* result = sub_140d226f0(arg1, sub_142452380())
    result_1 = result
    
    if (result == 0)
        return result

jump(*(*result_1 + 0x150))
