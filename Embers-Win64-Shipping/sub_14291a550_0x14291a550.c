// 函数: sub_14291a550
// 地址: 0x14291a550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int32_t rsi = -1
int32_t* r14 = nullptr

if (sub_142890560(*(arg3 + 8)) s> 0x2710)
    sub_1428a5670(5, 0x66, 0x67, "crypto\dh\dh_key.c", 0xaa)
    return 0xffffffff

int64_t* rax_2 = sub_1428d8d60()

if (rax_2 != 0)
    sub_1428d8e50(rax_2)
    int64_t* rax_3 = sub_1428d8ba0(rax_2)
    
    if (rax_3 != 0)
        if (*(arg3 + 0x28) != 0)
            if ((*(arg3 + 0x30) & 1) != 0)
                r14 = sub_1428cc990(arg3 + 0x38, *(arg3 + 0x88), *(arg3 + 8), rax_2)
                sub_1428908d0(*(arg3 + 0x28), 4)
            
            int32_t arg_18
            
            if ((*(arg3 + 0x30) & 1) == 0 || r14 != 0)
                if (sub_1428c3280(arg3, arg2, &arg_18) == 0 || arg_18 != 0)
                    sub_1428a5670(5, 0x66, 0x66, "crypto\dh\dh_key.c", 0xc4)
                else
                    int32_t var_48
                    var_48.q = *(arg3 + 8)
                    int32_t rax_7 = (*(*(arg3 + 0x78) + 0x18))(arg3, rax_3, arg2, *(arg3 + 0x28), 
                        var_48, rax_2, r14)
                    
                    if (rax_7 != 0)
                        rsi = sub_14288fba0(rax_3, arg1)
                    else
                        sub_1428a5670(5, rax_7 + 0x66, rax_7 + 3, "crypto\dh\dh_key.c", 0xca)
        else
            sub_1428a5670(5, 0x66, 0x64, "crypto\dh\dh_key.c", 0xb7)
    
    sub_1428d8a60(rax_2)
    sub_1428d8ae0(rax_2)

return zx.q(rsi)
