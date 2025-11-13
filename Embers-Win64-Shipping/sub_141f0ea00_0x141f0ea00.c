// 函数: sub_141f0ea00
// 地址: 0x141f0ea00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_1439c7a08 s<= 1 && *(arg1 + 0x14f) == 2)
    TEB* gsbase
    
    if (data_143f3b1b8
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143f3b1b8)
        
        if (data_143f3b1b8 == 0xffffffff)
            int64_t* rcx_6 = data_143db18d0
            
            if (rcx_6 == 0)
                sub_140a53c40()
                rcx_6 = data_143db18d0
            
            int64_t r8_1
            r8_1.b = 1
            int64_t* rax_12 = (*(*rcx_6 + 0xb0))(rcx_6, u"r.MobileNumDynamicPointLights", r8_1)
            
            if (rax_12 != 0)
                int64_t rdx_4 = *rax_12
                rax_12 = (*(rdx_4 + 0x58))(rax_12, rdx_4)
            
            data_143f3b1b0 = rax_12
            _Init_thread_footer(&data_143f3b1b8)
    
    int64_t rbx_1 = data_143f3b1b0
    int64_t rcx
    
    if (data_143de5480 == 0)
        rcx = 0
    else
        rcx.b = GetCurrentThreadId() != data_143de5470
    
    if (*(rbx_1 + (rcx << 2)) s<= 0)
        return 0

void*** result = j_sub_140a82f30(0x1a0)

if (result == 0)
    return 0

sub_1420f35b0(result, arg1)
*result = &data_14326e390
result[0x30].d = *(arg1 + 0x33c)
*(result + 0x184) = arg1[0x68].d
result[0x31].d = *(arg1 + 0x344)
*(result + 0x18c) = arg1[0x69].d
result[0x32].d ^= (arg1[0x67].d ^ result[0x32].d) & 1
sub_142103d90(result, arg1[0x65].d)

if (0f f!= *(result + 0x18c))
    *(result + 0x13a) &= 0xbf
    *(result + 0x13a) = *(result + 0x13a)
    return result

*(result + 0x13a) &= 0xbf
*(result + 0x13a) |= 0x40
return result
