// 函数: sub_141cb0350
// 地址: 0x141cb0350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0
char r14 = 0
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int64_t* var_58 = nullptr
int32_t i_6 = 0
*(arg1 + 0x628) = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0
void**** result = sub_140bb3810(&var_58)
void*** var_48
int64_t* rsi_1

if (arg2 != 0)
    var_48 = nullptr
    int32_t i_7 = 0
    result = sub_141caf5b0(arg1 - 0x28, &var_58, &var_48, 0, 1, nullptr, nullptr)
    int32_t i_3 = i_7
    rsi_1 = var_48
    int64_t* rbx_1 = rsi_1
    
    if (i_3 != 0)
        int32_t i
        
        do
            int64_t rcx_3 = *rbx_1
            
            if (rcx_3 != 0)
                result = sub_140a74f90(rcx_3)
            
            rbx_1 = &rbx_1[2]
            i = i_3
            i_3 -= 1
        while (i != 1)
    
label_141cb0546:
    
    if (rsi_1 != 0)
        result = sub_140a74f90(rsi_1)
else if (*(arg1 + 0x4c0) == 0)
    void*** rax = j_sub_140a82f30(0x198)
    int64_t* var_38
    int32_t i_8
    void*** rdi_1
    
    if (rax == 0)
        rdi_1 = nullptr
    else
        var_38 = nullptr
        i_8 = 0
        rdi_1 = sub_141c91b40(rax, &var_58, &var_38, 0, 1)
        r14 = 1
    
    int64_t* rax_2 = j_sub_140a82f30(0x18)
    int64_t* rbx_2 = rax_2
    
    if (rax_2 == 0)
        rbx_2 = nullptr
    else
        rax_2[1].d = 1
        *(rax_2 + 0xc) = 1
        *rbx_2 = &data_142e1c960
        rbx_2[2] = rdi_1
    
    var_48 = rdi_1
    int64_t* var_40_1 = rbx_2
    result = &var_48
    
    if (arg1 + 0x4c0 == &var_48)
    label_141cb04ee:
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                result = (**rbx_2)(rbx_2)
                int32_t temp3_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    result = (*(*rbx_2 + 8))(rbx_2, 1)
    else
        *(arg1 + 0x4c0) = rdi_1
        int64_t* rdi_2 = *(arg1 + 0x4c8)
        var_48 = nullptr
        
        if (rbx_2 == rdi_2)
            goto label_141cb04ee
        
        int64_t* var_40_2 = nullptr
        *(arg1 + 0x4c8) = rbx_2
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                result = (**rdi_2)(rdi_2)
                int32_t temp5_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    result = (*(*rdi_2 + 8))(rdi_2, 1)
            
            rbx_2 = var_40_2
            goto label_141cb04ee
    
    if ((r14 & 1) != 0)
        int32_t i_4 = i_8
        rsi_1 = var_38
        int64_t* rbx_3 = rsi_1
        
        if (i_4 != 0)
            int32_t i_1
            
            do
                int64_t rcx_9 = *rbx_3
                
                if (rcx_9 != 0)
                    result = sub_140a74f90(rcx_9)
                
                rbx_3 = &rbx_3[2]
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
        
        goto label_141cb0546
int32_t i_5 = i_6
int64_t* rbx_4 = var_58

if (i_5 != 0)
    int32_t i_2
    
    do
        int64_t rcx_11 = *rbx_4
        
        if (rcx_11 != 0)
            result = sub_140a74f90(rcx_11)
        
        rbx_4 = &rbx_4[2]
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)
    rbx_4 = var_58

if (rbx_4 == 0)
    return result

return sub_140a74f90(rbx_4)
