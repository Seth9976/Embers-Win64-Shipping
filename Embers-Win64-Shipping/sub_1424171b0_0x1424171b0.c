// 函数: sub_1424171b0
// 地址: 0x1424171b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
void* rcx = data_143ddb400
int64_t* var_18 = nullptr
int32_t i_2 = 0
int64_t* result = sub_140af4f20(rcx, arg2, &var_18, arg3)
int32_t i_1 = i_2

if (i_1 s> 0)
    wchar16** rsi_1 = nullptr
    
    do
        int64_t* rax = var_18
        wchar16* rdx
        
        if (*(rsi_1 + rax + 8) == 0)
            rdx = &data_142d40450
        else
            rdx = *(rsi_1 + rax)
        
        result = sub_142401e40(arg1, rdx)
        i_1 = i_2
        rbx += 1
        rsi_1 = &rsi_1[2]
    while (rbx s< i_1)

int64_t* rbx_1 = var_18

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_2 = *rbx_1
        
        if (rcx_2 != 0)
            result = sub_140a74f90(rcx_2)
        
        rbx_1 = &rbx_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_1 = var_18

if (rbx_1 == 0)
    return result

return sub_140a74f90(rbx_1)
