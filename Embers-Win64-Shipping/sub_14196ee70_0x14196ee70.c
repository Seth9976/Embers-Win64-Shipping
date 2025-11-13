// 函数: sub_14196ee70
// 地址: 0x14196ee70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x10)

if (rcx != 0)
    int64_t rax_1 = 0
    
    if (0 == *(rcx + 8))
        *(rcx + 8) = 0
    else
        rax_1 = *(rcx + 8)
    
    if (((rax_1 u>> 0x1a).b & 1) == 0)
        if (sub_140a80f40() == 0)
            if (sub_140a80f10() != 0)
                data_143f01c93
                sub_1405a6220(sub_140a242a0(), arg1 + 0x10)
        else
            data_14399e5e0
            sub_1405a6220(sub_140a242a0(), arg1 + 0x10)

int64_t* rcx_2 = *(arg1 + 0x18)
int32_t result = (*(*rcx_2 + 0x10))(rcx_2, zx.q(*(arg1 + 0x24)), zx.q(*(arg1 + 0x20)))
int64_t* rcx_3 = *(arg1 + 0x10)

if (rcx_3 != 0)
    result = rcx_3[9].d
    rcx_3[9].d -= 1
    
    if (result == 1)
        return sub_140a2f6e0(rcx_3) __tailcall

return result
