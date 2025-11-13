// 函数: sub_1423f1ff0
// 地址: 0x1423f1ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = sub_141997ac0((sx.q(*(arg1 + 0x20)) << 4) + arg1, 1, arg3, arg4)
int64_t* rax = sub_140a242a0()
int64_t r8 = *rax
char rax_1 = (*(r8 + 0x20))(rax, 2, r8)
int64_t rsi
rsi.b = rax_1 == 0

if (rax_1 == 0)
    int64_t* rax_2 = sub_140a242a0()
    int64_t r8_1 = *rax_2
    (*(r8_1 + 0x30))(rax_2, 2, r8_1)

if (arg2 != 0)
    int32_t rax_5 = (*(arg1 + 0x20) + 1) & 0x80000001
    
    if (rax_5 s< 0)
        rax_5 = ((rax_5 - 1) | 0xfffffffe) + 1
    
    *(arg1 + 0x20) = rax_5

TEB* gsbase

if (data_143f5b7fc s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f5b7fc)
    
    if (data_143f5b7fc == 0xffffffff)
        data_143f5b7f8 = sub_140b70da0() s> 2
        _Init_thread_footer(&data_143f5b7fc)

if (data_143f5b7f8 != 0 && data_143a30270 != 0)
    int128_t var_18_1 = zmm6
    int32_t i = 0
    zmm6.d = data_143a2d8bc.d f* 0.00100000005f
    zmm6.d = zmm6.d f* 0.200000003f
    
    do
        uint8_t rax_10
        int512_t zmm2
        int128_t zmm6_1
        rax_10, zmm2, zmm6_1 = sub_1419a45a0((sx.q(*(arg1 + 0x20)) << 4) + arg1)
        
        if (rax_10 != 0)
            break
        
        char rax_11
        int64_t rcx_10
        rax_11, rcx_10 = data_14399fa10()
        
        if (rax_11 == 0)
            break
        
        zmm2.o = zmm6_1
        rcx_10.b = 1
        i += 1
        sub_140bcd2b0(rcx_10, 0, zmm2)
        
        if (rsi.b != 0)
            int64_t* rax_12 = sub_140a242a0()
            int64_t r8_2 = *rax_12
            (*(r8_2 + 0x30))(rax_12, 2, r8_2)
    while (i s< 5)

return sub_1419ba820((sx.q(*(arg1 + 0x20)) << 4) + arg1, rsi.b) __tailcall
