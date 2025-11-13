// 函数: sub_14187be60
// 地址: 0x14187be60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result_1 = j_sub_140a82f30(0x60)
void*** result = result_1

if (result_1 == 0)
    result = nullptr
else
    int64_t r8_1 = *arg1
    *arg1 = 0
    int32_t rax = *(arg1 + 0xc)
    int32_t rdx_1 = arg1[1].d
    arg1[1] = 0
    *result = &data_142fe7e70
    result[1] = r8_1
    *(result + 0x14) = rax
    result[2].d = rdx_1
    result[4] = 0
    result[6] = 0
    int32_t i = 0
    
    if (result[2].d - 1 s> 0)
        int64_t* r15_1 = nullptr
        
        do
            i += 1
            int32_t i_1 = i
            int64_t* rcx = *(r15_1 + result[1])
            int64_t var_48_1 = 0
            int128_t var_30_1 = result.o
            void** const var_38_1 = &data_142d42ed8
            void* (* var_58)(int64_t* arg1, int64_t* arg2) = sub_14187b320
            (*(*rcx + 0x20))(rcx, &var_58)
            r15_1 = &r15_1[1]
        while (i s< result[2].d - 1)

int64_t rcx_1 = *arg1

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

return result
