// 函数: sub_142876310
// 地址: 0x142876310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t i = 0
int32_t r12 = 2

if (arg2.b s< 0)
    r12 = 1
else if (test_bit(arg2, 8))
    r12 = 0

int64_t rbp = *(*(arg1 + 0x488) + 0x1f0)

if (rbp != -0x1a)
    int32_t* rdi_1 = arg3 + 0x18
    void* const rsi_1 = &data_1434e71e4
    
    do
        if (rdi_1[-2] != 0)
            int32_t rdx
            
            if (i u>= 0x1a)
                void arg_8
                int16_t* rax_1 = sub_142855f40(*(arg1 + 0x488) + 0x1e8, r12, *rdi_1, &arg_8)
                
                if (rax_1 == 0)
                    return 0
                
                rdx = *(rax_1 + 8)
            else
                rdx = *rsi_1
            
            if ((arg2 & rdx) == 0)
                return 0
            
            bool cond:0_1
            
            if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) == 0)
                cond:0_1 = (rdx.b & 2) != 0
            else
                cond:0_1 = (rdx.b & 1) != 0
            
            if (cond:0_1)
                return 0
        
        i += 1
        rsi_1 += 0x38
        rdi_1 = &rdi_1[0xa]
    while (i u< rbp + 0x1a)

return 1
