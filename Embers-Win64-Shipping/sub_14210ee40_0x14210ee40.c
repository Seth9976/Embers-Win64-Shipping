// 函数: sub_14210ee40
// 地址: 0x14210ee40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CoCreateGuid(arg1 + 0x224)
TEB* gsbase
int32_t result = *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)))

if (data_143cd80cc s> result)
    result = _Init_thread_header(&data_143cd80cc)
    
    if (data_143cd80cc == 0xffffffff)
        sub_140af2b60()
        data_143cd80c8 = sub_140b21a10(&data_143dbb3f0, u"nullrhi")
        result = _Init_thread_footer(&data_143cd80cc)

if ((data_143de5426 == 0 || data_143de5427 != 0) && data_143cd80c8 == 0)
    int32_t rbp_2 = 1 << (data_1439c7a08).b | data_143f4a12c
    
    if (rbp_2 != 0)
        int32_t rsi_3
        int32_t r14_1
        
        do
            int32_t rcx_2 = 0
            r14_1 = rbp_2
            rsi_3 = neg.d(rbp_2) & rbp_2
            int64_t i_1 = 3
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rsi_3)
            
            if (rsi_3 != 0)
                rcx_2 = temp0_1
            
            rbp_2 ^= rsi_3
            void* rbx_3 = arg1 + ((sx.q(rcx_2) + 0x4a) << 3)
            int64_t i
            
            do
                result = sub_14212fe40(*rbx_3)
                rbx_3 += 0x20
                i = i_1
                i_1 -= 1
            while (i != 1)
        while (rsi_3 != r14_1)

return result
