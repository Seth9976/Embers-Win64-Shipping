// 函数: sub_1426e5ba0
// 地址: 0x1426e5ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg2
int64_t* rbx

if (*(rcx + 0x28) != 3)
    int64_t rax = sub_140d3c6e0(rcx + 0x34)
    int64_t* rbx_1 = rax
    
    if (rax != 0)
        void* rax_1 = sub_142452380()
        void* rdx = rbx_1[2]
        rax = sx.q(*(rax_1 + 0x38))
        
        if (rax.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax << 3)) == rax_1 + 0x30)
            void* rax_2 = sub_14255d000()
            void* rcx_3 = rbx_1[2]
            rax = sx.q(*(rax_2 + 0x38))
            
            if (rax.d s<= *(rcx_3 + 0x38) && *(*(rcx_3 + 0x30) + (rax << 3)) == rax_2 + 0x30)
                rbx_1 = rbx_1[0x4b]
            
            if (rbx_1 != 0)
                int64_t rax_3 = sub_1427297d0()
                int64_t r8_3 = *rbx_1
                rax = (*(r8_3 + 0x610))(rbx_1, rax_3, r8_3)
                int64_t rbx_2 = rax
                
                if (rax != 0)
                    rax = sub_1426b2b20(rbx_2, arg1, sub_1426b0430(rax, arg1))
                    void* rsi_1 = *arg2
                    
                    if (*(rsi_1 + 8) s>= 1)
                        int64_t r15_1 = *(rbx_2 + 0xb8)
                        int64_t* rbx_3
                        
                        if (*(rsi_1 + 0x10) == 0)
                            rbx_3 = nullptr
                        else
                            void* rax_5 = sub_14273b6f0()
                            
                            if (rax_5 == 0)
                                rbx_3 = nullptr
                            else
                                rbx_3 = *(rsi_1 + 0x10)
                                int64_t rax_6 = sx.q(*(rax_5 + 0x38))
                                
                                if (rax_6.d s> rbx_3[7].d
                                        || *(rbx_3[6] + (rax_6 << 3)) != rax_5 + 0x30)
                                    rbx_3 = nullptr
                        
                        int64_t* rcx_9 = rbx_3[0x23]
                        
                        if (rcx_9 == 0)
                            (*(*rbx_3 + 0x390))(rbx_3)
                            rcx_9 = rbx_3[0x23]
                        
                        int64_t* r10_1 = *arg2
                        (*(*rcx_9 + 0x268))(rcx_9, arg1 + 0x70, r15_1, 
                            (sx.q(*(*r10_1 + 4) * 2) s>> 1) + r10_1[3])
                    
                    *rax = 0xffffffff
    
    rbx = arg2[1]
else
    rbx = arg2[1]

if (rbx == 0)
    return 

rbx[1].d -= 1

if (rbx[1].d != 1)
    return 

(**rbx)(rbx)
int32_t temp1_1 = *(rbx + 0xc)
*(rbx + 0xc) -= 1

if (temp1_1 == 1)
    jump(*(*rbx + 8))
