// 函数: sub_1425f7cb0
// 地址: 0x1425f7cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = sub_14236bfb0(arg2, nullptr)
bool rax_1

if (rax != 0)
    rax_1 = sub_14236bfa0(arg2)

if (rax == 0 || rax_1 == 0)
    char rax_4 = sub_14236bfb0(arg2, nullptr)
    uint32_t rax_9
    
    if (rax_4 == 0)
        TEB* gsbase
        
        if (data_143f70d98
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143f70d98)
            
            if (data_143f70d98 == 0xffffffff)
                sub_140b58260(&data_143f70d90, &data_142d6be30, 1)
                _Init_thread_footer(&data_143f70d98)
        
        int64_t rbx_1 = *arg2
        int64_t* rax_7 = sub_142366f50()
        rax_9 = zx.d((*(rbx_1 + 0x328))(arg2, data_143f70d90, rax_7))
    
    if (rax_4 != 0 || rax_9 != 0)
        void*** rax_10 = j_sub_140a82f30(0x98)
        
        if (rax_10 != 0)
            return sub_142428800(rax_10) __tailcall
else
    void*** rax_2 = j_sub_140a82f30(0x170)
    
    if (rax_2 != 0)
        return sub_141db5cf0(rax_2) __tailcall

return 0
