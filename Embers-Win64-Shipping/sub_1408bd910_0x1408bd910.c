// 函数: sub_1408bd910
// 地址: 0x1408bd910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx = zx.q(arg2)

if (arg2 s> 0 && arg2 s> *(arg1 + 0x14))
    void** rax_1 = j_sub_140a82f30(0x10)
    void** r14_1 = rax_1
    
    if (rax_1 == 0)
        r14_1 = nullptr
    else
        uint32_t i_2
        
        if (rbx.d s>= 5)
            i_2 = (rbx * 5).d * 2
        else
            i_2 = 0xa
        
        int64_t i_1 = sx.q(i_2)
        r14_1[1].d = 0
        *(r14_1 + 0xc) = i_2
        int64_t rax_3 = 0x2a8 * i_1
        
        if (mulu.dp.q(0x2a8, i_1) u>> 0x40 != zx.o(0))
            rax_3 = -1
        
        int64_t rax_4 = rax_3 + 8
        
        if (rax_3 u>= -8)
            rax_4 = -1
        
        int64_t* rax_5 = j_sub_140a82f30(rax_4)
        
        if (rax_5 == 0)
            *r14_1 = nullptr
        else
            *rax_5 = i_1
            void* rdi_1 = &rax_5[1]
            
            if (i_1 != 0)
                int64_t i
                
                do
                    sub_1408b9020(rdi_1)
                    rdi_1 += 0x2a8
                    i = i_1
                    i_1 -= 1
                while (i != 1)
            
            *r14_1 = &rax_5[1]
    
    int64_t rbx_1 = sx.q(arg1[1].d)
    int32_t rax_6 = (rbx_1 + 1).d
    arg1[1].d = rax_6
    
    if (rax_6 s> *(arg1 + 0xc))
        sub_140638870(arg1)
    
    *(*arg1 + (rbx_1 << 3)) = r14_1
    *(arg1 + 0x14) += *(r14_1 + 0xc) - r14_1[1].d
    arg1[3].d += *(r14_1 + 0xc) - r14_1[1].d

if (arg1[1].d == 1)
    arg1[2].d = 0
