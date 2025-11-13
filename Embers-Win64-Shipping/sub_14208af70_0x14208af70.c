// 函数: sub_14208af70
// 地址: 0x14208af70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
int64_t arg_10 = rbp
int32_t i = 0

if (*(arg1 + 0x268) s> 0)
    int64_t* rdi_1 = nullptr
    
    do
        int64_t var_18
        int64_t* rax_2 = sub_140b63b70(*(*(rdi_1 + *(arg1 + 0x260)) + 0x28) + 0x40, &var_18)
        int16_t* rdx_1
        
        if (arg2[1].d == 0)
            rdx_1 = &data_142d40450
        else
            rdx_1 = *arg2
        
        int16_t* const rcx_3
        
        if (rax_2[1].d == 0)
            rcx_3 = &data_142d40450
        else
            rcx_3 = *rax_2
        
        int32_t rax_3 = sub_140a54510(rcx_3, rdx_1)
        int64_t rcx_4 = var_18
        rbp.b = rax_3 == 0
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        if (rbp.b != 0)
            return *(*(arg1 + 0x260) + (sx.q(i) << 3))
        
        i += 1
        rdi_1 = &rdi_1[1]
    while (i s< *(arg1 + 0x268))

return 0
