// 函数: sub_142826028
// 地址: 0x142826028
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
void* r14_1 = arg2 - *arg1
int64_t rax_2 = (arg1[1] - *arg1) s>> 5

if (rax_2 == 0x7ffffffffffffff)
    sub_14281cad8()
    noreturn

int64_t rcx_2 = (arg1[2] - *arg1) s>> 5
uint64_t rdx_1 = rcx_2 u>> 1
int64_t rdi
int64_t arg_20

if (rcx_2 u<= 0x7ffffffffffffff - rdx_1)
    int64_t rax_4 = rdx_1 + rcx_2
    rdi = rax_2 + 1
    
    if (rax_4 u>= rax_2 + 1)
        rdi = rax_4
    
    arg_20 = rdi
    
    if (rdi u> 0x7ffffffffffffff)
        stdext::threads::_Throw_lock_error()
        noreturn
else
    rdi = 0x7ffffffffffffff
    arg_20 = 0x7ffffffffffffff
int32_t* result_3 = sub_14058b9f0(rdi << 5)
int32_t* result_2 = result_3
int32_t* result_4 = result_3
void* result = (r14_1 & 0xffffffffffffffe0) + result_3
void* var_50 = result + 0x20
void* result_1 = result + 0x20
*result = *arg3
result_3.b = arg3[1].b
*(result + 4) = result_3.b
result_3.b = *(arg3 + 5)
*(result + 5) = result_3.b
sub_14281f81c(result + 8, &arg3[2])
result_1 = result
int64_t rdx_3 = arg1[1]
int32_t* rcx_7 = *arg1

if (arg2 != rdx_3)
    sub_142826264(rcx_7, arg2, result_2)
    result_1 = result_2
    sub_142826264(arg2, arg1[1], result + 0x20)
else
    sub_14281f7a8(rcx_7, rdx_3, result_2)

sub_1428266d8(arg1, result_2, rax_2 + 1, rdi)
return result
