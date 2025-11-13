// 函数: sub_141be6240
// 地址: 0x141be6240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0

if (*(arg1 + 0x490) != 0)
    int64_t* rcx = *(arg1 + 0x488)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(arg1 + 0x490) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg1 + 0x488)
        
        *(arg1 + 0x480) = (*(*rcx_1 + 0x48))(rcx_1)

int32_t r14 = *(arg1 + 0x480)
sub_140e99960(arg1 + 0x480, arg2)

if (arg2[4] != 0)
    int64_t* rcx_3 = *(arg2 + 8)
    
    if (rcx_3 != 0 && (*(*rcx_3 + 0x28))(rcx_3) != 0)
        int64_t* rcx_4
        
        if (arg2[4] == 0)
            rcx_4 = nullptr
        else
            rcx_4 = *(arg2 + 8)
        
        *arg2 = (*(*rcx_4 + 0x48))(rcx_4)

int32_t result = *arg2

if (r14 != result)
    if (result == 0)
        return sub_141b986a0(arg1)
    
    if (r14 == 3)
        if (*(arg1 + 0x638) - *(arg1 + 0x664) != 1)
            return sub_141b986a0(arg1)
        
        void* r9_1 = arg1 + 0x640
        int32_t var_18_1 = 0xffffffff
        int32_t r10_1 = *(r9_1 + 0x18)
        int32_t r8_1 = 0
        int32_t var_14_1 = 0
        
        if (r10_1 != 0)
            void* rax_11 = *(r9_1 + 0x10)
            
            if (rax_11 != 0)
                r9_1 = rax_11
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r10_1 - 1)
            int32_t rcx_5 = *r9_1
            int32_t var_14_3
            
            if (rcx_5 != 0)
            label_141be6365:
                int32_t rax_18 = neg.d(rcx_5) & rcx_5
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_18)
                int32_t rax_19
                
                if (rax_18 == 0)
                    rax_19 = 0x20
                else
                    rax_19 = 0x1f - temp0_2
                
                int32_t var_14_2 = r8_1 - rax_19 + 0x1f
                
                if (r8_1 - rax_19 + 0x1f s> r10_1)
                    var_14_3 = r10_1
            else
                while (true)
                    int64_t rcx_6 = sx.q(rbx)
                    r8_1 += 0x20
                    rbx += 1
                    
                    if (rcx_6.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rcx_5 = *(r9_1 + (rcx_6 << 2) + 4)
                    int32_t var_18_2 = 0xffffffff
                    
                    if (rcx_5 != 0)
                        goto label_141be6365
                
                var_14_3 = r10_1
        
        return sub_141be61f0(arg1, **(arg1 + 0x630), 3)

return result
