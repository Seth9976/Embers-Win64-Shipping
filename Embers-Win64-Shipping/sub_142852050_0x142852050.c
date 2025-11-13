// 函数: sub_142852050
// 地址: 0x142852050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x60)

if (*(arg1 + 0x30) == 0)
    sub_1428a5670(0x14, 0x20b, 0x114, "ssl\ssl_lib.c", 0x6b1)
    return 0xffffffff

if ((*(arg1 + 0x44) & 2) == 0)
    int32_t rax_1 = *(arg1 + 0x84)
    
    if (rax_1 != 1 && rax_1 != 8)
        sub_1428564a0(arg1, 0)
        
        if ((*(arg1 + 0x5c8) & 0x100) != 0)
            int64_t rax_2 = sub_1428ac8c0()
            
            if (rax_2 == 0)
                int32_t var_20_1 = rax_2.d
                void* rax_3 = *(arg1 + 8)
                void* var_38 = arg1
                int64_t var_30_1 = arg2
                int64_t var_28_1 = arg3
                int64_t var_18_1 = *(rax_3 + 0x38)
                uint64_t result = sub_142852530(arg1, &var_38, sub_142851f30)
                *arg4 = *(arg1 + 0x16d8)
                return result
        
        return (*(*(arg1 + 8) + 0x38))(arg1, arg2, arg3, arg4)
    
    sub_1428a5670(0x14, 0x20b, 0x42, "ssl\ssl_lib.c", 0x6bc)
else
    *(arg1 + 0x28) = 1

return 0
