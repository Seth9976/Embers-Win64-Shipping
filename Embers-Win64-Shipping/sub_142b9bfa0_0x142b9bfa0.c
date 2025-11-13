// 函数: sub_142b9bfa0
// 地址: 0x142b9bfa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = 0
int32_t result_1 = 0

if (arg1 == 0)
    return 0x21

if (arg2 == 0 || arg3 == 0)
    return 6

int64_t rcx = *arg1

if (*(arg2 + 0x1a) - 1 u> 6)
    result_1 = 6
else
    int32_t rax_2 = arg3[2]
    
    if (rax_2 s< 0)
        rax_2 = neg.d(rax_2)
    
    int32_t r8_1 = *arg3 * rax_2
    *(arg3 + 0x1a) = 2
    *arg3 = *arg2
    arg3[1] = arg2[1]
    
    if (arg4 s> 0)
        rdx = mods.dp.d(sx.q(arg2[1]), arg4)
        
        if (rdx != 0)
            rdx = arg4 - rdx
    
    int32_t rdi_2 = arg2[1] + rdx
    
    if (rdi_2 s> 0 && *arg3 u> divu.dp.d(0:0xffffffff, rdi_2))
        return 6
    
    *(arg3 + 0x10) = sub_142b999e0(rcx, 1, r8_1, *arg3 * rdi_2, *(arg3 + 0x10), &result_1)
    int32_t result = result_1
    
    if (result != 0)
        return result
    
    int32_t rax_11 = neg.d(rdi_2)
    
    if (arg3[2] s>= 0)
        rax_11 = rdi_2
    
    arg3[2] = rax_11

int32_t rcx_1 = arg2[2]
char* rdi_3 = *(arg3 + 0x10)
char* rsi = *(arg2 + 0x10)

if (rcx_1 s< 0)
    rsi -= sx.q((*arg2 - 1) * rcx_1)

int32_t rcx_2 = arg3[2]

if (rcx_2 s< 0)
    rdi_3 -= sx.q((*arg3 - 1) * rcx_2)

