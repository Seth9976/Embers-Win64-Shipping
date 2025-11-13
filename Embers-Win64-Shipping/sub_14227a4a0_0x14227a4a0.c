// 函数: sub_14227a4a0
// 地址: 0x14227a4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_24 = 0
void arg_18
char result = sub_141f8dba0(arg1, (*sub_140b5e500(&arg_18, 0x142)).q)

if (result == 0)
    return result

(*(*arg1 + 0x650))(arg1, arg1[0xa9])
void* rax_2 = *arg1
arg1[0xa9] = arg2
int64_t r8_1 = *(rax_2 + 0x638)

if (arg2 != 0)
    r8_1(arg1, arg2)
    (*(*arg1 + 0x648))(arg1, arg2)
    jump(*(*arg1 + 0xd18))

int64_t* rdi_1 = arg1[0x4a]
r8_1(arg1, rdi_1)
(*(*arg1 + 0x648))(arg1, rdi_1)
int64_t* rdx_7 = rdi_1

if (rdi_1 == 0)
    rdx_7 = arg1

return (*(*arg1 + 0xd18))(arg1, rdx_7)
