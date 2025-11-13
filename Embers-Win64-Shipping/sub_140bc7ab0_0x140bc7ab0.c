// 函数: sub_140bc7ab0
// 地址: 0x140bc7ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e1aac4 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e1aac4)
    
    if (data_143e1aac4 == 0xffffffff)
        void* rcx_2 = data_143ddb400
        char arg_8 = 1
        sub_140af2fd0(rcx_2, /Script/Engine.StreamingSettings", s.AsyncLoadingThreadEnabled", 
            &arg_8, &data_143de5780)
        sub_140af2b60()
        char rax_3 = sub_140b21a10(&data_143dbb3f0, u"NoAsyncLoadingThread")
        sub_140af2b60()
        char rax_4 = sub_140b21a10(&data_143dbb3f0, u"AsyncLoadingThread")
        
        if (rax_4 != 0)
            data_143e1aac0 = 1
        else if (arg_8 == rax_4)
            data_143e1aac0 = 0
        else if (sub_140b011d0() == 0 || rax_3 != 0)
            data_143e1aac0 = 0
        else
            data_143e1aac0 = 1
        
        void* rcx_3 = data_143ddb400
        arg_8 = 1
        sub_140af2fd0(rcx_3, /Script/Engine.StreamingSettings", s.AsyncPostLoadEnabled", &arg_8, 
            &data_143de5780)
        sub_140af2b60()
        char rax_6 = sub_140b21a10(&data_143dbb3f0, u"NoAsyncPostLoad")
        sub_140af2b60()
        char rax_7 = sub_140b21a10(&data_143dbb3f0, u"AsyncPostLoad")
        
        if (rax_7 != 0)
            data_143e1aac1 = 1
        else if (arg_8 == rax_7)
            data_143e1aac1 = 0
        else if (sub_140b011d0() == 0 || rax_6 != 0)
            data_143e1aac1 = 0
        else
            data_143e1aac1 = 1
        
        _Init_thread_footer(&data_143e1aac4)

return &data_143e1aac0
