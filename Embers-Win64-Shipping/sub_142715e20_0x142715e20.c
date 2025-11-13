// 函数: sub_142715e20
// 地址: 0x142715e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
uint64_t r8 = zx.q(data_14401b1a0)
int64_t rbx = sx.q(*(arg2 + 0xe4))
int32_t arg_10 = rbx.d
uint64_t result = zx.q(*(0x14 + *(ThreadLocalStoragePointer + (r8 << 3))))

if (data_143f724b0 s> result.d)
    result = _Init_thread_header(&data_143f724b0)
    
    if (data_143f724b0 == 0xffffffff)
        data_143f724ac = 0xffffffff
        result = _Init_thread_footer(&data_143f724b0)

if (rbx.d != data_143f724ac)
    result = zx.q(*(arg1 + 0x40))
    
    if (result.d != *(arg1 + 0x6c))
        void* rax = *(arg1 + 0x78)
        void* r9_1 = arg1 + 0x70
        int64_t r10_1 = sx.q(*(arg1 + 0x80))
        
        if (rax != 0)
            r9_1 = rax
        
        result = zx.q(*(r9_1 + (((r10_1 - 1) & rbx) << 2)))
        
        if (result.d != 0xffffffff)
            int64_t r8_2 = *(arg1 + 0x38)
            
            do
                int32_t* rdx = sx.q(result.d) * 0x3c
                
                if (*(rdx + r8_2) == rbx.d)
                    if (result.d != 0xffffffff)
                        int32_t rax_1 = *(r9_1 + (((r10_1 - 1) & rbx) << 2))
                        int32_t* rdx_2
                        
                        if (rax_1 == 0xffffffff)
                        label_142715f0d:
                            rdx_2 = nullptr
                        else
                            while (true)
                                rdx_2 = sx.q(rax_1) * 0x3c + r8_2
                                
                                if (*rdx_2 == rbx.d)
                                    break
                                
                                rax_1 = rdx_2[0xd]
                                
                                if (rax_1 == 0xffffffff)
                                    goto label_142715f0d_1
                            
                            if (rax_1 == 0xffffffff)
                            label_142715f0d_1:
                                rdx_2 = nullptr
                        
                        sub_142704f80(arg1, &rdx_2[1])
                        sub_14270aee0(arg1 + 0x38, &arg_10)
                        result = sub_142703fe0(&arg_10)
                        *(arg2 + 0xe4) = *result
                    
                    break
                
                result = zx.q(*(rdx + r8_2 + 0x34))
            while (result.d != 0xffffffff)

return result
