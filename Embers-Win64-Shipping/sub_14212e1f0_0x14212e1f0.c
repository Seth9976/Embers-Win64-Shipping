// 函数: sub_14212e1f0
// 地址: 0x14212e1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rbp = zx.d(*(arg2 + 0x20c))
int32_t r14 = *(arg2 + 0x214)
TEB* gsbase
int32_t* r15_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14
int64_t* result

while (true)
    if (data_143e903d8 s> *r15_1)
        _Init_thread_header(&data_143e903d8)
        
        if (data_143e903d8 == 0xffffffff)
            sub_140b58260(&data_143e903d0, u"FPostProcessMaterialNode", 1)
            _Init_thread_footer(&data_143e903d8)
    
    int64_t rax_2 = data_143e903d0
    void* rcx = *arg3
    
    while (true)
        void* rcx_1
        void* r8
        
        if (rcx != 0)
            rcx_1 = *(arg1 + 0x730)
            r8 = zx.q(*(rcx + 0xc)) + 0x14 + zx.q(*(rcx + 0x10)) + rcx
        else
            r8 = *(arg1 + 0x730)
            rcx_1 = r8
        
        rcx = nullptr
        
        if (r8 != sx.q(*(arg1 + 0x738)) + rcx_1)
            rcx = r8
        
        *arg3 = rcx
        
        if (rcx != 0)
            if (*(rcx + 4) != rax_2)
                continue
            else if (rcx != 0)
                uint64_t rax_3 = zx.q(*(rcx + 0x10))
                result = rcx + 0x14 + rax_3
                
                if (rcx + 0x14 != neg.q(rax_3) && *(result + 0x14) != 0)
                    break
        
        return nullptr
    
    if (*(result + 0xc) == rbp && result[2].d == r14)
        int64_t* rcx_2 = *result
        int64_t rdx_4 = *rcx_2
        
        if ((*(rdx_4 + 0x268))(rcx_2, rdx_4) == arg2)
            break

return result
