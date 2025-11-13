// 函数: sub_1423c1c90
// 地址: 0x1423c1c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f5a750 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f5a750)
    
    if (data_143f5a750 == 0xffffffff)
        sub_140b58260(&data_143f5a748, u"PF_Unknown", 1)
        _Init_thread_footer(&data_143f5a750)

int64_t* result = data_143f5a758

if (result == 0)
    int64_t rbx_1 = data_143f5a748
    
    if (data_1439a9aa8 == data_1439a9ad4)
    labelid_5:
        result = nullptr
    else
        int32_t rax_4 = sub_140b5ead0(rbx_1.d) + rbx_1:4.d
        void* rcx_3 = data_1439a9ae0
        void* rax_6 = &data_1439a9ad8
        
        if (rcx_3 != 0)
            rax_6 = rcx_3
        
        int32_t rax_7 = *(rax_6 + (((sx.q(data_1439a9ae8) - 1) & sx.q(rax_4)) << 2))
        
        if (rax_7 == 0xffffffff)
        labelid_5:
            result = nullptr
        else
            int64_t r8_1 = data_1439a9aa0
            int64_t rdx_4
            
            while (true)
                rdx_4 = sx.q(rax_7)
                int64_t rcx_4 = rdx_4 * 3
                
                if (*(r8_1 + (rcx_4 << 3)) == rbx_1)
                    break
                
                rax_7 = *(r8_1 + (rcx_4 << 3) + 0x10)
                
                if (rax_7 == 0xffffffff)
                    goto label_1423c1d47_1
            
            if (rax_7 == 0xffffffff)
            label_1423c1d47:
                result = nullptr
            else
                void* rax_9 = r8_1 + rdx_4 * 0x18
                
                if (rax_9 == 0)
                label_1423c1d47_1:
                    result = nullptr
                else
                    result = *(rax_9 + 8)
    
    data_143f5a758 = result
    
    if (result != 0)
        sub_140be0d00(result, rbx_1, 0)
        return data_143f5a758

return result
