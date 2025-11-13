// 函数: sub_1405db8c0
// 地址: 0x1405db8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8
(*(*arg1 + 0x268))(arg1, &arg_8)
int32_t rax_1 = arg_8.d
int32_t rcx = arg_8:4.d

if (rax_1 == data_143cd7df0 && rcx == data_143cd7df4)
    rax_1.b = 1
    return rax_1

if (rax_1 s>= 1 && rcx s>= 1)
    rax_1.b = 1
    return rax_1

if (*arg2 != u"The requested size is invalid.")
    int32_t rdx_1 = 0
    arg2[1].d = 0
    
    if (*(arg2 + 0xc) != 0x1f)
        sub_1405947f0(arg2, 0x1f)
        rdx_1 = arg2[1].d
    
    arg2[1].d = rdx_1 + 0x1f
    
    if (rdx_1 + 0x1f s> *(arg2 + 0xc))
        sub_140594770(arg2)
    
    int64_t rcx_3 = *arg2
    __builtin_memcpy(rcx_3, u"The requested size is in", 0x30)
    *(rcx_3 + 0x30) = 0x69006c00610076
    *(rcx_3 + 0x38) = 0x2e0064
    *(rcx_3 + 0x3c) = 0

wchar16 const* const rax_2
rax_2.b = 0
return rax_2
