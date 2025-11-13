// 函数: sub_1419987f0
// 地址: 0x1419987f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_1439c85c4 == 0)
    int16_t* const r9_1 = &data_142d40450
    bool cond:0_1 = data_143f13778 != 0
    data_143ddb420 = 0
    
    if (cond:0_1)
        r9_1 = data_143f13770
    
    data_143de542b = 0
    sub_140af98a0("Unknown", 0x357, u"Rendering thread exception:\r\n%s", r9_1)
    sub_140afbb40()

if (data_143de5480 != 0)
    uint32_t result
    result.b = GetCurrentThreadId() == data_143de5470
    
    if (result.b == 0)
        return result

if (data_143de542b == 0)
    sub_140b19e60()
    void* rdx_1 = data_1439a8bd0
    (*(rdx_1 + 0x48))(&data_1439a8bd0, rdx_1)

return sub_140d84150(false) __tailcall
