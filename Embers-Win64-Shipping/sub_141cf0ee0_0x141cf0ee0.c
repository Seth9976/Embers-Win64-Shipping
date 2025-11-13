// 函数: sub_141cf0ee0
// 地址: 0x141cf0ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = arg1
int32_t rsi = arg6
int64_t rbp = sx.q(arg3)
int64_t rdx_4
int64_t r8_4

while (true)
    int32_t r9_2 = *rbx
    
    if (r9_2 == 0)
        int32_t rcx = data_143a21140
        int32_t rdi_1
        
        if (rcx == 0)
            rdi_1 = data_143a21130.d
            bool cond:0_1 = rdi_1 + 1 s<= data_143a21130:4.d
            data_143a21130.d = rdi_1 + 1
            
            if (not(cond:0_1))
                sub_14083a7e0(&data_143a21128)
        else
            int64_t r10_1 = data_143a21138
            rdi_1 = *(r10_1 + (sx.q(rcx - 1) << 2))
            
            if (0 != 0)
                memmove(r10_1 + (sx.q(rcx - 1) << 2), r10_1 + (sx.q(rcx) << 2), 0 << 2)
                rcx = data_143a21140
            
            data_143a21140 = rcx - 1
            sub_1405dac90(&data_143a21138)
        
        int64_t rcx_4 = sx.q(rdi_1) * 3
        int64_t rax_9 = data_143a21128
        *(rax_9 + (rcx_4 << 2)) = 0
        *(rax_9 + (rcx_4 << 2) + 8) = 0
        r9_2 = data_143a21148 | rdi_1
        *rbx = r9_2
    
    char rcx_5 = rsi.b
    rdx_4 = arg4 << rcx_5 & 0x8000000000000000
    r8_4 = arg5 << rcx_5 & 0x8000000000000000
    rbx = data_143a21128 + (sx.q(not.d(data_143a2114c)) & sx.q(r9_2)) * 0xc
    
    if (rdx_4 != r8_4)
        break
    
    if (rsi u>= arg7)
        break
    
    rsi += 1
    
    if (rdx_4 != 0)
        rbx = &rbx[2]

void* r9_5 = (sx.q(not.d(*(arg2 + 0x24))) & rbp) * 0x30 + *arg2

if (rdx_4 != r8_4)
    int32_t rax_17 = rbx[1]
    *(r9_5 + 0x20) = rax_17
    rbx[1] = rbp.d
    return rax_17

if (rdx_4 != 0)
    int32_t rax_19 = rbx[2]
    *(r9_5 + 0x20) = rax_19
    rbx[2] = rbp.d
    return rax_19

int32_t rax_18 = *rbx
*(r9_5 + 0x20) = rax_18
*rbx = rbp.d
return rax_18
