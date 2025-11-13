// 函数: sub_1429af050
// 地址: 0x1429af050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct _Mtx_internal_imp_t* rdi = arg1[1]
*arg1 = &Imf_2_3::MultiPartInputFile::`vftable'{for `Imf_2_3::GenericInputFile'}
int64_t* rax = rdi->__offset(0x88).q
int64_t* i = *rax

if (i != rax)
    do
        int64_t* rcx = i[5]
        
        if (rcx != 0)
            (**rcx)(rcx, 1)
        
        int64_t* i_1 = i[2]
        
        if (*(i_1 + 0x19) == 0)
            int64_t* i_3 = *i_1
            i = i_1
            
            if (*(i_3 + 0x19) == 0)
                int64_t* i_4
                
                do
                    i_4 = *i_3
                    i = i_3
                    i_3 = i_4
                while (*(i_4 + 0x19) == 0)
        else
            int64_t* i_2 = i[1]
            
            if (*(i_2 + 0x19) == 0)
                while (i == i_2[2])
                    i = i_2
                    i_2 = i_2[1]
                    
                    if (*(i_2 + 0x19) != 0)
                        break
            
            i = i_2
        
        rdi = arg1[1]
    while (i != rdi->__offset(0x88).q)

if (rdi != 0)
    sub_1429aeea0(rdi)
    j_sub_140a74f90(rdi)

*arg1 = &Imf_2_3::GenericInputFile::`vftable'

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
