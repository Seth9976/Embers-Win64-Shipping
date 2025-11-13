// 函数: sub_14225aa60
// 地址: 0x14225aa60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
arg1[2].d = ((arg1[2].d & 0xfffffffe) | zx.d(arg3)) & 0xfffffffd
void* rax_1 = sub_140d21d80(arg2)
void* rdi = rax_1 + 0x5c
*arg1 = *(rax_1 + 0x18)
int32_t rcx_2
rcx_2.b = *(rdi + 4) == 0

if ((rcx_2.b & sub_140b5b8a0(*rdi, 0)) != 0)
    rdi = arg1

arg1[1] = *rdi
return arg1
