// 函数: sub_140864740
// 地址: 0x140864740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143ce4700 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ce4700)
    
    if (data_143ce4700 == 0xffffffff)
        data_143ce46f8 = j_sub_140d2ee50(sub_140bdf730(), -ffffffffffffffff, u"ETickingGroup", 0)
        _Init_thread_footer(&data_143ce4700)

int64_t var_28
int64_t* rax_2 = sub_140bded20(data_143ce46f8, &var_28, zx.d(*(arg1 + 8)))
int32_t rdx_1 = 0
void* var_38 = nullptr
void* rsi = nullptr
int32_t var_30 = 0
int32_t rcx_1 = rax_2[1].d
int32_t r14 = 0
int32_t var_2c = 0
int32_t rbx_1 = rcx_1 - 1

if (rcx_1 == 0)
    rbx_1 = 0

if (rbx_1 + 0x1e s> 0)
    sub_1405947f0(&var_38, rbx_1 + 0x1e)
    rdx_1 = var_30
    r14 = var_2c
    rsi = var_38

int32_t rbp_1 = rbx_1 + 0x1e + rdx_1

if (rbp_1 s> r14)
    sub_140594770(&var_38)
    r14 = var_2c
    rsi = var_38

int64_t rbx_2 = sx.q(rbx_1)
__builtin_memcpy(rsi, u"FParticleSystemManager::", 0x30)
*(rsi + 0x30) = 0x6b006300690054
*(rsi + 0x38) = 0x28
memcpy(rsi + 0x3a, *rax_2, rbx_2.d * 2)
*(rsi + (rbx_2 << 1) + 0x3a) = 0
var_38 = rsi
int32_t r15
r15.b = rbp_1 == 0
int32_t rdx_5 = rbp_1 + 1 + r15

if (rdx_5 s> r14)
    sub_1405947f0(&var_38, rdx_5)

sub_140a20ba0(&var_38, &data_142da76f4, 1)
int64_t rcx_7 = var_28
*arg2 = var_38
arg2[1].d = rbp_1
*(arg2 + 0xc) = r14

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

return arg2
