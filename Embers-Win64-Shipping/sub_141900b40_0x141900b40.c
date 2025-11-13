// 函数: sub_141900b40
// 地址: 0x141900b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = arg7
void*** rbx = nullptr

if (rsi == 0)
    TEB* gsbase
    
    if (data_143efbcb0
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143efbcb0)
        
        if (data_143efbcb0 == 0xffffffff)
            int64_t* rcx_6 = data_143db18d0
            
            if (rcx_6 == 0)
                sub_140a53c40()
                rcx_6 = data_143db18d0
            
            int64_t r8_1
            r8_1.b = 1
            int64_t* rax_11 = (*(*rcx_6 + 0xb0))(rcx_6, u"r.DefaultBackBufferPixelFormat", r8_1)
            int64_t rax_9
            
            if (rax_11 == 0)
                rax_9 = 0
            else
                rax_9 = (*(*rax_11 + 0x58))(rax_11)
            
            data_143efbca8 = rax_9
            _Init_thread_footer(&data_143efbcb0)
    
    int64_t rsi_1 = data_143efbca8
    int64_t rcx
    
    if (data_143de5480 == 0)
        rcx = 0
    else
        rcx.b = GetCurrentThreadId() != data_143de5470
    
    rsi = sub_142295d40(sub_14229df30(*(rsi_1 + (rcx << 2))))

void*** rax_6 = j_sub_140a82f30(0x1d0)

if (rax_6 != 0)
    rbx = sub_1418f46d0(rax_6, arg1, *(arg1 + 0x58), arg3, arg4, arg5, arg6, rsi)

*arg2 = rbx

if (rbx != 0)
    rbx[1].d += 1

return arg2
