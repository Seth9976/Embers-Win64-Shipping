// 函数: sub_1410e7c80
// 地址: 0x1410e7c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = nullptr
TEB* gsbase
void* rsi = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143e3a9a0 s> *(rsi + 0x14))
    _Init_thread_header(&data_143e3a9a0)
    
    if (data_143e3a9a0 == 0xffffffff)
        sub_140b58260(&data_143e3a998, u"FLightPropagationVolumeSettings", 1)
        _Init_thread_footer(&data_143e3a9a0)

void* r8 = *arg1
void* result

while (true)
    void* rcx
    
    if (rbx != 0)
        rcx = zx.q(*(rbx + 0x10)) + 0x14 + rbx + zx.q(*(rbx + 0xc))
    else
        rcx = r8
    
    rbx = nullptr
    
    if (rcx != sx.q(arg1[1].d) + r8)
        rbx = rcx
    
    if (rbx != 0)
        if (*(rbx + 4) != data_143e3a998)
            continue
        else
            void* rax_4 = zx.q(*(rbx + 0x10)) + 0x14
            result = rax_4 + rbx
            
            if (rax_4 != neg.q(rbx))
                break
    
    if (data_143e498b0 s> *(rsi + 0x14))
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
    
    result = &data_143e49870
    int128_t var_30
    __builtin_memcpy(&var_30, 
        "\xa6\x9b\xc4\x3e\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x41\x00\x00\x80\x3f\x00\x00\xe0\x"
    "40\x00\x00\x80\x3f\x00\x00\x80\x3f", 
        0x20)
    int32_t var_44_1 = 0x3f800000
    int32_t var_34_1 = 0
    int32_t var_40_1 = 0x3f23d70a
    int64_t var_10_1 = 0
    data_143e49880 = 0x45a60000:4.o
    data_143e49870 = 0.o
    int128_t zmm0 = var_30
    int128_t var_20
    data_143e498a0 = var_20
    data_143e49890 = zmm0
    break

return result
