// 函数: sub_14297bb70
// 地址: 0x14297bb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = *arg1

if (*(rdx + 0x19) != 0)
    *arg1 = rdx[2]
    return arg1

void* rcx = *rdx

if (*(rcx + 0x19) == 0)
    void* rax_4 = *(rcx + 0x10)
    
    while (*(rax_4 + 0x19) == 0)
        rcx = rax_4
        rax_4 = *(rax_4 + 0x10)
    
    *arg1 = rcx
else
    int64_t* rax_2 = rdx[1]
    
    if (*(rax_2 + 0x19) == 0)
        int64_t* rcx_1 = rdx
        int64_t* r9_1 = rdx
        
        do
            rdx = r9_1
            
            if (rcx_1 != *rax_2)
                break
            
            rcx_1 = rax_2
            *arg1 = rax_2
            rax_2 = rax_2[1]
            r9_1 = rcx_1
            rdx = rcx_1
        while (*(rax_2 + 0x19) == 0)
    
    if (*(rdx + 0x19) == 0)
        *arg1 = rax_2

return arg1
