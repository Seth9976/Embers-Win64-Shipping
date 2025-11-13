// 函数: sub_1426c4ac0
// 地址: 0x1426c4ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = arg1
int64_t r11 = sx.q(arg2)
int64_t rsi = arg1
int64_t rbx = r11
int64_t var_48 = rbx
uint64_t rax

if (arg2 s> 0)
    int64_t r8_1 = 0
    int32_t r10_1 = 1
    
    do
        if (r10_1 s< r11.d)
            void* r9_1 = *(rsi + (r8_1 << 3) + 8)
            void* rdx = *(rsi + (r8_1 << 3))
            arg1.b = *(r9_1 + 0x34) != 1
            rax.b = *(rdx + 0x34) != 1
            
            if (arg1.b == rax.b)
                arg1.b = *(r9_1 + 0xf8) u< *(rdx + 0xf8)
            
            if (arg1.b != 0)
                *(rsi + (r8_1 << 3)) = r9_1
                *(rsi + (r8_1 << 3) + 8) = rdx
        
        r10_1 += 2
        r8_1 += 2
    while (r8_1 s< rbx)

int32_t i_2 = 2
int32_t i_4 = 2

if (r11.d s<= 2)
    return 

int32_t i

do
    int64_t i_5 = sx.q(i_2)
    i = i_2 * 2
    int32_t rcx = 0
    int32_t i_1 = i
    rax = 0
    int32_t arg_20 = 0
    int32_t r10_2 = i_2 * 2
    uint64_t var_58_1 = 0
    int64_t j_8 = i_5 * 2
    int32_t var_60_1 = r10_2
    int64_t r8_2 = i_5 << 4
    int64_t r15_1 = rsi
    int64_t var_50_1 = r8_2
    int64_t j_10 = j_8
    
    do
        int32_t i_6 = i_2
        int32_t i_3 = r11.d - rcx
        
        if (i s<= i_3)
            i_3 = i
        
        int32_t rbp_1 = 0
        
        if (i_2 s> 0)
            while (i_6 s< i_3)
                int32_t r8_3 = 0
                int32_t j = i_6 - rbp_1
                
                if (j s> 0)
                    void* rbx_1 = *(r15_1 + (sx.q(i_6) << 3))
                    r11.b = *(rbx_1 + 0x34) != 1
                    
                    do
                        int32_t rcx_2 = j & 0x80000001
                        
                        if (rcx_2 s< 0)
                            rcx_2 = ((rcx_2 - 1) | 0xfffffffe) + 1
                        
                        int32_t temp3_1
                        int32_t temp4_1
                        temp3_1:temp4_1 = sx.q(j)
                        int32_t j_4 = (temp4_1 - temp3_1) s>> 1
                        j = j_4
                        int32_t rax_5 = j_4 + r8_3
                        int32_t r10_3 = rax_5 + rcx_2
                        void* r9_2 = *(r15_1 + ((sx.q(rax_5) + sx.q(rbp_1)) << 3))
                        rax_5.b = *(r9_2 + 0x34) != 1
                        bool rax_6
                        
                        if (r11.b == rax_5.b)
                            rax_6 = *(rbx_1 + 0xf8) u< *(r9_2 + 0xf8)
                        else
                            rax_6 = r11.b
                        
                        if (rax_6 == 0)
                            r8_3 = r10_3
                    while (j s> 0)
                
                int32_t rbp_2 = rbp_1 + r8_3
                
                if (rbp_2 s>= i_6)
                    break
                
                int32_t j_9 = 0
                int32_t j_1 = i_3 - i_6
                
                if (j_1 s> 0)
                    int64_t rax_7 = sx.q(rbp_2)
                    r11 = *(r15_1 + (rax_7 << 3))
                    int64_t* r14_1 = r15_1 + (rax_7 << 3)
                    j_8.b = *(r11 + 0x34) != 1
                    
                    do
                        int32_t rcx_8 = j_1 & 0x80000001
                        
                        if (rcx_8 s< 0)
                            rcx_8 = ((rcx_8 - 1) | 0xfffffffe) + 1
                        
                        int32_t temp6_1
                        int32_t temp7_1
                        temp6_1:temp7_1 = sx.q(j_1)
                        int32_t j_5 = (temp7_1 - temp6_1) s>> 1
                        j_1 = j_5
                        uint32_t rax_11 = j_5 + j_9
                        int32_t j_11 = rax_11 + rcx_8
                        void* r9_3 = *(r15_1 + ((sx.q(rax_11) + sx.q(i_6)) << 3))
                        rax_11.b = *(r9_3 + 0x34) != 1
                        
                        if (rax_11.b == j_8.b)
                            rax_11.b = *(r9_3 + 0xf8) u< *(r11 + 0xf8)
                        
                        if (rax_11.b != 0)
                            j_9 = j_11
                    while (j_1 s> 0)
                    
                    if (j_9 != 0)
                        int32_t j_6 = j_9
                        int32_t rbx_5 = j_9 - rbp_2 + i_6
                        int32_t rax_12 = rbx_5
                        int32_t j_2
                        
                        do
                            j_8 = zx.q(j_6)
                            j_2 = mods.dp.d(sx.q(rax_12), j_6)
                            rax_12 = j_8.d
                            j_6 = j_2
                        while (j_2 != 0)
                        int32_t j_3 = 0
                        uint64_t k_2 = zx.q(divs.dp.d(sx.q(rbx_5), j_8.d))
                        
                        if (j_8.d s> 0)
                            do
                                r11 = *r14_1
                                int32_t j_7 = j_3
                                
                                if (k_2.d s> 0)
                                    uint64_t k_1 = k_2
                                    uint64_t k
                                    
                                    do
                                        j_7 = mods.dp.d(sx.q(j_7 + j_9), rbx_5)
                                        int64_t rcx_13 = sx.q(j_7 + rbp_2)
                                        int64_t rax_20 = *(r15_1 + (rcx_13 << 3))
                                        *(r15_1 + (rcx_13 << 3)) = r11
                                        r11 = rax_20
                                        k = k_1
                                        k_1 -= 1
                                    while (k != 1)
                                
                                j_3 += 1
                                r14_1 = &r14_1[1]
                            while (j_3 s< j_8.d)
                
                i_6 += j_9
                rbp_1 = rbp_2 + 1 + j_9
                
                if (rbp_1 s>= i_6)
                    break
            
            rax = var_58_1
            rcx = arg_20
            i_2 = i_4
            r8_2 = var_50_1
            i = i_1
            r11 = zx.q(arg2)
            rbx = var_48
            r10_2 = var_60_1
            j_8 = j_10
        
        rcx += r10_2
        rax += j_8
        r15_1 += r8_2
        arg_20 = rcx
        var_58_1 = rax
    while (rax s< rbx)
    
    rsi = arg_8
    i_2 = i
    i_4 = i_2
while (i s< r11.d)
