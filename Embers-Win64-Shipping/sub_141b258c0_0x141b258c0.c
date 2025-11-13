// 函数: sub_141b258c0
// 地址: 0x141b258c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_140d3e110(arg1 + 0xb04) == 0)
    void var_38
    sub_142427eb0(&var_38)
    int32_t var_c
    int32_t var_c_1 = var_c | 0x40
    char var_10_1 = 1
    int64_t* rax_2 = (*(*arg2 + 0x78))(arg2)
    int64_t rdx = *rax_2
    void* rax_5 =
        sub_1420efae0((*(rdx + 0x150))(rax_2, rdx), sub_142486290(), nullptr, nullptr, &var_38)
    
    if (rax_5 != 0)
        sub_140d3a3a0(arg1 + 0xb04, rax_5)
        void** const arg_8 = &data_1430532f8
        int64_t arg_18
        int64_t* rax_6 = sub_141a6b800(&arg_18)
        int32_t var_40_1 = arg2[0x5b].d
        int64_t var_48 = arg2[0x5a]
        void* var_58_1
        var_58_1.b = *(arg2 + 0x2dc)
        sub_1405c5900(&arg2[0x1f], *rax_6, &arg_8, rax_5, var_58_1.b, &var_48)

return sub_140d3c6e0(arg1 + 0xb04) __tailcall
