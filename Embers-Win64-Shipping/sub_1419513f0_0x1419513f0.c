// 函数: sub_1419513f0
// 地址: 0x1419513f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)
void* rbp = arg1
int32_t var_88 = rbx.d
int64_t rsi = rbx
int64_t var_68 = rbx
uint32_t i_4
uint128_t zmm2
uint128_t zmm3

if (arg2 s> 0)
    int32_t r10_1 = 1
    uint32_t* r8_1 = arg1 + 0x24
    int64_t i_6 = ((rbx - 1) u>> 1) + 1
    int64_t i
    
    do
        if (r10_1 s< rbx.d)
            i_4 = r8_1[-1]
            int32_t temp3_1 = r8_1[-8]
            
            if (i_4 u< temp3_1)
            label_141951465:
                int128_t* rdx_1 = sx.q(r10_1) * 0x1c + rbp
                int128_t* r9_2 = sx.q(r10_1 - 1) * 0x1c + rbp
                
                if (r9_2 != rdx_1)
                    int32_t rcx_1 = *(r9_2 + 0x18)
                    zmm3 = *r9_2
                    zmm2 = zx.o(r9_2[1].q)
                    *r9_2 = *rdx_1
                    r9_2[1].q = rdx_1[1].q
                    *(r9_2 + 0x18) = *(rdx_1 + 0x18)
                    *rdx_1 = zmm3
                    rdx_1[1].q = zmm2.q
                    *(rdx_1 + 0x18) = rcx_1
            else if (i_4 u<= temp3_1)
                i_4 = *r8_1
                int32_t temp4_1 = r8_1[-7]
                
                if (i_4 u< temp4_1)
                    goto label_141951465
                
                if (i_4 u<= temp4_1 && *(r8_1 + 0x11) u< *(r8_1 - 0xb))
                    goto label_141951465
        
        r10_1 += 2
        r8_1 = &r8_1[0xe]
        i = i_6
        i_6 -= 1
    while (i != 1)

uint32_t i_5 = 2
uint32_t i_2 = 2

if (rbx.d s<= 2)
    return 

uint32_t i_1

