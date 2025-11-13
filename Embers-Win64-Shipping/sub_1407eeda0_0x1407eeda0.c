// 函数: sub_1407eeda0
// 地址: 0x1407eeda0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* i = *(arg1 + 0x40)

for (void* rdi_2 = &i[sx.q(*(arg1 + 0x48)) * 0xc]; i != rdi_2; i = &i[0xc])
    if (sub_140834690(i) != 0)
        return i

TEB* gsbase

if (data_143ce3758 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ce3758)
    
    if (data_143ce3758 == 0xffffffff)
        sub_14081a5b0(&data_143ce3728)
        void var_28
        sub_1407e51f0(&data_143ce3728, sub_14081a5b0(&var_28))
        int64_t var_20
        
        if (var_20 != 0)
            sub_140a74f90(var_20)
        
        data_143ce3748 &= 0xfffffff8
        data_143ce374c = 0
        data_143ce3754 = 0
        atexit(sub_142cb3870)
        _Init_thread_footer(&data_143ce3758)

return &data_143ce3728
