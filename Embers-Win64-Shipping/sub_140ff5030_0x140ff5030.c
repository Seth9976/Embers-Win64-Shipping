// 函数: sub_140ff5030
// 地址: 0x140ff5030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = arg7
void*** rbx = nullptr

if (rsi == 0)
    TEB* gsbase
    
    if (data_143e2c140
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143e2c140)
        
        if (data_143e2c140 == 0xffffffff)
            int64_t* rcx_5 = data_143db18d0
            
            if (rcx_5 == 0)
                sub_140a53c40()
                rcx_5 = data_143db18d0
            
            int64_t r8_1
            r8_1.b = 1
            int64_t* rax_11 = (*(*rcx_5 + 0xb0))(rcx_5, u"r.DefaultBackBufferPixelFormat", r8_1)
            int64_t rax_9
            
            if (rax_11 == 0)
                rax_9 = 0
            else
                rax_9 = (*(*rax_11 + 0x58))(rax_11)
            
            data_143e2c138 = rax_9
            _Init_thread_footer(&data_143e2c140)
    
    rsi = sub_142295d40(sub_14229df30(*data_143e2c138))

void*** rax_6 = j_sub_140a82f30(0xb8)

if (rax_6 != 0)
    rbx = sub_140fd98b0(rax_6, arg1, arg3, arg4, arg5, arg6, rsi)

*arg2 = rbx

if (rbx != 0)
    rbx[1].d += 1

return arg2
