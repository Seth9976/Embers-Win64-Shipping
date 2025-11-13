// 函数: sub_140f0a020
// 地址: 0x140f0a020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x478)

if (rcx != 0)
    int512_t zmm1
    zmm1.o = zx.o(0)
    (*(*rcx + 0x250))(rcx, zmm1)
    int64_t* rcx_1 = *(arg1 + 0x478)
    zmm1.o = 0x3f000000
    (*(*rcx_1 + 0x260))(rcx_1, zmm1)
    int64_t* rcx_2 = *(arg1 + 0x478)
    (*(*rcx_2 + 0x278))(rcx_2)
    void var_18
    
    if (arg1 + 0x478 != &var_18)
        *(arg1 + 0x478) = 0
        int64_t* rdi_1 = *(arg1 + 0x480)
        
        if (rdi_1 != 0)
            *(arg1 + 0x480) = 0
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                int32_t temp1_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)

*arg2 = 1
*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
return arg2
