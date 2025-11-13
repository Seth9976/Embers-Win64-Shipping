// 函数: sub_1407eba30
// 地址: 0x1407eba30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int32_t result

if (rcx != 0)
    result = sub_140856ea0(rcx, 0)

bool cond:0_1

if (rcx != 0 && result.b != 0)
    void* rcx_1 = *arg1
    
    if (*(rcx_1 + 0x4b0) == arg1[2].d)
        cond:0_1 = *(rcx_1 + 0x4c0) != arg1[4].d
        goto label_1407eba6f
else if (arg1[2].d == 0)
    cond:0_1 = arg1[4].d != 0
label_1407eba6f:
    
    if (not(cond:0_1))
        result.b = 1
        return result
result.b = 0
return result
