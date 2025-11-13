// 函数: sub_142416590
// 地址: 0x142416590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm4 = arg3.d
float zmm5 = arg3:4.d
int128_t result
result.d = zmm4.d f- arg2.d
int128_t zmm6 = arg4
arg4 = arg2:4.d
float zmm1 = zmm5 f- arg4.d
result.d = result.d f* result.d
zmm1 = zmm1 * zmm1 f+ result.d
result = zx.o(0)

if (not(zmm1 <= 0f))
    void* rbx_1 = *(arg1 + 0x260)
    
    if (rbx_1 != 0)
        int64_t var_70_1 = arg2
        int64_t var_68_1 = 0
        char var_60_1 = 0
        int64_t var_58_1 = 0
        void** const var_78 = &data_14328aab8
        int32_t var_40_1 = arg2.d
        int32_t var_3c_1 = arg4.d
        int32_t var_34_1 = zmm4.d
        int32_t var_38_1 = 0
        float var_30_1 = zmm5
        int32_t var_2c_1 = 0
        int32_t var_28_1 = zmm6.d
        int128_t var_50_1 = *arg5
        result = sub_142407e00(&var_78, rbx_1)
        
        if (*(rbx_1 + 0xa0) == 1)
            return sub_14240e030(rbx_1, 0)

return result
