// 函数: sub_1406c3b00
// 地址: 0x1406c3b00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 8)
int64_t var_18
int64_t* arg_8 = &var_18
var_18 = 0
int64_t rbx = sx.q(*(arg1 + 0x18))
int64_t rsi = *(arg1 + 0x10)
int32_t var_10 = rbx.d

if (rbx.d != 0)
    sub_1405c4a90(&var_18, rbx.d, 0)
    memcpy(var_18, rsi, (rbx << 2).d)
else
    int32_t var_c_1 = 0

return sub_1406bad10(rdi, &var_18)
