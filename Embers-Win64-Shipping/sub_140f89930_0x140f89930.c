// 函数: sub_140f89930
// 地址: 0x140f89930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x4e6) == 0)
    int32_t var_30_1 = 0
    int64_t (* var_38)() = sub_1405949a0
    int128_t zmm0 = var_38.o
    *(arg1 + 0x4e6) = 1
    var_38.o = zmm0
    void var_28
    void var_18
    sub_140e20c50(arg1, &var_28, zx.o(0), sub_140dd1ff0(&var_18, arg1, &var_38))
    int64_t* var_20
    
    if (var_20 != 0)
        var_20[1].d -= 1
        
        if (var_20[1].d == 1)
            (**var_20)(var_20)
            int32_t temp1_1 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_20 + 8))(var_20, 1)

void* rax_4 = arg1[0x74]

if (rax_4 != 0)
    *(rax_4 + 0x320) = 1

return sub_140e19ef0(arg1, 1) __tailcall
