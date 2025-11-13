// 函数: sub_141c40150
// 地址: 0x141c40150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* lpCriticalSection = &arg1[0x1f]
EnterCriticalSection(lpCriticalSection)
sub_141c335f0(&arg1[0x16])
int64_t* r9 = arg1[0x1d]
uint32_t rbp = -1
void* r10 = &r9[sx.q(arg1[0x1e].d) * 3]

if (r9 == r10)
label_141c40205:
    
    if (lpCriticalSection != 0)
        LeaveCriticalSection(lpCriticalSection)
    
    rbp = -1
else
    do
        void* rcx_3 = *r9
        
        if (rcx_3 != 0)
            int32_t rax_1 = 0
            
            if (0 == *(rcx_3 + 0x14))
                *(rcx_3 + 0x14) = 0
            else
                rax_1 = *(rcx_3 + 0x14)
            
            int32_t rax_2 = 0
            
            if (0 == *(rcx_3 + 0x18))
                *(rcx_3 + 0x18) = 0
            else
                rax_2 = *(rcx_3 + 0x18)
            
            int32_t r8_1 = *(rcx_3 + 0x10)
            uint32_t rdx_2 = modu.dp.d(0:(rax_1 - 1 + r8_1 - rax_2), r8_1)
            
            if (rbp u<= rdx_2)
                rdx_2 = rbp
            
            rbp = rdx_2
        
        r9 = &r9[3]
    while (r9 != r10)
    
    if (rbp == 0xffffffff)
        goto label_141c40205
    
    if (lpCriticalSection != 0)
        LeaveCriticalSection(lpCriticalSection)

EnterCriticalSection(&arg1[0x11])
sub_141c35490(&arg1[1])
int32_t result = sub_141c35bb0(&arg1[1])
int64_t* r8_2 = arg1[0xf]
uint32_t rsi = -1
void* r10_3 = &r8_2[sx.q(arg1[0x10].d) * 2]

if (r8_2 == r10_3)
label_141c402af:
    
    if (arg1 != -0x88)
        result = LeaveCriticalSection(&arg1[0x11])
    
    rsi = -1
else
    do
        void* rdx_3 = *r8_2
        
        if (rdx_3 != 0)
            int32_t rax_6 = 0
            
            if (0 == *(rdx_3 + 0x14))
                *(rdx_3 + 0x14) = 0
            else
                rax_6 = *(rdx_3 + 0x14)
            
            result = 0
            
            if (0 == *(rdx_3 + 0x18))
                *(rdx_3 + 0x18) = 0
            else
                result = *(rdx_3 + 0x18)
            
            int32_t result_1 = result
            uint32_t rcx_11
            
            if (result s< rax_6)
                result = *(rdx_3 + 0x10) - rax_6
                rcx_11 = result_1 + result
            else
                rcx_11 = result_1 - rax_6
            
            if (rsi u<= rcx_11)
                rcx_11 = rsi
            
            rsi = rcx_11
        
        r8_2 = &r8_2[2]
    while (r8_2 != r10_3)
    
    if (rsi == 0xffffffff)
        goto label_141c402af
    
    if (arg1 != -0x88)
        result = LeaveCriticalSection(&arg1[0x11])

if (rsi s<= rbp)
    rbp = rsi

if (rbp s> 0)
    arg1[0x25].d = 0
    
    if (*(arg1 + 0x12c) s<= 0xffffffff)
        sub_140775b10(&arg1[0x24], 0)
    
    int32_t rax_8 = arg1[0x25].d + rbp
    arg1[0x25].d = rax_8
    
    if (rax_8 s> *(arg1 + 0x12c))
        sub_140775270(&arg1[0x24])
    
    sub_141c3efd0(&arg1[1], arg1[0x24], rbp, 0)
    uint32_t (* var_38)[0x4] = arg1[0x24]
    int32_t var_30_1 = arg1[0x25].d
    var_38.o = var_38.o
    (*(*arg1 + 8))(arg1, &var_38)
    uint32_t (* r13_1)[0x4] = arg1[0x24]
    sub_141c335f0(&arg1[0x16])
    result = EnterCriticalSection(lpCriticalSection)
    int32_t rsi_1 = arg1[0x1e].d
    int32_t rsi_2 = rsi_1 - 1
    
    if (rsi_1 - 1 s>= 0)
        int64_t r14_2 = sx.q(rsi_2) * 0x18
        int32_t temp8_1
        
        do
            int64_t** rbx_3 = arg1[0x1d] + r14_2
            int64_t* rcx_20 = *rbx_3
            int32_t result_2
            
            if (rcx_20 != 0)
                result = sub_141c437f0(rcx_20, r13_1, rbp)
                result_2 = result
                int32_t rcx_23 = (rbx_3[2].d + 1) & 0x800000ff
                
                if (rcx_23 s< 0)
                    rcx_23 = ((rcx_23 - 1) | 0xffffff00) + 1
                
                rbx_3[2].d = rcx_23
                
                if (rcx_23 == 0)
                    void* rdx_8 = rbx_3[1]
                    
                    if (rdx_8 != 0)
                        result = 0
                        
                        if (0 == *(rdx_8 + 8))
                            *(rdx_8 + 8) = 0
                        else
                            result = *(rdx_8 + 8)
                        
                        if (result == 1)
                            int128_t var_48
                            result = &var_48
                            var_48 = zx.o(0)
                            
                            if (rbx_3 != &var_48)
                                *rbx_3 = nullptr
                                result = sub_1405aeff0(&rbx_3[1], &var_48:8)
                                void* rcx_27 = var_48:8.q
                                
                                if (rcx_27 != 0)
                                    result = *(rcx_27 + 8)
                                    *(rcx_27 + 8) -= 1
                                    
                                    if (result == 1)
                                        int64_t* rbx_4 = var_48:8.q
                                        (**rbx_4)(rbx_4)
                                        result = *(rbx_4 + 0xc)
                                        *(rbx_4 + 0xc) -= 1
                                        
                                        if (result == 1)
                                            int64_t* rcx_29 = var_48:8.q
                                            result = (*(*rcx_29 + 8))(rcx_29, 1)
            
            if (rcx_20 == 0 || result_2 s< 0)
                result = sub_141c44f40(&arg1[0x1d], rsi_2, 1, 1)
            
            r14_2 -= 0x18
            temp8_1 = rsi_2
            rsi_2 -= 1
        while (temp8_1 - 1 s>= 0)
    
    if (lpCriticalSection != 0)
        return LeaveCriticalSection(lpCriticalSection)

return result
