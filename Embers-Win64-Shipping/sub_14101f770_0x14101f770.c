// 函数: sub_14101f770
// 地址: 0x14101f770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = 1
void*** var_18 = nullptr
sub_1405a4f90(&var_18)
void* rax = *(arg2 + 8)
void*** rdx_1 = var_18
*rdx_1 = &data_142efcd90
rdx_1[1] = rax

if (rax != 0)
    *(rax + 0x14) += 1

*rdx_1 = &data_142efcd90
int32_t result = (*(*arg1 + 8))(arg1, &var_18, zx.q(arg3))
int32_t i_1 = i_2

if (i_1 != 0)
    void* rbx_2 = &var_18[1]
    int32_t i
    
    do
        void* rcx_2 = *rbx_2
        *(rbx_2 - 8) = &data_142efcd90
        
        if (rcx_2 != 0)
            result = *(rcx_2 + 0x14)
            *(rcx_2 + 0x14) -= 1
            
            if (result == 1)
                int64_t* rcx_3 = *rbx_2
                
                if (rcx_3 != 0)
                    result = sub_141011360(rcx_3, result.b)
        
        rbx_2 += 0x10
        i = i_1
        i_1 -= 1
    while (i != 1)

void*** rcx_4 = var_18

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4)
