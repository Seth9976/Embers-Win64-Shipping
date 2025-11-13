// 函数: sub_1425f50b0
// 地址: 0x1425f50b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = data_143f70ce8
sub_140b34200("EnableRecording", rsi)
TEB* gsbase

if (data_143cd80cc s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cd80cc)
    
    if (data_143cd80cc == 0xffffffff)
        sub_140af2b60()
        data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
        _Init_thread_footer(&data_143cd80cc)

if ((data_143de5426 == 0 || data_143de5427 != 0) && data_143cd80c8 == 0)
    void*** rcx = *(arg1 + 0x70)
    
    if (arg2 == 0)
        if (rcx != 0)
            *(arg1 + 0x70) = 0
            sub_1425f4ac0(rcx, 1)
    else if (rcx == 0)
        void*** rax_2 = j_sub_140a82f30(0xe0)
        
        if (rax_2 != 0)
            rax_2 = sub_1425f4650(rax_2)
        
        rcx = *(arg1 + 0x70)
        
        if (rcx != rax_2)
            *(arg1 + 0x70) = rax_2
            
            if (rcx != 0)
                sub_1425f4ac0(rcx, 1)

return sub_140b38680("EnableRecording", rsi) __tailcall
