// 函数: sub_1429aeea0
// 地址: 0x1429aeea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1->__offset(0x64).b != 0)
    int64_t* rcx = arg1->__offset(0x50).q
    
    if (rcx != 0)
        (**rcx)(rcx, 1)

int64_t rcx_1 = arg1->__offset(0x68).q
int64_t i = 0

if ((arg1->__offset(0x70).q - rcx_1) s>> 3 != 0)
    do
        int64_t* rbx_1 = *(rcx_1 + (i << 3))
        
        if (rbx_1 != 0)
            void* rcx_2 = rbx_1[6]
            
            if (rcx_2 != 0)
                if (((rbx_1[8] - rcx_2) & 0xfffffffffffffff8) u>= 0x1000)
                    void* r8_1 = *(rcx_2 - 8)
                    
                    if (rcx_2 - r8_1 - 8 u> 0x1f)
                        goto label_1429aefe9
                    
                    rcx_2 = r8_1
                
                j_sub_140a74f90(rcx_2)
                __builtin_memset(&rbx_1[6], 0, 0x18)
            
            sub_14297d7d0(rbx_1)
            j_sub_140a74f90(rbx_1)
        
        rcx_1 = arg1->__offset(0x68).q
        i += 1
    while (i u< (arg1->__offset(0x70).q - rcx_1) s>> 3)

sub_1429aede0(arg1 + 0x98)
sub_1429aec70(arg1 + 0x88)
void* rcx_8 = arg1->__offset(0x68).q

if (rcx_8 == 0)
    return _Mtx_destroy_in_situ(arg1) __tailcall

if (((arg1->__offset(0x78).q - rcx_8) & 0xfffffffffffffff8) u< 0x1000)
    goto label_1429aefbc

void* r8_2 = *(rcx_8 - 8)

if (rcx_8 - r8_2 - 8 u> 0x1f)
label_1429aefe9:
    _invalid_parameter_noinfo_noreturn()
    noreturn

rcx_8 = r8_2
label_1429aefbc:
j_sub_140a74f90(rcx_8)
__builtin_memset(arg1 + 0x68, 0, 0x18)
return _Mtx_destroy_in_situ(arg1) __tailcall
