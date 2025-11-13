// 函数: sub_14222c270
// 地址: 0x14222c270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = __crt_unique_heap_ptr<char,struct __crt_internal_free_policy>(arg1[1])
char rax_1
int64_t* rcx

if (rax != 0)
    rax_1, rcx = sub_142262290(arg1[1])

if (rax == 0 || rax_1 != 0)
    rcx.b = 1
else
    rcx.b = 0

**arg1 = rcx.b

if (__crt_unique_heap_ptr<char,struct __crt_internal_free_policy>(arg1[3]) != 0
        && sub_142262290(arg1[3]) == 0)
    char* rax_5 = arg1[2]
    *rax_5 = 0
    return rax_5

char* rax_6 = arg1[2]
*rax_6 = 1
return rax_6
