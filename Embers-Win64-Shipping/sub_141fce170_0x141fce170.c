// 函数: sub_141fce170
// 地址: 0x141fce170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = data_143f3d210
int32_t i = 0

if (data_143f3d218 s<= 0)
    return 

do
    int64_t* r15_1 = *r14
    int64_t* rdi_1 = r15_1
    void* rsi_3 = &r15_1[sx.q(r14[1].d) * 2]
    
    if (r15_1 != rsi_3)
        do
            uint64_t rax = 0
            
            if (rdi_1[1].d != 0)
                int64_t* rcx = *rdi_1
                void arg_10
                
                if (rcx != 0)
                    rax = *(*(*rcx + 0x30))(rcx, &arg_10)
            
            if (rax == arg1)
                int32_t rdi_3 = ((rdi_1 - r15_1) s>> 4).d
                
                if (rdi_3 != 0xffffffff)
                    int64_t rsi_5 = sx.q(rdi_3) << 4
                    sub_140745b20(*r14 + rsi_5)
                    int32_t rdx_2 = r14[1].d
                    int32_t rcx_5 = rdx_2 - rdi_3 - 1
                    
                    if (rcx_5 s>= 1)
                        rcx_5 = 1
                    
                    if (rcx_5 != 0)
                        int64_t rax_3 = *r14
                        memcpy(rsi_5 + rax_3, (sx.q(rdx_2 - rcx_5) << 4) + rax_3, rcx_5 << 4)
                        rdx_2 = r14[1].d
                    
                    rax = zx.q(rdx_2 - 1)
                    r14[1].d = rax.d
                    
                    if (rax.d == 0)
                        sub_14231dd00(&data_143f3d220, i, 0)
                
                break
            
            rdi_1 = &rdi_1[2]
        while (rdi_1 != rsi_3)
    
    i += 1
    r14 = &r14[2]
while (i s< data_143f3d218)
