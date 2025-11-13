// 函数: sub_140f03280
// 地址: 0x140f03280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e2a1a0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e2a1a0)
    
    if (data_143e2a1a0 == 0xffffffff)
        void*** rax_6 = j_sub_140a82f30(0x38)
        void*** rdi_1
        
        if (rax_6 == 0)
            rdi_1 = nullptr
        else
            rdi_1 = sub_140ee19e0(rax_6)
        
        void*** rax_8 = j_sub_140a82f30(0x18)
        
        if (rax_8 != 0)
            rax_8[1].d = 1
            *rax_8 = &data_142d42ea8
            *(rax_8 + 0xc) = 1
            rax_8[2] = rdi_1
        
        data_143e2a190 = rdi_1
        data_143e2a198 = rax_8
        atexit(sub_142ccb780)
        _Init_thread_footer(&data_143e2a1a0)

*arg1 = data_143e2a190
arg1[1] = data_143e2a198
void* rax_4 = data_143e2a198

if (rax_4 != 0)
    *(rax_4 + 8) += 1

return arg1
