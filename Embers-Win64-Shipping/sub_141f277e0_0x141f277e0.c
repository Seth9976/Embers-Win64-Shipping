// 函数: sub_141f277e0
// 地址: 0x141f277e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
void* rbx = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143f3b080 s> *(rbx + 0x14))
    _Init_thread_header(&data_143f3b080)
    
    if (data_143f3b080 == 0xffffffff)
        int64_t* rcx_6 = data_143db18d0
        
        if (rcx_6 == 0)
            sub_140a53c40()
            rcx_6 = data_143db18d0
        
        int64_t r8_2
        r8_2.b = 1
        data_143f3b078 = (*(*rcx_6 + 0xb0))(rcx_6, u"r.DistanceFieldShadowing", r8_2)
        _Init_thread_footer(&data_143f3b080)

if (data_143f3b090 s> *(rbx + 0x14))
    _Init_thread_header(&data_143f3b090)
    
    if (data_143f3b090 == 0xffffffff)
        int64_t* rcx_7 = data_143db18d0
        
        if (rcx_7 == 0)
            sub_140a53c40()
            rcx_7 = data_143db18d0
        
        int64_t r8_3
        r8_3.b = 1
        data_143f3b088 = (*(*rcx_7 + 0xb0))(rcx_7, u"r.HeightFieldShadowing", r8_3)
        _Init_thread_footer(&data_143f3b090)

int64_t* rcx = data_143f3b078
int32_t result

if (rcx == 0)
label_141f27887:
    int32_t rax_5 = sub_141f16380(arg1, arg4, arg3)
    int32_t zmm6_1 = sub_141f135e0(arg1)
    int32_t zmm0_1
    
    if (rax_5 != 0)
        zmm0_1, zmm6_1 = sub_141f12f60(arg1, arg3, arg4)
    
    void* rdi
    
    if (rax_5 == 0 || zmm6_1 f<= zmm0_1)
        rdi.b = 0
    else
        rdi.b = 1
    
    int32_t rbx_1
    
    if (rax_5 != 0 || zmm6_1 f<= (zx.o(0)).d)
        rbx_1.b = 0
    else
        rbx_1.b = 1
    
    if (sub_141f10790((*U"1111")[sx.q(arg2)]).b == 0 || (rdi.b == 0 && rbx_1.b == 0))
        result.b = 0
    else
        result.b = 1
else
    if ((*(*rcx + 0x90))(rcx) != 0)
        goto label_141f27887
    
    int64_t* rcx_1 = data_143f3b088
    
    if (rcx_1 == 0)
        result.b = 0
    else
        if ((*(*rcx_1 + 0x90))(rcx_1) != 0)
            goto label_141f27887
        
        result.b = 0

return result
