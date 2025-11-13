// 函数: sub_1418eabb0
// 地址: 0x1418eabb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143efb600 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143efb600)
    
    if (data_143efb600 == 0xffffffff)
        int64_t* rcx_17 = data_143db18d0
        
        if (rcx_17 == 0)
            sub_140a53c40()
            rcx_17 = data_143db18d0
        
        int64_t r8_6
        r8_6.b = 1
        data_143efb5f8 = (*(*rcx_17 + 0xb0))(rcx_17, u"r.ProfileGPU.ShowTransitions", r8_6)
        _Init_thread_footer(&data_143efb600)

int64_t* rcx = data_143efb5f8
(*(*rcx + 0x90))(rcx)
void* rdi = *(arg1 + 0x240)

if (*(rdi + 0x78) != 0)
    sub_1418c86c0(rdi, 0, 0)

void* r12 = *(rdi + 0x70)
void* rax_4 = (*(*arg3 + 0x48))(arg3)
int64_t var_68
__builtin_memset(&var_68, 0, 0x14)
int64_t var_50 = 0
int32_t var_48 = 0
int64_t r15 = *(rax_4 + 0x18)
int32_t arg_8 = 0
int64_t arg_18 = r15
int32_t arg_10
sub_140865c40(arg1 + 0x2e8, &arg_10, r15)
int64_t rax_5 = sx.q(arg_10)
void* const rcx_4

if (rax_5.d == 0xffffffff)
    rcx_4 = nullptr
else
    rcx_4 = *(arg1 + 0x2e8) + rax_5 * 0x18

int32_t* r14_1 = rcx_4 + 8

if (rcx_4 == 0)
    r14_1 = nullptr

if (r14_1 == 0)
    int32_t* rax_7 = sub_1418ca3c0(arg1 + 0x2e8, &arg_18, &arg_8)
    r15 = *(rax_4 + 0x18)
    r14_1 = rax_7

int32_t rbx
rbx.b = arg2.b & 0xf
int32_t rcx_7 = arg2 & 0xf0
int32_t rsi_1

if (rbx.b != 2)
    rsi_1 = 4
    
    if (rcx_7 == 0x20)
        rsi_1 = 0x3b9c9308
else
    rsi_1 = 3
    
    if (rcx_7 != 0x20)
        rsi_1 = 0x3b9c9309

int64_t rbx_1 = sx.q(sub_1418d97d0(&var_68, r15, *(rax_4 + 0x78), *(rax_4 + 0x70), *(rax_4 + 0x58)))
int32_t rax_10 = sub_1418e1d20(rsi_1)
int64_t var_60
void* rbx_2 = var_60 + rbx_1 * 0x48
int32_t rax_12 = sub_1418bfb90(sub_1418e1d20(*r14_1), rbx_2 + 0x10, rbx_2 + 0x18)
var_68.d |= rax_12
int32_t result = sub_1418bfb90(rax_10, rbx_2 + 0x14, rbx_2 + 0x1c)
var_68:4.d |= result
*r14_1 = rsi_1
int32_t var_58

if (var_58 s> 0 || var_48 s> 0)
    result = sub_1418c1fc0(&var_68, r12)

if (var_50 != 0)
    result = sub_140a74f90(var_50)

if (var_60 == 0)
    return result

return sub_140a74f90(var_60)
