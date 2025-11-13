// 函数: sub_1428e2040
// 地址: 0x1428e2040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* rax = sub_1428e3030(arg1, data_143b85e30)

if (rax != 0)
    int64_t* rax_3 = sub_1428e07b0(rax, arg2)
    
    if (rax_3 != 0)
        int32_t* result = sub_1428e0d30(arg1, rax_3)
        
        if (result == 0)
            sub_1428e0a50(rax_3)
        
        return result
else
    int32_t rax_1 = data_143fecca8
    
    if (rax_1 == 0)
        rax_1 = sub_1428a5060()
        data_143fecca8 = rax_1
    
    sub_1428a5670(rax_1, 0x6c, 0x65, "engines\e_capi.c", 0x318)

return 0
