// 函数: sub_1420d2060
// 地址: 0x1420d2060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_140a8c140(sub_140a752e0(), arg1) == 0)
    return 0

if (arg2 != 0)
    int16_t* const rdi_1 = &data_142d40450
    int16_t* r9_1
    
    if (arg1[1].d == 0)
        r9_1 = &data_142d40450
    else
        r9_1 = *arg1
    
    sub_140b00d80(data_143ddb400, u"Internationalization", u"Language", r9_1, &data_143de5840)
    
    if (arg1[1].d != 0)
        rdi_1 = *arg1
    
    sub_140b00d80(data_143ddb400, u"Internationalization", u"Locale", rdi_1, &data_143de5840)
    sub_140af04f0(data_143ddb400, 0, &data_143de5840)

return 1
