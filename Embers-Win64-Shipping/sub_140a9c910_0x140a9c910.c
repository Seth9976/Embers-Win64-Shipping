// 函数: sub_140a9c910
// 地址: 0x140a9c910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_28
sub_140a7c300(arg1[1], &var_28, arg3)
int64_t* rdi = var_28
int32_t i_4
int32_t i_2 = i_4
void* rbp_2 = &rdi[sx.q(i_2) * 2]

if (rdi == rbp_2)
label_140a9c9c1:
    *arg2 = 0
    arg2[1] = 0
    
    if (i_2 != 0)
        int32_t i
        
        do
            int64_t rcx_2 = *rdi
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            rdi = &rdi[2]
            i = i_2
            i_2 -= 1
        while (i != 1)
        rdi = var_28
    
    if (rdi != 0)
        sub_140a74f90(rdi)
else
    int64_t* rbx
    void* rsi_3
    
    while (true)
        int64_t* rax_1 = *arg1
        rbx = *rax_1
        rsi_3 = &rbx[sx.q(rax_1[1].d) * 2]
        
        if (rbx != rsi_3)
            break
        
    label_140a9c9ac:
        rdi = &rdi[2]
        
        if (rdi == rbp_2)
            i_2 = i_4
            rdi = var_28
            goto label_140a9c9c1
    
    while (true)
        int16_t* rdx_1
        
        if (rdi[1].d == 0)
            rdx_1 = &data_142d40450
        else
            rdx_1 = *rdi
        
        int16_t* const rcx_1
        
        if (rbx[1].d == 0)
            rcx_1 = &data_142d40450
        else
            rcx_1 = *rbx
        
        if (sub_140a54510(rcx_1, rdx_1) == 0)
            break
        
        rbx = &rbx[2]
        
        if (rbx == rsi_3)
            goto label_140a9c9ac
    
    sub_140596d10(arg2, rdi)
    int32_t i_3 = i_4
    int64_t* rbx_1 = var_28
    
    if (i_3 != 0)
        int32_t i_1
        
        do
            int64_t rcx_5 = *rbx_1
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            rbx_1 = &rbx_1[2]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
        rbx_1 = var_28
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)

return arg2
