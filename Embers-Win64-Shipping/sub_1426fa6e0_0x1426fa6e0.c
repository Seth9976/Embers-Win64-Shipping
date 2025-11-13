// 函数: sub_1426fa6e0
// 地址: 0x1426fa6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0xf0) - *(arg1 + 0x11c)

if (result s<= 0)
    return result

int64_t* rax_1 = *(arg1 + 0xa8)

if (rax_1 == 0)
    rax_1 = sub_141ee69e0(arg1)

void* rax_2 = sub_1426fbdd0(rax_1)

if (rax_2 != 0 && arg2 != 0)
    int64_t rbx_1 = sx.q(*(arg1 + 0xe4))
    TEB* gsbase
    
    if (data_143f724b0
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f724b0)
        
        if (data_143f724b0 == 0xffffffff)
            data_143f724ac = 0xffffffff
            _Init_thread_footer(&data_143f724b0)
    
    if (rbx_1.d != data_143f724ac)
        int64_t rdi_1 = 0
        int32_t* rcx_6
        
        if (*(rax_2 + 0x40) == *(rax_2 + 0x6c))
        label_1426fa7dd:
            rcx_6 = nullptr
        else
            void* rcx_3 = *(rax_2 + 0x78)
            void* r8_1 = rax_2 + 0x70
            
            if (rcx_3 != 0)
                r8_1 = rcx_3
            
            int32_t rax_4 = *(r8_1 + (((sx.q(*(rax_2 + 0x80)) - 1) & rbx_1) << 2))
            
            if (rax_4 == 0xffffffff)
            label_1426fa7dd_1:
                rcx_6 = nullptr
            else
                while (true)
                    rcx_6 = sx.q(rax_4) * 0x3c + *(rax_2 + 0x38)
                    
                    if (*rcx_6 == rbx_1.d)
                        break
                    
                    rax_4 = rcx_6[0xd]
                    
                    if (rax_4 == 0xffffffff)
                        goto label_1426fa7dd_2
                
                if (rax_4 == 0xffffffff)
                label_1426fa7dd_2:
                    rcx_6 = nullptr
        
        int64_t* rbx_2 = *(rax_2 + 0x88)
        uint64_t r14_2 = sx.q(*(rax_2 + 0x90)) << 3 u>> 3
        
        if (rbx_2 u> &rbx_2[sx.q(*(rax_2 + 0x90))])
            r14_2 = 0
        
        if (r14_2 != 0)
            do
                int64_t* rcx_7 = *rbx_2
                
                if (rcx_7 != 0 && ((rcx_7[6].d u>> 2).b & 1) != 0
                        && test_bit(rcx_6[3], zx.d(*(rcx_7 + 0x44))))
                    (*(*rcx_7 + 0x288))(rcx_7, &rcx_6[1], arg2)
                
                rbx_2 = &rbx_2[1]
                rdi_1 += 1
            while (rdi_1 != r14_2)

return sub_14270b120(arg1 + 0xe8, arg2)
