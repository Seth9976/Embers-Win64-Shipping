// 函数: sub_142256710
// 地址: 0x142256710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_10 = arg2
void* rcx = *(arg1 + 0xb8)
int64_t result

if (rcx == 0)
    result = 0
else
    result = sub_141f64a80(rcx)

int64_t result_1 = result

if (result != 0)
    void* rcx_1 = *(arg1 + 0xb8)
    result = *(rcx_1 + 0x430)
    
    if (result != 0)
        void* var_38 = arg1
        int64_t var_30_1 = result + 0x188
        int64_t* var_28_1 = &result_1
        void* var_20_1 = ((sx.q(*(rcx_1 + 0x490)) + 0x45) << 4) + rcx_1
        char* var_18_1 = &arg_10
        void** var_40_1 = &var_38
        int64_t (* var_48)(int64_t* arg1) = j_sub_14223c930
        return sub_14226a780(rcx_1, &var_48)

return result
