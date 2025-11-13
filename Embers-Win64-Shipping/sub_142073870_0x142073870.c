// 函数: sub_142073870
// 地址: 0x142073870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_2 = sx.q(arg1[1].d)
int32_t rcx = 0
int32_t r8 = arg2[1].d
int32_t rsi = -1
int32_t r9 = -1

if (r8 s> 0)
    int32_t* rdx = nullptr
    
    do
        if (rsi == 0xffffffff && not(arg1[8].d f> *(rdx + *arg2)))
            rsi = rcx
        else if (*(arg1 + 0x44) f< *(rdx + *arg2))
            r9 = rcx
            break
        
        rcx += 1
        rdx = &rdx[5]
    while (rcx s< r8)

int32_t rcx_1 = r8

if (r9 != 0xffffffff)
    rcx_1 = r9

int32_t r14_1 = rcx_1 - rsi

if (rcx_1 != rsi)
    int32_t rax_4 = r8 - r14_1
    
    if (rax_4 != rsi)
        int64_t r10_1 = *arg2
        memmove(r10_1 + sx.q(rsi) * 0x14, r10_1 + sx.q(rcx_1) * 0x14, (rax_4 - rsi) * 0x14)
        r8 = arg2[1].d
    
    arg2[1].d = r8 - r14_1
    sub_1413a8970(arg2)

uint32_t result = sub_141fd3f30(arg2, rsi, i_2.d)
int64_t i_1 = i_2

if (i_2.d s> 0)
    int32_t* rdx_3 = nullptr
    int64_t i
    
    do
        int32_t* r8_5 = &rdx_3[sx.q(rsi) * 5]
        uint32_t r9_2 = 0
        *(r8_5 + *arg2) = *(rdx_3 + *arg1)
        result = zx.d(*(rdx_3 + *arg1 + 0x10))
        *(r8_5 + *arg2 + 0x10) = result.b
        
        if (arg3 s>= 4)
            uint64_t rax_15 = zx.q(((arg3 - 4) u>> 2) + 1)
            uint64_t j_3 = zx.q(rax_15.d)
            r9_2 = (rax_15 << 2).d
            uint64_t j
            
            do
                *(r8_5 + *arg2 + 4) = *(rdx_3 + *arg1 + 4)
                *(r8_5 + *arg2 + 8) = *(rdx_3 + *arg1 + 8)
                *(r8_5 + *arg2 + 0xc) = *(rdx_3 + *arg1 + 0xc)
                *(r8_5 + *arg2 + 4) = *(rdx_3 + *arg1 + 4)
                *(r8_5 + *arg2 + 8) = *(rdx_3 + *arg1 + 8)
                *(r8_5 + *arg2 + 0xc) = *(rdx_3 + *arg1 + 0xc)
                *(r8_5 + *arg2 + 4) = *(rdx_3 + *arg1 + 4)
                *(r8_5 + *arg2 + 8) = *(rdx_3 + *arg1 + 8)
                *(r8_5 + *arg2 + 0xc) = *(rdx_3 + *arg1 + 0xc)
                *(r8_5 + *arg2 + 4) = *(rdx_3 + *arg1 + 4)
                *(r8_5 + *arg2 + 8) = *(rdx_3 + *arg1 + 8)
                result = *(rdx_3 + *arg1 + 0xc)
                *(r8_5 + *arg2 + 0xc) = result
                j = j_3
                j_3 -= 1
            while (j != 1)
        
        if (r9_2 s< arg3)
            uint64_t j_2 = zx.q(arg3 - r9_2)
            uint64_t j_1
            
            do
                *(r8_5 + *arg2 + 4) = *(rdx_3 + *arg1 + 4)
                *(r8_5 + *arg2 + 8) = *(rdx_3 + *arg1 + 8)
                result = *(rdx_3 + *arg1 + 0xc)
                *(r8_5 + *arg2 + 0xc) = result
                j_1 = j_2
                j_2 -= 1
            while (j_1 != 1)
        
        rdx_3 = &rdx_3[5]
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
