// 函数: sub_1426b8870
// 地址: 0x1426b8870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = arg1[7]

if (r9 == 0)
    return 

uint64_t rax = *(r9 + 0xb0)
int64_t rcx

if (rax == 0)
    rcx = 0
else
    rcx = *(rax + 0x258)

if (rcx == 0)
    return 

if ((arg1[0x17].b & 0x40) != 0)
    int64_t* rdx = arg1[5]
    
    if (rdx != 0)
        sub_1426a8b30(r9, rdx)

if (arg3 == 4)
    return sub_1426c1060(arg1) __tailcall

if (arg3 - 2 u<= 1 && arg2 != 0 && ((*(arg2 + 0x98) u>> 2).b & 1) != 0
        && (*(*arg1 + 0x2b8))(arg1).b == 0)
    sub_1426a8b30(arg1[7], arg1)
