// 函数: sub_1410a0a70
// 地址: 0x1410a0a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 8)
uint64_t result

if (rcx != 0 && sub_1412278d0(rcx, *(arg1 + 0x1548), 1) != 0)
    void* rbx_1 = nullptr
    TEB* gsbase
    void* rsi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
    int128_t zmm6
    int128_t var_18_1 = zmm6
    
    if (data_143e3a9a0 s> *(rsi_1 + 0x14))
        _Init_thread_header(&data_143e3a9a0)
        
        if (data_143e3a9a0 == 0xffffffff)
            sub_140b58260(&data_143e3a998, u"FLightPropagationVolumeSettings", 1)
            _Init_thread_footer(&data_143e3a9a0)
    
    void* r8_1 = *(arg1 + 0x1510)
    void* rcx_7
    
    while (true)
        void* rcx_2
        
        if (rbx_1 != 0)
            rcx_2 = zx.q(*(rbx_1 + 0x10)) + 0x14 + rbx_1 + zx.q(*(rbx_1 + 0xc))
        else
            rcx_2 = r8_1
        
        rbx_1 = nullptr
        
        if (rcx_2 != sx.q(*(arg1 + 0x1518)) + r8_1)
            rbx_1 = rcx_2
        
        if (rbx_1 != 0)
            if (*(rbx_1 + 4) != data_143e3a998)
                continue
            else
                result = zx.q(*(rbx_1 + 0x10))
                rcx_7 = rbx_1 + 0x14 + result
                
                if (rbx_1 + 0x14 != neg.q(result))
                    break
        
        if (data_143e498b0 s> *(rsi_1 + 0x14))
            _Init_thread_header(&data_143e498b0)
            
            if (data_143e498b0 == 0xffffffff)
                int128_t zmm1 = data_142f130c0
                data_143e49880:8.d = 0x3ec49ba6
                data_143e498a0 = data_142f13080
                data_143e49870.d = 0
                data_143e49870:4.d = 0x3f800000
                data_143e49870:0xc = 0x45a60000
                data_143e49880:4.d = 0
                data_143e49870:8.d = 0x3f23d70a
                data_143e49880:0xc.d = 0x3f800000
                data_143e49890 = zmm1
                _Init_thread_footer(&data_143e498b0)
        
        rcx_7 = &data_143e49870
        int128_t var_40
        __builtin_memcpy(&var_40, 
            "\xa6\x9b\xc4\x3e\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x41\x00\x00\x80\x3f\x00\x00\x"
        "e0\x40\x00\x00\x80\x3f\x00\x00\x80\x3f", 
            0x20)
        int32_t var_54_1 = 0x3f800000
        int32_t var_44_1 = 0
        int32_t var_50_1 = 0x3f23d70a
        int64_t var_20_1 = 0
        data_143e49880 = 0x45a60000:4.o
        data_143e49870 = 0.o
        int128_t zmm0 = var_40
        int128_t var_30
        data_143e498a0 = var_30
        data_143e49890 = zmm0
        break
    
    if (not(zx.o(0).d f>= *(rcx_7 + 4)))
        result.b = 1
        return result

result.b = 0
return result
