// 函数: sub_14060d610
// 地址: 0x14060d610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x20)

if (rcx != 0)
    (**rcx)(rcx, 1)

*(arg1 + 0x20) = 0
*(arg1 + 0x70) = 0
void* rcx_1 = *(arg1 + 0x90)

if (rcx_1 == 0)
    goto label_14060d693

if (((*(arg1 + 0xa0) - rcx_1) & 0xfffffffffffffff8) u< 0x1000)
    goto label_14060d679

void* r8_1 = *(rcx_1 - 8)

if (rcx_1 - r8_1 - 8 u<= 0x1f)
    rcx_1 = r8_1
label_14060d679:
    j_sub_140a74f90(rcx_1)
    __builtin_memset(arg1 + 0x90, 0, 0x18)
label_14060d693:
    void* rcx_4 = *(arg1 + 0x78)
    
    if (rcx_4 == 0)
        goto label_14060d6ee
    
    if (((*(arg1 + 0x88) - rcx_4) & 0xfffffffffffffff8) u< 0x1000)
        goto label_14060d6cb
    
    void* r8_2 = *(rcx_4 - 8)
    
    if (rcx_4 - r8_2 - 8 u<= 0x1f)
        rcx_4 = r8_2
    label_14060d6cb:
        j_sub_140a74f90(rcx_4)
        __builtin_memset(arg1 + 0x78, 0, 0x18)
    label_14060d6ee:
        void* rdi = *(arg1 + 0x40)
        *(arg1 + 0x28) = &data_142d637d8
        
        if (rdi != 0)
            int64_t rcx_5 = *(rdi + 8)
            
            if (rcx_5 != 0)
                j_sub_140a74f90(rcx_5)
            
            *(rdi + 8) = 0
            j_sub_140a74f90(rdi)
        
        *(arg1 + 0x40) = 0
        return sub_14060d450(arg1 + 0x28) __tailcall

_invalid_parameter_noinfo_noreturn()
noreturn
