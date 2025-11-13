// 函数: sub_141cf6f80
// 地址: 0x141cf6f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14321cdd0
void* rbx = &arg1[6]
arg1[1] = 0
arg1[2] = 0
int64_t i_1 = 8
arg1[4] = 0
arg1[5] = arg2
int64_t i

do
    *rbx = 0
    *(rbx + 8) = 0
    *(rbx + 0xc) = 0xffffffff
    *(rbx + 0x10) = 0
    *rbx = sub_140a82f30(0x10000, 0)
    rbx += 0x18
    i = i_1
    i_1 -= 1
while (i != 1)
arg1[0x1e] = 0
arg1[0x1f] = 0
InitializeCriticalSection(&arg1[0x20])
SetCriticalSectionSpinCount(&arg1[0x20], 0xfa0)
arg1[0x25].d = 0
__builtin_memset(&arg1[0x26], 0, 0x1c)
arg1[0x32] = 0
void var_28
int64_t* rax_2 = sub_141d045a0(&var_28, arg3)

if (&arg1[1] != rax_2)
    arg1[1] = *rax_2
    *rax_2 = 0
    sub_1405aeff0(&arg1[2], &rax_2[1])

int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t rax_5 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (rax_5 == 1)
            (*(*var_20 + 8))(var_20, 1)

if (arg1[1] != 0 && sub_140a54810() != 0)
    arg1[0x26] = sub_140a491d0(0)
    arg1[4] = sub_140a6e140(arg1, u"FChunkCacheWorker", 0, 2, -1, 0)

return arg1
