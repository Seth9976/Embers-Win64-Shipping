// 函数: sub_142219150
// 地址: 0x142219150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = *(arg1 + 0xd0)
void** (* var_28)(int64_t* arg1, int512_t arg2 @ zmm1)
void* i_2

for (void* rsi_1 = sx.q(*(arg1 + 0xd8)) * 0x70 + i; i != rsi_1; i += 0x70)
    if (arg2 == 0 || *(i + 0x20) != arg2)
        *(i + 0x20) = arg2
    
    if (sub_1422136d0(i) != 0)
        void* rcx_1 = *(i + 0x20)
        void** var_20_1 = &i_2
        i_2 = i
        var_28 = j_sub_142210120
        sub_14226a6f0(rcx_1, &var_28)

void* i_1 = *(arg1 + 0xe0)
int64_t result = sx.q(*(arg1 + 0xe8))

for (void* rsi_3 = result * 0x70 + i_1; i_1 != rsi_3; i_1 += 0x70)
    if (arg2 == 0 || *(i_1 + 0x20) != arg2)
        *(i_1 + 0x20) = arg2
    
    result = sub_1422136d0(i_1)
    
    if (result.b != 0)
        void* rcx_3 = *(i_1 + 0x20)
        void** var_20_2 = &i_2
        i_2 = i_1
        var_28 = j_sub_142210120
        result = sub_14226a6f0(rcx_3, &var_28)

return result
