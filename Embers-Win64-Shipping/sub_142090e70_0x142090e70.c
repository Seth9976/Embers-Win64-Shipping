// 函数: sub_142090e70
// 地址: 0x142090e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
uint128_t var_18 = zmm6

if (arg1[0x55].d s> 0)
    void arg_8
    int32_t* rax_1 = sub_14208caf0(arg1, &arg_8)
    void* i = arg1[0x54]
    void* rdi_3 = (sx.q(arg1[0x55].d) << 5) + i
    int64_t var_28
    var_28.d = arg2.d f- *rax_1
    var_28:4.d = arg2:4.d f- rax_1[1]
    
    for (; i != rdi_3; i += 0x20)
        if ((arg3 == 0 || *(i + 0x18) != 0) && sub_141ffdd30(i, var_28) != 0)
            return i

return nullptr
