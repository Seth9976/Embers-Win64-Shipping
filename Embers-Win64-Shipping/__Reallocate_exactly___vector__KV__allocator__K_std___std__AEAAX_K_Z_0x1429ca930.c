// 函数: ?_Reallocate_exactly@?$vector@_KV?$allocator@_K@std@@@std@@AEAAX_K@Z
// 地址: 0x1429ca930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
void** arg_8 = arg1
int64_t var_28 = -2
void* rax = sub_1429caf70(arg1, arg2)
void* arg_18 = rax
void* rdx = *arg1
memmove(rax, rdx, (arg1[1]).d - rdx.d)
void* rdx_1 = *arg1
int64_t rdi_2 = (arg1[1] - rdx_1) s>> 1

if (rdx_1 != 0)
    sub_1429cc1b0(arg1, rdx_1, (arg1[2] - rdx_1) s>> 1)

arg1[2] = rax + (arg2 << 1)
void* result = rax + (rdi_2 << 1)
arg1[1] = result
*arg1 = rax
return result
