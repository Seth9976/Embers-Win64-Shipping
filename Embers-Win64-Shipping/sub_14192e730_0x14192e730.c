// 函数: sub_14192e730
// 地址: 0x14192e730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = *arg1
void* rbx = *result

if ((*(rbx + 0x38) & 1) != 0)
    sub_141909f40(*(rbx + 0x28))
    
    if (data_143eff5d0 != 0 || (*(rbx + 0x38) & 2) != 0)
        result = data_143effd20(0x8893)
    else
        sub_14193fbe0(rbx, *(rbx + 0x40), *(rbx + 0x3c), *(rbx + 0x48))
        
        if ((*(rbx + 0x20) & 4) == 0)
            result = sub_140a74f90(*(rbx + 0x48))
            *(rbx + 0x38) &= 0xfffffff7
            *(rbx + 0x3c) = 0
        else
            int64_t rcx_2 = *(rbx + 0x50)
            int32_t result_1
            
            if (rcx_2 == 0)
                result_1 = *(rbx + 0x58)
            else
                sub_140a74f90(rcx_2)
                result_1 = 0
            
            *(rbx + 0x50) = *(rbx + 0x48)
            result = zx.q(*(rbx + 0x3c))
            *(rbx + 0x3c) = 0
            
            if (result_1 u>= result.d)
                result = zx.q(result_1)
            
            *(rbx + 0x38) &= 0xfffffff7
            *(rbx + 0x58) = result.d
    
    *(rbx + 0x48) = 0
    int32_t rdx_2 = *(rbx + 0x38)
    *(rbx + 0x30) += zx.q(not.d(rdx_2 u>> 1)) & 1
    *(rbx + 0x38) = rdx_2 & 0xfffffffe

return result
