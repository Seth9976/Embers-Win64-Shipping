// 函数: sub_142815b90
// 地址: 0x142815b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx
int64_t rdx

if (arg3 == 1)
    rcx = *(arg1 + 8)
    rdx = 0
    int32_t r8 = 0
    int32_t r9_1 = *(rcx + 0x58)
    
    if (r9_1 != 0)
        int64_t r10_1 = *(rcx + 0x50)
        
        while (*(r10_1 + (zx.q(r8) << 3)) != arg2)
            r8 += 1
            
            if (r8 u>= r9_1)
                goto label_142815c47
        
        int32_t r8_1 = *(r10_1 + (zx.q(r8) << 3) + 4)
        
        if (r8_1 != 0xffffffff)
            rdx = zx.q(r8_1) + *(rcx + 0x18)
        
    label_142815c2b:
        void* const result = sub_142815640(rcx, rdx)
        
        if (result != 0)
            return result
else if (arg3 == 2)
    void* r10_2 = *(arg1 + 0x10)
    rdx = 0
    int32_t rcx_1 = 0
    int32_t r8_2 = *(r10_2 + 0x58)
    
    if (r8_2 != 0)
        int64_t r9_2 = *(r10_2 + 0x50)
        
        while (*(r9_2 + (zx.q(rcx_1) << 3)) != arg2)
            rcx_1 += 1
            
            if (rcx_1 u>= r8_2)
                goto label_142815c47
        
        int32_t rcx_2 = *(r9_2 + (zx.q(rcx_1) << 3) + 4)
        
        if (rcx_2 != 0xffffffff)
            rdx = zx.q(rcx_2) + *(r10_2 + 0x18)
        
        rcx = r10_2
        goto label_142815c2b
label_142815c47:
sub_142817350(arg1, 0x20, 
    "PxBinaryConverter: Missing concreteType %d metadata! serialized a class without dumping metadata. "
"Please check the metadata.", 
    zx.q(arg2))
return nullptr
