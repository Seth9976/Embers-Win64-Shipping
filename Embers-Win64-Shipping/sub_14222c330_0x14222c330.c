// 函数: sub_14222c330
// 地址: 0x14222c330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1417cbaf0()
int32_t i = 0

if (*(arg1 + 0x60) s> 0)
    int64_t r14_1 = 0
    
    do
        void* rdi_2 = *(arg1 + 0x58) + r14_1
        int64_t r15_1 = *(rdi_2 + 0xa0)
        
        if (r15_1 != 0)
            int64_t rsi_1 = sx.q(data_143f52608)
            int32_t rax_1 = (rsi_1 + 1).d
            bool cond:1_1 = rax_1 s<= data_143f5260c
            data_143f52608 = rax_1
            
            if (not(cond:1_1))
                sub_1405a4d70(&data_143f52600)
            
            *(data_143f52600 + (rsi_1 << 3)) = r15_1
            sub_1417cbf50(data_143ef85a8, *(rdi_2 + 0xa0))
            *(rdi_2 + 0xa0) = 0
        
        int64_t r15_2 = *(rdi_2 + 0xa8)
        
        if (r15_2 != 0)
            int64_t rsi_2 = sx.q(data_143f52608)
            int32_t rax_3 = (rsi_2 + 1).d
            bool cond:2_1 = rax_3 s<= data_143f5260c
            data_143f52608 = rax_3
            
            if (not(cond:2_1))
                sub_1405a4d70(&data_143f52600)
            
            *(data_143f52600 + (rsi_2 << 3)) = r15_2
            sub_1417cbf50(data_143ef85a8, *(rdi_2 + 0xa8))
            *(rdi_2 + 0xa8) = 0
        
        i += 1
        r14_1 += 0xb0
    while (i s< *(arg1 + 0x60))

int32_t i_1 = 0

if (*(arg1 + 0xd8) s> 0)
    int64_t* rsi_3 = nullptr
    
    do
        int64_t rdi_3 = sx.q(data_143f52618)
        int64_t r14_2 = *(arg1 + 0xd0)
        int32_t rax_5 = (rdi_3 + 1).d
        bool cond:3_1 = rax_5 s<= data_143f5261c
        data_143f52618 = rax_5
        
        if (not(cond:3_1))
            sub_1405a4d70(&data_143f52610)
        
        *(data_143f52610 + (rdi_3 << 3)) = *(rsi_3 + r14_2)
        sub_1417cbf50(data_143ef85a8, *(rsi_3 + *(arg1 + 0xd0)))
        i_1 += 1
        *(rsi_3 + *(arg1 + 0xd0)) = 0
        rsi_3 = &rsi_3[1]
    while (i_1 s< *(arg1 + 0xd8))

sub_1417cc630()
bool cond:0 = *(arg1 + 0xdc) == 0
*(arg1 + 0xd8) = 0

if (not(cond:0))
    sub_1405c5570(arg1 + 0xd0, 0)

*(arg1 + 0x8a) &= 0xfe
return sub_1422499d0(arg1 + 0x28) __tailcall
