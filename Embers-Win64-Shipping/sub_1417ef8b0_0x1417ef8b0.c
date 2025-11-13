// 函数: sub_1417ef8b0
// 地址: 0x1417ef8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r11 = 0
int64_t* result_1 = &data_143ef9720
int64_t* rdi = nullptr
int32_t i = 0
uint64_t rbp
rbp.b = 0x10
int64_t* result

do
    int32_t j = 0
    result = result_1
    
    do
        if (*result == arg2)
            rbp = zx.q(i.b)
            r11 = 1
            break
        
        j += 1
        result = &result[1]
    while (j u< 2)
    
    i += 1
    result_1 = &result_1[2]
while (i s< 0x11)

if (r11 != 0)
    TEB* gsbase
    int32_t* rsi_2 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14
    
    if (data_143ef9900 s> *rsi_2)
        _Init_thread_header(&data_143ef9900)
        
        if (data_143ef9900 == 0xffffffff)
            sub_140b58260(&data_143ef98f8, u"MotionTrackingSystemManagement", 1)
            _Init_thread_footer(&data_143ef9900)
    
    int64_t rbx_1 = data_143ef98f8
    sub_140a387e0()
    void* r8_1 = data_14399e720
    
    if ((*(r8_1 + 8))(&data_14399e720, rbx_1, r8_1).d s> 0)
        if (data_143ef9900 s> *rsi_2)
            _Init_thread_header(&data_143ef9900)
            
            if (data_143ef9900 == 0xffffffff)
                sub_140b58260(&data_143ef98f8, u"MotionTrackingSystemManagement", 1)
                _Init_thread_footer(&data_143ef9900)
        
        int64_t rbx_2 = data_143ef98f8
        sub_140a387e0()
        void* r9 = data_14399e720
        void* rax_4 = (*(r9 + 0x10))(&data_14399e720, rbx_2, 0, r9)
        
        if (rax_4 != 0)
            rdi = rax_4 - 8
        
        return (*(*rdi + 0x20))(rdi, zx.q(arg1), zx.q(rbp.b))

result.b = 1
return result
