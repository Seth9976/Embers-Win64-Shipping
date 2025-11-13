// 函数: sub_141d13ed0
// 地址: 0x141d13ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* lpCriticalSection = arg1 + 8
EnterCriticalSection(lpCriticalSection)
int32_t var_144 = 1
int32_t var_138 = 0xffffffff
int32_t r11 = *(arg1 + 0x80)
void* r9 = arg1 + 0x68
void* var_140 = r9
int32_t rcx_1 = 0
int32_t var_148 = 0
int32_t r8 = 0
int64_t var_134 = 0

if (r11 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9
    
    if (rdx_2 != 0)
    label_141d13f8b:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_144_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_134.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_134.d = r11
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx_1)
            r8 += 0x20
            rcx_1 += 1
            var_134:4.d = r8
            var_148 = rcx_1
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9 + (rdx_3 << 2) + 4)
            var_138 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_141d13f8b
        
        var_134.d = r11

double zmm4[0x2] = var_138.o
int64_t* var_50 = arg1 + 0x58
int16_t var_e0 = 0
double zmm3[0x2] = var_148.o
double result = zmm3[0]
int128_t var_118 = (arg1 + 0x58).o
double rcx_3 = zmm4[0]
zmm4[0] = (_mm_unpackhi_pd(zmm4, zmm4[0])).q

