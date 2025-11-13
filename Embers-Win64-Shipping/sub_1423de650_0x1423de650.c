// 函数: sub_1423de650
// 地址: 0x1423de650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
TEB* gsbase
int32_t* r14_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14
uint32_t result = *r14_1

if (data_143f5b708 s> result)
    int64_t r8_1
    result, r8_1 = _Init_thread_header(&data_143f5b708)
    
    if (data_143f5b708 == 0xffffffff)
        int64_t* rcx_8 = data_143db18d0
        
        if (rcx_8 == 0)
            sub_140a53c40()
            rcx_8 = data_143db18d0
        
        r8_1.b = 1
        int64_t* rax_8 = (*(*rcx_8 + 0xb0))(rcx_8, u"r.HDR.EnableHDROutput", r8_1)
        int64_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0
        else
            int64_t rdx_3 = *rax_8
            rax_9 = (*(rdx_3 + 0x58))(rax_8, rdx_3)
        
        data_143f5b700 = rax_9
        result = _Init_thread_footer(&data_143f5b708)

if (data_143f0f1b0 != 0)
    int64_t rdi_1 = data_143f5b700
    int64_t rcx_1
    
    if (data_143de5480 == 0)
        rcx_1 = 0
    else
        rcx_1.b = GetCurrentThreadId() != data_143de5470
    
    int32_t rsi_1 = *(rdi_1 + (rcx_1 << 2))
    result.b = rsi_1 != 0
    
    if (result.b != data_143f0f226)
        void* rdi_2 = data_143f5b298
        int32_t rax_4
        
        if (rdi_2 == 0)
            rax_4 = 0x3e8
        else if (*(rdi_2 + 0x230) != 0)
        label_1423de71a:
            rax_4 = sub_1420292e0(sub_1423dd380(rdi_2))
            
            if (rax_4 == 0)
                rax_4 = 0x3e8
        else
            sub_1423d6a40(rdi_2)
            int64_t rax_2 = *(rdi_2 + 0x230)
            rdi_2 = data_143f5b298
            
            if (rax_2 != 0)
                goto label_1423de71a
            
            rax_4 = 0x3e8
        
        int32_t rdi_3 = 0
        int32_t rbp_1 = 0
        
        if (rsi_1 != 0)
            int32_t rcx_5 = data_143f0f1b0
            
            if (rcx_5 == 0x1002 || rcx_5 == 0x10de)
                rbp_1 = 2
                rdi_3.b = rax_4 != 0x3e8
                rdi_3 += 5
        
        if (data_143f5b718 s> *r14_1)
            _Init_thread_header(&data_143f5b718)
            
            if (data_143f5b718 == 0xffffffff)
                int64_t* rcx_10 = data_143db18d0
                
                if (rcx_10 == 0)
                    sub_140a53c40()
                    rcx_10 = data_143db18d0
                
                int64_t r8_2
                r8_2.b = 1
                data_143f5b710 = (*(*rcx_10 + 0xb0))(rcx_10, u"r.HDR.Display.OutputDevice", r8_2)
                _Init_thread_footer(&data_143f5b718)
        
        if (data_143f5b728 s> *r14_1)
            _Init_thread_header(&data_143f5b728)
            
            if (data_143f5b728 == 0xffffffff)
                int64_t* rcx_11 = data_143db18d0
                
                if (rcx_11 == 0)
                    sub_140a53c40()
                    rcx_11 = data_143db18d0
                
                int64_t r8_3
                r8_3.b = 1
                data_143f5b720 = (*(*rcx_11 + 0xb0))(rcx_11, u"r.HDR.Display.ColorGamut", r8_3)
                _Init_thread_footer(&data_143f5b728)
        
        sub_1405a55d0(data_143f5b710, rdi_3, 0x5000000)
        result = sub_1405a55d0(data_143f5b720, rbp_1, 0x5000000)
        int64_t rdi_4 = data_143f5b700
        
        if (data_143de5480 != 0)
            result = GetCurrentThreadId()
            rbx.b = result != data_143de5470
        
        data_143f0f226 = *(rdi_4 + (rbx << 2)) != 0

return result
