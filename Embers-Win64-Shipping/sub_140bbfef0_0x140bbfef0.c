// 函数: sub_140bbfef0
// 地址: 0x140bbfef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x10)
void* rdi = arg1
int32_t i_1 = *(arg1 + 0x18)

if (rcx != 0)
    rdi = rcx

if (i_1 != 0)
    int32_t i
    
    do
        int64_t* rbx_1 = *rdi
        
        if (rbx_1 != 0)
            sub_140745b20(rbx_1)
            j_sub_140a74f90(rbx_1)
        
        rdi += 8
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *(arg1 + 0x10)

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall
