// 函数: sub_1426e5d60
// 地址: 0x1426e5d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg2

if (*(rcx + 0x28) == 3)
    int64_t* rbx = arg2[1]
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp2_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp2_1 == 1)
                jump(*(*rbx + 8))
    
    return 

int64_t rax = sub_140d3c6e0(rcx + 0x34)
int64_t* rbx_1 = rax

if (rax != 0)
    void* rax_3 = sub_142452380()
    void* rdx_1 = rbx_1[2]
    rax = sx.q(*(rax_3 + 0x38))
    
    if (rax.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax << 3)) == rax_3 + 0x30)
        void* rax_4 = sub_14255d000()
        void* rcx_5 = rbx_1[2]
        rax = sx.q(*(rax_4 + 0x38))
        
        if (rax.d s<= *(rcx_5 + 0x38) && *(*(rcx_5 + 0x30) + (rax << 3)) == rax_4 + 0x30)
            rbx_1 = rbx_1[0x4b]
        
        if (rbx_1 != 0)
            int64_t rax_5 = sub_1427297d0()
            int64_t r8_3 = *rbx_1
            rax = (*(r8_3 + 0x610))(rbx_1, rax_5, r8_3)
            
            if (rax != 0)
                void* rbx_2 = *arg2
                int32_t temp4_1 = *(rbx_2 + 8)
                uint64_t rbp
                rbp.b = temp4_1 s>= 1
                
                if (temp4_1 s>= 1)
                    int64_t rbp_1 = *(rax + 0xb8)
                    int64_t* rbx_3
                    
                    if (*(rbx_2 + 0x10) == 0)
                        rbx_3 = nullptr
                    else
                        void* rax_6 = sub_14273b6f0()
                        
                        if (rax_6 == 0)
                            rbx_3 = nullptr
                        else
                            rbx_3 = *(rbx_2 + 0x10)
                            int64_t rax_7 = sx.q(*(rax_6 + 0x38))
                            
                            if (rax_7.d s> rbx_3[7].d || *(rbx_3[6] + (rax_7 << 3)) != rax_6 + 0x30)
                                rbx_3 = nullptr
                    
                    int64_t* rcx_9 = rbx_3[0x23]
                    
                    if (rcx_9 == 0)
                        (*(*rbx_3 + 0x390))(rbx_3)
                        rcx_9 = rbx_3[0x23]
                    
                    int64_t* rax_10 = *arg2
                    char rax_13 = (*(*rcx_9 + 0x268))(rcx_9, arg1 + 0x70, rbp_1, 
                        (sx.q(*(*rax_10 + 4) * 2) s>> 1) + rax_10[3])
                    rbx_2 = *arg2
                    rbp = zx.q(rax_13)
                
                int32_t rbx_4 = *(rbx_2 + 0x30)
                int64_t var_28 = data_143f72208
                void var_20
                sub_140d3a3a0(&var_20, arg1)
                int32_t var_18_1 = rbx_4
                char var_13_1 = 0
                bool var_14_1 = rbp.b != 0
                (*(*rax + 0x430))(rax, &var_28)

int64_t* rbx_5 = arg2[1]

if (rbx_5 == 0)
    return 

rbx_5[1].d -= 1

if (rbx_5[1].d != 1)
    return 

(**rbx_5)(rbx_5)
int32_t temp3_1 = *(rbx_5 + 0xc)
*(rbx_5 + 0xc) -= 1

if (temp3_1 == 1)
    (*(*rbx_5 + 8))(rbx_5, 1)
