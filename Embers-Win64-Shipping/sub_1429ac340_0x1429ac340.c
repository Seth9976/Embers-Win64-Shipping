// 函数: sub_1429ac340
// 地址: 0x1429ac340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

j_sub_140a74f90(arg1->__offset(0xb0).q)
j_sub_140a74f90(arg1->__offset(0xb8).q)
int64_t rcx_2 = arg1->__offset(0x130).q
int64_t i = 0

if ((arg1->__offset(0x138).q - rcx_2) s>> 3 != 0)
    do
        void* rbx_1 = *(rcx_2 + (i << 3))
        
        if (rbx_1 != 0)
            int64_t* rcx_3 = *(rbx_1 + 0x18)
            
            if (rcx_3 != 0)
                (**rcx_3)(rcx_3, 1)
            
            sub_1429c3230(rbx_1 + 0x58)
            int64_t rdx_1 = *(rbx_1 + 0x50)
            
            if (rdx_1 u>= 0x10)
                void* rcx_5 = *(rbx_1 + 0x38)
                
                if (rdx_1 + 1 u>= 0x1000)
                    void* r8_1 = *(rcx_5 - 8)
                    
                    if (rcx_5 - r8_1 - 8 u> 0x1f)
                        goto label_1429ac4fd
                    
                    rcx_5 = r8_1
                
                j_sub_140a74f90(rcx_5)
            
            *(rbx_1 + 0x48) = 0
            *(rbx_1 + 0x50) = 0xf
            *(rbx_1 + 0x38) = 0
            j_sub_140a74f90(rbx_1)
        
        rcx_2 = arg1->__offset(0x130).q
        i += 1
    while (i u< (arg1->__offset(0x138).q - rcx_2) s>> 3)

if (arg1->__offset(0x11c).b != 0)
    int64_t* rcx_8 = arg1->__offset(0x128).q
    
    if (rcx_8 != 0)
        (**rcx_8)(rcx_8, 1)

void* rcx_10 = arg1->__offset(0x130).q

if (rcx_10 == 0)
    goto label_1429ac4aa

if (((arg1->__offset(0x140).q - rcx_10) & 0xfffffffffffffff8) u< 0x1000)
    goto label_1429ac489

void* r8_2 = *(rcx_10 - 8)

if (rcx_10 - r8_2 - 8 u> 0x1f)
label_1429ac4fd:
    _invalid_parameter_noinfo_noreturn()
    noreturn

rcx_10 = r8_2
label_1429ac489:
j_sub_140a74f90(rcx_10)
__builtin_memset(arg1 + 0x130, 0, 0x18)
label_1429ac4aa:
sub_1429a8f10(&arg1[3])
sub_1429ac6c0(arg1 + 0xd0)
sub_142986500(arg1 + 0x80)
j_sub_140a74f90(arg1->__offset(0x80).q)
sub_14297d7d0(&arg1[1])
return _Mtx_destroy_in_situ(arg1) __tailcall
