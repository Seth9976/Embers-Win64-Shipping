// 函数: sub_141c95d80
// 地址: 0x141c95d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg1[1].d
uint64_t result

if (i_1 != arg2[1].d)
label_141c95dfc:
    result.b = 0
    return result

int64_t* rbx_1 = *arg2
int64_t* rdi_1 = *arg1

if (i_1 != 0)
    int32_t i
    
    do
        if (*rdi_1 != *rbx_1)
            goto label_141c95dfc
        
        int16_t* rdx
        
        if (rbx_1[2].d == 0)
            rdx = &data_142d40450
        else
            rdx = rbx_1[1]
        
        int16_t* const rcx
        
        if (rdi_1[2].d == 0)
            rcx = &data_142d40450
        else
            rcx = rdi_1[1]
        
        if (sub_140a54510(rcx, rdx).d != 0)
            goto label_141c95dfc
        
        rdi_1 = &rdi_1[3]
        rbx_1 = &rbx_1[3]
        i = i_1
        i_1 -= 1
    while (i != 1)

result.b = 1
return result
