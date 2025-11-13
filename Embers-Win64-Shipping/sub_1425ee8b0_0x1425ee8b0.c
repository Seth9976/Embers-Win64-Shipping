// 函数: sub_1425ee8b0
// 地址: 0x1425ee8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f70b29 == 0)
    sub_1425f1460()

int64_t* i = data_143f70b68

for (void* rbp = &i[sx.q(data_143f70b70)]; i != rbp; i = &i[1])
    int64_t* rcx = *i
    int64_t* var_28
    int64_t* rax_2 = (*(*rcx + 0x10))(rcx, &var_28)
    int64_t* rsi_1 = *rax_2
    int64_t* rbx_1 = rsi_1
    void* rdi_3 = &rsi_1[sx.q(rax_2[1].d) * 2]
    int32_t rbx_2
    
    if (rsi_1 == rdi_3)
    label_1425ee95b:
        rbx_2 = -1
    else
        while (true)
            int16_t* rdx_2
            
            if (arg1[1].d == 0)
                rdx_2 = &data_142d40450
            else
                rdx_2 = *arg1
            
            int16_t* const rcx_1
            
            if (rbx_1[1].d == 0)
                rcx_1 = &data_142d40450
            else
                rcx_1 = *rbx_1
            
            if (sub_140a54510(rcx_1, rdx_2) == 0)
                rbx_2 = ((rbx_1 - rsi_1) s>> 4).d
                break
            
            rbx_1 = &rbx_1[2]
            
            if (rbx_1 == rdi_3)
                goto label_1425ee95b
    
    int32_t j_2
    int32_t j_1 = j_2
    int64_t* rdi_4 = var_28
    
    if (j_1 != 0)
        int32_t j
        
        do
            int64_t rcx_2 = *rdi_4
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            rdi_4 = &rdi_4[2]
            j = j_1
            j_1 -= 1
        while (j != 1)
        rdi_4 = var_28
    
    if (rdi_4 != 0)
        sub_140a74f90(rdi_4)
    
    if (rbx_2 != 0xffffffff)
        return *i

return 0
