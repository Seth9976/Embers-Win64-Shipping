// 函数: sub_140b295a0
// 地址: 0x140b295a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2[1].d = 0

if (*(arg2 + 0xc) != 0)
    sub_1405947f0(arg2, 0)

if (iswspace(**arg1) != 0)
    int32_t i
    
    do
        *arg1 += 2
        i = iswspace(**arg1)
    while (i != 0)

int16_t* rax_3 = *arg1
wint_t _C = *rax_3

if (_C != 0x22)
    int64_t rbp
    rbp.b = 0
    void* rax_13
    
    for (; _C != 0; _C = *rax_13)
        if (iswspace(_C) != 0 && rbp.b == 0)
            break
        
        rax_13 = *arg1 + 2
        *arg1 = rax_13
        
        if (_C == 0x5c && arg3 != 0 && rbp.b != 0)
            int32_t rdx_2 = arg2[1].d
            int32_t rax_14
            rax_14.b = rdx_2 s<= 0
            int32_t rsi = rdx_2 - 1
            
            if (rdx_2 s<= 0)
                rsi = 0
            
            int32_t rax_16 = rax_14 + 1 + rdx_2
            arg2[1].d = rax_16
            
            if (rax_16 s> *(arg2 + 0xc))
                sub_140594770(arg2)
            
            int64_t rcx_8 = sx.q(rsi)
            *(*arg2 + (rcx_8 << 1)) = 0x5c
            *(*arg2 + (rcx_8 << 1) + 2) = 0
            wint_t* rax_19 = *arg1
            _C = *rax_19
            
            if (_C == 0)
                break
            
            rax_13 = &rax_19[1]
            *arg1 = rax_13
        else if (_C == 0x22)
            rbp.b = rbp.b == 0
        
        if (_C != 0)
            int32_t rdx_3 = arg2[1].d
            int32_t rax_20
            rax_20.b = rdx_3 s<= 0
            int32_t r14_1 = rdx_3 - 1
            
            if (rdx_3 s<= 0)
                r14_1 = 0
            
            int32_t rax_22 = rax_20 + 1 + rdx_3
            arg2[1].d = rax_22
            
            if (rax_22 s> *(arg2 + 0xc))
                sub_140594770(arg2)
            
            int64_t rcx_10 = sx.q(r14_1)
            *(*arg2 + (rcx_10 << 1)) = _C
            *(*arg2 + (rcx_10 << 1) + 2) = 0
            rax_13 = *arg1
else
    void* rax_4 = &rax_3[1]
    *arg1 = rax_4
    int16_t i_1 = *rax_4
    
    if (i_1 != 0)
        void* rdx = rax_4
        
        while (i_1 != 0x22)
            void* rcx_3 = rdx + 2
            *arg1 = rcx_3
            rdx = rcx_3
            rax_4 = rcx_3
            
            if (i_1 == 0x5c && arg3 != 0)
                i_1 = *rcx_3
                rax_4 = rcx_3 + 2
                *arg1 = rax_4
                rdx = rax_4
                
                if (i_1 == 0)
                    break
            
            if (i_1 != 0)
                int32_t rdx_1 = arg2[1].d
                int32_t rax_5
                rax_5.b = rdx_1 s<= 0
                int32_t rbp_1 = rdx_1 - 1
                
                if (rdx_1 s<= 0)
                    rbp_1 = 0
                
                int32_t rax_7 = rax_5 + 1 + rdx_1
                arg2[1].d = rax_7
                
                if (rax_7 s> *(arg2 + 0xc))
                    sub_140594770(arg2)
                
                int64_t rcx_5 = sx.q(rbp_1)
                *(*arg2 + (rcx_5 << 1)) = i_1
                *(*arg2 + (rcx_5 << 1) + 2) = 0
                rax_4 = *arg1
                rdx = rax_4
            
            i_1 = *rdx
            
            if (i_1 == 0)
                break
    
    if (*rax_4 == 0x22)
        *arg1 = rax_4 + 2

int32_t result = arg2[1].d
int32_t rcx_11 = result - 1

if (result == 0)
    rcx_11 = 0

result.b = rcx_11 s> 0
return result
