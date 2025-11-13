// 函数: sub_141031680
// 地址: 0x141031680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e2c378 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e2c378)
    
    if (data_143e2c378 == 0xffffffff)
        int64_t* rcx_6 = data_143db18d0
        
        if (rcx_6 == 0)
            sub_140a53c40()
            rcx_6 = data_143db18d0
        
        int64_t r8_3
        r8_3.b = 1
        data_143e2c370 = (*(*rcx_6 + 0xb0))(rcx_6, u"r.ProfileGPU.ShowTransitions", r8_3)
        _Init_thread_footer(&data_143e2c378)

int64_t* rcx = data_143e2c370
int64_t result = (*(*rcx + 0x90))(rcx)

if (arg2 == 2)
    result = sub_14104ba50(arg1 + 0x250, 1)

if (arg3 != 0)
    sub_141031440(arg1)
    int32_t rdx_1 = (*(*arg3 + 0x10))(arg3)
    sub_1410644f0(arg3, sbb.d(rdx_1, rdx_1, *(arg1 + 0x136) != 0) & 2, arg3[7])
    result = sub_141037da0(arg3)
    arg3[7] += 1

return result
