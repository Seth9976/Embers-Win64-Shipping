// 函数: sub_142827d0c
// 地址: 0x142827d0c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x110) != 0)
    return 

void* var_18

while (*(arg1 + 0xd0) != 0)
    int64_t r8_3 = *(arg1 + 0xc8) - 1 + *(arg1 + 0xd0)
    int32_t* rcx_1 = *(*(*(arg1 + 0xb8) + ((r8_3 u>> 1 & (*(arg1 + 0xc0) - 1)) << 3))
        + ((zx.q(r8_3.d) & 1) << 3))
    uint64_t rax = zx.q(*(arg1 + 0x10))
    int32_t temp0_1 = *rcx_1
    
    if (temp0_1 s< rax.d)
        break
    
    if (temp0_1 == rax.d)
        if (rcx_1[1] != 1)
            break
        
        sub_142827318()
        var_18 = nullptr
        void* var_10_1 = arg1
        
        if (sub_14282694c(&data_143f898c0, &var_18).d s>= 0)
            break
    
    sub_142827b74(arg1)

if (*(arg1 + 0xd0) == 0)
    return 

var_18 = arg1 + 0xb0

do
    void* rcx_3 = var_18
    int64_t r8_7 = *(arg1 + 0xc8) - 1 + *(arg1 + 0xd0)
    
    if (*(*(*(*(rcx_3 + 8) + ((r8_7 u>> 1 & (*(rcx_3 + 0x10) - 1)) << 3))
            + ((zx.q(r8_7.d) & 1) << 3)) + 8) != 1)
        break
    
    sub_142827b74(arg1)
while (*(arg1 + 0xd0) != 0)
