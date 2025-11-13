// 函数: sub_1413ca240
// 地址: 0x1413ca240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** (* rbx)() = *arg1
char r9

if (*(data_143ec9d48 + 4) == 0)
    r9 = 1
else
    TEB* gsbase
    
    if (data_143cd80cc
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143cd80cc)
        
        if (data_143cd80cc == 0xffffffff)
            sub_140af2b60()
            data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
            _Init_thread_footer(&data_143cd80cc)
    
    if (data_143de5426 == 0)
        if (data_143cd80c8 != 0)
            r9 = 1
        else
            r9 = 0
    else if (data_143de5427 == 0 || data_143cd80c8 != 0)
        r9 = 1
    else
        r9 = 0

int64_t var_18 = *(rbx + 0xdb8)
int32_t var_10 = *(rbx + 0xdc0)
return sub_1413ae170(arg2, rbx, &var_18, r9)
