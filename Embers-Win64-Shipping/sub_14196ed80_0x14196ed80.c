// 函数: sub_14196ed80
// 地址: 0x14196ed80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x10)

if (rcx != 0)
    int64_t rax_1 = 0
    
    if (0 == *(rcx + 8))
        *(rcx + 8) = 0
    else
        rax_1 = *(rcx + 8)
    
    if (((rax_1 u>> 0x1a).b & 1) == 0 && data_143f01c92 != 0 && sub_140a80f10() != 0)
        data_143f0f1e8 = *(arg1 + 0x10)

void* rcx_1 = *(arg1 + 0x10)

if (rcx_1 != 0)
    int64_t rax_5 = 0
    
    if (0 == *(rcx_1 + 8))
        *(rcx_1 + 8) = 0
    else
        rax_5 = *(rcx_1 + 8)
    
    if (((rax_5 u>> 0x1a).b & 1) == 0 && sub_140a80f40() != 0)
        data_14399e5e0
        sub_1405a6220(sub_140a242a0(), arg1 + 0x10)

void* rcx_3 = *(arg1 + 0x18)
*(rcx_3 + 0x20) = *(arg2 + 0x20)
uint64_t result = *(arg2 + 0x28)
*(rcx_3 + 0x28) = result
char* rbx_2 = *(arg1 + 0x18)

if (rbx_2 != 0)
    sub_1419628c0(rbx_2)
    result = sub_140a74f90(rbx_2)

int64_t* rcx_6 = *(arg1 + 0x10)

if (rcx_6 != 0)
    result = zx.q(rcx_6[9].d)
    rcx_6[9].d -= 1
    
    if (result.d == 1)
        return sub_140a2f6e0(rcx_6)

return result
