// 函数: sub_14193fc80
// 地址: 0x14193fc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15 = data_1439c74f4
int64_t r14 = arg4
uint64_t rbx = zx.q(arg3)
uint64_t rbp = zx.q(arg2)

if (r15 == 0)
    data_143effd08(0x88ec, rbp, rbx)
else if (arg3 != 0)
    int32_t rsi_1
    int32_t temp0_1
    
    do
        rsi_1 = rbx.d
        
        if (r15 u<= rbx.d)
            rsi_1 = r15
        
        data_143effd08(0x88ec, zx.q(rbp.d), zx.q(rsi_1), r14)
        rbp = zx.q(rbp.d + rsi_1)
        r14 += zx.q(rsi_1)
        temp0_1 = rbx.d
        rbx = zx.q(rbx.d - rsi_1)
    while (temp0_1 != rsi_1)
