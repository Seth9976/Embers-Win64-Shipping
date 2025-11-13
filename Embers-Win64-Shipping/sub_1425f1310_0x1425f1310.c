// 函数: sub_1425f1310
// 地址: 0x1425f1310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* i = *arg1

for (void* rsi_2 = &i[sx.q(arg1[1].d) * 4]; i != rsi_2; i = &i[4])
    int16_t* const rcx
    
    if (i[1].d == 0)
        rcx = &data_142d40450
    else
        rcx = *i
    
    if (sub_140a54510(rcx, &data_143449e38) != 0)
        int16_t* const rcx_2
        
        if (i[1].d == 0)
            rcx_2 = &data_142d40450
        else
            rcx_2 = *i
        
        if (sub_140a54510(rcx_2, u"ratecontrolmode") == 0)
            int16_t* const rcx_3
            
            if (i[3].d == 0)
                rcx_3 = &data_142d40450
            else
                rcx_3 = i[2]
            
            if (sub_140a54510(rcx_3, u"constqp") != 0)
                int16_t* const rcx_4
                
                if (i[3].d == 0)
                    rcx_4 = &data_142d40450
                else
                    rcx_4 = i[2]
                
                if (sub_140a54510(rcx_4, &data_143449e70) != 0)
                    int16_t* const rcx_5
                    
                    if (i[3].d == 0)
                        rcx_5 = &data_142d40450
                    else
                        rcx_5 = i[2]
                    
                    if (sub_140a54510(rcx_5, &data_143449e78) == 0)
                        arg2[1] = 2
                else
                    arg2[1] = 1
            else
                arg2[1] = 0
    else
        wchar16* _String
        
        if (i[3].d == 0)
            _String = &data_142d40450
        else
            _String = i[2]
        
        int32_t rax_2 = _wtoi(_String)
        
        if (rax_2 s>= 0)
            int32_t rax = 0x33
            
            if (rax_2 s< 0x33)
                rax = rax_2
            
            *arg2 = rax
        else
            *arg2 = 0
