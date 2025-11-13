// 函数: sub_1414336b0
// 地址: 0x1414336b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 != 0)
    sub_14198b7d0()

int32_t i = 0

if (arg2[0x61].d s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        sub_1412e9820(*(rsi_1 + arg2[0x60]))
        i += 1
        rsi_1 = &rsi_1[1]
    while (i s< arg2[0x61].d)

int128_t zmm2 = sub_14141ca60()
sub_141398080(&data_143ec4c60)
TEB* gsbase

if (data_143ed4ad8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ed4ad8)
    
    if (data_143ed4ad8 == 0xffffffff)
        int64_t* rcx_10 = data_143db18d0
        
        if (rcx_10 == 0)
            sub_140a53c40()
            rcx_10 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        data_143ed4ad0 = (*(*rcx_10 + 0xb0))(rcx_10, u"r.RHICmdAsyncRHIThreadDispatch", r8_1)
        _Init_thread_footer(&data_143ed4ad8)

int64_t* rcx_4 = data_143ed4ad0
int32_t rax_3 = (*(*rcx_4 + 0x90))(rcx_4)

if (rax_3 == 0)
    if (*(arg1 + 0x14) u> rax_3)
        j_sub_14196ef60(&data_143f02b88, arg1, zmm2, arg4)
    
    sub_14198b230()

int64_t* rbx = arg2[0x78]
arg2[0x78] = 0
(**arg2)(arg2, 1)
sub_141267420(&data_1439b6580)
int64_t result = sub_141295290()

if (rbx == 0)
    return result

if (rbx[3].b == 0)
    void* rax_5 = *rbx
    rbx[3].b = 1
    *(rax_5 + 0x20) -= 1
    int64_t* rcx_7 = *rbx
    int64_t rdx_2 = rbx[2]
    
    if (rdx_2 != rcx_7[2])
        sub_140b16b40(rcx_7, rdx_2)
        rcx_7 = *rbx
    
    *rcx_7 = rbx[1]
    *(*rbx + 0x18) = rbx[4]
    rbx[1] = 0

return j_sub_140a74f90(rbx) __tailcall
