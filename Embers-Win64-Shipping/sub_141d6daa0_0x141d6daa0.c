// 函数: sub_141d6daa0
// 地址: 0x141d6daa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x2e8) = arg2
void* rbx = *(arg2 + 0x248)

if (rbx == 0)
    return 

int32_t rdi_1 = 0
int32_t var_30_1 = 0
void*** rax_1 = sub_140a84c80(0, 0x30, 0)

if (rax_1 != 0)
    *rax_1 = &data_14322e8a8
    sub_140d3a3a0(&rax_1[1], arg1)
    *(rax_1 + 0x10) = sub_141d69d30.o
    rax_1[5] = sub_140a387b0()
    *rax_1 = &data_14322e900

if (rax_1 != 0)
    if (*(rbx + 0x86c) s<= 0)
        *(rbx + 0x868) -= 1
        int32_t rbp_1 = *(rbx + 0x860)
        
        if (*(rbx + 0x868) s<= rbp_1)
            int32_t rdx_1 = rbp_1
            
            if (rbp_1 s> 0)
                int64_t rsi_1 = 0
                
                do
                    uint64_t rax_3 = *(rbx + 0x858)
                    
                    if (*(rsi_1 + rax_3 + 8) == 0)
                        sub_1405a4880(rbx + 0x858, rdi_1, 1, 1)
                    else
                        int64_t* rcx_1 = *(rsi_1 + rax_3)
                        
                        if (rcx_1 == 0)
                            sub_1405a4880(rbx + 0x858, rdi_1, 1, 1)
                        else if ((*(*rcx_1 + 0x20))(rcx_1) != 0)
                            sub_1405a4880(rbx + 0x858, rdi_1, 1, 1)
                        else
                            rdi_1 += 1
                            rsi_1 += 0x10
                    
                    rdx_1 = *(rbx + 0x860)
                while (rdi_1 s< rdx_1)
            
            int32_t rax_6 = rdx_1 * 2
            
            if (rax_6 s<= 2)
                rax_6 = 2
            
            *(rbx + 0x868) = rax_6
            
            if (rbp_1 s> rax_6 && *(rbx + 0x864) != rdx_1)
                sub_1405a5410(rbx + 0x858, rdx_1)
    
    void arg_8
    (*rax_1)[6](rax_1, &arg_8)
    int64_t rdi_2 = sx.q(*(rbx + 0x860))
    int32_t rax_8 = (rdi_2 + 1).d
    *(rbx + 0x860) = rax_8
    
    if (rax_8 s> *(rbx + 0x864))
        sub_1405a4f90(rbx + 0x858)
    
    void** rax_11 = (rdi_2 << 4) + *(rbx + 0x858)
    *rax_11 = rax_1
    rax_11[1].d = 3

sub_141d6d480(*(arg2 + 0x248), arg1 + 0x230)
