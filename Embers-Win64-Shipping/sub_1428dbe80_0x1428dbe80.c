// 函数: sub_1428dbe80
// 地址: 0x1428dbe80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rcx = 0

if (sub_1428a5c60(&data_143fecc48, sub_1428dca20) != 0)
    rcx = data_143fecc50

if (rcx != 0)
    int64_t* rbx_1 = data_143fecc38
    
    if (rbx_1 != 0)
        CRITICAL_SECTION* rcx_1 = *rbx_1
        
        if (rcx_1 != 0)
            sub_1428a5c40(rcx_1)
            rcx_1 = *rbx_1
        
        int32_t rdi
        rdi.b = rbx_1[0x12].d == 1
        
        if (rcx_1 != 0)
            sub_1428a5d00(rcx_1)
        
        return zx.q(rdi)

return 0
