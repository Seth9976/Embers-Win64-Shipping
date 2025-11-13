// 函数: sub_140a37410
// 地址: 0x140a37410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

while (true)
    int32_t result = sub_140a2d3e0(*arg1 + 0x40)
    
    if (result == 0)
        return result
    
    int64_t* rbx_1 =
        *(*(&data_143cf0bf8 + (zx.q(result) u>> 0xe << 3)) + (zx.q(result) & 0x3fff) * 0x18 + 8)
    int512_t zmm1_1
    result, zmm1_1 = sub_140a24050(result)
    
    if (rbx_1 == 0)
        return result
    
    if (*(rbx_1 + 0x61) == 0)
        zmm1_1.o = zx.o(0)
        (*(*rbx_1 + 8))(rbx_1, zmm1_1)
    
    (**rbx_1)(rbx_1, 1)
