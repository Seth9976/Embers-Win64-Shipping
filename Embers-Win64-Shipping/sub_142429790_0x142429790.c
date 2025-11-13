// 函数: sub_142429790
// 地址: 0x142429790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = *(arg1 + 0x18)

if (result != 0)
    result = *(result + 8)
    int32_t i_2 = *result
    
    if (i_2 != 0)
        char* rbx_4 = (sx.q(*(arg1 + 0x60)) << 6) + 0x38 + *(result + 0x28)
        uint64_t i_1 = zx.q(i_2)
        void* rdi_1 = arg1 + 0x20
        uint64_t i
        
        do
            if (*rbx_4 == 6)
                result = sub_141c79910(*rdi_1)
            
            rdi_1 += 8
            rbx_4 = &rbx_4[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    data_143f5e410 -= 1

int64_t* rcx_1 = *(arg1 + 0x10)

if (rcx_1 != 0)
    result = zx.q(rcx_1[9].d)
    rcx_1[9].d -= 1
    
    if (result.d == 1)
        return sub_140a2f6e0(rcx_1) __tailcall

return result
