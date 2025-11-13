// 函数: sub_1410205c0
// 地址: 0x1410205c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = *(arg1 + 0x10)

if (i != 0)
    int64_t r15
    int64_t var_18_1 = r15
    
    do
        void* rbx_1 = *(i + 0x80)
        r15.b = 0
        int32_t rsi_1 = -1
        void* r14_1 = *(rbx_1 + 0x10)
        void* rdi_2 = **(r14_1 + 0x6d8) + 0x1c0
        int32_t var_28
        
        if (*(rbx_1 + 0xfc) != 0)
            sub_141037220(rdi_2, rbx_1, 0x400, 0)
        else
            rsi_1 = *(rbx_1 + 0xf0)
            
            if (rsi_1 != 0x400)
                var_28 = 0
                r15.b = 1
                sub_1410129f0(rdi_2, rbx_1, rsi_1, 0x400, 0)
        
        void* rcx_2 = **(r14_1 + 0x6d8)
        *(rcx_2 + 0x3b90) += 1
        void* r14_2 = *(rdi_2 + 8)
        int32_t rdx_3 = *(r14_2 + 0x128)
        int64_t* rcx_3 = *(r14_2 + 0x30)
        
        if (rdx_3 != 0)
            (*(*rcx_3 + 0xd0))(rcx_3, rdx_3, *(r14_2 + 0x120))
            *(r14_2 + 0x128) = 0
        
        int64_t* rcx_4 = *(*(rdi_2 + 8) + 0x30)
        var_28.q = *(arg1 + 0x68)
        (*(*rcx_4 + 0x78))(rcx_4, *(rbx_1 + 0x20), *(*(arg1 + 0x10) + 0xc0), 
            *(*(arg1 + 0x28) + 0x20), var_28, zx.q(*(arg1 + 0x80)))
        sub_14105c1a0(rbx_1, rdi_2)
        sub_14105c1a0(*(arg1 + 0x28), rdi_2)
        
        if (r15.b != 0)
            var_28 = 0
            sub_1410129f0(rdi_2, rbx_1, 0x400, rsi_1, 0)
        
        i = *(*(arg1 + 0x10) + 0xe0)
        *(arg1 + 0x10) = i
    while (i != 0)

return i
