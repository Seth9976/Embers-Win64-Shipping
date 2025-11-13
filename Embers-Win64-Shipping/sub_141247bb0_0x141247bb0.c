// 函数: sub_141247bb0
// 地址: 0x141247bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
void* rbx = *(arg3 + 8)
*(arg1 + 0x154)
void* r12

if (*(arg1 + 0x128) == *(arg1 + 0x154))
labelid_64:
    r12 = nullptr
else
    int64_t r9 = sx.q(*(arg3 + 0x10))
    void* r8 = arg1 + 0x158
    void* rcx = *(r8 + 8)
    
    if (rcx != 0)
        r8 = rcx
    
    int32_t rax_2 = *(r8 + (((sx.q(*(arg1 + 0x168)) - 1) & r9) << 2))
    
    if (rax_2 == 0xffffffff)
    label_141247c2b:
        r12 = nullptr
    else
        int64_t r8_1 = *(arg1 + 0x120)
        int64_t rdx_3
        
        while (true)
            rdx_3 = sx.q(rax_2)
            int64_t rcx_1 = rdx_3 * 3
            
            if (*(r8_1 + (rcx_1 << 3)) == r9.d)
                break
            
            rax_2 = *(r8_1 + (rcx_1 << 3) + 0x10)
            
            if (rax_2 == 0xffffffff)
                goto label_141247c2b_2
        
        if (rax_2 == 0xffffffff)
        label_141247c2b_1:
            r12 = nullptr
        else
            void* rax_7 = r8_1 + rdx_3 * 0x18
            
            if (rax_7 == 0 || rax_7 == -8)
            label_141247c2b_2:
                r12 = nullptr
            else
                r12 = *(rax_7 + 8)

uint32_t rcx_2 = zx.d(*(rbx + 0x32))
void* arg_18 = r12
uint64_t result = zx.q(rcx_2 - 1)
int64_t rbp
rbp.b = result.b u<= 1