do
    int32_t rdx_2 = 0
    int64_t i_8 = sx.q(i_5)
    int64_t rcx_2 = 0
    int32_t var_94_1 = 0
    int64_t rdi_1 = i_8 * 0x38
    i_1 = i_5 * 2
    int64_t var_80_1 = 0
    uint32_t r10_2 = i_5 * 2
    int64_t var_70_1 = rdi_1
    int64_t r11_3 = i_8 * 2
    uint32_t i_3 = i_1
    uint32_t var_84_1 = r10_2
    void* r15_1 = rbp
    int64_t var_78_1 = r11_3
    
    do
        uint32_t i_9 = i_5
        i_4 = rbx.d - rdx_2
        
        if (i_1 s<= i_4)
            i_4 = i_1
        
        int32_t r14_1 = 0
        uint32_t i_7 = i_4
        
        if (i_5 s> 0)
            while (i_9 s< i_4)
                int64_t i_10 = sx.q(i_9)
                int64_t r10_3 = i_10 * 0x1c
                int32_t j = i_9 - r14_1
                int32_t r9_3 = 0
                
                if (j s> 0)
                    int32_t r11_4 = *(r10_3 + r15_1 + 4)
                    
                    do
                        int32_t rcx_4 = j & 0x80000001
                        
                        if (rcx_4 s< 0)
                            rcx_4 = ((rcx_4 - 1) | 0xfffffffe) + 1
                        
                        int32_t temp5_1
                        int32_t temp6_1
                        temp5_1:temp6_1 = sx.q(j)
                        int32_t j_4 = (temp6_1 - temp5_1) s>> 1
                        j = j_4
                        int32_t rax_5 = j_4 + r9_3
                        int64_t rdx_4 = (sx.q(rax_5) + sx.q(r14_1)) * 0x1c
                        uint32_t rax_6 = *(rdx_4 + r15_1 + 4)
                        
                        if (r11_4 u< rax_6)
                            rax_6.b = 1
                        else if (r11_4 u> rax_6)
                            rax_6.b = 0
                        else
                            rax_6 = *(r10_3 + r15_1 + 8)
                            int32_t temp10_1 = *(rdx_4 + r15_1 + 8)
                            
                            if (rax_6 u< temp10_1)
                                rax_6.b = 1
                            else if (rax_6 u> temp10_1
                                    || *(r10_3 + r15_1 + 0x19) u>= *(rdx_4 + r15_1 + 0x19))
                                rax_6.b = 0
                            else
                                rax_6.b = 1
                        
                        if (rax_6.b == 0)
                            r9_3 = rax_5 + rcx_4
                    while (j s> 0)
                    
                    i_4 = i_7
                
                int32_t r14_2 = r14_1 + r9_3
                
                if (r14_2 s>= i_9)
                    break
                
                int64_t r12_1 = sx.q(r14_2)
                int64_t r10_4 = r12_1 * 0x1c
                int32_t j_1 = i_4 - i_9
                int32_t j_10 = 0
                
                if (j_1 s> 0)
                    int32_t r11_5 = *(r10_4 + r15_1 + 4)
                    
                    do
                        int32_t rcx_10 = j_1 & 0x80000001
                        
                        if (rcx_10 s< 0)
                            rcx_10 = ((rcx_10 - 1) | 0xfffffffe) + 1
                        
                        int32_t temp7_1
                        int32_t temp8_1
                        temp7_1:temp8_1 = sx.q(j_1)
                        int32_t j_5 = (temp8_1 - temp7_1) s>> 1
                        j_1 = j_5
                        int32_t rax_10 = j_5 + j_10
                        void* rax_12 = (sx.q(rax_10) + i_10) * 0x1c + r15_1
                        int32_t temp9_1 = *(rax_12 + 4)
                        
                        if (temp9_1 u< r11_5)
                            rax_12.b = 1
                        else if (temp9_1 u> r11_5)
                            rax_12.b = 0
                        else
                            int32_t rcx_15 = *(rax_12 + 8)
                            int32_t temp11_1 = *(r10_4 + r15_1 + 8)
                            
                            if (rcx_15 u< temp11_1)
                                rax_12.b = 1
                            else if (rcx_15 u> temp11_1
                                    || *(rax_12 + 0x19) u>= *(r10_4 + r15_1 + 0x19))
                                rax_12.b = 0
                            else
                                rax_12.b = 1
                        
                        if (rax_12.b != 0)
                            j_10 = rax_10 + rcx_10
                    while (j_1 s> 0)
                    
                    if (j_10 != 0)
                        int32_t j_6 = j_10
                        int32_t j_12 = j_10 - r14_2 + i_9
                        int32_t j_11 = j_12
                        int32_t j_9
                        int32_t j_2
                        
                        do
                            j_9 = j_6
                            j_2 = mods.dp.d(sx.q(j_11), j_6)
                            j_11 = j_9
                            j_6 = j_2
                        while (j_2 != 0)
                        int32_t r10_5 = 0
                        uint64_t j_8 = zx.q(divs.dp.d(sx.q(j_12), j_9))
                        
                        if (j_9 s> 0)
                            int64_t rbx_3 = 0
                            
                            do
                                uint128_t* rdx_11 = (r12_1 + rbx_3) * 0x1c
                                uint128_t zmm0 = zx.o(*(rdx_11 + r15_1 + 0x10))
                                int32_t rsi_1 = *(rdx_11 + r15_1 + 0x18)
                                zmm3 = *(rdx_11 + r15_1)
                                int32_t rdx_12 = r10_5
                                
                                if (j_8.d s> 0)
                                    uint64_t j_7 = j_8
                                    uint64_t j_3
                                    
                                    do
                                        rdx_12 = mods.dp.d(sx.q(rdx_12 + j_10), j_12)
                                        uint128_t* rax_21 = sx.q(rdx_12 + r14_2) * 0x1c + r15_1
                                        void var_58
                                        
                                        if (rax_21 != &var_58)
                                            zmm2 = *rax_21
                                            int32_t rcx_18 = *(rax_21 + 0x18)
                                            uint128_t zmm1 = zx.o(rax_21[1].q)
                                            *rax_21 = zmm3
                                            rax_21[1].q = zmm0.q
                                            zmm3 = zmm2
                                            *(rax_21 + 0x18) = rsi_1
                                            zmm0 = zmm1
                                            rsi_1 = rcx_18
                                        
                                        j_3 = j_7
                                        j_7 -= 1
                                    while (j_3 != 1)
                                
                                r10_5 += 1
                                rbx_3 += 1
                            while (r10_5 s< j_9)
                    
                    i_4 = i_7
                
                i_9 += j_10
                r14_1 = r14_2 + 1 + j_10
                
                if (r14_1 s>= i_9)
                    break
            
            rcx_2 = var_80_1
            rdx_2 = var_94_1
            i_5 = i_2
            i_1 = i_3
            rbx = zx.q(var_88)
            r10_2 = var_84_1
            r11_3 = var_78_1
            rdi_1 = var_70_1
            rsi = var_68
        
        rdx_2 += r10_2
        rcx_2 += r11_3
        r15_1 += rdi_1
        var_94_1 = rdx_2
        var_80_1 = rcx_2
    while (rcx_2 s< rsi)
    
    rbp = arg1
    i_5 = i_1
    i_2 = i_1
while (i_1 s< rbx.d)
