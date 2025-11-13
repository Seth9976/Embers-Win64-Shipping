// 函数: sub_1429a88e0
// 地址: 0x1429a88e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1->__offset(0x100).q
int64_t i = 0

if ((arg1->__offset(0x108).q - rcx) s>> 3 != 0)
    do
        void* rbx_1 = *(rcx + (i << 3))
        
        if (rbx_1 != 0)
            int64_t* rcx_1 = *(rbx_1 + 0x20)
            
            if (rcx_1 != 0)
                (**rcx_1)(rcx_1, 1)
            
            sub_1429c3230(rbx_1 + 0x58)
            int64_t rdx_1 = *(rbx_1 + 0x50)
            
            if (rdx_1 u>= 0x10)
                void* rcx_3 = *(rbx_1 + 0x38)
                
                if (rdx_1 + 1 u>= 0x1000)
                    void* r8_1 = *(rcx_3 - 8)
                    
                    if (rcx_3 - r8_1 - 8 u> 0x1f)
                        goto label_1429a8b72
                    
                    rcx_3 = r8_1
                
                j_sub_140a74f90(rcx_3)
            
            *(rbx_1 + 0x48) = 0
            *(rbx_1 + 0x50) = 0xf
            *(rbx_1 + 0x38) = 0
            j_sub_140a74f90(rbx_1)
        
        rcx = arg1->__offset(0x100).q
        i += 1
    while (i u< (arg1->__offset(0x108).q - rcx) s>> 3)

sub_1429a8f10(arg1 + 0x138)
void* rcx_7 = arg1->__offset(0x100).q

if (rcx_7 == 0)
    goto label_1429a8a2a

if (((arg1->__offset(0x110).q - rcx_7) & 0xfffffffffffffff8) u< 0x1000)
    goto label_1429a8a09

void* r8_2 = *(rcx_7 - 8)

if (rcx_7 - r8_2 - 8 u<= 0x1f)
    rcx_7 = r8_2
label_1429a8a09:
    j_sub_140a74f90(rcx_7)
    __builtin_memset(arg1 + 0x100, 0, 0x18)
label_1429a8a2a:
    sub_1429a8f10(arg1 + 0xe8)
    void* rcx_10 = arg1->__offset(0xd0).q
    
    if (rcx_10 == 0)
        goto label_1429a8a88
    
    if (((arg1->__offset(0xe0).q - rcx_10) & 0xfffffffffffffff8) u< 0x1000)
        goto label_1429a8a6e
    
    void* r8_3 = *(rcx_10 - 8)
    
    if (rcx_10 - r8_3 - 8 u<= 0x1f)
        rcx_10 = r8_3
    label_1429a8a6e:
        j_sub_140a74f90(rcx_10)
        __builtin_memset(arg1 + 0xd0, 0, 0x18)
    label_1429a8a88:
        void* rcx_13 = arg1->__offset(0xb8).q
        
        if (rcx_13 == 0)
            goto label_1429a8ae1
        
        if (((arg1->__offset(0xc8).q - rcx_13) & 0xfffffffffffffff8) u< 0x1000)
            goto label_1429a8ac7
        
        void* r8_4 = *(rcx_13 - 8)
        
        if (rcx_13 - r8_4 - 8 u<= 0x1f)
            rcx_13 = r8_4
        label_1429a8ac7:
            j_sub_140a74f90(rcx_13)
            __builtin_memset(arg1 + 0xb8, 0, 0x18)
        label_1429a8ae1:
            void* rcx_15 = arg1->__offset(0x98).q
            
            if (rcx_15 == 0)
                goto label_1429a8b3a
            
            if (((arg1->__offset(0xa8).q - rcx_15) & 0xfffffffffffffff8) u< 0x1000)
                goto label_1429a8b1c
            
            void* r8_5 = *(rcx_15 - 8)
            
            if (rcx_15 - r8_5 - 8 u<= 0x1f)
                rcx_15 = r8_5
            label_1429a8b1c:
                j_sub_140a74f90(rcx_15)
                __builtin_memset(arg1 + 0x98, 0, 0x18)
            label_1429a8b3a:
                sub_142986500(arg1 + 0x70)
                j_sub_140a74f90(arg1->__offset(0x70).q)
                sub_14297d7d0(&arg1[1])
                return _Mtx_destroy_in_situ(arg1) __tailcall

label_1429a8b72:
_invalid_parameter_noinfo_noreturn()
noreturn
