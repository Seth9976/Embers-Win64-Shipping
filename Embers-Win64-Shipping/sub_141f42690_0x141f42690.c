// 函数: sub_141f42690
// 地址: 0x141f42690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm10
char rax_2 = sub_141f1ebb0(arg1, arg2, arg3, arg4, zmm10, arg5, arg6, arg7)

if (rax_2 != 0 && arg7 != 0)
    void* rcx = arg1[0x65].q
    
    if (rcx != 0)
        sub_141e0ba10(rcx, arg7)
    
    int64_t rdi_1 = 0
    int64_t* rbx_1 = arg1[0x6c].q
    uint64_t r14_2 = sx.q(*(arg1 + 0x6c8)) << 3 u>> 3
    
    if (rbx_1 u> &rbx_1[sx.q(*(arg1 + 0x6c8))])
        r14_2 = 0
    
    if (r14_2 != 0)
        do
            sub_141e0ba10(*rbx_1, arg7)
            rdi_1 += 1
            rbx_1 = &rbx_1[1]
        while (rdi_1 != r14_2)
    
    void* rcx_2 = *(arg1 + 0x658)
    
    if (rcx_2 != 0)
        sub_141e0ba10(rcx_2, arg7)
    
    uint128_t* rbp
    rbp.b = 0
    *(arg1 + 0xac4) += 1
    int32_t rax_5 = *(arg1 + 0xab8)
    int32_t rcx_3 = *(arg1 + 0xac4)
    int64_t rdi_2 = sx.q(rax_5 - 1)
    
    if (rax_5 - 1 s>= 0)
        int64_t rbx_3 = rdi_2 << 4
        int64_t temp1_1
        
        do
            int64_t rax_7 = arg1[0xab].q
            
            if (*(rbx_3 + rax_7 + 8) == 0)
                rbp.b = 1
            else
                int64_t* rcx_4 = *(rbx_3 + rax_7)
                
                if (rcx_4 == 0)
                    rbp.b = 1
                else if ((*(*rcx_4 + 0x50))(rcx_4) == 0)
                    rbp.b = 1
            
            rbx_3 -= 0x10
            temp1_1 = rdi_2
            rdi_2 -= 1
        while (temp1_1 - 1 s>= 0)
        rcx_3 = *(arg1 + 0xac4)
    
    *(arg1 + 0xac4) = rcx_3 - 1
    
    if (rbp.b != 0)
        sub_140599630(&arg1[0xab], 0)

return zx.q(rax_2)
