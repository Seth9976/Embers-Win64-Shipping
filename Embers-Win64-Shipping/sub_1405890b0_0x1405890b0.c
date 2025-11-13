// 函数: sub_1405890b0
// 地址: 0x1405890b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x70) & 2) == 0)
    if (arg2 == 0xffffffff)
        return 0
    
    int64_t rbp_1 = **(arg1 + 0x40)
    int64_t rdi_2 = sx.q(**(arg1 + 0x58)) + rbp_1
    
    if (rbp_1 != 0 && rbp_1 u< rdi_2)
        *std::streambuf::_Pninc() = arg2.b
        *(arg1 + 0x68) = rbp_1 + 1
        return zx.q(arg2)
    
    void* r15_1 = **(arg1 + 0x18)
    void* rdi_3 = rdi_2 - r15_1
    
    if (rbp_1 == 0)
        rdi_3 = nullptr
    
    int64_t rbp_2
    
    if (rdi_3 u< 0x20)
        rbp_2 = 0x20
    label_140589174:
        void* rax_8 = sub_14058aea0(arg1 + 0x74, rbp_2)
        memcpy(rax_8, r15_1, rdi_3.d)
        void* rdx_2 = rdi_3 + rax_8
        *(arg1 + 0x68) = rdx_2 + 1
        **(arg1 + 0x20) = rax_8
        **(arg1 + 0x40) = rdx_2
        **(arg1 + 0x58) = rax_8.d - rdx_2.d + rbp_2.d
        
        if ((*(arg1 + 0x70) & 4) == 0)
            void* r9_3 = **(arg1 + 0x38) - r15_1 + rax_8
            int32_t r10_2 = (*(arg1 + 0x68)).d - r9_3.d
            **(arg1 + 0x18) = rax_8
            **(arg1 + 0x38) = r9_3
            **(arg1 + 0x50) = r10_2
        else
            **(arg1 + 0x18) = rax_8
            **(arg1 + 0x38) = 0
            **(arg1 + 0x50) = rax_8.d
        
        int32_t rax_17 = *(arg1 + 0x70)
        
        if ((rax_17.b & 1) != 0)
            std::allocator<char>::deallocate(arg1 + 0x74, r15_1, rdi_3)
            rax_17 = *(arg1 + 0x70)
        
        *(arg1 + 0x70) = rax_17 | 1
        *std::streambuf::_Pninc() = arg2.b
        return zx.q(arg2)
    
    if (rdi_3 u< 0x3fffffff)
        rbp_2 = rdi_3 * 2
        goto label_140589174
    
    rbp_2 = 0x7fffffff
    
    if (rdi_3 u< 0x7fffffff)
        goto label_140589174

return 0xffffffff
