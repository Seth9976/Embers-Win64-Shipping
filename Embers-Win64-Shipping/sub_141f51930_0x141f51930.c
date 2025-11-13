// 函数: sub_141f51930
// 地址: 0x141f51930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 - 0xb8) = &data_14327fc00
void** const result = &data_14327fc50
*(sx.q(*(*(arg1 - 0xb0) + 4)) + arg1 - 0xb0) = &data_14327fc50
int32_t i_1 = *(arg1 - 0x18)
void** rbx = *(arg1 - 0x20)

if (i_1 != 0)
    int32_t i
    
    do
        void* rdx_1 = *rbx
        
        if (rdx_1 != 0)
            result = *(rdx_1 + 8)
            void* rcx_2 = sx.q(*(result + 4)) + 8 + rdx_1
            int32_t temp1_1 = *(rcx_2 + 8)
            *(rcx_2 + 8) -= 1
            
            if (temp1_1 == 1)
                result = (**rcx_2)(rcx_2, 1)
        
        rbx = &rbx[1]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = *(arg1 - 0x20)

if (rbx != 0)
    result = sub_140a74f90(rbx)

int64_t rcx_4 = *(arg1 - 0x78)

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

int64_t rcx_5 = *(arg1 - 0x90)

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5)
