// 函数: sub_1406d77c0
// 地址: 0x1406d77c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg2 + 0x20)
int64_t rax
rax.b = rcx != 0
*(arg2 + 0x20) = rax + rcx
int64_t* var_18
int64_t* result = Concurrency::details::HardwareAffinity::HardwareAffinity(&var_18)
int64_t* result_1 = result

if (arg3 != result)
    int32_t i_2 = arg3[1].d
    int64_t* rbx_1 = *arg3
    
    if (i_2 != 0)
        int32_t i
        
        do
            int64_t rcx_2 = *rbx_1
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            rbx_1 = &rbx_1[2]
            i = i_2
            i_2 -= 1
        while (i != 1)
        rbx_1 = *arg3
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)
    
    *arg3 = *result_1
    *result_1 = 0
    arg3[1].d = result_1[1].d
    result = zx.q(*(result_1 + 0xc))
    *(arg3 + 0xc) = result.d
    result_1[1] = 0

int32_t i_4
int32_t i_3 = i_4
int64_t* rbx_2 = var_18

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_4 = *rbx_2
        
        if (rcx_4 != 0)
            result = sub_140a74f90(rcx_4)
        
        rbx_2 = &rbx_2[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rbx_2 = var_18

if (rbx_2 == 0)
    return result

return sub_140a74f90(rbx_2)
