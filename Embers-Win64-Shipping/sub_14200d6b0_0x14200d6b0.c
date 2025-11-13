// 函数: sub_14200d6b0
// 地址: 0x14200d6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t arg_8 = arg2
int16_t arg_10
UnDecorator::getReferenceType(&arg_10, &arg_8, 2)

if (*(arg1 + 0x58) == 0)
    uint32_t rdx_5 = zx.d(arg_10)
    
    if (rdx_5 s< *(arg1 + 0x120) && rdx_5 s< *(arg1 + 0x40)
            && (*(*(arg1 + 0x38) + zx.q(rdx_5.w) * 0x18 + 0xc) != 0 || rdx_5.w u< 0x20))
        return zx.q(arg2)
else
    void* const rcx_3
    
    if (*(arg1 + 0x188) == *(arg1 + 0x1b4))
    label_14200d751:
        rcx_3 = nullptr
    else
        void* r8_1 = arg1 + 0x1b8
        void* rcx_1 = *(r8_1 + 8)
        uint64_t r9_1 = zx.q(arg_10)
        
        if (rcx_1 != 0)
            r8_1 = rcx_1
        
        int32_t rax_1 = *(r8_1 + (((sx.q(*(arg1 + 0x1c8)) - 1) & r9_1) << 2))
        
        if (rax_1 == 0xffffffff)
        label_14200d751_1:
            rcx_3 = nullptr
        else
            int64_t r8_2 = *(arg1 + 0x180)
            
            while (true)
                int64_t rdx_4 = sx.q(rax_1) * 3
                rcx_3 = r8_2 + (rdx_4 << 2)
                
                if (*(r8_2 + (rdx_4 << 2)) == r9_1.w)
                    break
                
                rax_1 = *(rcx_3 + 4)
                
                if (rax_1 == 0xffffffff)
                    goto label_14200d751_2
            
            if (rax_1 == 0xffffffff)
            label_14200d751_2:
                rcx_3 = nullptr
    
    void* rax_2 = rcx_3 + 2
    
    if (rcx_3 == 0)
        rax_2 = nullptr
    
    if (rax_2 != 0)
        return zx.q(*rax_2)

return 0x7f
