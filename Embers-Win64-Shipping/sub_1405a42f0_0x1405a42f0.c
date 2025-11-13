// 函数: sub_1405a42f0
// 地址: 0x1405a42f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r14 = zx.q(arg2)
int64_t result
bool z_1

do
    int64_t result_1 = 0
    
    if (0 == *(arg1 + 0x40))
        *(arg1 + 0x40) = 0
    else
        result_1 = *(arg1 + 0x40)
    
    if ((((result_1 & 0xfffffffffc000000) + 0x4000000) & 0xfffffffffc000000)
            u< (result_1 & 0xfffffffffc000000))
        sub_140a2c900()
    
    void* rcx_2
    
    if (r14.d != 0)
        rcx_2 = *(&data_143cf0bf8 + (r14 u>> 0xe << 3)) + (zx.q(r14.d) & 0x3fff) * 0x18
    else
        rcx_2 = nullptr
    
    *(rcx_2 + 0x10) = result_1.d & 0x3ffffff
    result = result_1
    
    if (result == *(arg1 + 0x40))
        *(arg1 + 0x40) = r14 | ((result_1 & 0xfffffffffc000000) + 0x4000000)
        z_1 = true
    else
        result = *(arg1 + 0x40)
        z_1 = false
while (not(z_1))
return result
