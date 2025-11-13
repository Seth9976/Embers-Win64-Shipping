// 函数: sub_1429b4810
// 地址: 0x1429b4810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1->__offset(0x138).q
int64_t i = 0

if ((arg1->__offset(0x140).q - rcx) s>> 3 != 0)
    do
        void* rbx_1 = *(rcx + (i << 3))
        
        if (rbx_1 != 0)
            int64_t* rcx_1 = *(rbx_1 + 0x28)
            
            if (rcx_1 != 0)
                (**rcx_1)(rcx_1, 1)
            
            sub_1429c3230(rbx_1 + 0x60)
            int64_t rdx_1 = *(rbx_1 + 0x58)
            
            if (rdx_1 u>= 0x10)
                void* rcx_3 = *(rbx_1 + 0x40)
                
                if (rdx_1 + 1 u>= 0x1000)
                    void* r8_1 = *(rcx_3 - 8)
                    
                    if (rcx_3 - r8_1 - 8 u> 0x1f)
                        goto label_1429b4b99
                    
                    rcx_3 = r8_1
                
                j_sub_140a74f90(rcx_3)
            
            *(rbx_1 + 0x50) = 0
            *(rbx_1 + 0x58) = 0xf
            *(rbx_1 + 0x40) = 0
            j_sub_140a74f90(rbx_1)
        
        rcx = arg1->__offset(0x138).q
        i += 1
    while (i u< (arg1->__offset(0x140).q - rcx) s>> 3)

int64_t i_1 = 0

if ((arg1->__offset(0x128).q - arg1->__offset(0x120).q) s>> 3 != 0)
    do
        j_sub_140a74f90(*(arg1->__offset(0x120).q + (i_1 << 3)))
        i_1 += 1
    while (i_1 u< (arg1->__offset(0x128).q - arg1->__offset(0x120).q) s>> 3)

int64_t* rcx_8 = arg1->__offset(0x1c8).q

if (rcx_8 != 0)
    (**rcx_8)(rcx_8, 1)

if (arg1->__offset(0x15c).b != 0)
    int64_t* rcx_9 = arg1->__offset(0x160).q
    
    if (rcx_9 != 0)
        (**rcx_9)(rcx_9, 1)

j_sub_140a74f90(arg1->__offset(0x1c0).q)
j_sub_140a74f90(arg1->__offset(0x198).q)
j_sub_140a74f90(arg1->__offset(0x188).q)
j_sub_140a74f90(arg1->__offset(0x178).q)
void* rcx_14 = arg1->__offset(0x138).q

if (rcx_14 == 0)
    goto label_1429b49fd

if (((arg1->__offset(0x148).q - rcx_14) & 0xfffffffffffffff8) u< 0x1000)
    goto label_1429b49e3

void* r8_2 = *(rcx_14 - 8)

if (rcx_14 - r8_2 - 8 u<= 0x1f)
    rcx_14 = r8_2
label_1429b49e3:
    j_sub_140a74f90(rcx_14)
    __builtin_memset(arg1 + 0x138, 0, 0x18)
label_1429b49fd:
    void* rcx_17 = arg1->__offset(0x120).q
    
    if (rcx_17 == 0)
        goto label_1429b4a56
    
    if (((arg1->__offset(0x130).q - rcx_17) & 0xfffffffffffffff8) u< 0x1000)
        goto label_1429b4a3c
    
    void* r8_3 = *(rcx_17 - 8)
    
    if (rcx_17 - r8_3 - 8 u<= 0x1f)
        rcx_17 = r8_3
    label_1429b4a3c:
        j_sub_140a74f90(rcx_17)
        __builtin_memset(arg1 + 0x120, 0, 0x18)
    label_1429b4a56:
        void* rcx_19 = arg1->__offset(0x108).q
        
        if (rcx_19 == 0)
            goto label_1429b4aaf
        
        if (((arg1->__offset(0x118).q - rcx_19) & 0xfffffffffffffff8) u< 0x1000)
            goto label_1429b4a95
        
        void* r8_4 = *(rcx_19 - 8)
        
        if (rcx_19 - r8_4 - 8 u<= 0x1f)
            rcx_19 = r8_4
        label_1429b4a95:
            j_sub_140a74f90(rcx_19)
            __builtin_memset(arg1 + 0x108, 0, 0x18)
        label_1429b4aaf:
            void* rcx_21 = arg1->__offset(0xf0).q
            
            if (rcx_21 == 0)
                goto label_1429b4b08
            
            if (((arg1->__offset(0x100).q - rcx_21) & 0xfffffffffffffff8) u< 0x1000)
                goto label_1429b4aee
            
            void* r8_5 = *(rcx_21 - 8)
            
            if (rcx_21 - r8_5 - 8 u<= 0x1f)
                rcx_21 = r8_5
            label_1429b4aee:
                j_sub_140a74f90(rcx_21)
                __builtin_memset(&arg1[3], 0, 0x18)
            label_1429b4b08:
                void* rcx_23 = arg1->__offset(0xd0).q
                
                if (rcx_23 == 0)
                    goto label_1429b4b61
                
                if (((arg1->__offset(0xe0).q - rcx_23) & 0xfffffffffffffff8) u< 0x1000)
                    goto label_1429b4b43
                
                void* r8_6 = *(rcx_23 - 8)
                
                if (rcx_23 - r8_6 - 8 u<= 0x1f)
                    rcx_23 = r8_6
                label_1429b4b43:
                    j_sub_140a74f90(rcx_23)
                    __builtin_memset(arg1 + 0xd0, 0, 0x18)
                label_1429b4b61:
                    sub_1429b4fd0(arg1 + 0x70)
                    j_sub_140a74f90(arg1->__offset(0x70).q)
                    sub_14297d7d0(&arg1[1])
                    return _Mtx_destroy_in_situ(arg1) __tailcall

label_1429b4b99:
_invalid_parameter_noinfo_noreturn()
noreturn
