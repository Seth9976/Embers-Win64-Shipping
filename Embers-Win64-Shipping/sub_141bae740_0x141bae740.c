// 函数: sub_141bae740
// 地址: 0x141bae740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rdi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143f315d8 s> *rdi_1)
    _Init_thread_header(&data_143f315d8)
    
    if (data_143f315d8 == 0xffffffff)
        sub_140b58170(&data_143f315d0, "SlateFontInfo", 1)
        _Init_thread_footer(&data_143f315d8)

void* const result

if (*arg1 != data_143f315d0)
    if (data_143f315c8 s> *rdi_1)
        _Init_thread_header(&data_143f315c8)
        
        if (data_143f315c8 == 0xffffffff)
            sub_140b58170(&data_143f315c0, "SlateBrush", 1)
            _Init_thread_footer(&data_143f315c8)
    
    if (*arg1 != data_143f315c0)
        if (data_143f315e8 s> *rdi_1)
            _Init_thread_header(&data_143f315e8)
            
            if (data_143f315e8 == 0xffffffff)
                sub_140b58170(&data_143f315e0, "FontOutlineSettings", 1)
                _Init_thread_footer(&data_143f315e8)
        
        if (*arg1 != data_143f315e0)
            return 0
        
        return sub_141bae700(arg1[1]) __tailcall
    
    result = *(arg1[1] + 0x48)
else
    result = *(arg1[1] + 8)

if (result != 0)
    void* rax_4 = sub_142543940()
    void* rdx_1 = *(result + 0x10)
    int64_t rax_5 = sx.q(*(rax_4 + 0x38))
    
    if (rax_5.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_5 << 3)) == rax_4 + 0x30)
        return result

return nullptr
