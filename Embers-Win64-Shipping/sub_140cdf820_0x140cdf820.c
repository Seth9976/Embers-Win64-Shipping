// 函数: sub_140cdf820
// 地址: 0x140cdf820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rcx = zx.q(*arg1)

if (rcx.w u<= 0x2c && test_bit(0x120000000001, rcx))
    if (arg6 != 0)
        int32_t r8 = *(arg6[1] + 8)
        
        if (r8 != 0)
            sub_140cd9680(arg6, 0, r8)
            int64_t* rcx_2 = arg6[1]
            int32_t r8_1 = arg6[2].d
            rcx_2[1].d = 0
            
            if ((not.b(*(arg6 + 0x14)) & 1) != 0)
                if (*(rcx_2 + 0xc) != 0)
                    sub_140ce4fc0(rcx_2, 0, r8_1)
            else if (*(rcx_2 + 0xc) != 0)
                sub_140ce4f50(rcx_2, 0, r8_1)
    
    return arg1

void* rbx_1 = &arg1[1]

if (rcx.w == 0x28)
    if (arg6 != 0)
        sub_140cda7e0(arg6, 0)
        int32_t rcx_4 = *(arg6[1] + 8)
        
        if (rcx_4 s<= 0)
            sub_140cd78f0(arg6, 1 - rcx_4)
    
    if (iswspace(*rbx_1) != 0)
        int32_t i
        
        do
            wint_t _C_1 = *(rbx_1 + 2)
            rbx_1 += 2
            i = iswspace(_C_1)
        while (i != 0)
    
    wint_t _C = *rbx_1
    int32_t rsi_1 = 0
    
    if (_C == 0x29)
        return rbx_1 + 2
    
    while (true)
        if (iswspace(_C) != 0)
            int32_t i_1
            
            do
                wint_t _C_2 = *(rbx_1 + 2)
                rbx_1 += 2
                i_1 = iswspace(_C_2)
            while (i_1 != 0)
        
        if (*rbx_1 != 0x2c)
            void* r8_2
            
            if (arg6 == 0)
                r8_2 = sx.q(*(arg2 + 0x3c) * rsi_1) + arg3
            else
                void** rdx_1 = arg6[1]
                
                if (rdx_1[1].d != 0)
                    void* rcx_8 = *rdx_1
                    
                    if ((not.b(*(arg6 + 0x14)) & 1) == 0 && (rcx_8.b & 1) != 0)
                        rcx_8 = (rcx_8 s>> 1) + rdx_1
                    
                    r8_2 = sx.q(arg6[2].d * rsi_1) + rcx_8
                else
                    r8_2 = nullptr
            
            void* rax_13 = sub_140941070(arg2, rbx_1, r8_2, arg4 | 2, arg5, arg7)
            rbx_1 = rax_13
            
            if (rax_13 == 0)
                return nullptr
            
            if (iswspace(*rax_13) != 0)
                int32_t i_2
                
                do
                    wint_t _C_3 = *(rbx_1 + 2)
                    rbx_1 += 2
                    i_2 = iswspace(_C_3)
                while (i_2 != 0)
            
            if (*rbx_1 != 0x2c)
                break
        
        rbx_1 += 2
        rsi_1 += 1
        
        if (arg6 != 0)
            int32_t rcx_12 = *(arg6[1] + 8)
            
            if (rsi_1 s>= rcx_12)
                sub_140cd78f0(arg6, rsi_1 - rcx_12 + 1)
        else if (rsi_1 s>= arg2[7].d)
            break
        
        _C = *rbx_1
        
        if (_C == 0x29)
            return rbx_1 + 2
    
    if (*rbx_1 == 0x29)
        return rbx_1 + 2

return nullptr
