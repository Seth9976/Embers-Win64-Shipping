// 函数: sub_1418c2480
// 地址: 0x1418c2480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2
int64_t r9 = sx.q(arg2)
void* rax_1

if (r9.d u> 0xb8)
    void* const rcx_2
    
    if (*(arg1 + 0x14e8) == *(arg1 + 0x1514))
    label_1418c2520:
        rcx_2 = nullptr
    else
        void* rcx = *(arg1 + 0x1520)
        void* r8_1 = arg1 + 0x1518
        
        if (rcx != 0)
            r8_1 = rcx
        
        int32_t rax_3 = *(r8_1 + (((sx.q(*(arg1 + 0x1528)) - 1) & r9) << 2))
        
        if (rax_3 == 0xffffffff)
        label_1418c2520_1:
            rcx_2 = nullptr
        else
            int64_t r8_2 = *(arg1 + 0x14e0)
            
            while (true)
                int64_t rdx_3 = sx.q(rax_3) * 3
                rcx_2 = r8_2 + (rdx_3 << 3)
                
                if (*(r8_2 + (rdx_3 << 3)) == r9.d)
                    break
                
                rax_3 = *(rcx_2 + 0x10)
                
                if (rax_3 == 0xffffffff)
                    goto label_1418c2520_2
            
            if (rax_3 == 0xffffffff)
            label_1418c2520_2:
                rcx_2 = nullptr
    
    rax_1 = rcx_2 + 4
    
    if (rcx_2 == 0)
        rax_1 = nullptr
    
    if (rax_1 == 0)
        int64_t* rax_4 = sub_1418b7c60(arg1 + 0x14e0, &arg_10)
        uint64_t rdx_5 = zx.q(arg_10)
        *rax_4 = 0
        rax_4[1].d = 0
        data_143efb6b0(*(arg1 + 0x7c0), rdx_5, rax_4)
        int64_t rax_5
        
        if (*rax_4 == 0 && *(rax_4 + 4) == 0)
            rax_5.b = 0
            return rax_5
        
        rax_5.b = 1
        return rax_5
    
    if (*rax_1 == 0 && *(rax_1 + 4) == 0)
        rax_1.b = 0
        return rax_1
else
    rax_1 = (r9 + 0x104) * 3
    
    if (*(arg1 + (rax_1 << 2)) == 0 && *(arg1 + (rax_1 << 2) + 4) == 0)
        rax_1.b = 0
        return rax_1

rax_1.b = 1
return rax_1
