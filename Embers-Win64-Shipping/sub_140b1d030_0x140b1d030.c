// 函数: sub_140b1d030
// 地址: 0x140b1d030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143de69a0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de69a0)
    
    if (data_143de69a0 == 0xffffffff)
        int16_t* rax_3 = sub_140a42ee0()
        int16_t* rbp = nullptr
        int16_t* var_28 = nullptr
        int32_t rdi = 0
        int64_t var_20 = 0
        int32_t r14 = 0
        int32_t rax_4
        
        if (rax_3 != 0 && *rax_3 != 0)
            int64_t rbx_1 = -1
            
            do
                rbx_1 += 1
            while (rax_3[rbx_1] != 0)
            
            if (rbx_1.d + 1 s> 0)
                sub_1405947f0(&var_28, rbx_1.d + 1)
                r14 = var_20:4.d
                rdi = var_20.d
                rbp = var_28
            
            rdi += rbx_1.d + 1
            var_20.d = rdi
            
            if (rdi s> r14)
                sub_140594770(&var_28)
                r14 = var_20:4.d
                rdi = var_20.d
                rbp = var_28
            
            UnDecorator::getReferenceType(rbp, rax_3, (rbx_1.d + 1) * 2)
            rax_4 = 0x27
        
        if (rax_3 == 0 || *rax_3 == 0 || rdi == 0)
            rax_4 = 0x28
        
        int32_t rdx_4 = rax_4 + rdi
        int16_t* var_18 = rbp
        int32_t var_c = r14
        
        if (rdx_4 s> r14)
            sub_1405947f0(&var_18, rdx_4)
        
        sub_140a2cf70(&var_18, u"Build/NotForLicensees/EpicInternal.txt", 0x26)
        sub_140a464c0()
        int16_t* const rdx_5 = &data_142d40450
        
        if (rdi != 0)
            rdx_5 = var_18
        
        char const (* r8_3)[0x4] = data_14399ea08
        char rax_5 = (*(r8_3 + 0x48))(&data_14399ea08, rdx_5, r8_3)
        int16_t* rcx_7 = var_18
        data_143de699c = rax_5
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        _Init_thread_footer(&data_143de69a0)

return zx.q(data_143de699c)
