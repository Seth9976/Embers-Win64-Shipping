// 函数: sub_1428a9570
// 地址: 0x1428a9570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x78)

if (arg1 u> 0x4aa)
    int64_t* rax_4 = data_143fecad8
    
    if (rax_4 != 0)
        int32_t var_28_1 = arg1
        void var_38
        void* var_40_1 = &var_38
        int32_t var_48 = 3
        int64_t* rax_5 = sub_1428a8d10(rax_4, &var_48)
        
        if (rax_5 != 0)
            return rax_5[1]
        
        sub_1428a5670(8, 0x67, 0x65, "crypto\objects\obj_dat.c", 0xf1)
else
    if (arg1 == 0)
        return &(&data_1434ed4f0)[0x28 * 0]
    
    int64_t rdx_1 = sx.q(arg1)
    
    if (*(rdx_1 * 0x28 + 0x1434ed500) != 0)
        return &(&data_1434ed4f0)[rdx_1 * 5]
    
    sub_1428a5670(8, 0x67, 0x65, "crypto\objects\obj_dat.c", 0xe3)

return 0
