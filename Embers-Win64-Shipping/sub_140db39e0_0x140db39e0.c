// 函数: sub_140db39e0
// 地址: 0x140db39e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d9bab0(arg3)
int512_t result
result.o = zx.o(0)

if (not(0f f== *(arg3 + 0x14)) && not(0f f== arg3[3].d))
    char rax_1
    rax_1, result = sub_140dbe040(arg1)
    
    if (rax_1 == 0)
        void* rax_2 = sub_140d99610(arg1)
        void*** rbx_1
        
        if ((*(rax_2 + 0x50) & 1) == 0)
            rbx_1 = (*(arg1 + 0x18) + 7) & 0xfffffffffffffff8
            void* rax_4 = &rbx_1[4]
            
            if (rax_4 u> *(arg1 + 0x20))
                sub_140b0e3d0(arg1 + 0x18, 0x28)
                rbx_1 = (*(arg1 + 0x18) + 7) & 0xfffffffffffffff8
                rax_4 = &rbx_1[4]
            
            *(arg1 + 0x18) = rax_4
            rbx_1[3] = 0
            *rbx_1 = &data_142ec2838
            rbx_1[1] = 0
            rbx_1[2] = 0
        else
            void*** rax_3 = j_sub_140a82f30(0x20)
            rbx_1 = rax_3
            
            if (rax_3 == 0)
                rbx_1 = rax_3
            else
                *rax_3 = &data_142ec2838
                rbx_1[1] = 0
                rbx_1[2] = 0
        
        *rax_2 = rbx_1
        sub_140d95f80(&rbx_1[1], arg4)
        rbx_1[3].d = arg5
        result = sub_140db26f0(rax_2, arg1, 6, arg2, arg3, arg6)

int64_t rcx_5 = *arg4

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5)
