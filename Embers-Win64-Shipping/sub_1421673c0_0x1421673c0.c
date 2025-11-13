// 函数: sub_1421673c0
// 地址: 0x1421673c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 0

int64_t* rbx = *(arg1 + 0x6f0)
int32_t arg_8
sub_141fb31d0(rbx, &arg_8, arg2)
int64_t rax_1 = sx.q(arg_8)

if (rax_1.d != 0xffffffff)
    int64_t* rbx_1 = *rbx + rax_1 * 0x18
    
    if (rbx_1 != 0)
        int64_t result = *rbx_1
        int64_t* rbx_2 = rbx_1[1]
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    int64_t rdx_2 = *rbx_2
                    (*rdx_2)(rbx_2, rdx_2)
                    int32_t temp1_1 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (temp1_1 == 1)
                        int64_t r8_1 = *rbx_2
                        (*(r8_1 + 8))(rbx_2, 1, r8_1)
        
        return result

return 0
