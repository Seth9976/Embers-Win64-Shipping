// 函数: sub_142129070
// 地址: 0x142129070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax_1

if (data_143de5480 != 0)
    rax_1.b = GetCurrentThreadId() == data_143de5470

void* rax_2

if (data_143de5480 == 0 || rax_1.b != 0)
    rax_2 = *(arg1 + 8)
    
    if (rax_2 == 0)
        rax_2 = sub_1421278b0(arg1)
        goto label_1421290ac
else
    rax_2 = *(arg1 + 0x10)
label_1421290ac:
    
    if (rax_2 == 0)
        TEB* gsbase
        
        if (data_143f4c668
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143f4c668)
            
            if (data_143f4c668 == 0xffffffff)
                sub_142119a30(&data_143f4c560)
                atexit(&data_142d056e0)
                _Init_thread_footer(&data_143f4c668)
        
        return &data_143f4c560

return *(rax_2 + 0x28) + 0x70
