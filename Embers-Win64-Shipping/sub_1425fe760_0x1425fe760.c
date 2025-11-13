// 函数: sub_1425fe760
// 地址: 0x1425fe760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rcx = zx.d(*(arg1 + 0x2c))

if (rcx == 0)
    int64_t* rcx_6 = *(arg1 + 8)
    (*(*rcx_6 + 0x18))(rcx_6, *(arg1 + 0x10))
else
    if (rcx == 1)
        int32_t rdx_2 = *(arg1 + 0x30)
        
        if ((rdx_2.b & 1) != 0)
            int64_t* rcx_3 = *(arg1 + 8)
            (*(*rcx_3 + 0x20))(rcx_3, *(arg1 + 0x18), zx.q(*(arg1 + 0x20)), 
                zx.q((rdx_2 u>> 1).b) & 1)
            int64_t* rcx_4 = *(arg1 + 8)
            (*(*rcx_4 + 0x20))(rcx_4, *(arg1 + 0x18), zx.q(*(arg1 + 0x20)), 
                (*(arg1 + 0x30) u>> 1).b & 1)
            rdx_2 = *(arg1 + 0x30)
        
        int64_t* rcx_5 = *(arg1 + 8)
        char rax_5 = (*(*rcx_5 + 0x20))(rcx_5, *(arg1 + 0x18), 0x2000, zx.q((rdx_2 u>> 1).b) & 1)
        *(arg1 + 0x30) &= 0xfffffffb
        *(arg1 + 0x30) |= (zx.d(rax_5) & 1) << 2
        *(arg1 + 0x38) -= 1
        return 
    
    if (rcx == 2)
        int64_t* rcx_2 = *(arg1 + 0x10)
        *(arg1 + 0x28) = (*(*rcx_2 + 0x318))(rcx_2, *(arg1 + 0x18), zx.q(*(arg1 + 0x24)))
        *(arg1 + 0x38) -= 1
        return 

*(arg1 + 0x38) -= 1
