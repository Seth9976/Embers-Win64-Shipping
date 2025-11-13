// 函数: sub_140fb64e0
// 地址: 0x140fb64e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0

if (data_143e2b7c8 s<= 0)
label_140fb6557:
    *arg1 = 0
    arg1[1] = 0
else
    int64_t rdi_1 = 0
    
    while (true)
        int64_t* r14_1 = data_143e2b7c0
        int64_t* rax_1 = *(r14_1 + rdi_1)
        int16_t* rdx
        
        if (arg2[1].d == 0)
            rdx = &data_142d40450
        else
            rdx = *arg2
        
        int16_t* const rcx
        
        if (rax_1[1].d == 0)
            rcx = &data_142d40450
        else
            rcx = *rax_1
        
        if (sub_140a54510(rcx, rdx) == 0)
            *arg1 = *(r14_1 + rdi_1)
            void* rax_5 = *(r14_1 + rdi_1 + 8)
            arg1[1] = rax_5
            
            if (rax_5 != 0)
                *(rax_5 + 8) += 1
            
            break
        
        rbx += 1
        rdi_1 += 0x10
        
        if (rbx s>= data_143e2b7c8)
            goto label_140fb6557

return arg1
