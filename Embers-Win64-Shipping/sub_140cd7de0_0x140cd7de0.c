// 函数: sub_140cd7de0
// 地址: 0x140cd7de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x68)

if (rdi != 0)
    sub_140cb70e0(rdi)
    TEB* gsbase
    
    if (data_143e1b780
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143e1b780)
        
        if (data_143e1b780 == 0xffffffff)
            void*** rax_4 = j_sub_140a82f30(0x1f0)
            
            if (rax_4 != 0)
                rax_4 = sub_140cd3830(rax_4)
            
            data_143e1b778 = rax_4
            atexit(sub_142cc24f0)
            _Init_thread_footer(&data_143e1b780)
    
    sub_140ce4270(data_143e1b778, rdi)
    *(arg1 + 0x68) = 0

return sub_140cd7d40(arg1) __tailcall
