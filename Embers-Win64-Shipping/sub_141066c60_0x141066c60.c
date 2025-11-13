// 函数: sub_141066c60
// 地址: 0x141066c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg7

if (rbx == 0)
    TEB* gsbase
    
    if (data_143e2c978
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143e2c978)
        
        if (data_143e2c978 == 0xffffffff)
            int64_t* rcx_8 = data_143db18d0
            
            if (rcx_8 == 0)
                sub_140a53c40()
                rcx_8 = data_143db18d0
            
            int64_t r8_1
            r8_1.b = 1
            int64_t* rax_14 = (*(*rcx_8 + 0xb0))(rcx_8, u"r.DefaultBackBufferPixelFormat", r8_1)
            int64_t rax_12
            
            if (rax_14 == 0)
                rax_12 = 0
            else
                rax_12 = (*(*rax_14 + 0x58))(rax_14)
            
            data_143e2c970 = rax_12
            _Init_thread_footer(&data_143e2c978)
    
    rbx = sub_142295d40(sub_14229df30(*data_143e2c970))

void*** rax_6 = j_sub_140a82f30(0x1c0)
void*** rsi = rax_6

if (rax_6 == 0)
    rsi = nullptr
else
    int64_t rdi_1 = **(arg1 + 0x20)
    *rsi = &data_142d3ff08
    rsi[1].d = 0
    *(rsi + 0xc) = 0
    rsi[2].w = 0x100
    rsi[3] = rdi_1
    *rsi = &data_142f02a68
    rsi[0xa].d = arg5
    rsi[0xb].d = rbx
    *(rsi + 0x54) = arg6
    __builtin_memset(&rsi[4], 0, 0x1d)
    rsi[8] = arg3
    rsi[9].d = 3
    *(rsi + 0x4c) = arg4
    *(rsi + 0x55) = 0
    *(rsi + 0x5c) = 1
    rsi[0xc] = 0
    rsi[0xd].b = 0
    __builtin_memset(rsi + 0x6c, 0, 0x34)
    rsi[0x14] = 3
    rsi[0x15].d = 0
    rsi[0x16] = 0
    rsi[0x17].d = 0
    __builtin_memset(&rsi[0x18], 0, 0x28)
    rsi[0x1d].d = 2
    void arg_10
    sub_140b58260(&arg_10, u"Viewport Fence", 1)
    sub_14100ad10(&rsi[0x1e], rdi_1, (1 << (data_1439c7a34).b) - 1, &arg_10)
    __builtin_memset(&rsi[0x35], 0, 0x18)
    void* rbx_2 = rsi[3]
    int64_t rdi_2 = sx.q(*(rbx_2 + 0x4c8))
    int32_t rax_9 = (rdi_2 + 1).d
    *(rbx_2 + 0x4c8) = rax_9
    
    if (rax_9 s> *(rbx_2 + 0x4cc))
        sub_1405a4d70(rbx_2 + 0x4c0)
    
    *(*(rbx_2 + 0x4c0) + (rdi_2 << 3)) = rsi

sub_141063910(rsi)
*arg2 = rsi

if (rsi != 0)
    rsi[1].d += 1

return arg2
