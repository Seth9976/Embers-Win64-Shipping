// 函数: sub_1419d8720
// 地址: 0x1419d8720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rdi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143f213c8 s> *rdi_1)
    _Init_thread_header(&data_143f213c8)
    
    if (data_143f213c8 == 0xffffffff)
        int64_t rbx_1 = 0
        
        if (data_143f213b8 s> *rdi_1)
            _Init_thread_header(&data_143f213b8)
            
            if (data_143f213b8 == 0xffffffff)
                int64_t* rcx = data_143db18d0
                
                if (rcx == 0)
                    sub_140a53c40()
                    rcx = data_143db18d0
                
                int64_t r8_1
                r8_1.b = 1
                data_143f213b0 = (*(*rcx + 0xb0))(rcx, u"r.Shaders.KeepDebugInfo", r8_1)
                _Init_thread_footer(&data_143f213b8)
        
        int64_t* rcx_1 = data_143f213b0
        
        if (rcx_1 != 0 && (*(*rcx_1 + 0x90))(rcx_1) != 0)
            rbx_1 = -1
        
        data_143f213c0 = rbx_1
        _Init_thread_footer(&data_143f213c8)

int64_t result
result.b = test_bit(data_143f213c0, zx.q(arg1))
return result
