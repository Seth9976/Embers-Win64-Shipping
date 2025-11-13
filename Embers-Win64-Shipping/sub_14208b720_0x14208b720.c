// 函数: sub_14208b720
// 地址: 0x14208b720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f47d78 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f47d78)
    
    if (data_143f47d78 == 0xffffffff)
        data_143f47cb0 = &data_1432b0118
        bool cond:0 = data_143de5432 != 0
        data_143f47cb8 = &data_142d44d70
        data_143f47cc0 = 0
        
        if (not(cond:0))
            void* rcx_2 = data_143e1a338
            
            if (rcx_2 == 0)
                void* rax_4 = sub_140cde0b0()
                sub_140d19010(rax_4, 
                    NewObject with empty name can't be used to create default subobjects (inside of "
                "UObject derived class constructor) as it produces incon")
                int64_t arg_8 = 0
                void* rax_6 = sub_140d2dfc0(sub_140baa6d0(), rax_4, 0, 0, 0, 0, 0, 0, 0)
                data_143e1a338 = rax_6
                int32_t rax_7 = *(rax_6 + 0xc)
                void* const rax_14
                
                if (rax_7 s>= data_143e1d9b4)
                    rax_14 = nullptr
                else
                    int16_t temp0_1
                    int32_t temp1_1
                    temp0_1:temp1_1 = sx.q(rax_7)
                    uint32_t rdx_3 = zx.d(temp0_1)
                    int32_t rax_9 = temp1_1 + rdx_3
                    rax_14 = *(data_143e1d9a0 + (sx.q(rax_9 s>> 0x10) << 3))
                        + sx.q(zx.d(rax_9.w) - rdx_3) * 0x18
                
                *(rax_14 + 8) |= 0x40000000
                rcx_2 = data_143e1a338
            
            sub_140b9aa70(rcx_2, &data_143f47cb8)
            data_143f47cc0 = 1
        
        data_143f47cc8 = 0
        data_143f47cb0 = &data_1432b0158
        data_143f47cd0 = 0
        data_143f47cb8 = &data_1432b0198
        data_143f47cf4 = 0x80
        __builtin_memset(&data_143f47cd8, 0, 0x1c)
        data_143f47cf8 = 0xffffffff
        data_143f47cfc = 0
        data_143f47d08 = 0
        data_143f47d10 = 0
        InitializeCriticalSection(&data_143f47d18)
        SetCriticalSectionSpinCount(&data_143f47d18, 0xfa0)
        data_143f47d40 = 0
        data_143f47d48 = 0
        InitializeCriticalSection(&data_143f47d50)
        SetCriticalSectionSpinCount(&data_143f47d50, 0xfa0)
        atexit(sub_142d01da0)
        _Init_thread_footer(&data_143f47d78)

return &data_143f47cb0