if ((*(rbx + 0x39) & 1) != 0)
    if (arg4 == 0 || (*(rbx + 0x37) & 8) == 0 || r12 == 0 || *(r12 + 0x182) == 0)
        rcx_2.b -= 1
        result.b = rcx_2.b u<= 1
        
        if (result.b != 0 && *(rbx + 0x40) != 0)
            goto label_141247c82
    else
    label_141247c82:
        int64_t r9_1 = sx.q(*(arg3 + 0x20))
        int64_t r10_1 = 0
        
        if (r9_1.d != 0)
            *(arg2 + 0x34)
            void* const rcx_5
            
            if (arg2[1].d == *(arg2 + 0x34))
            label_141247d1c:
                rcx_5 = nullptr
            else
                void* rcx_3 = arg2[8]
                void* r8_2 = &arg2[7]
                
                if (rcx_3 != 0)
                    r8_2 = rcx_3
                
                int32_t rax_5 = *(r8_2 + (((sx.q(arg2[9].d) - 1) & r9_1) << 2))
                
                if (rax_5 == 0xffffffff)
                label_141247d1c_1:
                    rcx_5 = nullptr
                else
                    int64_t r8_3 = *arg2
                    
                    while (true)
                        int64_t rdx_7 = sx.q(rax_5) * 5
                        rcx_5 = r8_3 + (rdx_7 << 3)
                        
                        if (*(r8_3 + (rdx_7 << 3)) == r9_1.d)
                            break
                        
                        rax_5 = *(rcx_5 + 0x20)
                        
                        if (rax_5 == 0xffffffff)
                            goto label_141247d1c_2
                    
                    if (rax_5 == 0xffffffff)
                    label_141247d1c_2:
                        rcx_5 = nullptr
            
            void* rdx_8 = *(rcx_5 + 8)
            
            if (rdx_8 != 0 && (*(*(rdx_8 + 8) + 0x3a) & 0x40) != 0)
                int64_t rcx_6 = sx.q(*(rdx_8 + 0x10))
                *(arg1 + 0x154)
                
                if (*(arg1 + 0x128) == *(arg1 + 0x154))
                labelid_2c:
                    r10_1 = 0
                else
                    void* rdx_9 = *(arg1 + 0x160)
                    void* r9_2 = arg1 + 0x158
                    
                    if (rdx_9 != 0)
                        r9_2 = rdx_9
                    
                    int32_t rax_12 = *(r9_2 + (((sx.q(*(arg1 + 0x168)) - 1) & rcx_6) << 2))
                    
                    if (rax_12 == 0xffffffff)
                    label_141247d79:
                        r10_1 = 0
                    else
                        int64_t r9_3 = *(arg1 + 0x120)
                        int64_t r8_7
                        
                        while (true)
                            r8_7 = sx.q(rax_12)
                            int64_t rdx_10 = r8_7 * 3
                            
                            if (*(r9_3 + (rdx_10 << 3)) == rcx_6.d)
                                break
                            
                            rax_12 = *(r9_3 + (rdx_10 << 3) + 0x10)
                            
                            if (rax_12 == 0xffffffff)
                                goto label_141247d79_2
                        
                        if (rax_12 == 0xffffffff)
                        label_141247d79_1:
                            r10_1 = 0
                        else
                            void* r10_2 = r9_3 + r8_7 * 0x18
                            
                            if (r10_2 == 0)
                            label_141247d79_2:
                                r10_1 = 0
                            else
                                r10_1 = *(r10_2 + 8)
        
        void* r15_1 = *(arg3 + 0x68)
        
        if (r10_1 == 0)
            if (arg4 == 0 || rbp.b != 0)
                rbp.b = 0
            else
                rbp.b = 1
            
            char r14
            
            if (*(rbx + 0x40) == 1 || rbp.b != 0 || arg5 == rbp.b)
                r14 = 1
            else
                r14 = 0
            
            int32_t rbx_1 = data_1439b6340
            
            if (r14 != 0)
                rbx_1 = 1
            
            int32_t var_58
            int128_t* rax_14 = sub_14139bf10(arg3, &var_58)
            char rax_17 = sub_141247740(arg_8, rax_14, rbx_1, r14, rbp.b, &arg_18, arg6, arg7)
            void* rbp_1 = arg_18
            *(arg3 + 0x68) = rbp_1
            
            if (r12 != rbp_1)
                if (r12 != 0)
                    sub_140bce990(arg1 + 0x120, arg3 + 0x10)
                
                sub_140598750(arg1 + 0x120, &var_58)
                int32_t* var_50
                *var_50 = *(arg3 + 0x10)
                int32_t rax_19 = var_58
                *(var_50 + 8) = rbp_1
                var_50[4] = 0xffffffff
                char var_78_1
                var_78_1.d = rax_19
                sub_141224960(arg1 + 0x120, &arg_8, *var_50, var_50, var_78_1, nullptr)
            
            if (rax_17 != 0)
                goto label_141247ea8
        else
            *(arg3 + 0x68) = r10_1
        label_141247ea8:
            char rax_20 = *(arg3 + 0x120)
            
            if ((rax_20 & 4) == 0)
                *(arg3 + 0x120) = rax_20 | 4
        
        if (r15_1 == 0)
        label_141247ee1:
            int64_t rsi_1 = sx.q(arg8[1].d)
            int32_t rax_21 = (rsi_1 + 1).d
            arg8[1].d = rax_21
            
            if (rax_21 s> *(arg8 + 0xc))
                sub_1405a4d70(arg8)
            
            result = *arg8
            *(result + (rsi_1 << 3)) = arg3
        else
            result = *(arg3 + 0x68)
            
            if (result != 0)
                result = zx.q(*(result + 0x181))
                
                if (*(r15_1 + 0x181) != result.b)
                    goto label_141247ee1

return result
