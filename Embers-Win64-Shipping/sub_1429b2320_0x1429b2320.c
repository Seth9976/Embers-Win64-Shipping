// 函数: sub_1429b2320
// 地址: 0x1429b2320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[0x15]

if (rcx == 0)
    goto label_1429b238f

if (((arg1[0x17] - rcx) & 0xfffffffffffffffc) u< 0x1000)
    goto label_1429b236e

void* r8_1 = *(rcx - 8)

if (rcx - r8_1 - 8 u<= 0x1f)
    rcx = r8_1
label_1429b236e:
    j_sub_140a74f90(rcx)
    __builtin_memset(&arg1[0x15], 0, 0x18)
label_1429b238f:
    sub_1409095f0(&arg1[0x12])
    void* rcx_3 = arg1[0xc]
    
    if (rcx_3 == 0)
        goto label_1429b23e7
    
    if (((arg1[0xe] - rcx_3) & 0xfffffffffffffffc) u< 0x1000)
        goto label_1429b23cd
    
    void* r8_2 = *(rcx_3 - 8)
    
    if (rcx_3 - r8_2 - 8 u<= 0x1f)
        rcx_3 = r8_2
    label_1429b23cd:
        j_sub_140a74f90(rcx_3)
        __builtin_memset(&arg1[0xc], 0, 0x18)
    label_1429b23e7:
        sub_1429b2600(&arg1[9])
        sub_142986500(&arg1[6])
        int64_t result = j_sub_140a74f90(arg1[6])
        void* rcx_8 = arg1[3]
        
        if (rcx_8 == 0)
            goto label_1429b244e
        
        if (((arg1[5] - rcx_8) & 0xfffffffffffffff8) u< 0x1000)
            goto label_1429b243d
        
        void* r8_3 = *(rcx_8 - 8)
        
        if (rcx_8 - r8_3 - 8 u<= 0x1f)
            rcx_8 = r8_3
        label_1429b243d:
            result = j_sub_140a74f90(rcx_8)
            __builtin_memset(&arg1[3], 0, 0x18)
        label_1429b244e:
            void* rcx_11 = *arg1
            
            if (rcx_11 == 0)
                return result
            
            if (((arg1[2] - rcx_11) & 0xfffffffffffffff8) u< 0x1000)
                goto label_1429b2482
            
            void* r8_4 = *(rcx_11 - 8)
            
            if (rcx_11 - r8_4 - 8 u<= 0x1f)
                rcx_11 = r8_4
            label_1429b2482:
                result = j_sub_140a74f90(rcx_11)
                __builtin_memset(arg1, 0, 0x18)
                return result

_invalid_parameter_noinfo_noreturn()
noreturn
