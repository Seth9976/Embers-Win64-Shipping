// 函数: sub_142a1d450
// 地址: 0x142a1d450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg1 + 0x1928)

if (*(arg1 + 0x1924) != rdx)
    sub_142a1d9b0(arg1 + 0xc10, rdx)
    *(arg1 + 0x1924) = *(arg1 + 0x1928)

int64_t rdi_1 = 0
void* rsi_1 = arg1 + 0x1850
void* rbp = rsi_1
int64_t i_1 = 4
int32_t result
int64_t i

do
    int32_t c = arg3
    
    if (*(arg2 + 0xf60) != 0)
        c = sx.d(*(rdi_1 + arg2 + 0xf6b))
        
        if (*(arg2 + 0xf63) != 1)
            c += arg3
        
        if (c s<= 0)
            c = 0
        else if (c s> 0x3f)
            c = 0x3f
    
    if (*(arg2 + 0xf6f) != 0)
        int32_t rax_3 = sx.d(*(arg2 + 0xf75)) + c
        int32_t rcx_3 = sx.d(*(arg2 + 0xf7d)) + rax_3
        
        if (rcx_3 s<= 0)
            rcx_3 = 0
        else if (rcx_3 s> 0x3f)
            rcx_3 = 0x3f
        
        *rsi_1 = rcx_3.b
        
        if (rax_3 s<= 0)
            rax_3 = 0
        else if (rax_3 s> 0x3f)
            rax_3 = 0x3f
        
        *(rsi_1 + 1) = rax_3.b
        void* rdx_2 = rsi_1 + 6
        
        for (int64_t j = 1; j s< 4; )
            int32_t rcx_5 = sx.d(*(arg2 + j + 0xf75)) + c
            int32_t rax_5 = sx.d(*(arg2 + 0xf7e)) + rcx_5
            
            if (rax_5 s<= 0)
                rax_5 = 0
            else if (rax_5 s> 0x3f)
                rax_5 = 0x3f
            
            *(rdx_2 - 1) = rax_5.b
            int32_t rax_7 = sx.d(*(arg2 + 0xf7f)) + rcx_5
            
            if (rax_7 s<= 0)
                rax_7 = 0
            else if (rax_7 s> 0x3f)
                rax_7 = 0x3f
            
            *rdx_2 = rax_7.b
            result = sx.d(*(arg2 + 0xf80)) + rcx_5
            
            if (result s<= 0)
                result = 0
            else if (result s> 0x3f)
                result = 0x3f
            
            *(rdx_2 + 1) = result.b
            j += 1
            rdx_2 += 4
    else
        result = memset(rbp, c, 0x10)
    
    rbp += 0x10
    rdi_1 += 1
    rsi_1 += 0x10
    i = i_1
    i_1 -= 1
while (i != 1)
return result
