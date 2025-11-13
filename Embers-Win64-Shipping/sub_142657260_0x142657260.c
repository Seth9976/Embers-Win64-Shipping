// 函数: sub_142657260
// 地址: 0x142657260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
void* rdi = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143f716e8 s> *(rdi + 0x14))
    _Init_thread_header(&data_143f716e8)
    
    if (data_143f716e8 == 0xffffffff)
        sub_141dde490(&data_143f71670, 0x420c0000, 0x43100000)
        atexit(sub_142d121b0)
        _Init_thread_footer(&data_143f716e8)

int64_t* rax_2 = sub_14269bba0()
void* rsi = rax_2[0x23]

if (rsi == 0)
    int64_t rdx_1 = *rax_2
    (*(rdx_1 + 0x390))(rax_2, rdx_1)
    rsi = rax_2[0x23]

if (*(rsi + 0x80) s<= 0)
    return &data_143f71670

if (data_143f71768 s> *(rdi + 0x14))
    _Init_thread_header(&data_143f71768)
    
    if (data_143f71768 == 0xffffffff)
        sub_141dde490(&data_143f716f0, 0x420c0000, 0x43100000)
        atexit(sub_142d121e0)
        _Init_thread_footer(&data_143f71768)

int32_t i = 0
int32_t i_1 = -1

if (*(rsi + 0x80) s> 0)
    int64_t r14_1 = 0
    
    do
        bool rcx_2 = false
        
        if (i u<= 0xf)
            rcx_2 = test_bit(*(rsi + 0x88), i)
        
        if (rcx_2 != 0)
            int32_t rcx_3
            rcx_3.b = *(rsi + 0x3c) == 0
            
            if ((rcx_3.b & sub_140b5b8a0(*(rsi + 0x38), 0)) != 0
                    || *(*(rsi + 0x78) + r14_1 + 0x30) == *(rsi + 0x38))
                return sx.q(i) * 0x78 + *(rsi + 0x78)
            
            if (i_1 == 0xffffffff)
                i_1 = i
        
        i += 1
        r14_1 += 0x78
    while (i s< *(rsi + 0x80))
    
    if (i_1 != 0xffffffff)
        return sx.q(i_1) * 0x78 + *(rsi + 0x78)

return &data_143f716f0
