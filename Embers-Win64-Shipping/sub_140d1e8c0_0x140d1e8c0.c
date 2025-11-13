// 函数: sub_140d1e8c0
// 地址: 0x140d1e8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = *arg1
int64_t result = sx.q(arg1[1].d)
void* rsi_2 = &rbx[result * 0x14]

if (rbx == rsi_2)
    *(arg1 + 0x24) = 0
else
    do
        if (*rbx s>= 0 && (rbx[0x12].b != 0 || arg2 != 0))
            result = sub_140d1e5a0(arg1, rbx)
        
        rbx = &rbx[0x14]
    while (rbx != rsi_2)
    
    *(arg1 + 0x24) = 0

return result
