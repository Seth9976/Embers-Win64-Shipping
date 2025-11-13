// 函数: sub_140b55a20
// 地址: 0x140b55a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
void* rbx = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
int32_t result = *(rbx + 0x14)

if (data_143df1990 s> result)
    result = _Init_thread_header(&data_143df1990)
    
    if (data_143df1990 == 0xffffffff)
        if (data_143df1998 s> *(rbx + 0x14))
            _Init_thread_header(&data_143df1998)
            
            if (data_143df1998 == 0xffffffff)
                sub_140af2b60()
                data_143df1994 = sub_140b21a10(&data_143dbb3f0, u"LoadTimeStatsForCommandlet")
                _Init_thread_footer(&data_143df1998)
        
        if (data_143df1994 == 0 && data_143df19a0 s> *(rbx + 0x14))
            _Init_thread_header(&data_143df19a0)
            
            if (data_143df19a0 == 0xffffffff)
                sub_140af2b60()
                data_143df199c = sub_140b21a10(&data_143dbb3f0, u"LoadTimeFileForCommandlet")
                _Init_thread_footer(&data_143df19a0)
        
        int32_t rax_3
        
        if (data_143df1994 != 0 || data_143df199c != 0)
            rax_3.b = 1
        else
            rax_3.b = 0
        
        data_143df198c = rax_3.b
        result = _Init_thread_footer(&data_143df1990)

if (data_143df198c == 0)
    return result

int64_t* rax_1 = sub_140a242a0()
int64_t r8_1 = *rax_1
(*(r8_1 + 0x30))(rax_1, 2, r8_1)
return sub_140a35180(sub_140b18f30(), 0x3c888889)
