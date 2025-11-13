// 函数: sub_142992580
// 地址: 0x142992580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t var_38 = -2
int64_t rdi = arg1[1]
int64_t r9 = *arg1
int64_t rsi_2 = (rdi - r9) s/ 0xc
int64_t rax_1
int64_t rdx_3
rdx_3:rax_1 = muls.dp.q(0x2aaaaaaaaaaaaaab, arg1[2] - r9)
int64_t rdx_4 = rdx_3 s>> 1
uint64_t result = rdx_4 u>> 0x3f
int64_t rdx_5 = rdx_4 + result

if (arg2 u<= rdx_5)
    if (arg2 u<= rsi_2)
        if (arg2 != rsi_2)
            result = arg2 * 3
            arg1[1] = r9 + (result << 2)
        
        return result
    
    if (arg2 != rsi_2)
        int64_t count = (arg2 - rsi_2) * 0xc
        result = memset(rdi, 0, count)
        rdi += count
    
    arg1[1] = rdi
    return result

if (arg2 u> 0x1555555555555555)
    sub_1427c7670()
    noreturn

uint64_t rcx_3 = rdx_5 u>> 1
int64_t rdi_1

if (rdx_5 u<= 0x1555555555555555 - rcx_3)
    rdi_1 = rcx_3 + rdx_5
    
    if (rdi_1 u< arg2)
        rdi_1 = arg2
else
    rdi_1 = arg2

int64_t arg_10 = rdi_1
int64_t rax_4 = sub_142997ad0(arg1, rdi_1)
int64_t arg_20 = rax_4

if (arg2 != rsi_2)
    memset(rax_4 + rsi_2 * 0xc, 0, (arg2 - rsi_2) * 0xc)

int64_t rdx_9 = *arg1
memmove(rax_4, rdx_9, (arg1[1]).d - rdx_9.d)
return sub_142997610(arg1, rax_4, arg2, rdi_1) __tailcall
