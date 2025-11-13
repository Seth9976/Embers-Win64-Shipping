// 函数: sub_141993d50
// 地址: 0x141993d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (arg1[1].d s> 0)
    int64_t* rdi_1 = nullptr
    
    do
        int64_t* rcx = *(rdi_1 + *arg1)
        
        if (rcx != 0)
            (**rcx)(rcx, 1)
        
        i += 1
        rdi_1 = &rdi_1[1]
    while (i s< arg1[1].d)

int64_t rcx_1 = *arg1

if (rcx_1 == 0)
    return 

return sub_140a74f90(rcx_1) __tailcall
