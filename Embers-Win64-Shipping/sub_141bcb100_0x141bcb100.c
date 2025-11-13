// 函数: sub_141bcb100
// 地址: 0x141bcb100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx = 0

if (*(arg1 - 0x68) != 0)
    int64_t* rcx = *(arg1 - 0x70)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx).b != 0)
        int64_t* rcx_1
        
        if (*(arg1 - 0x68) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg1 - 0x70)
        
        *(arg1 - 0x78) = (*(*rcx_1 + 0x48))(rcx_1)

if (*(arg1 - 0x78) == 0 || *(arg1 + 0x210) == 0)
    return 

int64_t* rcx_2 = *(arg1 + 0x208)

if (rcx_2 == 0 || (*(*rcx_2 + 0x28))(rcx_2).b == 0)
    return 

if (*(arg1 + 0x140) - *(arg1 + 0x16c) s> 0)
    void* r9_1 = arg1 + 0x148
    int32_t var_18_1 = 0xffffffff
    int32_t r10_1 = *(r9_1 + 0x18)
    int32_t r8_1 = 0
    int32_t var_14_1 = 0
    
    if (r10_1 != 0)
        void* rax_6 = *(r9_1 + 0x10)
        
        if (rax_6 != 0)
            r9_1 = rax_6
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r10_1 - 1)
        int32_t rcx_3 = *r9_1
        int32_t var_14_3
        
        if (rcx_3 != 0)
        label_141bcb1f2:
            int32_t rax_13 = neg.d(rcx_3) & rcx_3
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_13)
            int32_t rax_14
            
            if (rax_13 == 0)
                rax_14 = 0x20
            else
                rax_14 = 0x1f - temp0_2
            
            int32_t var_14_2 = r8_1 - rax_14 + 0x1f
            
            if (r8_1 - rax_14 + 0x1f s> r10_1)
                var_14_3 = r10_1
        else
            while (true)
                int64_t rcx_4 = sx.q(rbx.d)
                r8_1 += 0x20
                rbx = zx.q(rbx.d + 1)
                
                if (rcx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rcx_3 = *(r9_1 + (rcx_4 << 2) + 4)
                int32_t var_18_2 = 0xffffffff
                
                if (rcx_3 != 0)
                    goto label_141bcb1f2
            
            var_14_3 = r10_1
    
    rbx = **(arg1 + 0x138)

sub_140efc720(arg1 + 0x208, rbx, zx.q(arg2))
