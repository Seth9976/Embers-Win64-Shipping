// 函数: sub_14249de60
// 地址: 0x14249de60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_18 = nullptr

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int64_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_3 = *(arg2 + 0x20)
int64_t r8_4 = arg_10
int64_t* rdx_4 = arg_18
int64_t rcx_2
rcx_2.b = rax_3 != 0
*(arg2 + 0x20) = rcx_2 + rax_3
int64_t* var_28
int64_t* result = sub_141fb3f60(&var_28, rdx_4, r8_4)
int64_t* result_1 = result

if (arg3 != result)
    int32_t i_2 = arg3[1].d
    int64_t* rbx_1 = *arg3
    
    if (i_2 != 0)
        int32_t i
        
        do
            int64_t rcx_5 = *rbx_1
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
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
int64_t* rbx_2 = var_28

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_7 = *rbx_2
        
        if (rcx_7 != 0)
            result = sub_140a74f90(rcx_7)
        
        rbx_2 = &rbx_2[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rbx_2 = var_28

if (rbx_2 == 0)
    return result

return sub_140a74f90(rbx_2)
