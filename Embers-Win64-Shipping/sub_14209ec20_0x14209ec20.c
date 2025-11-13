// 函数: sub_14209ec20
// 地址: 0x14209ec20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0x28c)
void* rdi = *(arg1 + 0x280)
int32_t i_2 = *(arg1 + 0x288)

if (result s>= 0)
    if (i_2 != 0)
        int64_t* rdi_1 = rdi + 0x20
        int32_t i
        
        do
            int64_t rcx = *rdi_1
            
            if (rcx != 0)
                result = sub_140a74f90(rcx)
            
            rdi_1 = &rdi_1[0xc]
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    *(arg1 + 0x288) = 0
    return result

if (i_2 != 0)
    void* rdi_2 = rdi + 0x20
    int32_t i_1
    
    do
        int64_t rcx_1 = *rdi_2
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        rdi_2 += 0x60
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    result = *(arg1 + 0x28c)

*(arg1 + 0x288) = 0

if (result == 0)
    return result

return sub_14090a730(arg1 + 0x280, 0)
