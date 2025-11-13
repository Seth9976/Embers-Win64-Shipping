// 函数: sub_142c4a410
// 地址: 0x142c4a410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = data_143ccb880 == 0
data_14401acf0 = 0

if (not(cond:0))
    int64_t rdi_1 = 0
    wchar16 const (** rax_1)[0xd] = &data_143ccb880
    
    do
        HMODULE hModule = GetModuleHandleW(*rax_1)
        
        if (hModule != 0)
            uint32_t rax_2 = GetModuleFileNameW(hModule, &data_14401acf0, 0x104)
            uint64_t rbx_1 = zx.q(rax_2)
            
            if (rax_2 != 0)
                int16_t rax_3 = data_14401acf0
                
                if (rax_3 == 0x5c || rax_3 == 0x2f)
                label_142c4a4df:
                    
                    if (rbx_1.d != 0)
                        void* rcx_4 = &(&data_14401acf0)[rbx_1]
                        
                        while (*rcx_4 != 0x5c)
                            rcx_4 -= 2
                            int32_t temp0_1 = rbx_1.d
                            rbx_1 = zx.q(rbx_1.d - 1)
                            
                            if (temp0_1 == 1)
                                break
                    
                    if (zx.q(rbx_1.d) * 2 u>= 0x20a)
                        __report_rangecheckfailure()
                        noreturn
                    
                    (&data_14401acf0)[zx.q(rbx_1.d)] = 0
                    break
                
                if (isalpha(zx.d(rax_3)) != 0 && data_14401acf2 == 0x3a)
                    int16_t rax_5 = data_14401acf4
                    
                    if (rax_5 == 0x5c || rax_5 == 0x2f)
                        goto label_142c4a4df
        
        rdi_1 += 1
        rax_1 = &(&data_143ccb880)[rdi_1]
    while ((&data_143ccb880)[rdi_1] != 0)

return &data_14401acf0
