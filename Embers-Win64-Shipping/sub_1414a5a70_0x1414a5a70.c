// 函数: sub_1414a5a70
// 地址: 0x1414a5a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *(arg1 + 0x30)
int32_t rsi = *arg1
uint64_t rdi_1 = zx.q(rbx.d) & 2
int64_t result
bool cond:0_1

if (sub_1405fba70(rsi, 3).b != 0)
    if ((rdi_1 != 0 || not(test_bit(rbx, 9)) || (rbx & 0x400004000) == 0x400004000)
            && (rbx.b & 0x20) != 0)
        cond:0_1 = sub_1405fba70(rsi, 3).b == 0
        goto label_1414a5af5
else if (rdi_1 != 0 || not(test_bit(rbx, 9)) || (rbx & 0x400004000) == 0x400004000)
    cond:0_1 = (rbx.b & 0x20) == 0
label_1414a5af5:
    
    if (not(cond:0_1))
        result.b = 1
        return result
result.b = 0
return result
