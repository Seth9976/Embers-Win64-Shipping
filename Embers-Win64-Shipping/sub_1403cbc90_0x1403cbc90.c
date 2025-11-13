// 函数: sub_1403cbc90
// 地址: 0x1403cbc90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r8 = *(arg1 + 0x11)

if (r8 u> 7)
    return 

void* r9_1 = *(arg1 + 8)
void* const rcx

if (r8 == 1)
    rcx = &data_1436adfe0
    
    if (r9_1 s> 0)
    label_1403cbcd8:
        void* r9_2 = r9_1 + arg2
        
        do
            *arg2 = *(rcx + zx.q(*arg2))
            arg2 = &arg2[1]
        while (arg2 u< r9_2)
else if (r8 == 4)
    rcx = &data_1436ae1e0
    
    if (r9_1 s> 0)
        goto label_1403cbcd8
else if (r8 == 2)
    rcx = &data_1436ae0e0
    
    if (r9_1 s> 0)
        goto label_1403cbcd8
