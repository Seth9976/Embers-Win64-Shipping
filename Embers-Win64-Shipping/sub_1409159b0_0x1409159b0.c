// 函数: sub_1409159b0
// 地址: 0x1409159b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = *arg1
void* rdi = r14
void* rbp = r14 + sx.q(arg1[1].d) * 0x28

if (r14 != rbp)
    void* rbx_1 = r14 + 0xc
    
    do
        int32_t rcx_5 = (*(rbx_1 - 4) ^ *(arg2 + 8)) | (*(rbx_1 - 8) ^ *(arg2 + 4))
            | (*(rbx_1 + 4) ^ *(arg2 + 0x10)) | (*(arg2 + 0xc) ^ *rbx_1)
        
        if (rcx_5 == 0)
            int16_t* rdx
            
            if (*(arg2 + 0x20) == rcx_5)
                rdx = &data_142d40450
            else
                rdx = *(arg2 + 0x18)
            
            int16_t* const rcx_6
            
            if (*(rbx_1 + 0x14) == 0)
                rcx_6 = &data_142d40450
            else
                rcx_6 = *(rbx_1 + 0xc)
            
            if (sub_140a54510(rcx_6, rdx) == 0)
                return (rdi - r14) s/ 0x28
        
        rdi += 0x28
        rbx_1 += 0x28
    while (rdi != rbp)

return 0xffffffff
