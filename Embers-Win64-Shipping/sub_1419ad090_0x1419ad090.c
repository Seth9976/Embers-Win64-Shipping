// 函数: sub_1419ad090
// 地址: 0x1419ad090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg4
int64_t* rcx = data_143f0f180
int64_t var_58 = *arg3
int128_t* arg_30
int128_t* rax_3 = arg_30
int32_t var_34 = *(rax_3 + 4)
int128_t* arg_28
(*(*rcx + 0xf8))(rcx, &arg_28, &var_58, &data_143f12770, 1, 1, var_58, rax, *arg_28, (*rax_3).d)
int128_t* rdi = arg_28
arg_30 = rdi

if (rdi != 0)
    *(rdi + 8) += 1
    rdi = arg_30

sub_1405d1550(&arg_28)
int64_t r11 = sx.q(*(arg1 + 0xe0))
int32_t r8_1 = 0
int64_t r14 = *(arg2 + 0x1a0)

if (r11 s> 0)
    int64_t rdx_1 = 0
    
    while (true)
        void* rcx_3 = *(arg1 + 0xd8)
        
        if ((*(arg1 + 0xd8) & 1) != 0)
            rcx_3 = (rcx_3 s>> 1) + arg1 + 0xd8
        
        if (*(rcx_3 + (rdx_1 << 3)) == data_143f12760)
            break
        
        r8_1 += 1
        rdx_1 += 1
        
        if (rdx_1 s>= r11)
            goto label_1419ad1ce

void* rdx_2

if (r11 s<= 0 || r8_1 == 0xffffffff)
label_1419ad1ce:
    TEB* gsbase
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    rdx_2 = &data_143ce8560
else
    void* rcx_15 = *(arg1 + 0xe8)
    
    if ((rcx_15.b & 1) != 0)
        rcx_15 = (rcx_15 s>> 1) + arg1 + 0xe8
    
    rdx_2 = rcx_15 + (sx.q(r8_1) << 1)

int16_t rax_8 = *rdx_2

if (rax_8 != 0xffff)
    void*** rcx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_9 = &rcx_8[5]
    
    if (rax_9 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_9 = &rcx_8[5]
    
    *(arg2 + 0x30) = rax_9
    void**** rax_10 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_10 = rcx_8
    *(arg2 + 8) = &rcx_8[1]
    rcx_8[1] = 0
    *rcx_8 = &data_142f11618
    rcx_8[2] = r14
    rcx_8[3].d = zx.d(rax_8)
    rcx_8[4] = rdi

sub_1405d1550(&arg_30)
sub_1405d1550(arg3)
return sub_1405d1550(arg4)
