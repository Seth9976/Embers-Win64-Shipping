// 函数: sub_14139cf50
// 地址: 0x14139cf50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1)
uint32_t rcx_3
TEB* gsbase

if (rdi.d s< 3)
    int16_t rbx_1 = (*(data_143ec4bf0 + 4)).w
    
    if (data_143ec6f08
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ec6f08)
        
        if (data_143ec6f08 == 0xffffffff)
            int64_t* rcx_6 = data_143f0f180
            data_143ec6f04 = (*(*rcx_6 + 0x6e0))(rcx_6)
            _Init_thread_footer(&data_143ec6f08)
    
    int16_t rax_15 = data_143ec6f04
    
    if (rbx_1 u<= rax_15)
        rax_15 = rbx_1
    
    rcx_3 = zx.d(rax_15)
    
    if (rax_15 u<= 8 && test_bit(0x116, zx.d(rax_15)))
    label_14139d0e7:
        
        if (rcx_3.w u<= 1 || (*U"1111")[rdi] != 4 || (data_143f0264e & 1) != 0)
            return zx.q(rcx_3.w)
        
        char rax_18 = data_143ec6f0c
        char rcx_7 = rax_18
        
        if (rax_18 == 0)
            rcx_7 = 1
        
        data_143ec6f0c = rcx_7
else
    if (data_143ec6f00
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ec6f00)
        
        if (data_143ec6f00 == 0xffffffff)
            int64_t* rcx = data_143db18d0
            
            if (rcx == 0)
                sub_140a53c40()
                rcx = data_143db18d0
            
            data_143ec6ef8 = (*(*rcx + 0xb0))(rcx, u"r.DefaultFeature.AntiAliasing", 1)
            _Init_thread_footer(&data_143ec6f00)
    
    int64_t* rcx_1 = data_143ec6ef8
    int32_t rax_5 = (*(*rcx_1 + 0x90))(rcx_1)
    
    if (sub_1410a09e0((*U"1111")[rdi]) != 0 && rax_5 == 3)
        rcx_3 = *(data_143ec4bd8 + 4)
        
        if (rcx_3 s<= 1)
            rcx_3.w = 1
        
        if (rcx_3.w u<= 8 && test_bit(0x116, zx.d(rcx_3.w)))
            goto label_14139d0e7
return 1
