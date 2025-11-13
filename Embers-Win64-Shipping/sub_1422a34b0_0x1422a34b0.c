// 函数: sub_1422a34b0
// 地址: 0x1422a34b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax_1 = (*(*arg1 + 0x150))()

if (rax_1 == 0 || 2f f> *(rax_1 + 0x520))
    *(arg1 + 0x22a) |= 0x10
    return rax_1

char rax_2 = *(arg1 + 0x22a)
int64_t r8 = *(*arg1 + 0x668)
int32_t i
int64_t* var_18
int32_t i_1

if ((rax_2 & 0x10) == 0)
    int32_t rsi_1 = 1
    
    if ((rax_2 & 4) != 0)
        rsi_1 = 0x10
    
    *(arg1 + 0x22a) = rax_2 | 0x10
    i = r8(arg1, 0)
    
    if (i.b != 0)
        sub_1424373a0(rax_1, &var_18)
        i = i_1
        
        while (i s>= 0)
            int64_t* rdx_5 = var_18
            
            if (i s>= rdx_5[1].d)
                break
            
            int64_t* rax_7 = sub_140d3c6e0(*rdx_5 + (sx.q(i) << 3))
            
            if (rax_7 != 0)
                int64_t var_20_2 = 0
                int64_t var_28_2 = 0
                sub_1425695a0(rax_7, arg1[0x46], zx.q(rsi_1), arg1)
            
            i = i_1 + 1
            i_1 = i
else
    i = r8(arg1, 0)
    
    if (i.b != 0)
        sub_1424373a0(rax_1, &var_18)
        i = i_1
        
        while (i s>= 0)
            int64_t* rdx_2 = var_18
            
            if (i s>= rdx_2[1].d)
                break
            
            int64_t* rax_4 = sub_140d3c6e0(*rdx_2 + (sx.q(i) << 3))
            
            if (rax_4 != 0)
                int64_t var_20_1 = 0
                int64_t var_28_1 = 0
                sub_1425695a0(rax_4, arg1[0x46], 2, arg1)
            
            i = i_1 + 1
            i_1 = i
return i
