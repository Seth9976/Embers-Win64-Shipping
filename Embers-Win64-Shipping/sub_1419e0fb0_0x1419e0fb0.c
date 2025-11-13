// 函数: sub_1419e0fb0
// 地址: 0x1419e0fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x40)
void* i = (sx.q(*(arg1 + 0x48)) << 5) + rdi

if (rdi == i)
    return 

int64_t* rdi_1 = rdi + 8

do
    void* rbx_1 = rdi_1[-1]
    *rdi_1 = 0
    
    if (rbx_1 != 0)
        void* rax_1 = sub_1419e83c0()
        void* rdx_1 = *(rbx_1 + 0x10)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_2 << 3)) != rax_1 + 0x30)
            void* rbx_2 = rdi_1[-1]
            
            if (rbx_2 != 0)
                void* rax_4 = sub_14247bd50()
                void* rdx_2 = *(rbx_2 + 0x10)
                int64_t rax_5 = sx.q(*(rax_4 + 0x38))
                
                if (rax_5.d s<= *(rdx_2 + 0x38)
                        && *(*(rdx_2 + 0x30) + (rax_5 << 3)) == rax_4 + 0x30)
                    void* const rsi_1
                    
                    if (*(rbx_2 + 0x50) == 0)
                        rsi_1 = nullptr
                    else
                        void* rax_7 = sub_140d41340()
                        
                        if (rax_7 == 0)
                            rsi_1 = nullptr
                        else
                            rsi_1 = *(rbx_2 + 0x50)
                            int64_t rax_8 = sx.q(*(rax_7 + 0x38))
                            
                            if (rax_8.d s> *(rsi_1 + 0x38)
                                    || *(*(rsi_1 + 0x30) + (rax_8 << 3)) != rax_7 + 0x30)
                                rsi_1 = nullptr
                    
                    void* rax_10 = sub_1419e86e0()
                    
                    if (rax_10 != 0)
                        int64_t rax_11 = sx.q(*(rax_10 + 0x38))
                        
                        if (rax_11.d s<= *(rsi_1 + 0x38)
                                && *(*(rsi_1 + 0x30) + (rax_11 << 3)) == rax_10 + 0x30)
                            rdi_1[1].b = 0
                            int64_t* rbx_3
                            
                            if (*(rbx_2 + 0x30) == 0)
                                rbx_3 = nullptr
                            else
                                void* rax_13 = sub_140d41340()
                                
                                if (rax_13 == 0)
                                    rbx_3 = nullptr
                                else
                                    rbx_3 = *(rbx_2 + 0x30)
                                    int64_t rax_14 = sx.q(*(rax_13 + 0x38))
                                    
                                    if (rax_14.d s> rbx_3[7].d
                                            || *(rbx_3[6] + (rax_14 << 3)) != rax_13 + 0x30)
                                        rbx_3 = nullptr
                            
                            void* rax_16 = sub_140cde0b0()
                            
                            if ((sub_140b5b8a0(0, 0) & 1) != 0)
                                sub_140d19010(rax_16, 
                                    NewObject with empty name can't be used to create default subobjects "
                                "(inside of UObject derived class constructor) as it produces 
                                        incon")
                            
                            *rdi_1 = sub_140d2dfc0(rbx_3, rax_16, 0, 8, 0, 0, 0, 0, 0)
        else
            rdi_1[1].b = 1
            *rdi_1 = rbx_1
    
    rdi_1 = &rdi_1[4]
while (&rdi_1[-1] != i)
