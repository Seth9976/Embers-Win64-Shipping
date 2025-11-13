// 函数: sub_140da5fb0
// 地址: 0x140da5fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e20f70 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e20f70)
    
    if (data_143e20f70 == 0xffffffff)
        atexit(sub_142cca220)
        _Init_thread_footer(&data_143e20f70)

void* rax_3 = sub_140da3c10(arg1, sub_140da4990(arg2))

if (rax_3 != 0)
    void* rcx_2 = rax_3 + 8
    void* rax_4 = *(rax_3 + 0x28)
    
    if (rax_4 != 0)
        rcx_2 = rax_4
    
    int64_t* rbx_1 = *rcx_2
    
    if (rbx_1 != 0)
        int64_t* result = sub_140da61b0(rbx_1, &arg2[8])
        
        if (result != 0)
            return result
        
        int64_t* rax_5 = *rbx_1
        
        if (rax_5[1].d s> 0)
            void* rax_6 = *rax_5
            
            if (rax_6 != -8)
                return rax_6 + 8

return &data_143e20f50