if ((rcx_3 u>> 0x20).d s< *(result i+ 0x18))
    int32_t i = zmm3[1]:4.d
    void* r13_1 = arg1 + 0xa8
    
    do
        int64_t rdx_4 = sx.q(i) * 3
        int64_t r8_2 = *var_118.q
        
        if (*(*(r8_2 + (rdx_4 << 3)) + 0x18) == arg2)
            int16_t arg_18 = *(r8_2 + (rdx_4 << 3) + 8)
            int16_t j_3 = *(arg1 + 0xb0)
            
            if (0 u< j_3)
                int64_t rbx = 0
                uint64_t j_1 = zx.q(j_3)
                int64_t var_128_1 = 0
                uint64_t j_2 = j_1
                uint64_t j
                
                do
                    int64_t r15_1 = *(arg1 + 0x158)
                    int64_t rsi_2 = sx.q(*(*(rbx + *r13_1 + 8) + 0x18c)) * 2
                    int32_t r12_1 = *(r15_1 + (rsi_2 << 3) + 8)
                    
                    if (r12_1 s<= 0)
                        r12_1 = 0
                    
                    if (r12_1 != 0)
                        int64_t rdi_1 = 0
                        int64_t r13_2 = sx.q(r12_1)
                        
                        if (r12_1 s> 0)
                            int64_t (* var_c8)(int64_t* arg1, int32_t* arg2) = sub_141cfc7d0
                            void* var_d8
                            int64_t* var_c0_1 = &var_d8
                            
                            do
                                int64_t rax_16 = *(arg1 + 0x158)
                                var_d8 = arg1
                                int64_t rax_17 = *(*(rax_16 + (rsi_2 << 3)) + (rdi_1 << 3))
                                uint64_t r8_4 = rax_17 & 0xffffffffffff
                                void* rdx_6 = (rax_17 u>> 0x30) * 0x98 + *(arg1 + 0xa8)
                                sub_141cf4a50(rdx_6 + 0x80, arg1 + 0xe0, r8_4, r8_4, 0, 
                                    *(rdx_6 + 0x18), *(rdx_6 + 0x20), *(rdx_6 + 0x24), &var_c8)
                                rdi_1 += 1
                            while (rdi_1 s< r13_2)
                            
                            r15_1 = *(arg1 + 0x158)
                            rbx = var_128_1
                        
                        int32_t rax_22 = *(r15_1 + (rsi_2 << 3) + 8)
                        
                        if (rax_22 != r12_1)
                            int64_t rcx_9 = *(r15_1 + (rsi_2 << 3))
                            memmove(rcx_9, rcx_9 + (r13_2 << 3), (rax_22 - r12_1) << 3)
                            rax_22 = *(r15_1 + (rsi_2 << 3) + 8)
                        
                        j_1 = j_2
                        r13_1 = arg1 + 0xa8
                        *(r15_1 + (rsi_2 << 3) + 8) = rax_22 - r12_1
                    
                    rbx += 0x98
                    j = j_1
                    j_1 -= 1
                    var_128_1 = rbx
                    j_2 = j_1
                while (j != 1)
            
            uint64_t rbx_1 = zx.q(arg_18)
            char arg_8
            arg_18.q = &arg_8
            arg_8 = 0
            int16_t* var_b0_1 = &arg_18
            uint64_t rbx_2 = rbx_1 << 0x30
            int64_t* rsi_4 = rbx_1 * 0x98 + *r13_1
            char* (* var_b8)(int64_t* arg1) = sub_141cfc9b0
            sub_141cf54c0(rsi_4[0x10].d, arg1 + 0xe0, 0, rbx_2 - 1 + rsi_4[2], 0, rsi_4[3], 
                rsi_4[4].d, *(rsi_4 + 0x24), &var_b8)
            int32_t rcx_11 = *(rsi_4 + 0x7c)
            arg_18.q = &arg_8
            int64_t r9_5 = rbx_2 - 1 + rsi_4[2]
            int16_t* var_a0_1 = &arg_18
            char* (* var_a8)(int64_t* arg1) = sub_141cfc9b0
            sub_141cf54c0(rcx_11, arg1 + 0xe0, 0, r9_5, 0, rsi_4[3], rsi_4[4].d, *(rsi_4 + 0x24), 
                &var_a8)
            int64_t r15_2 = 5
            int16_t* var_90_1 = &arg_18
            void* rdi_2 = &rsi_4[0xe]
            char* (* var_98)(int64_t* arg1) = sub_141cfc9b0
            int16_t* var_80_1 = &arg_18
            char* (* var_88)(int64_t* arg1) = sub_141cfc9b0
            int16_t* var_140_1 = &arg_18
            var_148.q = sub_141cfc9b0
            
            while (true)
                arg_18.q = &arg_8
                sub_141cf5820(*(rdi_2 + 8), arg1 + 0xb8, 0, rbx_2 - 1 + rsi_4[2], 0, rsi_4[3], 
                    rsi_4[4].d, *(rsi_4 + 0x24), &var_98)
                arg_18.q = &arg_8
                sub_141cf5820(*rdi_2, arg1 + 0xb8, 0, rbx_2 - 1 + rsi_4[2], 0, rsi_4[3], 
                    rsi_4[4].d, *(rsi_4 + 0x24), &var_88)
                arg_18.q = &arg_8
                sub_141cf5820(*(rdi_2 + 4), arg1 + 0xb8, 0, rbx_2 - 1 + rsi_4[2], 0, rsi_4[3], 
                    rsi_4[4].d, *(rsi_4 + 0x24), &var_148)
                
                if (r15_2 == 0)
                    break
                
                r15_2 -= 1
                rdi_2 -= 0xc
            
            if (arg_8 == 0)
                sub_1405c2fb0(zmm4[1], zmm3[1]:4.d)
                int64_t* rcx_16 = *rsi_4
                var_e0.b = 1
                
                if (rcx_16 != 0)
                    (**rcx_16)(rcx_16, 1)
                
                *rsi_4 = 0
                int32_t r8_7 = 0
                int64_t rdx_17 = sx.q(*(arg1 + 0xb0))
                
                if (rdx_17.d s> 0)
                    int64_t rax_40 = rdx_17 - 1
                    int64_t* rcx_18 = rax_40 * 0x98 + *r13_1
                    
                    while (*rcx_18 == 0)
                        r8_7 += 1
                        rcx_18 -= 0x98
                        int64_t temp5_1 = rax_40
                        rax_40 -= 1
                        
                        if (temp5_1 - 1 s< 0)
                            break
                    
                    if (r8_7 != 0)
                        sub_141d0daa0(r13_1, rdx_17.d - r8_7, r8_7, 1)
                        *(arg1 + 0x30) = 0
        
        zmm3[1].d &= not.d(var_118:0xc.d)
        sub_14059bdd0(&var_118:8)
        result = zmm3[0]
        i = zmm3[1]:4.d
    while (i s< *(result i+ 0x18))
    
    if (var_e0.b != 0 && var_e0:1.b != 0)
        result = sub_1405b6470(arg1 + 0x58, *(arg1 + 0x60) - *(arg1 + 0x8c), 1)

if (lpCriticalSection == 0)
    return result

return LeaveCriticalSection(lpCriticalSection)
