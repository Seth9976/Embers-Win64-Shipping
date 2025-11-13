// 函数: sub_1421d9110
// 地址: 0x1421d9110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x20)
int32_t i_1 = *(arg1 + 0x28)
void* result_1 = arg1

if (result != 0)
    result_1 = result

if (i_1 != 0)
    int32_t i
    
    do
        void* rbx_1 = *result_1
        
        if (rbx_1 != 0)
            int64_t rcx = *(rbx_1 + 0x68)
            
            if (rcx != 0)
                sub_140a74f90(rcx)
            
            result = j_sub_140a74f90(rbx_1)
        
        result_1 += 8
        i = i_1
        i_1 -= 1
    while (i != 1)

bool cond:1 = *(arg1 + 0x2c) == 0
*(arg1 + 0x28) = 0

if (not(cond:1))
    result = sub_14085a940(arg1, 0)

int64_t rcx_3 = *(arg1 + 0x20)

if (rcx_3 == 0)
    return result

return sub_140a74f90(rcx_3) __tailcall