switch (zx.d(*(arg2 + 0x1a)) - 1)
    case 0
        arg3[6].w = 2
        int32_t i_7 = *arg2
        
        if (i_7 != 0)
            int32_t i
            
            do
                char* r9_3 = rsi
                uint32_t j_6 = arg2[1] u>> 3
                char* rdx_3 = rdi_3
                
                if (j_6 != 0)
                    uint32_t j
                    
                    do
                        uint32_t rcx_5 = zx.d(*r9_3)
                        r9_3 = &r9_3[1]
                        *rdx_3 = (rcx_5 s>> 7).b & 1
                        rdx_3[1] = (rcx_5 s>> 6).b & 1
                        rdx_3[2] = (rcx_5 s>> 5).b & 1
                        rdx_3[3] = (rcx_5 s>> 4).b & 1
                        rdx_3[4] = (rcx_5 s>> 3).b & 1
                        rdx_3[5] = (rcx_5 s>> 2).b & 1
                        char rax_36 = (rcx_5 s>> 1).b
                        rcx_5.b &= 1
                        rdx_3[7] = rcx_5.b
                        rdx_3[6] = rax_36 & 1
                        rdx_3 = &rdx_3[8]
                        j = j_6
                        j_6 -= 1
                    while (j != 1)
                
                int32_t j_7 = arg2[1] & 7
                
                if (j_7 u> 0)
                    uint32_t rcx_6 = zx.d(*r9_3)
                    int32_t j_1
                    
                    do
                        rdx_3 = &rdx_3[1]
                        char rax_38 = (rcx_6 s>> 7).b
                        rcx_6 *= 2
                        rdx_3[-1] = rax_38 & 1
                        j_1 = j_7
                        j_7 -= 1
                    while (j_1 != 1)
                
                rsi = &rsi[sx.q(arg2[2])]
                rdi_3 = &rdi_3[sx.q(arg3[2])]
                i = i_7
                i_7 -= 1
            while (i != 1)
    case 1, 4, 5
        uint32_t count = arg2[1]
        arg3[6].w = 0x100
        int32_t i_5 = *arg2
        
        if (i_5 != 0)
            int32_t i_1
            
            do
                memcpy(rdi_3, rsi, count)
                rsi = &rsi[sx.q(arg2[2])]
                rdi_3 = &rdi_3[sx.q(arg3[2])]
                i_1 = i_5
                i_5 -= 1
            while (i_1 != 1)
    case 2
        arg3[6].w = 4
        int32_t i_8 = *arg2
        
        if (i_8 != 0)
            int32_t i_2
            
            do
                char* r9_4 = rsi
                uint32_t j_8 = arg2[1] u>> 2
                char* rax_45 = rdi_3
                
                if (j_8 != 0)
                    uint32_t j_2
                    
                    do
                        uint32_t rdx_5 = zx.d(*r9_4)
                        r9_4 = &r9_4[1]
                        *rax_45 = (rdx_5 s>> 6).b & 3
                        rax_45[1] = (rdx_5 s>> 4).b & 3
                        char rcx_13 = (rdx_5 s>> 2).b
                        rdx_5.b &= 3
                        rax_45[3] = rdx_5.b
                        rax_45[2] = rcx_13 & 3
                        rax_45 = &rax_45[4]
                        j_2 = j_8
                        j_8 -= 1
                    while (j_2 != 1)
                
                int32_t j_9 = arg2[1] & 3
                
                if (j_9 u> 0)
                    uint32_t rdx_6 = zx.d(*r9_4)
                    int32_t j_3
                    
                    do
                        rax_45 = &rax_45[1]
                        char rcx_15 = (rdx_6 s>> 6).b & 3
                        rdx_6 <<= 2
                        rax_45[-1] = rcx_15
                        j_3 = j_9
                        j_9 -= 1
                    while (j_3 != 1)
                
                rsi = &rsi[sx.q(arg2[2])]
                rdi_3 = &rdi_3[sx.q(arg3[2])]
                i_2 = i_8
                i_8 -= 1
            while (i_2 != 1)
    case 3
        arg3[6].w = 0x10
        int32_t i_9 = *arg2
        
        if (i_9 != 0)
            int32_t i_3
            
            do
                char* r8_7 = rsi
                uint32_t j_10 = arg2[1] u>> 1
                char* rdx_7 = rdi_3
                
                if (j_10 != 0)
                    uint32_t j_4
                    
                    do
                        uint32_t rcx_16 = zx.d(*r8_7)
                        r8_7 = &r8_7[1]
                        uint32_t rax_49 = rcx_16
                        rcx_16.b &= 0xf
                        rdx_7[1] = rcx_16.b
                        *rdx_7 = (rax_49 s>> 4).b & 0xf
                        rdx_7 = &rdx_7[2]
                        j_4 = j_10
                        j_10 -= 1
                    while (j_4 != 1)
                
                if ((arg2[1].b & 1) != 0)
                    *rdx_7 = *r8_7 u>> 4
                
                rsi = &rsi[sx.q(arg2[2])]
                rdi_3 = &rdi_3[sx.q(arg3[2])]
                i_3 = i_9
                i_9 -= 1
            while (i_3 != 1)
    case 6
        arg3[6].w = 0x100
        int32_t i_6 = *arg2
        
        if (i_6 != 0)
            int32_t i_4
            
            do
                int32_t j_11 = arg2[1]
                char* r10_1 = rdi_3
                
                if (j_11 != 0)
                    char* r9_6 = &rsi[1]
                    int32_t j_5
                    
                    do
                        uint32_t r8_8 = zx.d(r9_6[2])
                        
                        if (r8_8 != 0)
                            uint32_t rdx_8 = zx.d(r9_6[-1])
                            uint32_t rcx_17 = zx.d(*r9_6)
                            uint32_t rax_55 = zx.d(r9_6[1])
                            r8_8.b -= (divu.dp.d(
                                0:((rax_55 * rax_55 * 0x366d + rcx_17 * rcx_17 * 0xb717
                                    + rdx_8 * rdx_8 * 0x127c) u>> 0x10), 
                                r8_8)).b
                        
                        *r10_1 = r8_8.b
                        r9_6 = &r9_6[4]
                        r10_1 = &r10_1[1]
                        j_5 = j_11
                        j_11 -= 1
                    while (j_5 != 1)
                
                rsi = &rsi[sx.q(arg2[2])]
                rdi_3 = &rdi_3[sx.q(arg3[2])]
                i_4 = i_6
                i_6 -= 1
            while (i_4 != 1)

return zx.q(result_1)
