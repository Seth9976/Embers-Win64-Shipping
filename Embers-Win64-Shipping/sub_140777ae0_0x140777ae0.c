// 函数: sub_140777ae0
// 地址: 0x140777ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_30 = data_14396f158
int16_t rax_1 = data_14396f160
int64_t var_38 = arg2
int16_t var_28 = rax_1
int32_t var_26 = 0xffffffff
int64_t var_20 = 0
int64_t var_18 = 0
int32_t* rax_3 = (*(arg1[0x83] + 0x30))(&arg1[0x83], &var_38)

if (rax_3 != 0)
    int64_t rax_4 = sx.q(*rax_3)
    
    if (rax_4.d != 0xffffffff)
        *(arg1[0x8b] + (rax_4 << 3)) = arg3
        arg1[0x99].d |= 4

uint64_t result = sub_141ee8490(arg1)

if (var_20 == 0)
    return result

return sub_140a74f90(var_20)
