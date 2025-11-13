// 函数: sub_142651ae0
// 地址: 0x142651ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rbx = zx.d(arg2)
int128_t* rcx = arg3
arg3.b = 1
void arg_10
char* rax_1 = sub_140ae16d0(rcx, &arg_10, arg3.b)
int32_t rcx_1 = *(arg1 + 0x4c)
uint64_t result = zx.q(rcx_1 u>> 1) & 1
*(arg1 + 0x50) = *rax_1

if (result.d != rbx)
    *(arg1 + 0x4c) = (rbx * 2) | (rcx_1 & 0xfffffffd)
    
    if (rbx.b == 0)
        return sub_141fce170(*(arg1 + 0x58))
    
    uint64_t result_1 = 0
    uint64_t result_2 = sub_140a84c80(0, 0x30, 0)
    result_1 = result_2
    int32_t var_10_1 = 3
    
    if (result_2 != 0)
        *result_2 = &data_142e33878
        sub_140d3a3a0(result_2 + 8, arg1)
        *(result_2 + 0x10) = sub_142650bc0
        *(result_2 + 0x20) = sub_140a387b0()
        *result_2 = &data_142e338d0
    
    void arg_8
    result = sub_141fc2d40(&arg_8, u"Navigation", &result_1)
    *(arg1 + 0x58) = *result
    
    if (var_10_1 == 0)
        result = result_1
    label_142651bf2:
        
        if (result != 0)
            return sub_140a74f90(result)
    else
        uint64_t result_3 = result_1
        
        if (result_3 != 0)
            (*(*result_3 + 0x38))(result_3, 0)
            result = result_1
            
            if (result != 0)
                result = sub_140a84c80(result, 0, 0)
                result_1 = result
            
            int32_t var_10_2 = 0
            goto label_142651bf2

return result
