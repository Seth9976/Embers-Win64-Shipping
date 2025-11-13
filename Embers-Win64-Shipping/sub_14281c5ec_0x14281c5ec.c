// 函数: sub_14281c5ec
// 地址: 0x14281c5ec
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
void* r15_1 = arg2 - *arg1
int64_t r14_2 = (arg1[1] - *arg1) s>> 4
int64_t rdi = 0xfffffffffffffff

if (r14_2 == 0xfffffffffffffff)
    sub_14281cad8()
    noreturn

int64_t rcx_2 = (arg1[2] - *arg1) s>> 4
uint64_t rdx_1 = rcx_2 u>> 1

if (rcx_2 u<= 0xfffffffffffffff - rdx_1)
    int64_t rax_1 = rdx_1 + rcx_2
    int64_t rcx_3 = r14_2 + 1
    
    if (rax_1 u>= r14_2 + 1)
        rcx_3 = rax_1
    
    if (rcx_3 u> 0xfffffffffffffff)
        stdext::threads::_Throw_lock_error()
        noreturn
    
    rdi = rcx_3

int64_t arg_10 = rdi
int128_t* rax_2 = sub_14058b9f0(rdi << 4)
int128_t* var_48 = rax_2
void* result = (r15_1 & 0xfffffffffffffff0) + rax_2
*result = *arg3
*(result + 8) = *arg4
int64_t rdx_2 = arg1[1]
int128_t* rcx_8 = *arg1
int128_t* r8 = rax_2

if (arg2 != rdx_2)
    sub_14281c7a8(rcx_8, arg2, r8)
    rdx_2 = arg1[1]
    rcx_8 = arg2
    r8 = result + 0x10

sub_14281c7a8(rcx_8, rdx_2, r8)
void* rcx_9 = *arg1

if (rcx_9 != 0)
    sub_14058ba50(rcx_9, (arg1[2] - rcx_9) & 0xfffffffffffffff0)

*arg1 = rax_2
arg1[1] = &rax_2[r14_2 + 1]
arg1[2] = &rax_2[rdi]
return result
