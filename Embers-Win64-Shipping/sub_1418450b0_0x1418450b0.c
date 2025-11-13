// 函数: sub_1418450b0
// 地址: 0x1418450b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143efa924 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143efa924)
    
    if (data_143efa924 == 0xffffffff)
        void* rcx_2 = data_143ddb400
        int32_t arg_8 = 5
        sub_140af3c10(rcx_2, u"Portal.BuildPatch", u"NumFileMoveRetries", &arg_8, &data_143de5780)
        int32_t rcx_3 = arg_8
        int32_t rax_3
        
        if (rcx_3 s>= 1)
            rax_3 = 0x32
            
            if (rcx_3 s< 0x32)
                rax_3 = rcx_3
        else
            rax_3 = 1
        
        data_143efa920 = rax_3
        _Init_thread_footer(&data_143efa924)

return zx.q(data_143efa920)
