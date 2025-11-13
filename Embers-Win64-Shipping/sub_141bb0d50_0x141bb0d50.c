// 函数: sub_141bb0d50
// 地址: 0x141bb0d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = (*(arg1 + 0x330)).b

if ((rax & 8) != 0 || (rax & 6) != 6)
    return *(arg1 + 0x390)

if (data_143de5452 == 0 && *(arg1 + 0x390) == 0)
    uint64_t rax_2 = sub_1408d4dd0(arg1 + 0x368)
    uint64_t rdi_1 = rax_2
    void* rax_3
    void* rcx_1
    int64_t rdx_1
    
    if (rax_2 != 0)
        rax_3 = sub_141c122a0()
        rcx_1 = *(rdi_1 + 0x10)
        rdx_1 = sx.q(*(rax_3 + 0x38))
    
    if (rax_2 == 0 || rdx_1.d s> *(rcx_1 + 0x38)
            || *(*(rcx_1 + 0x30) + (rdx_1 << 3)) != rax_3 + 0x30)
        rdi_1 = 0
    
    *(arg1 + 0x390) = rdi_1

void* result = *(arg1 + 0x390)

if (result != 0)
    *(arg1 + 0x330) |= 8
    
    if (data_143de5452 == 0 && ((*(result + 8) u>> 0xa).b & 1) != 0)
        int64_t rax_7 = sub_140d3cb50(result)
        
        if (rax_7 != 0)
            sub_140cc45a0(rax_7 + 0x200, *(arg1 + 0x390))
        
        return *(arg1 + 0x390)

return result
