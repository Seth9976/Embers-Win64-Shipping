// 函数: sub_141c335f0
// 地址: 0x141c335f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&arg1[2])
int32_t i_5 = arg1[1].d

if (i_5 != 0)
    int32_t rax_1 = arg1[8].d
    int32_t rdx_1 = rax_1 + i_5
    
    if (rdx_1 s> *(arg1 + 0x44))
        sub_1405a5130(&arg1[7], rdx_1)
        rax_1 = arg1[8].d
    
    int64_t* r8_1 = *arg1
    int32_t i_4 = i_5
    int64_t* rdx_2 = arg1[7] + sx.q(rax_1) * 0x18
    int32_t i
    
    do
        *rdx_2 = *r8_1
        void* rax_5 = r8_1[1]
        rdx_2[1] = rax_5
        
        if (rax_5 != 0)
            *(rax_5 + 8) += 1
        
        void* rax_6 = *rdx_2
        rdx_2[2].d = 0
        
        if (rax_6 != 0)
            *(rax_6 + 0x3c) += 1
        
        rdx_2 = &rdx_2[3]
        r8_1 = &r8_1[3]
        i = i_4
        i_4 -= 1
    while (i != 1)
    arg1[8].d += i_5

uint64_t result = zx.q(*(arg1 + 0xc))
uint64_t* rsi = *arg1
int32_t i_3 = arg1[1].d

if (result.d s< 0)
    if (i_3 != 0)
        int32_t i_1
        
        do
            uint64_t rax_9 = *rsi
            
            if (rax_9 != 0)
                *(rax_9 + 0x3c) -= 1
            
            int64_t* rdi_2 = rsi[1]
            
            if (rdi_2 != 0)
                rdi_2[1].d -= 1
                
                if (rdi_2[1].d == 1)
                    (**rdi_2)(rdi_2)
                    int32_t rax_12 = *(rdi_2 + 0xc)
                    *(rdi_2 + 0xc) -= 1
                    
                    if (rax_12 == 1)
                        (*(*rdi_2 + 8))(rdi_2, 1)
            
            rsi = &rsi[3]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
        result = zx.q(*(arg1 + 0xc))
    
    arg1[1].d = 0
    
    if (result.d != 0)
        result = sub_1405a5130(arg1, 0)
else
    if (i_3 != 0)
        int32_t i_2
        
        do
            result = *rsi
            
            if (result != 0)
                *(result + 0x3c) -= 1
            
            int64_t* rdi_1 = rsi[1]
            
            if (rdi_1 != 0)
                result = zx.q(rdi_1[1].d)
                rdi_1[1].d -= 1
                
                if (result.d == 1)
                    (**rdi_1)(rdi_1)
                    result = zx.q(*(rdi_1 + 0xc))
                    *(rdi_1 + 0xc) -= 1
                    
                    if (result.d == 1)
                        result = (*(*rdi_1 + 8))(rdi_1, 1)
            
            rsi = &rsi[3]
            i_2 = i_3
            i_3 -= 1
        while (i_2 != 1)
    
    arg1[1].d = 0

if (arg1 == -0x10)
    return result

return LeaveCriticalSection(&arg1[2])
