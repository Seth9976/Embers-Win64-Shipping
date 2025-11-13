// 函数: sub_14149dc60
// 地址: 0x14149dc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14149dea0(arg1, arg2, arg3, arg4, arg5, arg6)
int512_t zmm1
zmm1.o = data_142d3f660
int128_t var_68
__builtin_memcpy(&var_68, 
    "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x"
"00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x
        3f", 
    0x30)
int128_t var_38
__builtin_memset(&var_38, 0, 0x20)
float var_a8[0x4][0x4]
sub_1414a3270(arg6, &var_a8)
int64_t rbx_1 = sx.q(*(arg1 + 0xe0))
int32_t result_1 = 0
int64_t r14 = *(arg2 + 0x1a0)

if (rbx_1 s> 0)
    int64_t rdx_1 = 0
    
    while (true)
        void* rcx_2 = *(arg1 + 0xd8)
        
        if ((*(arg1 + 0xd8) & 1) != 0)
            rcx_2 = (rcx_2 s>> 1) + arg1 + 0xd8
        
        if (*(rcx_2 + (rdx_1 << 3)) == data_143ed9a60)
            break
        
        result_1 += 1
        rdx_1 += 1
        
        if (rdx_1 s>= rbx_1)
            goto label_14149dd4f

uint64_t result
void* rbx_2

if (rbx_1 s<= 0 || result_1 == 0xffffffff)
label_14149dd4f:
    TEB* gsbase
    result = zx.q(*(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    
    if (data_143ce8564 s> result.d)
        result = _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            result = _Init_thread_footer(&data_143ce8564)
    
    rbx_2 = &data_143ce8560
else
    void* rcx_13 = *(arg1 + 0xe8)
    
    if ((rcx_13.b & 1) != 0)
        rcx_13 = (rcx_13 s>> 1) + arg1 + 0xe8
    
    result = sx.q(result_1)
    rbx_2 = rcx_13 + (result << 1)

if (*rbx_2 == 0xffff)
    return result

int64_t* rcx_5 = data_143f0f180
int64_t arg_8
(*(*rcx_5 + 0xf8))(rcx_5, &arg_8, &var_a8, &data_143ed9a70, 0, 1)
int64_t rsi_1 = arg_8
uint32_t rbp_1 = zx.d(*rbx_2)
void*** rcx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_4 = &rcx_8[5]

if (rax_4 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_4 = &rcx_8[5]

*(arg2 + 0x30) = rax_4
void**** rax_5 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_5 = rcx_8
*(arg2 + 8) = &rcx_8[1]
rcx_8[1] = 0
*rcx_8 = &data_142f11618
rcx_8[2] = r14
rcx_8[3].d = rbp_1
rcx_8[4] = rsi_1
return sub_1405d1550(&arg_8)
