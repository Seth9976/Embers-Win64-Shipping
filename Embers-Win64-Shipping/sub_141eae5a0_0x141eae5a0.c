// 函数: sub_141eae5a0
// 地址: 0x141eae5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    float zmm2 = *(arg1 + 0x14c)
    int32_t zmm1 = *(arg1 + 0x34)
    
    if (not(zmm2 <= 0f))
        zmm1 = _mm_min_ss(zmm1, zmm2)
    
    *(arg1 + 0x14c) = zmm1
    void* rcx_2 = arg1[0x2a]
    
    if (rcx_2 != 0 && (*(rcx_2 + 0x3c) & 1) == 0)
        int64_t* r9_1 = arg1[0x18]
        
        if (r9_1 == 0)
            sub_141eae3e0(rcx_2, 0)
        else
            (*(*r9_1 + 0x7e0))(r9_1, rcx_2, 0)
else
    void* rdi_1 = arg1[0x2a]
    
    if (rdi_1 != 0)
        int32_t rax_1 = *(rdi_1 + 0x3c)
        
        if ((rax_1.b & 1) == 0)
            int64_t* rcx = arg1[0x18]
            
            if (rcx == 0)
                int64_t* rcx_1 = *(rdi_1 + 0x30)
                
                if (rcx_1[5] != 0)
                    (*(*rcx_1 + 0x288))(rcx_1, 1)
                    *(*(rdi_1 + 0x30) + 0x28) = 0
                    rax_1 = *(rdi_1 + 0x3c)
                
                *(rdi_1 + 0x68) = 0
                *(rdi_1 + 0x3c) = rax_1 | 1
                *(rdi_1 + 0x70) = 0
            else
                int64_t r8
                r8.b = 1
                (*(*rcx + 0x7e0))(rcx, rdi_1, r8)
    
    arg1[0x2a] = 0
    *(arg1 + 0x14c) = 0

return sub_142486710(arg1, arg2) __tailcall
