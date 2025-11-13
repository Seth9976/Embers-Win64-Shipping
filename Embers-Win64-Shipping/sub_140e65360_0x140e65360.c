// 函数: sub_140e65360
// 地址: 0x140e65360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg3)
sub_140d947e0(arg2)
int32_t* rcx_4

if (*(arg1 + 0x138) == *(arg1 + 0x164))
label_140e653f1:
    rcx_4 = nullptr
else
    void* r10_1 = arg1 + 0x168
    void* r9 = *(r10_1 + 8)
    
    if (r9 != 0)
        r10_1 = r9
    
    int32_t rax_1 = *(r10_1 + (((sx.q(*(arg1 + 0x178)) - 1) & rdi) << 2))
    
    if (rax_1 == 0xffffffff)
    label_140e653f1_1:
        rcx_4 = nullptr
    else
        while (true)
            rcx_4 = sx.q(rax_1) * 0x30 + *(arg1 + 0x130)
            
            if (*rcx_4 == rdi.d)
                break
            
            rax_1 = rcx_4[0xa]
            
            if (rax_1 == 0xffffffff)
                goto label_140e653f1_2
        
        if (rax_1 == 0xffffffff)
        label_140e653f1_2:
            rcx_4 = nullptr

void* r10_2 = &rcx_4[2]

if (rcx_4 == 0)
    r10_2 = nullptr

if (r10_2 != 0 && sub_140dbf070(r10_2, arg2, arg4, arg6, arg5, data_1439ae51c) == 1)
    sub_140e85470(arg1, rdi.d)

return arg2
