// 函数: sub_141bb4410
// 地址: 0x141bb4410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = (*(*arg1 + 0x48))()

if (result != 0)
    void arg_8
    (*(*(result + 0x390) + 0x10))(result + 0x390, &arg_8)
    int512_t zmm2
    zmm2.o = arg3
    int128_t zmm6
    zmm6.d = fconvert.s(arg2.q)
    (*(*arg1 + 0xa8))(arg1, zmm6, zmm2)
    int64_t* rax_4 = (*(*arg1 + 0x20))(arg1)
    int64_t rbp
    rbp.b = 0
    *(rax_4 + 0x14) += 1
    int32_t rcx_3 = *(rax_4 + 0x14)
    int32_t rax_5 = rax_4[1].d
    int64_t rdi_1 = sx.q(rax_5 - 1)
    
    if (rax_5 - 1 s>= 0)
        int64_t rbx_2 = rdi_1 << 4
        int64_t temp1_1
        
        do
            int64_t rcx_4 = *rax_4
            
            if (*(rbx_2 + rcx_4 + 8) == 0)
                rbp.b = 1
            else
                int64_t* rcx_5 = *(rbx_2 + rcx_4)
                
                if (rcx_5 == 0)
                    rbp.b = 1
                else
                    zmm2.o = arg3
                    
                    if ((*(*rcx_5 + 0x50))(rcx_5, zmm6, zmm2) == 0)
                        rbp.b = 1
            
            rbx_2 -= 0x10
            temp1_1 = rdi_1
            rdi_1 -= 1
        while (temp1_1 - 1 s>= 0)
        rcx_3 = *(rax_4 + 0x14)
    
    result = zx.q(rcx_3 - 1)
    *(rax_4 + 0x14) = result.d
    
    if (rbp.b != 0)
        return sub_140599630(rax_4, 0)

return result
