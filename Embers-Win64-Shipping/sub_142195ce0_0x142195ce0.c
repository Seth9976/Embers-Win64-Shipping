// 函数: sub_142195ce0
// 地址: 0x142195ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
void* rcx = arg1[0xca]

if (rcx != 0)
    int64_t rax_2 = 0
    
    if (0 == *(rcx + 8))
        *(rcx + 8) = 0
    else
        rax_2 = *(rcx + 8)
    
    if (((rax_2 u>> 0x1a).b & 1) == 0)
        int32_t zmm0_1 = sub_14218eae0(&data_143a2edd8)
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        
        while (*(arg1 + 0x434) != 0)
            zmm0_1 = sub_140b732d0((zx.o(0)).d)
        
        int64_t performanceCount_1
        QueryPerformanceCounter(&performanceCount_1)
        sub_14218e220(arg1, zmm0_1)

void* rsi = arg1[0x15]

if (rsi == 0)
    rsi = sub_141ee69e0(arg1)

int64_t* rcx_5 = *(rsi + 0x1b0)

if (rcx_5 != 0)
    int64_t rdx_1 = *rcx_5
    int64_t* rax_7 = (*(rdx_1 + 0x270))(rcx_5, rdx_1)
    
    if (rax_7 != 0)
        int64_t r8_1 = *rax_7
        arg1[0xb1] = (*r8_1)(rax_7, &data_143f4d480, r8_1)

if ((*(arg1 + 0x431) & 0x20) != 0 && (*(arg1 + 0x8a) & 1) == 0)
    if (arg1[0x18] != 0)
        if (sub_140d3e110(&arg1[0xaa]) == 0)
            sub_140d3a3a0(&arg1[0xaa], arg1[0x18])
        
        int32_t rcx_9
        rcx_9.b = *(arg1 + 0x55c) == 0
        
        if ((rcx_9.b & sub_140b5b8a0(arg1[0xab].d, 0)) != 0)
            arg1[0xab] = arg1[0x19]
        
        if (sub_14243ade0(rsi) != 0)
            void* r8_2 = arg1[0x18]
            int64_t* rcx_11 = *(r8_2 + 0xd0)
            void* rdx_3 = &rcx_11[sx.q(*(r8_2 + 0xd8))]
            
            if (rcx_11 == rdx_3)
            label_142195e75:
                int64_t var_40_1 = 0
                sub_141f4a650(arg1, nullptr, 0)
            else
                while (true)
                    if (*rcx_11 == arg1)
                        if (*(arg1 + 0x89) s>= 0)
                        label_142195fae:
                            int64_t rax_21 = *arg1
                            int32_t var_48 = 0
                            (*(rax_21 + 0x400))(arg1, &var_48)
                        else
                            if (arg1[0xac].b == 0 || *(arg1 + 0x561) == 0)
                                if (arg1[0xab] != arg1[0x19])
                                    goto label_142195fae
                            else if (*(arg1 + 0x562) != 0 || arg1[0xab] != arg1[0x19])
                                goto label_142195fae
                            
                            if (sub_1406ee470(&arg1[0xaa], r8_2, r8_2.d) != 0)
                                goto label_142195fae
                        
                        break
                    
                    rcx_11 = &rcx_11[1]
                    
                    if (rcx_11 == rdx_3)
                        goto label_142195e75
    
    int32_t rax_14 = *(arg1 + 0x124)
    *(arg1 + 0x564) = *(arg1 + 0x11c)
    arg1[0xae] = arg1[0x25]
    int64_t zmm0 = *(arg1 + 0x134)
    *(arg1 + 0x56c) = rax_14
    arg1[0xaf].d = arg1[0x26].d
    int32_t rax_16 = *(arg1 + 0x13c)
    *(arg1 + 0x57c) = zmm0
    *(arg1 + 0x584) = rax_16

if (data_143a2ef90 != 0)
    void* rax_17 = arg1[0x81]
    
    if (rax_17 != 0 && (*(rax_17 + 0xb1) & 2) != 0 && arg1[9].d s<= 1 && arg1[0x1b].d == 0)
        *(arg1 + 0x3a) &= 0xfb

int64_t result
int64_t rdx_4
result, rdx_4 = sub_141f20900(arg1)

if ((arg1[0x86].b & 0x20) != 0 && (*(arg1 + 0x8a) & 1) == 0)
    rdx_4.b = 1
    result = (*(*arg1 + 0x268))(arg1, rdx_4)

if (*(arg1 + 0x4b4) == 0xffffffff)
    *(arg1 + 0x4b4) = 0

__security_check_cookie(rax_1 ^ &var_68)
return result
