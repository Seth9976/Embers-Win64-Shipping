// 函数: sub_141fb3730
// 地址: 0x141fb3730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax

if (arg3 != 0 && arg1 != 0 && arg1[5] != 0)
    rax.b = (arg2 u>> 0x20).d == 0
    
    if ((rax.b & sub_140b5b8a0(arg2.d, 0)) == 0)
        int64_t* rax_4 = (*(*arg1 + 0x278))(arg1)
        void* const rcx_6
        
        if (rax_4[1].d == *(rax_4 + 0x34))
        label_141fb3800:
            rcx_6 = nullptr
        else
            int32_t rax_7 = sub_140b5ead0(arg2.d) + arg2:4.d
            void* r8 = &rax_4[7]
            void* rcx_4 = *(r8 + 8)
            
            if (rcx_4 != 0)
                r8 = rcx_4
            
            int32_t rax_9 = *(r8 + (((sx.q(rax_4[9].d) - 1) & sx.q(rax_7)) << 2))
            
            if (rax_9 == 0xffffffff)
            label_141fb3800_1:
                rcx_6 = nullptr
            else
                int64_t r8_1 = *rax_4
                
                while (true)
                    int64_t rdx_3 = sx.q(rax_9) * 3
                    rcx_6 = r8_1 + (rdx_3 << 3)
                    
                    if (*(r8_1 + (rdx_3 << 3)) == arg2)
                        break
                    
                    rax_9 = *(rcx_6 + 0x10)
                    
                    if (rax_9 == 0xffffffff)
                        goto label_141fb3800_2
                
                if (rax_9 == 0xffffffff)
                label_141fb3800_2:
                    rcx_6 = nullptr
        
        rax = rcx_6 + 8
        
        if (rcx_6 == 0)
            rax = 0
        
        if (rax != 0)
            int64_t r8_2 = *rax
            
            if (r8_2 != 0)
                void* rcx_7 = arg1[5]
                
                if (rcx_7 != 0)
                    sub_140bd9910(rcx_7, arg3, r8_2, 1, arg4, arg5)
                    int64_t rax_10
                    rax_10.b = 1
                    return rax_10

rax.b = 0
return rax
