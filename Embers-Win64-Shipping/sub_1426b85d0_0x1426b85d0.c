// 函数: sub_1426b85d0
// 地址: 0x1426b85d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *arg2
int64_t result = *(r8 + 0x110)
*(zx.q(*(arg1 + 0x52)) + *(zx.q(*(r8 + 0x260)) * 0x58 + result + 0x30)) = 0xffff

if ((arg1[0x11].b & 4) != 0)
    result = (*(*arg1 + 0x2c8))()

int32_t i = 0

if (arg1[0xe].d s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        char var_15 = var_15 & 0xfe
        int64_t var_20_1 = 0
        char var_16_1 = 1
        void* rax_3 = *arg2
        int64_t var_28 = *(rsi_1 + arg1[0xd])
        int16_t var_18_1 = *(rax_3 + 0x260)
        sub_1426a96e0(arg2, &var_28)
        int128_t zmm6
        result, zmm6 = sub_1426b7ce0(*(arg1[0xd] + rsi_1), arg2, zmm6)
        i += 1
        rsi_1 = &rsi_1[1]
    while (i s< arg1[0xe].d)

return result
