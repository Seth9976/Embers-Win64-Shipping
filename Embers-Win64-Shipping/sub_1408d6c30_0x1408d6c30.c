// 函数: sub_1408d6c30
// 地址: 0x1408d6c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x14) s<= 0)
    arg1[2].d -= 1
    int32_t rbp_1 = arg1[1].d
    
    if (arg1[2].d s<= rbp_1)
        int32_t rdi_1 = 0
        int32_t rdx = rbp_1
        
        if (rbp_1 s> 0)
            int64_t rsi_1 = 0
            
            do
                uint64_t rax_1 = *arg1
                
                if (*(rsi_1 + rax_1 + 8) == 0)
                    sub_1405a4880(arg1, rdi_1, 1, 1)
                else
                    int64_t* rcx = *(rsi_1 + rax_1)
                    
                    if (rcx == 0)
                        sub_1405a4880(arg1, rdi_1, 1, 1)
                    else if ((*(*rcx + 0x20))(rcx) != 0)
                        sub_1405a4880(arg1, rdi_1, 1, 1)
                    else
                        rdi_1 += 1
                        rsi_1 += 0x10
                
                rdx = arg1[1].d
            while (rdi_1 s< rdx)
        
        int32_t rax_4 = rdx * 2
        
        if (rax_4 s<= 2)
            rax_4 = 2
        
        arg1[2].d = rax_4
        
        if (rbp_1 s> rax_4 && *(arg1 + 0xc) != rdx)
            sub_1405a5410(arg1, rdx)

*arg2 = 0

if (arg3[1].d != 0)
    int64_t* rcx_3 = *arg3
    void arg_8
    
    if (rcx_3 != 0)
        *arg2 = *(*(*rcx_3 + 0x30))(rcx_3, &arg_8)

int64_t rdi_2 = sx.q(arg1[1].d)
int32_t rax_7 = (rdi_2 + 1).d
arg1[1].d = rax_7

if (rax_7 s> *(arg1 + 0xc))
    sub_1405a4f90(arg1)

int64_t rcx_8 = (rdi_2 << 4) + *arg1
*rcx_8 = 0
*rcx_8 = *arg3
*arg3 = 0
*(rcx_8 + 8) = arg3[1].d
arg3[1].d = 0
return arg2
