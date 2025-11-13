// 函数: sub_1419949f0
// 地址: 0x1419949f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg1[1].d

if (i_1 s> 0)
    int32_t i = i_1
    
    do
        uint64_t i_2 = zx.q(i_1)
        i_1 -= 1
        
        if (i_2.d s<= 0)
            break
        
        void* j = *(*arg1 + (sx.q(i) << 3) - 8)
        
        if (*(j + 8) != 0)
            int64_t* rsi_1 = &data_143f13780
            
            if (*(j + 9) != 0)
                rsi_1 = &data_143f13790
            
            int64_t* r10_1 = *rsi_1
            uint64_t r8_1 = sx.q(rsi_1[1].d)
            int64_t* rax = r10_1
            void* rdx_1 = &r10_1[r8_1]
            int32_t rax_1
            
            if (r10_1 == rdx_1)
            label_141994a82:
                rax_1 = -1
            else
                while (*rax != j)
                    rax = &rax[1]
                    
                    if (rax == rdx_1)
                        goto label_141994a82
                
                rax_1 = ((rax - r10_1) s>> 3).d
            
            int32_t rdx_3 = r8_1.d - rax_1
            
            if (rdx_3 != 1)
                memmove(&r10_1[sx.q(rax_1)], &r10_1[sx.q(rax_1 + 1)], (rdx_3 - 1) << 3)
                r8_1 = zx.q(rsi_1[1].d)
            
            rsi_1[1].d = (r8_1 - 1).d
            sub_1405c53d0(rsi_1)
            *(j + 8) = 0
        
        i = arg1[1].d
    while (i s> 0)

int64_t rcx_3 = *arg1

if (rcx_3 == 0)
    return 

return sub_140a74f90(rcx_3) __tailcall
