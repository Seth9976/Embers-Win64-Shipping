// 函数: sub_141b0f4a0
// 地址: 0x141b0f4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x11) != 0)
    int64_t rax
    rax.b = 1
    return rax

void* rax_1 = sub_141a52510(arg3, arg2)

if (rax_1 != 0 && ((*(*(rax_1 + 8) + 0x10) u>> 0x14).b & 1) != 0)
    void* rbx_1 = *(rax_1 + 0x78)
    
    if (rbx_1 != 0)
        int64_t rbx_2 = *(rbx_1 + 0x18)
        TEB* gsbase
        
        if (data_143f2c710
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143f2c710)
            
            if (data_143f2c710 == 0xffffffff)
                sub_140b58170(&data_143f2c708, "SlateColor", 1)
                _Init_thread_footer(&data_143f2c710)
        
        int32_t rcx_4
        rcx_4.b = (rbx_2 u>> 0x20).d == 0
        void* rax_5
        void arg_8
        
        if ((rcx_4.b & sub_140b5b8a0(rbx_2.d, 0x3e)) == 0)
            if (rbx_2 != data_143f2c708)
                if (&arg_8 != arg1 + 0x10)
                    *(arg1 + 0x10) = 0x101
            else if (&arg_8 != arg1 + 0x10)
                rax_5.b = 1
                *(arg1 + 0x10) = 0x100
                return rax_5
        else if (&arg_8 != arg1 + 0x10)
            rax_5.b = 1
            *(arg1 + 0x10) = 0x102
            return rax_5
        rax_5.b = 1
        return rax_5

rax_1.b = 0
return rax_1
