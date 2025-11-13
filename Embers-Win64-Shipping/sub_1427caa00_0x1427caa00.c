// 函数: sub_1427caa00
// 地址: 0x1427caa00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x50)
int32_t rbp = 0
uint64_t r14 = zx.q(arg2)
uint64_t result

if (rcx == 0)
label_1427caa7c:
    result = 0
else
    int32_t rdi_1 = 0
    
    if (*((*(*rcx + 8))(rcx) + 0x10) u<= 0)
    label_1427caa7c_1:
        result = 0
    else
        int64_t* rax_4
        
        while (true)
            int64_t* rcx_1 = *(arg1 + 0x50)
            rax_4 = (*(*rcx_1 + 0x18))(rcx_1, zx.q(rdi_1))
            
            if (rax_4 != 0 && strcmp(*rax_4, "EuCoresTotalCount") == 0)
                break
            
            int64_t* rcx_3 = *(arg1 + 0x50)
            rdi_1 += 1
            
            if (rdi_1 u>= *((*(*rcx_3 + 8))(rcx_3) + 0x10))
                goto label_1427caa7c_2
        
        if (rax_4 == -8)
        label_1427caa7c_2:
            result = 0
        else
            result = zx.q(rax_4[2].d)

*(arg1 + 0x38) = result.d
*(arg1 + 0x30) = 0

if (*(arg1 + 0x3c) != r14.d && r14.d != 0)
    j_sub_140a74f90(*(arg1 + 0x40))
    *(arg1 + 0x40) = 0
    result = j_sub_140a82f30(r14)
    *(arg1 + 0x40) = result
    
    if (result != 0)
        rbp = r14.d
    else
        void* const var_18_1 = &data_1434cce10
        char const* const var_20_1 = "error allocating saved report memory"
        result = sub_1427cabe0(&data_1434cce20, 2, 4, arg1, "[MDAPI]", 
            "MetricsDiscoveryInternal::CMetricsCalculator::Reset")
    
    *(arg1 + 0x3c) = rbp
    *(arg1 + 0x48) = 0

return result
