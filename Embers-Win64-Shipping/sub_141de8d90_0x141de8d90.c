// 函数: sub_141de8d90
// 地址: 0x141de8d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg2[1]

if (rcx != 0)
    (*(*rcx + 0x28))(rcx)
    int64_t* rcx_1 = arg2[1]
    int512_t zmm1
    zmm1.o = zx.o(0)
    (*(*rcx_1 + 0x10))(rcx_1, zmm1)
    int64_t* rcx_2 = arg2[1]
    
    if (rcx_2 != 0)
        (**rcx_2)(rcx_2, 1)
    
    arg2[1] = 0

if (*(arg2 + 0x1c) != 0)
    int64_t* rax_4 = nullptr
    bool z_1
    
    if (0 == *arg2)
        *arg2 = 0
        z_1 = true
    else
        rax_4 = *arg2
        z_1 = false
    
    if (not(z_1))
        int64_t* rcx_3 = rax_4[0xa]
        
        if (rcx_3 != 0)
            int64_t r8_1 = *rcx_3
            (*r8_1)(rcx_3, 1, r8_1)
        
        int64_t rcx_4 = rax_4[8]
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        sub_141ddf810(&rax_4[4])
        int64_t rcx_6 = rax_4[2]
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        int64_t rcx_7 = *rax_4
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        j_sub_140a74f90(rax_4)

int64_t result = *arg2
*arg2 = 0
*(arg2 + 0x1c) = 0
arg2[3].d = 0
return result
