// 函数: sub_1427029c0
// 地址: 0x1427029c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = *(arg1 + 8)
int128_t zmm6
int128_t var_18 = zmm6
void* rsi_1 = sx.q(*(arg1 + 0x10)) * 0x3c + rbx
int64_t result

if (rbx == rsi_1)
label_142702a4e:
    result.b = 0
else
    zmm6 = zx.o(0)
    TEB* gsbase
    void* r14_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
    
    while (true)
        char rdi_1 = rbx[0xb].b
        
        if (data_143f724c4 s> *(r14_1 + 0x14))
            _Init_thread_header(&data_143f724c4)
            
            if (data_143f724c4 == 0xffffffff)
                data_143f724b8 = 0xff
                zmm6 = sub_140b58260(&data_143f724bc, u"Invalid", 1)
                _Init_thread_footer(&data_143f724c4)
        
        if (rdi_1 != data_143f724b8 && not(zmm6.d f>= rbx[2]) && not(*rbx f>= 3.40282347e+38f))
            result.b = rbx[0xe].b & 6
            
            if (result.b == 2)
                result.b = 1
                break
        
        rbx = &rbx[0xf]
        
        if (rbx == rsi_1)
            goto label_142702a4e

return result
