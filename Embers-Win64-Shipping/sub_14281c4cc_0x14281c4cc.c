// 函数: sub_14281c4cc
// 地址: 0x14281c4cc
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t rsi_2 = (arg2 - *arg1) s>> 3
int64_t rax_2 = (arg1[1] - *arg1) s>> 3
int64_t rcx = 0x1fffffffffffffff

if (rax_2 == 0x1fffffffffffffff)
    sub_14281cad8()
    noreturn

int64_t rdx_2 = (arg1[2] - *arg1) s>> 3
uint64_t r8_1 = rdx_2 u>> 1

if (rdx_2 u<= 0x1fffffffffffffff - r8_1)
    int64_t rax_4 = r8_1 + rdx_2
    int64_t rdx_3 = rax_2 + 1
    
    if (rax_4 u>= rax_2 + 1)
        rdx_3 = rax_4
    
    if (rdx_3 u> 0x1fffffffffffffff)
        stdext::threads::_Throw_lock_error()
        noreturn
    
    rcx = rdx_3

int64_t arg_10 = rcx
int64_t r14 = rcx << 3
void* rax_5 = sub_14058b9f0(r14)
void* arg_20 = rax_5
void* result = rax_5 + (rsi_2 << 3)
*result = *arg3
int64_t rdx_4 = arg1[1]
int64_t rcx_3 = *arg1
void* r8_2 = rax_5

if (arg2 != rdx_4)
    sub_14281c770(rcx_3, arg2, r8_2)
    rdx_4 = arg1[1]
    rcx_3 = arg2
    r8_2 = result + 8

sub_14281c770(rcx_3, rdx_4, r8_2)
void* rcx_4 = *arg1

if (rcx_4 != 0)
    sub_14058ba50(rcx_4, (arg1[2] - rcx_4) & 0xfffffffffffffff8)

*arg1 = rax_5
arg1[1] = rax_5 + ((rax_2 + 1) << 3)
arg1[2] = r14 + rax_5
return result
