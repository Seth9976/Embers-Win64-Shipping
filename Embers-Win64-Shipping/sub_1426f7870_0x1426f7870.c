// 函数: sub_1426f7870
// 地址: 0x1426f7870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0x110)

if (result s<= 0)
    result.b = 0
    return result

if (arg2 == 0)
    sub_1426f1330(*(arg1 + 0x108), result, arg3)
    result = *(arg1 + 0x110)

int32_t i = 0

if (result s> 0)
    int64_t rbp_1 = 0
    uint64_t r12_1 = zx.q(data_14401b1a0)
    TEB* gsbase
    void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
    
    do
        int32_t* r15_1 = *(arg1 + 0x108)
        
        if (*(arg1 + 0x128) f<= *(r15_1 + rbp_1))
            break
        
        int32_t rbx_1 = *(r15_1 + rbp_1 + 4)
        
        if (data_143f724b0 s> *(0x14 + *(ThreadLocalStoragePointer + (r12_1 << 3))))
            _Init_thread_header(&data_143f724b0)
            
            if (data_143f724b0 == 0xffffffff)
                data_143f724ac = 0xffffffff
                _Init_thread_footer(&data_143f724b0)
        
        if (rbx_1 != data_143f724ac && *(arg1 + 0x40) != *(arg1 + 0x6c))
            void* rdx_1 = *(arg1 + 0x78)
            void* r8_2 = arg1 + 0x70
            int64_t r10_1 = sx.q(*(r15_1 + rbp_1 + 4))
            
            if (rdx_1 != 0)
                r8_2 = rdx_1
            
            int32_t j_1 = *(r8_2 + (((sx.q(*(arg1 + 0x80)) - 1) & r10_1) << 2))
            int32_t j = j_1
            
            if (j_1 != 0xffffffff)
                int64_t r9_1 = *(arg1 + 0x38)
                
                do
                    int32_t* r8_3 = sx.q(j) * 0x3c
                    
                    if (*(r8_3 + r9_1) == r10_1.d)
                        if (j != 0xffffffff)
                            int32_t* rdi_2
                            
                            if (j_1 == 0xffffffff)
                            label_1426f79ce:
                                rdi_2 = nullptr
                            else
                                while (true)
                                    rdi_2 = sx.q(j_1) * 0x3c + r9_1
                                    
                                    if (*rdi_2 == r10_1.d)
                                        break
                                    
                                    j_1 = rdi_2[0xd]
                                    
                                    if (j_1 == 0xffffffff)
                                        goto label_1426f79ce_1
                                
                                if (j_1 == 0xffffffff)
                                label_1426f79ce_1:
                                    rdi_2 = nullptr
                            
                            sub_14271fb60(&rdi_2[1], sub_140d3c6e0(&r15_1[2] + rbp_1), 
                                &r15_1[4] + rbp_1)
                        
                        break
                    
                    j = *(r8_3 + r9_1 + 0x34)
                while (j != 0xffffffff)
        
        i += 1
        rbp_1 += 0x4c
    while (i s< *(arg1 + 0x110))

bool cond:0 = i s> 0

if (i != 0)
    int32_t rax_4 = *(arg1 + 0x110)
    
    if (rax_4 != i)
        int64_t rcx_8 = *(arg1 + 0x108)
        memmove(rcx_8, sx.q(i) * 0x4c + rcx_8, (rax_4 - i) * 0x4c)
        rax_4 = *(arg1 + 0x110)
    
    *(arg1 + 0x110) = rax_4 - i
    cond:0 = i s> 0

result.b = cond:0
return result
