// 函数: sub_14187bf90
// 地址: 0x14187bf90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x2e0)
void*** result = nullptr

if (rax != 0)
    int64_t r10_1 = *arg1
    *arg1 = 0
    int32_t rdx = arg1[1].d
    int32_t rcx = *(arg1 + 0xc)
    arg1[1] = 0
    int32_t var_18_1 = arg1[2].d
    int32_t var_14_1 = *(arg1 + 0x14)
    char var_c_1 = *(arg1 + 0x1c)
    int32_t var_20_1 = rdx
    int32_t var_1c_1 = rcx
    int32_t var_10_1 = arg1[3].d
    int64_t var_28 = r10_1
    result = sub_14185f7e0(rax, &var_28, arg2, arg3, arg5, arg6, arg7, arg4, arg8, arg9, arg10, 
        arg11, arg12)

int32_t i_1 = arg1[1].d
int64_t* rbx_1 = *arg1

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_2 = *rbx_1
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        rbx_1 = &rbx_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_1 = *arg1

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

return result
