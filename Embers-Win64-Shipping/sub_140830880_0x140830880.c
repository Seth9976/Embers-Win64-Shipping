// 函数: sub_140830880
// 地址: 0x140830880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *(arg1 + 0x50)
void* r15 = arg2

if (result != 0)
    int32_t i = 0
    void* r13_1 = ***(result + 0x50)
    result = zx.q(*(r13_1 + 0x30))
    
    if ((*(arg1 + 0x5c) & 1) == 0)
        if (result.d s> 0)
            int64_t rbp_2 = 0
            
            do
                void* rax_8 = *(r13_1 + 0x28)
                void* rcx_10 = r13_1 + 0x10
                
                if (rax_8 != 0)
                    rcx_10 = rax_8
                
                result = sub_1423657b0(*(arg1 + 0x50), *(rcx_10 + rbp_2))
                int64_t rsi_4 = sx.q(arg3[1].d)
                uint64_t result_1 = result
                int32_t rcx_12 = (rsi_4 + 1).d
                arg3[1].d = rcx_12
                
                if (rcx_12 s> *(arg3 + 0xc))
                    result = sub_1405a4d70(arg3)
                
                i += 1
                rbp_2 += 0x18
                *(*arg3 + (rsi_4 << 3)) = result_1
            while (i s< *(r13_1 + 0x30))
    else if (result.d s> 0)
        void* rcx = r13_1 + 0x10
        int64_t rbp_1 = 0
        
        do
            void* rax_1 = *(rcx + 0x18)
            void* rsi_1 = rcx
            
            if (rax_1 != 0)
                rsi_1 = rax_1
            
            void* rsi_2 = rsi_1 + rbp_1
            int64_t rax_2 = sub_1423657b0(*(arg1 + 0x50), *rsi_2)
            int64_t rcx_2 = sx.q(*rsi_2)
            int64_t rsi_3
            
            if (rcx_2.d s< 0 || *(arg1 + 0x68) s<= rcx_2.d)
                rsi_3 = sx.q(arg3[1].d)
                int32_t rax_7 = (rsi_3 + 1).d
                arg3[1].d = rax_7
                
                if (rax_7 s> *(arg3 + 0xc))
                    sub_1405a4d70(arg3)
                
                result = *arg3
                *(result + (rsi_3 << 3)) = rax_2
            else if (r15 == 0)
            label_14083097f:
                rsi_3 = sx.q(arg3[1].d)
                int32_t rdx_5 = *(arg3 + 0xc)
                int32_t rcx_5 = (rsi_3 + 1).d
                int64_t* r15_6 = sx.q(*rsi_2) * 0x30 + *(arg1 + 0x60)
                arg3[1].d = rcx_5
                
                if (*r15_6 == 0)
                    if (rcx_5 s> rdx_5)
                        sub_1405a4d70(arg3)
                    
                    r15 = arg2
                    result = *arg3
                    *(result + (rsi_3 << 3)) = rax_2
                else
                    if (rcx_5 s> rdx_5)
                        sub_1405a4d70(arg3)
                    
                    result = *r15_6
                    r15 = arg2
                    *(*arg3 + (rsi_3 << 3)) = result
            else
                void* r15_3 = rcx_2 * 0x30 + *(arg1 + 0x60)
                int32_t rcx_3
                rcx_3.b = sub_140b5b8a0(*(r15_3 + 8), 0) == 0
                
                if ((*(r15_3 + 0xc) != 0 | rcx_3.b) == 0 || *(r15_3 + 0x10) == 0)
                    goto label_14083097f
                
                r15 = arg2
                result = sub_1407ee9b0(r15, sx.q(*rsi_2) * 0x30 + 8 + *(arg1 + 0x60), arg3)
                
                if (result.b == 0)
                    goto label_14083097f
            i += 1
            rcx = r13_1 + 0x10
            rbp_1 += 0x18
        while (i s< *(r13_1 + 0x30))

return result
