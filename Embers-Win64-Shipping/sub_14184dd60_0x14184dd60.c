// 函数: sub_14184dd60
// 地址: 0x14184dd60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143efa914 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143efa914)
    
    if (data_143efa914 == 0xffffffff)
        void* rcx = data_143ddb400
        int32_t arg_10 = 0x4b
        sub_140af3c10(rcx, u"BuildPatchServices", u"MaxScannerBacklog", &arg_10, &data_143de5780)
        int32_t rcx_1 = arg_10
        int32_t rax_3
        
        if (rcx_1 s>= 5)
            rax_3 = 0x1f4
            
            if (rcx_1 s< 0x1f4)
                rax_3 = rcx_1
        else
            rax_3 = 5
        
        data_143efa910 = rax_3
        _Init_thread_footer(&data_143efa914)

int32_t result

if (sub_141887f00() s<= sub_141887f10() && *(arg1 + 8) s< data_143efa910)
    result.b = 0
    return result

result.b = 1
return result
