// 函数: sub_1408db3b0
// 地址: 0x1408db3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[0x83]
int32_t i_1 = arg1[0x84].d

if (i_1 != 0)
    void* rbx_1 = rcx + 8
    int32_t i
    
    do
        int64_t rcx_1 = *(rbx_1 + 0x10)
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        int64_t rcx_2 = *rbx_1
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        rbx_1 += 0x30
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = arg1[0x83]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_3 = arg1[0x81]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

return sub_140747130(arg1) __tailcall
