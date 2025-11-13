// 函数: sub_141412b90
// 地址: 0x141412b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg1[1].d
int64_t* rdi = *arg1

if (i_1 != 0)
    int32_t i
    
    do
        void* rbx_1 = *rdi
        
        if (rbx_1 != 0)
            int64_t rcx = *(rbx_1 + 0x68)
            
            if (rcx != 0)
                sub_140a74f90(rcx)
            
            j_sub_140a74f90(rbx_1)
        
        rdi = &rdi[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

arg1[1].d = 0

if (*(arg1 + 0xc) != 0)
    sub_140638c50(arg1, 0)

int64_t rcx_3 = *arg1

if (rcx_3 == 0)
    return 

return sub_140a74f90(rcx_3) __tailcall
