// 函数: sub_1426b92f0
// 地址: 0x1426b92f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx
uint64_t arg_8 = rbx

if (*(arg1 + 0x84) - 3 u<= 1)
    rbx.b = 0
else
    *(arg1 + 0x90) |= 1
    rbx = zx.q(*(arg1 + 0x90))
    int64_t* rcx = *(arg1 + 0x28)
    
    if (rcx != 0)
        (*(*rcx + 0x288))(rcx)
        rbx = zx.q(*(arg1 + 0x90))
    
    rbx.b &= 1
    
    if (rbx.b != 0)
        void* rax_3 = *(arg1 + 0x38)
        
        if (rax_3 != 0)
            void* rsi_1 = *(rax_3 + 0xb0)
            
            if (rsi_1 != 0)
                void* rsi_2 = *(rsi_1 + 0x258)
                
                if (rsi_2 != 0)
                    void* rax_4 = sub_1427249f0()
                    void* rdx_1 = *(rsi_2 + 0x10)
                    int64_t rax_5 = sx.q(*(rax_4 + 0x38))
                    
                    if (rax_5.d s<= *(rdx_1 + 0x38)
                            && *(*(rdx_1 + 0x30) + (rax_5 << 3)) == rax_4 + 0x30)
                        int64_t* rcx_2 = *(rsi_2 + 0x2d8)
                        int32_t rdx_2 = *(arg1 + 0x78)
                        
                        if (rcx_2 != 0)
                            int32_t rax_7 = rcx_2[0x47].d
                            
                            if (rax_7 == 0xffffffff || rdx_2 == 0xffffffff
                                    || (rdx_2 != rax_7 && rdx_2 != 0 && rax_7 != 0))
                                rax_7.b = 0
                            else
                                rax_7.b = 1
                            
                            if (rax_7.b != 0)
                                (*(*rcx_2 + 0x428))(rcx_2, rdx_2, 0)
                                return 1
                        
                        rbx.b = 0

return zx.q(rbx.b)
