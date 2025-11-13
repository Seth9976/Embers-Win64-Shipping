// 函数: sub_1420f9750
// 地址: 0x1420f9750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f488c8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f488c8)
    
    if (data_143f488c8 == 0xffffffff)
        data_143f487fc = 0x80
        __builtin_memset(&data_143f487d0, 0, 0x2c)
        data_143f48804 = 0
        data_143f48810 = 0
        data_143f48818 = 0
        __builtin_memset(&data_143f48828, 0, 0x2c)
        data_143f4885c = 0
        data_143f48868 = 0
        data_143f48870 = 0
        data_143f48800 = 0xffffffff
        data_143f48820 = &data_1432c6208
        data_143f48854 = 0x80
        data_143f48858 = 0xffffffff
        InitializeCriticalSection(&data_143f48878)
        SetCriticalSectionSpinCount(&data_143f48878, 0xfa0)
        int32_t rax_3 = data_143dbb200
        int64_t zmm1 = data_143dbb208
        data_143f488a8 = data_143dbb1f8.q
        data_143f488b0 = rax_3
        int32_t rax_4 = data_143dbb210
        data_143f488b4 = 0x42b40000
        data_143f488a0 = 0
        data_143f488b8 = zmm1
        data_143f488c0 = rax_4
        data_143f488c4 = 0
        atexit(sub_142d02760)
        _Init_thread_footer(&data_143f488c8)

return &data_143f487d0
