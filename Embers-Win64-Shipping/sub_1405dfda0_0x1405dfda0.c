// 函数: sub_1405dfda0
// 地址: 0x1405dfda0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const rcx = &data_142d40450
void* rdx

if (arg2[4] == 0)
    rdx = &data_142d40450
else
    rdx = *(arg2 + 8)
    
    if ((rdx.b & 1) != 0)
        rdx = (rdx s>> 1) + 8 + arg2

if (arg1[4] != 0)
    rcx = *(arg1 + 8)
    
    if ((rcx.b & 1) != 0)
        rcx = (rcx s>> 1) + 8 + arg1

uint64_t result = sub_140a54510(rcx, rdx)
int64_t rcx_3

if (result.d == 0 && *arg1 == *arg2)
    rcx_3 = sx.q(arg1[8])

if (result.d != 0 || *arg1 != *arg2 || rcx_3.d != arg2[8] || arg1[0xb] != arg2[0xb]
    || arg1[0xa] != arg2[0xa])
label_1405dfec9:
    result.b = 0
else
    if (rcx_3.d s> 0)
        int64_t r9_1 = 0
        void* r8_1 = nullptr
        
        do
            void* rax_1 = *(arg1 + 0x18)
            
            if ((arg1[6].b & 1) != 0)
                rax_1 = (rax_1 s>> 1) + &arg1[6]
            
            void* rdx_3 = r8_1 + rax_1
            void* rax_2 = *(arg2 + 0x18)
            
            if ((arg2[6].b & 1) != 0)
                rax_2 = (rax_2 s>> 1) + &arg2[6]
            
            void* rcx_4 = r8_1 + rax_2
            
            if (*rdx_3 != *(r8_1 + rax_2))
                goto label_1405dfec9
            
            if (*(rdx_3 + 8) != *(rcx_4 + 8))
                goto label_1405dfec9
            
            if (*(rdx_3 + 0xc) != *(rcx_4 + 0xc))
                goto label_1405dfec9
            
            if (*(rdx_3 + 0x14) != *(rcx_4 + 0x14))
                goto label_1405dfec9
            
            if (*(rdx_3 + 0x1c) != *(rcx_4 + 0x1c))
                goto label_1405dfec9
            
            r9_1 += 1
            r8_1 += 0x20
        while (r9_1 s< rcx_3)
    
    result.b = 1

return result
