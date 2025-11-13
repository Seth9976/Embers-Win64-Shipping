// 函数: sub_1408c4870
// 地址: 0x1408c4870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = arg4

if (*(arg1 + 0x2d0) != 0)
    *(arg1 + 0x2d0) = 0
    return 

if (*(arg1 + 0x2a8) == 0)
    *(arg1 + 0x2e) &= 0xfb
    
    if (sub_140db3510(arg1 + 0x18) != 0)
        sub_140dc03a0(arg1 + 0x18, *(arg1 + 0x2e))

void* rcx_2 = *(arg1 + 0x2b0)
int64_t* rdi = nullptr

if (rcx_2 == 0)
label_1408c4985:
    *(arg1 + 0x2e) &= 0xfb
    
    if (sub_140db3510(arg1 + 0x18) != 0)
        sub_140dc03a0(arg1 + 0x18, *(arg1 + 0x2e))
    
    *(arg1 + 0x2a8) = 0
    
    if (*(arg1 + 0x2c8) != 0)
        int64_t* rcx_11 = *(arg1 + 0x2c0)
        
        if (rcx_11 != 0 && (*(*rcx_11 + 0x28))(rcx_11) != 0)
            if (*(arg1 + 0x2c8) != 0)
                rdi = *(arg1 + 0x2c0)
            
            (*(*rdi + 0x48))(rdi)
else
    if (*(rcx_2 + 0x2a8) != 0)
        zmm6 = sub_1408be620(rcx_2, zmm6[0], arg2)
    
    void*** rax_3 = data_143ceb928
    
    if (rax_3 == 0)
        void*** rax_2 = j_sub_140a82f30(zx.q((&rax_3[6]).d))
        
        if (rax_2 == 0)
            rax_3 = nullptr
        else
            rax_3, zmm6 = sub_1408b9380(rax_2)
        
        data_143ceb928 = rax_3
    
    void* rdx_1 = *(arg1 + 0x2b0)
    
    if (data_143ceb920 != 0)
        sub_1408c10c0(rax_3, rdx_1, zmm6, arg2)
    else
        sub_1408c4230(rax_3, rdx_1, zmm6, arg2)
    
    sub_1408c4d10(*(arg1 + 0x2b0), arg2)
    void* rcx_7 = *(arg1 + 0x2b0)
    
    if (rcx_7 == 0)
        goto label_1408c4985
    
    if (sub_1408c0320(rcx_7) != 0 && sub_1408c0250(*(arg1 + 0x2b0)) != 0)
        goto label_1408c4985
