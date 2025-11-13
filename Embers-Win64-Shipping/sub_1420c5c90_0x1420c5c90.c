// 函数: sub_1420c5c90
// 地址: 0x1420c5c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_28
sub_140a7c300(sub_140a752e0(), &var_28, arg3)
int64_t* rdi = var_28
int32_t i_4
void* r15_2 = &rdi[sx.q(i_4) * 2]
int64_t* rbx_2

if (rdi == r15_2)
label_1420c5d48:
    sub_140596d10(arg1, arg4)
    int32_t i_2 = i_4
    rbx_2 = var_28
    
    if (i_2 != 0)
        int32_t i
        
        do
            int64_t rcx_3 = *rbx_2
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            rbx_2 = &rbx_2[2]
            i = i_2
            i_2 -= 1
        while (i != 1)
        rbx_2 = var_28
else
    int64_t* rbx_1
    void* rsi_3
    
    while (true)
        rbx_1 = *arg2
        rsi_3 = &rbx_1[sx.q(arg2[1].d) * 2]
        
        if (rbx_1 != rsi_3)
            break
        
    label_1420c5d39:
        rdi = &rdi[2]
        
        if (rdi == r15_2)
            goto label_1420c5d48
    
    while (true)
        int16_t* rdx_1
        
        if (rdi[1].d == 0)
            rdx_1 = &data_142d40450
        else
            rdx_1 = *rdi
        
        int16_t* const rcx_1
        
        if (rbx_1[1].d == 0)
            rcx_1 = &data_142d40450
        else
            rcx_1 = *rbx_1
        
        if (sub_140a54510(rcx_1, rdx_1) == 0)
            break
        
        rbx_1 = &rbx_1[2]
        
        if (rbx_1 == rsi_3)
            goto label_1420c5d39
    
    sub_140596d10(arg1, rdi)
    int32_t i_3 = i_4
    rbx_2 = var_28
    
    if (i_3 != 0)
        int32_t i_1
        
        do
            int64_t rcx_6 = *rbx_2
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            rbx_2 = &rbx_2[2]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
        rbx_2 = var_28

if (rbx_2 != 0)
    sub_140a74f90(rbx_2)

return arg1
