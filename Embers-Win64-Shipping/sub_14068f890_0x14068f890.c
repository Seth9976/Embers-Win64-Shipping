// 函数: sub_14068f890
// 地址: 0x14068f890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = *(arg1 + 0x68)

if (rdx u< 0x10)
    goto label_14068f8d4

void* rcx = *(arg1 + 0x50)

if (rdx + 1 u< 0x1000)
    goto label_14068f8cf

void* r8_1 = *(rcx - 8)

if (rcx - r8_1 - 8 u<= 0x1f)
    rcx = r8_1
label_14068f8cf:
    j_sub_140a74f90(rcx)
label_14068f8d4:
    *(arg1 + 0x60) = 0
    *(arg1 + 0x68) = 0xf
    *(arg1 + 0x50) = 0
    int64_t rdx_2 = *(arg1 + 0x48)
    
    if (rdx_2 u< 0x10)
        goto label_14068f91f
    
    void* rcx_2 = *(arg1 + 0x30)
    
    if (rdx_2 + 1 u< 0x1000)
        goto label_14068f91a
    
    void* r8_2 = *(rcx_2 - 8)
    
    if (rcx_2 - r8_2 - 8 u<= 0x1f)
        rcx_2 = r8_2
    label_14068f91a:
        j_sub_140a74f90(rcx_2)
    label_14068f91f:
        *(arg1 + 0x40) = 0
        *(arg1 + 0x48) = 0xf
        *(arg1 + 0x30) = 0
        int64_t rdx_4 = *(arg1 + 0x28)
        
        if (rdx_4 u< 0x10)
            goto label_14068f96a
        
        void* rcx_4 = *(arg1 + 0x10)
        
        if (rdx_4 + 1 u< 0x1000)
            goto label_14068f965
        
        void* r8_3 = *(rcx_4 - 8)
        
        if (rcx_4 - r8_3 - 8 u<= 0x1f)
            rcx_4 = r8_3
        label_14068f965:
            j_sub_140a74f90(rcx_4)
        label_14068f96a:
            *(arg1 + 0x20) = 0
            *(arg1 + 0x28) = 0xf
            *(arg1 + 0x10) = 0
            return 

_invalid_parameter_noinfo_noreturn()
noreturn
