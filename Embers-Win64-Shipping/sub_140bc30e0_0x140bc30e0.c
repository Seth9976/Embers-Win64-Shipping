// 函数: sub_140bc30e0
// 地址: 0x140bc30e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r15 = *(arg2 + 0x160)
void* rbp = &r15[sx.q(*(arg2 + 0x178))]
int64_t result

if (r15 == rbp)
label_140bc3249:
    result.b = 1
else
    while (true)
        int64_t rbx_1 = sx.q(*r15)
        int32_t rax = arg3[1].d
        int32_t arg_10 = rbx_1.d
        
        if (rax == *(arg3 + 0x34))
        label_140bc3192:
            void var_38
            sub_140998ff0(arg3, &var_38, &arg_10, nullptr)
            void* rsi_1 = *(arg1 + 0xc8)
            EnterCriticalSection(rsi_1 + 0xe0)
            *(rsi_1 + 0x13c)
            void* rsi_2
            
            if (*(rsi_1 + 0x110) == *(rsi_1 + 0x13c))
            labelid_10:
                rsi_2 = nullptr
            else
                void* r8_3 = rsi_1 + 0x140
                void* rcx_4 = *(r8_3 + 8)
                
                if (rcx_4 != 0)
                    r8_3 = rcx_4
                
                result = zx.q(*(r8_3 + (((sx.q(*(rsi_1 + 0x150)) - 1) & rbx_1) << 2)))
                
                if (result.d == 0xffffffff)
                label_140bc3207:
                    rsi_2 = nullptr
                else
                    int64_t r8_4 = *(rsi_1 + 0x108)
                    int64_t rdx_8
                    
                    while (true)
                        rdx_8 = sx.q(result.d)
                        int64_t rcx_5 = rdx_8 * 3
                        
                        if (*(r8_4 + (rcx_5 << 3)) == rbx_1.d)
                            break
                        
                        result = zx.q(*(r8_4 + (rcx_5 << 3) + 0x10))
                        
                        if (result.d == 0xffffffff)
                            goto label_140bc3207_2
                    
                    if (result.d == 0xffffffff)
                    label_140bc3207_1:
                        rsi_2 = nullptr
                    else
                        void* rsi_3 = r8_4 + rdx_8 * 0x18
                        
                        if (rsi_3 == 0)
                        label_140bc3207_2:
                            rsi_2 = nullptr
                        else
                            rsi_2 = *(rsi_3 + 8)
            
            if (rsi_1 != -0xe0)
                LeaveCriticalSection(rsi_1 + 0xe0)
            
            if (rsi_2 != 0)
                if (*(rsi_2 + 0x68) s< *(rsi_2 + 0x118))
                    *arg4 = rbx_1.d
                    result.b = 0
                    break
                
                if (sub_140bc30e0(arg1, rsi_2, arg3, arg4).b == 0)
                    result.b = 0
                    break
        else
            void* rcx = arg3[8]
            void* r8 = &arg3[7]
            
            if (rcx != 0)
                r8 = rcx
            
            result = zx.q(*(r8 + (((sx.q(arg3[9].d) - 1) & rbx_1) << 2)))
            
            if (result.d == 0xffffffff)
                goto label_140bc3192
            
            int64_t r8_1 = *arg3
            
            while (true)
                int64_t rdx_3 = sx.q(result.d) * 3
                
                if (*(r8_1 + (rdx_3 << 2)) == rbx_1.d)
                    break
                
                result = zx.q(*(r8_1 + (rdx_3 << 2) + 4))
                
                if (result.d == 0xffffffff)
                    goto label_140bc3192
            
            if (result.d == 0xffffffff)
                goto label_140bc3192
        
        r15 = &r15[1]
        
        if (r15 == rbp)
            goto label_140bc3249

return result
