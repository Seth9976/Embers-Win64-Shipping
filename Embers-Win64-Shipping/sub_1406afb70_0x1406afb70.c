// 函数: sub_1406afb70
// 地址: 0x1406afb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 u> 0x7fffffffffffffff)
    sub_1406afea0()
    noreturn

int64_t rdx = arg1[1]
int64_t rcx = *arg1
uint64_t rbp_1 = (arg2 + 0x1f) u>> 5
int64_t result = (rdx - rcx) s>> 2

if (rbp_1 u< result)
    int64_t r14_1 = rcx + (rbp_1 << 2)
    
    if (r14_1 != rdx)
        int64_t rbx_2 = 0
        memmove(r14_1, rdx, rbx_2.d)
        result = rbx_2 + r14_1
        arg1[1] = result

arg1[3] = arg2
int32_t rdi_1 = arg2.d & 0x1f

if (rdi_1 u> 0)
    void* rdx_1 = *arg1 + (rbp_1 << 2)
    result = zx.q((1 << rdi_1.b) - 1)
    *(rdx_1 - 4) &= result.d

return result
