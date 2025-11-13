// 函数: sub_140852430
// 地址: 0x140852430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg3
uint64_t result

if (arg2 == 0)
label_140852488:
    int64_t rdi_1 = sx.q(rbx[1].d)
    int32_t rax_2 = (rdi_1 + 1).d
    rbx[1].d = rax_2
    
    if (rax_2 s> *(rbx + 0xc))
        sub_1405a4d70(rbx)
    
    result = *(arg1 + 0x50)
    *(*rbx + (rdi_1 << 3)) = result
else
    arg3.b = sub_140b5b8a0(*(arg1 + 0x58), 0) == 0
    
    if ((*(arg1 + 0x5c) != 0 | arg3.b) == 0 || *(arg1 + 0x60) == 0)
        goto label_140852488
    
    result = sub_1407ee9b0(arg2, arg1 + 0x58, rbx)
    
    if (result.b == 0)
        goto label_140852488

return result
