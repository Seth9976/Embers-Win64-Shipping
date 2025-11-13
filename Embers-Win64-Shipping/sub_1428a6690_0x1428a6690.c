// 函数: sub_1428a6690
// 地址: 0x1428a6690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t rbx = sx.q(arg1)

if (rbx.d u> 0xf)
    sub_1428a5670(0xf, 0x71, 7, "crypto\ex_data.c", 0x37)
else
    int32_t rdx_1 = 0
    
    if (sub_1428a5c60(&data_143fecac8, sub_1428a6640) != 0)
        rdx_1 = data_143fecacc
    
    if (rdx_1 != 0)
        CRITICAL_SECTION* rcx = data_143fecac0
        
        if (rcx != 0)
            sub_1428a5c40(rcx)
            return &data_143feca40 + (rbx << 3)
    else
        sub_1428a5670(0xf, 0x71, rdx_1 + 0x41, "crypto\ex_data.c", 0x3c)

return 0
