// 函数: sub_142be5fd0
// 地址: 0x142be5fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = arg1

if (arg1 + 0xa u> *(arg2 + 0x108))
    sub_142b9a750(arg2, 8)
    noreturn

void* r11 = rbp + 7
void* r10 = rbp + 8
void* r9 = rbp + 9
void* r14 = rbp + 6
void* var_60 = r11
uint32_t r8_7 =
    ((zx.d(*(rbp + 2)) << 8 | zx.d(*(rbp + 3))) << 8 | zx.d(*(rbp + 4))) << 8 | zx.d(*(rbp + 5))
void* var_68 = r10
uint32_t arg_18 = r8_7
void* arg_20 = r9
uint32_t i_2 = ((zx.d(*(rbp + 6)) << 8 | zx.d(*r11)) << 8 | zx.d(*r10)) << 8 | zx.d(*r9)

if (r8_7 u<= (*(arg2 + 0x108)).d - rbp.d && r8_7 u>= 0xa && (r8_7 - 0xa) u/ 0xb u>= i_2)
    int32_t r13 = 1
    
    if (i_2 != 0)
        uint64_t i_1 = zx.q(i_2)
        uint64_t i
        
        do
            uint32_t rsi_5 = (zx.d(*(r11 + 3)) << 8 | zx.d(*(r10 + 3))) << 8 | zx.d(*(r9 + 3))
            uint32_t rbx_12 =
                ((zx.d(*(r14 + 7)) << 8 | zx.d(*(r11 + 7))) << 8 | zx.d(*(r10 + 7))) << 8
                | zx.d(*(r9 + 7))
            uint32_t r12_7 =
                ((zx.d(*(r14 + 0xb)) << 8 | zx.d(*(r11 + 0xb))) << 8 | zx.d(*(r10 + 0xb))) << 8
                | zx.d(*(r9 + 0xb))
            
            if (rbx_12 u>= r8_7 || r12_7 u>= r8_7)
                sub_142b9a750(arg2, 8)
                noreturn
            
            if (rsi_5 u< r13)
                sub_142b9a750(arg2, 8)
                noreturn
            
            r13 = rsi_5 + 1
            
            if (rbx_12 != 0)
                int32_t r14_2 = 0
                void* rsi_8 = zx.q(rbx_12) + 4 + rbp
                
                if (rsi_8 u> *(arg2 + 0x108))
                    sub_142b9a750(arg2, 8)
                    noreturn
                
                uint32_t j_4 =
                    ((zx.d(*(rsi_8 - 4)) << 8 | zx.d(*(rsi_8 - 3))) << 8 | zx.d(*(rsi_8 - 2))) << 8
                    | zx.d(*(rsi_8 - 1))
                
                if (j_4 u> ((*(arg2 + 0x108)).d - rsi_8.d) u>> 2)
                    sub_142b9a750(arg2, 8)
                    noreturn
                
                if (j_4 != 0)
                    uint64_t j_3 = zx.q(j_4)
                    uint64_t j
                    
                    do
                        uint32_t rax_26 = zx.d(*(rsi_8 + 1))
                        uint32_t rbx_19 = zx.d(*rsi_8)
                        uint32_t rbp_1 = zx.d(*(rsi_8 + 3))
                        rsi_8 += 4
                        uint32_t rbx_23 = (rbx_19 << 8 | rax_26) << 8 | zx.d(*(rsi_8 - 2))
                        uint32_t rbp_2 = rbp_1 + rbx_23
                        
                        if (rbp_2 u>= 0x110000)
                            sub_142b9a750(arg2, 8)
                            noreturn
                        
                        if (rbx_23 u< r14_2)
                            sub_142b9a750(arg2, 8)
                            noreturn
                        
                        r14_2 = rbp_2 + 1
                        j = j_3
                        j_3 -= 1
                    while (j != 1)
                    rbp = arg1
            
            if (r12_7 != 0)
                int32_t r13_1 = 0
                void* rsi_11 = zx.q(r12_7) + 4 + rbp
                
                if (rsi_11 u> *(arg2 + 0x108))
                    sub_142b9a750(arg2, 8)
                    noreturn
                
                void* r15_1 = rsi_11 - 3
                void* r14_3 = rsi_11 - 2
                void* rbp_3 = rsi_11 - 1
                uint32_t j_5 =
                    ((zx.d(*(rsi_11 - 4)) << 8 | zx.d(*(rsi_11 - 3))) << 8 | zx.d(*r14_3)) << 8
                    | zx.d(*rbp_3)
                int32_t temp3_1
                int32_t temp4_1
                temp3_1:temp4_1 = mulu.dp.d(0xcccccccd, (*(arg2 + 0x108)).d - rsi_11.d)
                
                if (j_5 u> temp3_1 u>> 2)
                    sub_142b9a750(arg2, 8)
                    noreturn
                
                if (j_5 != 0)
                    uint64_t j_2 = zx.q(j_5)
                    uint64_t j_1
                    
                    do
                        uint32_t rax_33 = zx.d(*(r14_3 + 3))
                        r14_3 += 5
                        uint32_t rbx_30 = zx.d(*(r15_1 + 3))
                        rbp_3 += 5
                        r15_1 += 5
                        uint32_t rbx_34 = (rbx_30 << 8 | rax_33) << 8 | zx.d(*(rbp_3 - 2))
                        
                        if (rbx_34 u>= 0x110000)
                            sub_142b9a750(arg2, 8)
                            noreturn
                        
                        if (rbx_34 u< r13_1)
                            sub_142b9a750(arg2, 8)
                            noreturn
                        
                        r13_1 = rbx_34 + 1
                        
                        if (arg2[0x11].d s>= 1
                                && (zx.d(*r14_3) << 8 | zx.d(*rbp_3)) u>= arg2[0x12].d)
                            sub_142b9a750(arg2, 0x10)
                            noreturn
                        
                        j_1 = j_2
                        j_2 -= 1
                    while (j_1 != 1)
            
            i = i_1
            i_1 -= 1
            r8_7 = arg_18
            rbp = arg1
            r9 += 0xb
            r10 += 0xb
            r11 += 0xb
            r14 += 0xb
        while (i != 1)
    
    return 0

sub_142b9a750(arg2, 8)
noreturn
