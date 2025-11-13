// 函数: sub_14227f4c0
// 地址: 0x14227f4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool rbx = arg2[0x12].b
int64_t rsi = *arg1
bool cond:1 = rbx != 0
int32_t entry_zmm3
int64_t result = sub_142280850(arg1, arg2, 4, cond:1, 
    sub_142280850(arg1, &arg2[4], 3, cond:1, 
        sub_142280850(arg1, &arg2[8], 5, rbx == 0, entry_zmm3)))

if (rsi != 0)
    int64_t* rcx_2 = *arg1
    
    if (rcx_2 != 0)
        int64_t* arg_8 = nullptr
        int64_t* arg_10 = nullptr
        (*(*rcx_2 + 0x30))(rcx_2, &arg_8, &arg_10)
        sub_142281670(arg_8)
        return sub_142281670(arg_10)

return result
