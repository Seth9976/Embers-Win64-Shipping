// 函数: sub_14281daec
// 地址: 0x14281daec
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

int64_t arg_20 = rcx
int64_t r15 = rcx << 3
void* result_2 = sub_14058b9f0(r15)
void* result_3 = result_2
void* result = result_2 + (rsi_2 << 3)
void* result_4 = result + 8
void* result_5 = result_4
int64_t rcx_2 = *arg3
*arg3 = 0
*result = rcx_2
void* result_1 = result
int64_t rdx_4 = arg1[1]
int64_t* rcx_3 = *arg1

if (arg2 != rdx_4)
    sub_14281df64(rcx_3, arg2, result_2)
    result_1 = result_2
    rdx_4 = arg1[1]
    rcx_3 = arg2
else
    result_4 = result_2

sub_14281df64(rcx_3, rdx_4, result_4)
int64_t* rcx_4 = *arg1

if (rcx_4 != 0)
    sub_14281d950(rcx_4, arg1[1])
    sub_14058ba50(*arg1, (arg1[2] - *arg1) & 0xfffffffffffffff8)

*arg1 = result_2
arg1[1] = result_2 + ((rax_2 + 1) << 3)
arg1[2] = r15 + result_2
return result
