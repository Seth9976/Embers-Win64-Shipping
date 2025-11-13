// 函数: sub_1410911f0
// 地址: 0x1410911f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0

if (sub_1410c2300(arg1) != 0)
    int32_t rbx_1 = *(data_143e2de50 + 4)
    char rax_4
    
    if (arg1[0x2a9].d s< 3 || *(data_143e2de08 + 4) s< 1)
        rax_4 = sub_1410a09e0(sub_1422e5a30(arg1))
    
    if ((arg1[0x2a9].d s>= 3 && *(data_143e2de08 + 4) s>= 1) || rax_4 != 0)
        if (rbx_1 s< 0)
            rbx_1 = 1
        
        if (rbx_1 s<= 1)
            return zx.q(rbx_1)
        
        return 1
    
    int32_t zmm0_1 = sub_141096b70(arg1)
    int32_t rax_5
    rax_5.b = zmm0_1 f> 35f
    rsi.b = zmm0_1 f> 70f
    int32_t rax_7 = rax_5 + 1 + rsi
    rsi = 3
    
    if (rbx_1 s>= 0)
        rax_7 = rbx_1
    
    if (rax_7 u<= 3)
        rsi = rax_7

return zx.q(rsi)
