// 函数: sub_140ffa600
// 地址: 0x140ffa600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg4)
TEB* gsbase

if (data_143e2c0b8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e2c0b8)
    
    if (data_143e2c0b8 == 0xffffffff)
        int64_t* rcx_7 = data_143db18d0
        
        if (rcx_7 == 0)
            sub_140a53c40()
            rcx_7 = data_143db18d0
        
        int64_t r8
        r8.b = 1
        data_143e2c0b0 = (*(*rcx_7 + 0xb0))(rcx_7, u"r.ProfileGPU.ShowTransitions", r8)
        _Init_thread_footer(&data_143e2c0b8)

int64_t* rcx_2 = data_143e2c0b0
void* result = (*(*rcx_2 + 0x90))(rcx_2)

if (rbx.d s> 0)
    int64_t rsi_1 = 0
    
    do
        int64_t* rbx_1 = *(arg3 + (rsi_1 << 3))
        
        if (rbx_1 != 0)
            void* rdi_1 = nullptr
            void* rax_4 = (*(*rbx_1 + 8))(rbx_1)
            
            if (rax_4 != 0)
                rdi_1 = rax_4 + 0x68
            
            void* rax_6 = (*(*rbx_1 + 0x10))(rbx_1)
            
            if (rax_6 != 0)
                rdi_1 = rax_6 + 0x70
            
            void* rax_8 = (*(*rbx_1 + 0x20))(rbx_1)
            
            if (rax_8 != 0)
                rdi_1 = rax_8 + 0x70
            
            result = (*(*rbx_1 + 0x18))(rbx_1)
            
            if (result != 0)
                rdi_1 = result + 0x70
            
            if (arg2 == 0)
                *(rdi_1 + 0x10) = arg2.b
            
            *(rdi_1 + 8) = arg2
        
        rsi_1 += 1
    while (rsi_1 s< rbx)

return result
