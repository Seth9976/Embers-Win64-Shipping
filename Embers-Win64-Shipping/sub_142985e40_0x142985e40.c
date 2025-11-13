// 函数: sub_142985e40
// 地址: 0x142985e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[0x19]
int64_t i = 0

if ((arg1[0x1a] - rcx) s>> 3 != 0)
    do
        void* rbx_1 = *(rcx + (i << 3))
        
        if (rbx_1 != 0)
            int64_t* rcx_1 = *(rbx_1 + 0x38)
            
            if (rcx_1 != 0)
                (**rcx_1)(rcx_1, 1)
            
            sub_1429c3230(rbx_1 + 0x68)
            int64_t rdx_1 = *(rbx_1 + 0x60)
            
            if (rdx_1 u>= 0x10)
                void* rcx_3 = *(rbx_1 + 0x48)
                
                if (rdx_1 + 1 u>= 0x1000)
                    void* r8_1 = *(rcx_3 - 8)
                    
                    if (rcx_3 - r8_1 - 8 u> 0x1f)
                        goto label_1429860a7
                    
                    rcx_3 = r8_1
                
                j_sub_140a74f90(rcx_3)
            
            *(rbx_1 + 0x58) = 0
            *(rbx_1 + 0x60) = 0xf
            *(rbx_1 + 0x48) = 0
            j_sub_140a74f90(*(rbx_1 + 8))
            j_sub_140a74f90(rbx_1)
        
        rcx = arg1[0x19]
        i += 1
    while (i u< (arg1[0x1a] - rcx) s>> 3)

if (rcx == 0)
    goto label_142985f80

if (((arg1[0x1b] - rcx) & 0xfffffffffffffff8) u< 0x1000)
    goto label_142985f5f

void* r8_2 = *(rcx - 8)

if (rcx - r8_2 - 8 u<= 0x1f)
    rcx = r8_2
label_142985f5f:
    j_sub_140a74f90(rcx)
    __builtin_memset(&arg1[0x19], 0, 0x18)
label_142985f80:
    sub_142986400(&arg1[0x15])
    void* rcx_9 = arg1[0x11]
    
    if (rcx_9 == 0)
        goto label_142985fde
    
    if (((arg1[0x13] - rcx_9) & 0xfffffffffffffff8) u< 0x1000)
        goto label_142985fc4
    
    void* r8_3 = *(rcx_9 - 8)
    
    if (rcx_9 - r8_3 - 8 u<= 0x1f)
        rcx_9 = r8_3
    label_142985fc4:
        j_sub_140a74f90(rcx_9)
        __builtin_memset(&arg1[0x11], 0, 0x18)
    label_142985fde:
        void* rcx_12 = arg1[0xe]
        
        if (rcx_12 == 0)
            goto label_14298602e
        
        if (((arg1[0x10] - rcx_12) & 0xfffffffffffffff8) u< 0x1000)
            goto label_14298601a
        
        void* r8_4 = *(rcx_12 - 8)
        
        if (rcx_12 - r8_4 - 8 u<= 0x1f)
            rcx_12 = r8_4
        label_14298601a:
            j_sub_140a74f90(rcx_12)
            __builtin_memset(&arg1[0xe], 0, 0x18)
        label_14298602e:
            void* rcx_14 = arg1[0xb]
            
            if (rcx_14 == 0)
                goto label_142986078
            
            if (((arg1[0xd] - rcx_14) & 0xfffffffffffffff8) u< 0x1000)
                goto label_142986063
            
            void* r8_5 = *(rcx_14 - 8)
            
            if (rcx_14 - r8_5 - 8 u<= 0x1f)
                rcx_14 = r8_5
            label_142986063:
                j_sub_140a74f90(rcx_14)
                __builtin_memset(&arg1[0xb], 0, 0x18)
            label_142986078:
                sub_142986500(&arg1[5])
                j_sub_140a74f90(arg1[5])
                return sub_14297d7d0(arg1) __tailcall

label_1429860a7:
_invalid_parameter_noinfo_noreturn()
noreturn
