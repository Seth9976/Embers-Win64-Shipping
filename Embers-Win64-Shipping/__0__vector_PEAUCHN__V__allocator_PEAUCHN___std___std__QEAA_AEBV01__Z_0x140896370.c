// 函数: ??0?$vector@PEAUCHN@@V?$allocator@PEAUCHN@@@std@@@std@@QEAA@AEBV01@@Z
// 地址: 0x140896370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg1
__builtin_memset(arg1, 0, 0x18)
int64_t rbp = *arg2
int64_t r14 = arg2[1]

if (rbp != r14)
    int64_t rbx_2 = r14 - rbp
    sub_14058e710(arg1, rbx_2)
    int64_t rdi_1 = *result
    memmove(rdi_1, rbp, rbx_2.d)
    result[1] = rdi_1 - rbp + r14

return result
