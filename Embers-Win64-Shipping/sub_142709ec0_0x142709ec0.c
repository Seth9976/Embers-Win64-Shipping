// 函数: sub_142709ec0
// 地址: 0x142709ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi
rsi.b = 0

if (arg2 != 0)
    void* rax_1 = sub_14272a610()
    
    if (rax_1 != 0)
        int64_t rax_2 = sx.q(*(rax_1 + 0x38))
        
        if (rax_2.d s<= arg2[7].d && *(arg2[6] + (rax_2 << 3)) == rax_1 + 0x30 && arg3 != 0)
            void* rax_4 = sub_1423de540(data_143f5b298, arg1, 1)
            
            if (rax_4 != 0)
                void* rdi_1 = *(rax_4 + 0x138)
                
                if (rdi_1 != 0)
                    void* rax_5 = sub_14272b250()
                    void* rdx_2 = *(rdi_1 + 0x10)
                    int64_t rax_6 = sx.q(*(rax_5 + 0x38))
                    
                    if (rax_6.d s<= *(rdx_2 + 0x38)
                            && *(*(rdx_2 + 0x30) + (rax_6 << 3)) == rax_5 + 0x30)
                        int64_t* rcx_3 = *(rdi_1 + 0xb0)
                        
                        if (rcx_3 != 0)
                            sub_14270a5d0(rcx_3, arg2, arg3)
                            rsi.b = 1

return zx.q(rsi.b)
