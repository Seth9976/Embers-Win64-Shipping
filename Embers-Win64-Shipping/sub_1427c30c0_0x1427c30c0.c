// 函数: sub_1427c30c0
// 地址: 0x1427c30c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_140d3e110(arg1 + 8)

if (result.b != 0)
    if (*(arg1 + 0x28) != 0 && *(arg1 + 0x30) != 0)
        int64_t* rcx_1 = *(arg1 + 0x30)
        (*(*rcx_1 + 0x10))(rcx_1, arg1 + 0x10)
    
    void* rax_1 = sub_140d3c6e0(arg1 + 8)
    *(arg1 + 0x38) = *(rax_1 + 0x1c0)
    *(arg1 + 0x48) = *(rax_1 + 0x1d0)
    *(arg1 + 0x58) = *(rax_1 + 0x1e0)
    int64_t* i = *(arg1 + 0x98)
    
    for (void* rsi_1 = &i[sx.q(*(arg1 + 0xa0))]; i != rsi_1; i = &i[1])
        int64_t* rcx_3 = *i
        (*(*rcx_3 + 8))(rcx_3)
    
    int64_t* rbx_1 = *(arg1 + 0xa8)
    int64_t rdi_1 = 0
    result = &rbx_1[sx.q(*(arg1 + 0xb0))]
    uint64_t rsi_3 = sx.q(*(arg1 + 0xb0)) << 3 u>> 3
    
    if (rbx_1 u> result)
        rsi_3 = 0
    
    if (rsi_3 != 0)
        do
            int64_t* rcx_4 = *rbx_1
            result = (*(*rcx_4 + 8))(rcx_4)
            rdi_1 += 1
            rbx_1 = &rbx_1[1]
        while (rdi_1 != rsi_3)

return result
