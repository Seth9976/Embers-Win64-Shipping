// 函数: sub_1423ad360
// 地址: 0x1423ad360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

for (int64_t* i = *arg1; i != &i[sx.q(arg1[1].d) * 2]; i = &i[2])
    if (i[1].d != 0 && *i != 0)
        int64_t rax_16 = sub_1423af320(arg1, arg4)
        
        if (rax_16 == 0)
            return sub_1423ace50(arg1, nullptr) __tailcall
        
        int64_t* rcx_38
        
        if (arg1[4].d == *(arg1 + 0x4c))
            rcx_38 = nullptr
        else
            void* rdx_14 = arg1[0xb]
            void* r8_5 = &arg1[0xa]
            
            if (rdx_14 != 0)
                r8_5 = rdx_14
            
            int32_t rax_21 = *(r8_5
                + ((sx.q((rax_16 s>> 0x20).d * 0x17 + rax_16.d) & (sx.q(arg1[0xc].d) - 1)) << 2))
            
            if (rax_21 == 0xffffffff)
                rcx_38 = nullptr
            else
                while (true)
                    rcx_38 = sx.q(rax_21) * 0x30 + arg1[3]
                    
                    if (*rcx_38 == rax_16)
                        break
                    
                    rax_21 = rcx_38[5].d
                    
                    if (rax_21 == 0xffffffff)
                        return sub_1423ace50(arg1, nullptr) __tailcall
                
                if (rax_21 == 0xffffffff)
                    rcx_38 = nullptr
        
        void* rdx_17 = &rcx_38[1]
        
        if (rcx_38 == 0)
            rdx_17 = nullptr
        
        return sub_1423ace50(arg1, rdx_17) __tailcall

uint64_t result = data_143f5b298
char rcx_3 = (*(result + 0x7b0)).b

if ((rcx_3 & 4) == 0 && (rcx_3 & 2) != 0)
    result = sub_1423de100()
    
    if (result != 0)
        result = zx.q(arg3[2] - *arg3)
        
        if ((arg3[3] - arg3[1]) * result.d s> 0)
            int64_t* rcx_7 = *(arg2 + 0x58)
            void arg_8
            uint32_t rdx_1 = *(*(*rcx_7 + 0x18))(rcx_7, &arg_8) * 5
            int64_t* rcx_9 = *(arg2 + 0x58)
            int32_t rbp_3 = rdx_1 * 2 s/ 0x64
            void* rax_6 = (*(*rcx_9 + 0x18))(rcx_9, &arg_8)
            int64_t* rcx_10 = *(arg2 + 0x58)
            uint64_t rbx_1 = zx.q(*(rax_6 + 4))
            int64_t r8 = *rcx_10
            int32_t* rax_7 = (*(r8 + 0x18))(rcx_10, &arg_8, r8)
            int64_t* rcx_11 = *(arg2 + 0x58)
            int64_t r8_1 = *rcx_11
            int32_t r15_2 = *rax_7 - rbp_3
            int32_t r9_1 = *((*(r8_1 + 0x18))(rcx_11, &arg_8, r8_1) + 4)
            int32_t rax_9 = *arg3
            int32_t r9_2 = r9_1 - (rbx_1 * 5).d * 2 s/ 0x64
            int32_t rdx_10 = arg3[2]
            
            if (rax_9 s< rbp_3 || rdx_10 s> r15_2)
                int32_t rbp_4 = rbp_3 - rax_9
                int32_t rcx_17 = rdx_10 - r15_2
                
                if (rbp_4 s>= rcx_17)
                    rcx_17 = rbp_4
                
                *arg3 = rax_9 + rcx_17
                arg3[2] = rdx_10 - rcx_17
            
            if (arg3[3] s> r9_2)
                arg3[3] = r9_2
            
            result = sub_1423af320(arg1, sub_1423b55c0(arg1, arg2, arg3))
            
            if (result != 0)
                int64_t* rcx_28
                
                if (arg1[4].d == *(arg1 + 0x4c))
                label_1423ad633:
                    rcx_28 = nullptr
                else
                    void* rdx_13 = arg1[0xb]
                    void* r8_3 = &arg1[0xa]
                    
                    if (rdx_13 != 0)
                        r8_3 = rdx_13
                    
                    int32_t rax_15 = *(r8_3 + ((sx.q((result s>> 0x20).d * 0x17 + result.d)
                        & (sx.q(arg1[0xc].d) - 1)) << 2))
                    
                    if (rax_15 == 0xffffffff)
                    label_1423ad633_1:
                        rcx_28 = nullptr
                    else
                        while (true)
                            rcx_28 = sx.q(rax_15) * 0x30 + arg1[3]
                            
                            if (*rcx_28 == result)
                                break
                            
                            rax_15 = rcx_28[5].d
                            
                            if (rax_15 == 0xffffffff)
                                goto label_1423ad633_2
                        
                        if (rax_15 == 0xffffffff)
                        label_1423ad633_2:
                            rcx_28 = nullptr
                
                int32_t* r8_10 = &rcx_28[1]
                
                if (rcx_28 == 0)
                    r8_10 = nullptr
                
                return sub_1423acb70(arg1, arg2, r8_10, arg3, &data_14399f5c0)
            
            arg1[0xd].d = 0

return result
