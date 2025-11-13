// 函数: sub_140b297e0
// 地址: 0x140b297e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
int16_t* r13 = arg2

if (iswspace(**arg1) != 0)
    int32_t i
    
    do
        *arg1 += 2
        i = iswspace(**arg1)
    while (i != 0)

int16_t* rax_3 = *arg1
wint_t _C = *rax_3

if (_C != 0x22)
    int64_t r14
    r14.b = 0
    
    if (_C != 0)
        int16_t* rsi_1 = r13
        
        do
            if (iswspace(_C) != 0 && r14.b == 0)
                break
            
            wint_t* rax_9 = *arg1 + 2
            *arg1 = rax_9
            void* rcx_3 = rax_9
            
            if (_C != 0x5c)
                if (_C == 0x22)
                    r14.b = r14.b == 0
            else if (arg4 != 0 && r14.b != 0)
                if (rbp + 1 s< arg3)
                    *rsi_1 = 0x5c
                    rbp += 1
                    rax_9 = *arg1
                    rsi_1 = &rsi_1[1]
                
                _C = *rax_9
                
                if (_C == 0)
                    break
                
                rcx_3 = &rax_9[1]
                *arg1 = rcx_3
            
            if (rbp + 1 s< arg3)
                *rsi_1 = _C
                rbp += 1
                rcx_3 = *arg1
                rsi_1 = &rsi_1[1]
            
            _C = *rcx_3
        while (_C != 0)
        
        r13 = arg2
else
    void* rax_4 = &rax_3[1]
    *arg1 = rax_4
    int16_t i_1 = *rax_4
    
    if (i_1 != 0)
        void* rdx = rax_4
        int32_t r8 = 1
        int16_t* r9 = r13
        
        while (i_1 != 0x22)
            if (r8 s>= arg3)
                break
            
            *arg1 = rdx + 2
            
            if (i_1 == 0x5c && arg4 != 0)
                i_1 = *(rdx + 2)
                rax_4 = rdx + 4
                *arg1 = rax_4
                
                if (i_1 == 0)
                    break
            
            *r9 = i_1
            rbp += 1
            rax_4 = *arg1
            r8 += 1
            r9 = &r9[1]
            rdx = rax_4
            i_1 = *rax_4
            
            if (i_1 == 0)
                break
    
    if (*rax_4 == 0x22)
        *arg1 = rax_4 + 2

r13[sx.q(rbp)] = 0
int64_t result
result.b = rbp != 0
return result
