// 函数: sub_141c65480
// 地址: 0x141c65480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = arg4
int512_t zmm2

if (*(arg1 + 0x668) s> 0)
    int32_t arg_8 = zmm6.d
    zmm2, zmm6 = sub_1405a9f90(arg1 + 0x660, &arg_8)

int64_t* result = *(arg1 + 0x670)
void* rcx_3 = &result[sx.q(*(arg1 + 0x678)) * 2]

if (result != rcx_3)
    while (result[1].d == 0 || *result == 0)
        result = &result[2]
        
        if (result == rcx_3)
            return result
    
    *(arg1 + 0x684) += 1
    int32_t rax = *(arg1 + 0x678)
    int32_t rcx_4 = *(arg1 + 0x684)
    int64_t rbp
    rbp.b = 0
    int64_t rdi_1 = sx.q(rax - 1)
    
    if (rax - 1 s>= 0)
        int64_t rbx_2 = rdi_1 << 4
        int64_t temp1_1
        
        do
            int64_t rax_2 = *(arg1 + 0x670)
            
            if (*(rbx_2 + rax_2 + 8) == 0)
                rbp.b = 1
            else
                int64_t* rcx_5 = *(rbx_2 + rax_2)
                
                if (rcx_5 == 0)
                    rbp.b = 1
                else
                    zmm2.o = zmm6
                    
                    if ((*(*rcx_5 + 0x50))(rcx_5, arg2, zmm2) == 0)
                        rbp.b = 1
            
            rbx_2 -= 0x10
            temp1_1 = rdi_1
            rdi_1 -= 1
        while (temp1_1 - 1 s>= 0)
        rcx_4 = *(arg1 + 0x684)
    
    result = zx.q(rcx_4 - 1)
    *(arg1 + 0x684) = result.d
    
    if (rbp.b != 0)
        return sub_140599630(arg1 + 0x670, 0)

return result
