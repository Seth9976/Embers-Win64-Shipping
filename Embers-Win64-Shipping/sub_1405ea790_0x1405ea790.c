// 函数: sub_1405ea790
// 地址: 0x1405ea790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_38 = zmm6
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t r12 = result.d

if (result.d s>= 0)
    int32_t r13_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        uint64_t r14_1 = zx.q(r12)
        
        if (r13_1 s< arg2)
            do
                uint64_t rsi_1 = zx.q(((r14_1 << 1) + 1).d)
                int32_t rbp_1 = (rsi_1 + 1).d
                
                if (rbp_1 s< arg2)
                    int64_t* rbx_1 = arg1[sx.q(rsi_1.d)]
                    int128_t zmm0_1
                    int512_t zmm6_1
                    zmm0_1, zmm6_1 = sub_1405f7fc0(arg1[sx.q(rbp_1)])
                    zmm6_1.o = zmm0_1
                    int32_t zmm0_2
                    int32_t zmm6_2
                    zmm0_2, zmm6_2 = sub_1405f7fc0(rbx_1)
                    
                    if (zmm0_2 f< zmm6_2)
                        rbp_1 = rsi_1.d
                    
                    rsi_1 = zx.q(rbp_1)
                
                int64_t r14_2 = sx.q(r14_1.d)
                int64_t rbp_2 = sx.q(rsi_1.d)
                int64_t* rbx_2 = arg1[rbp_2]
                int128_t zmm0_3
                int512_t zmm6_3
                zmm0_3, zmm6_3 = sub_1405f7fc0(arg1[r14_2])
                zmm6_3.o = zmm0_3
                int32_t zmm0_4
                zmm0_4, result, zmm6 = sub_1405f7fc0(rbx_2)
                
                if (zmm6.d f<= zmm0_4)
                    break
                
                int64_t rcx_4 = arg1[r14_2]
                arg1[r14_2] = arg1[rbp_2]
                result = zx.q(((rsi_1 << 1) + 1).d)
                arg1[rbp_2] = rcx_4
                r14_1 = zx.q(rsi_1.d)
            while (result.d s< arg2)
        
        r13_1 -= 2
        temp2_1 = r12
        r12 -= 1
    while (temp2_1 - 1 s>= 0)

int32_t j = arg2 - 1
int64_t i = sx.q(j)

if (j s> 0)
    do
        result = arg1[i]
        uint64_t r15_1 = 0
        uint64_t rcx_5 = *arg1
        *arg1 = result
        arg1[i] = rcx_5
        
        if (j s> 1)
            do
                uint64_t rsi_2 = zx.q(((r15_1 << 1) + 1).d)
                int32_t rbp_3 = (rsi_2 + 1).d
                
                if (rbp_3 s< j)
                    int64_t* rbx_3 = arg1[sx.q(rsi_2.d)]
                    int128_t zmm0_5
                    int512_t zmm6_4
                    zmm0_5, zmm6_4 = sub_1405f7fc0(arg1[sx.q(rbp_3)])
                    zmm6_4.o = zmm0_5
                    int32_t zmm0_6
                    int32_t zmm6_5
                    zmm0_6, zmm6_5 = sub_1405f7fc0(rbx_3)
                    
                    if (zmm0_6 f< zmm6_5)
                        rbp_3 = rsi_2.d
                    
                    rsi_2 = zx.q(rbp_3)
                
                int64_t r15_2 = sx.q(r15_1.d)
                int64_t rbp_4 = sx.q(rsi_2.d)
                int64_t* rbx_4 = arg1[rbp_4]
                int128_t zmm0_7
                int512_t zmm6_6
                zmm0_7, zmm6_6 = sub_1405f7fc0(arg1[r15_2])
                zmm6_6.o = zmm0_7
                int32_t zmm0_8
                zmm0_8, result, zmm6 = sub_1405f7fc0(rbx_4)
                
                if (zmm6.d f<= zmm0_8)
                    break
                
                int64_t rcx_10 = arg1[r15_2]
                arg1[r15_2] = arg1[rbp_4]
                result = zx.q(((rsi_2 << 1) + 1).d)
                arg1[rbp_4] = rcx_10
                r15_1 = zx.q(rsi_2.d)
            while (result.d s< j)
        
        j -= 1
        i -= 1
    while (i s> 0)

return result
