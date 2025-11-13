// 函数: sub_141fc88d0
// 地址: 0x141fc88d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
int64_t performanceCount
performanceCount.d = 0

if (*(arg1 + 0x1110) == 0)
    *(arg1 + 0x1118) = (*(*arg3 + 0x20))(arg3)
    int64_t* rcx_1 = arg3[1]
    int32_t* rdx = *rcx_1
    
    if (&rdx[1] u<= rcx_1[1])
        *(arg1 + 0x1110) = *rdx
        int64_t* rax_5 = arg3[1]
        *rax_5 += 4
    else if ((*(arg3 + 0x29) & 0x20) != 0)
        sub_140b54070(arg3, arg1 + 0x1110, arg4)
    else
        (*(*arg3 + 0x150))(arg3, arg1 + 0x1110, 4)

QueryPerformanceCounter(&performanceCount)
int32_t i = *(arg1 + 0x1110)
uint128_t zmm6
zmm6.q = *arg2 f+ arg2[1]

while (i != *(arg1 + 0x1108))
    int32_t* r15_3 = sx.q(i) * 0x30 + *(arg1 + 0x1100)
    int64_t* rax_8 = sub_140d3c6e0(&r15_3[2])
    
    if ((*r15_3 & 1) != 0)
    label_141fc89fa:
        
        if (*(arg1 + 0x7f8) == *(arg1 + 0x824))
        label_141fc8a62:
            int64_t var_88
            int64_t var_78
            int64_t* rax_13
            int512_t zmm1
            int64_t zmm6_1
            
            if (rax_8 == 0)
                rsi |= 2
                rax_13, zmm1, zmm6_1 = sub_140b63b70(&r15_3[5], &var_78)
            else
                rsi |= 1
                int64_t arg_10 = rax_8[3]
                zmm1, zmm6_1 = sub_140b63b70(&arg_10, &var_88)
                rax_13 = &var_88
            
            uint64_t var_98 = 0
            var_98 = *rax_13
            *rax_13 = 0
            int32_t var_90_1 = rax_13[1].d
            int32_t var_8c_1 = *(rax_13 + 0xc)
            rax_13[1] = 0
            
            if ((rsi.b & 2) != 0)
                int64_t rcx_15 = var_78
                rsi &= 0xfffffffd
                
                if (rcx_15 != 0)
                    zmm1 = sub_140a74f90(rcx_15)
            
            if ((rsi.b & 1) != 0)
                int64_t rcx_16 = var_88
                rsi &= 0xfffffffe
                
                if (rcx_16 != 0)
                    zmm1 = sub_140a74f90(rcx_16)
            
            int64_t* rcx_17 = data_143f5b298
            (*(*rcx_17 + 0x400))(rcx_17, arg1, &var_98, 0)
            (*(*arg3 + 0x168))(arg3, r15_3)
            (*(*arg3 + 0x168))(arg3, &r15_3[4])
            arg4 = sub_140a1d9d0(arg3, &var_98, zmm1)
            int64_t* rcx_21 = arg3[1]
            int32_t* r8_3 = *rcx_21
            
            if (&r8_3[1] u<= rcx_21[1])
                r15_3[7] = *r8_3
                int64_t* rax_19 = arg3[1]
                *rax_19 += 4
            else if ((*(arg3 + 0x29) & 0x20) != 0)
                sub_140b54070(arg3, &r15_3[7], arg4)
            else
                (*(*arg3 + 0x150))(arg3, &r15_3[7], 4)
            
            int64_t* rcx_23 = arg3[1]
            performanceCount.b = r15_3[0xa].b & 3
            char* rdx_12 = *rcx_23
            
            if (&rdx_12[1] u> rcx_23[1])
                (*(*arg3 + 0x150))(arg3, &performanceCount, 1)
            else
                performanceCount.b = *rdx_12
                *rcx_23 += 1
            
            *(arg1 + 0x1114) += 1
            
            if (not(0.0 f>= arg2[1]))
                int64_t performanceCount_1
                QueryPerformanceCounter(&performanceCount_1)
                
                if (float.d(performanceCount_1) f* data_143d796f8 f+ 0x4170000000000000 f>= zmm6_1)
                    uint64_t rcx_27 = var_98
                    
                    if (rcx_27 != 0)
                        arg4 = sub_140a74f90(rcx_27)
                    
                    break
            
            uint64_t rcx_26 = var_98
            
            if (rcx_26 != 0)
                arg4 = sub_140a74f90(rcx_26)
        else
            void* r8 = arg1 + 0x828
            void* rdx_3 = *(r8 + 8)
            int64_t r9_1 = sx.q(*r15_3)
            
            if (rdx_3 != 0)
                r8 = rdx_3
            
            int32_t rax_11 = *(r8 + (((sx.q(*(arg1 + 0x838)) - 1) & r9_1) << 2))
            
            if (rax_11 == 0xffffffff)
                goto label_141fc8a62
            
            int64_t r8_1 = *(arg1 + 0x7f0)
            
            while (true)
                int64_t rdx_4 = sx.q(rax_11) * 3
                
                if (*(r8_1 + (rdx_4 << 2)) == r9_1.d)
                    break
                
                rax_11 = *(r8_1 + (rdx_4 << 2) + 4)
                
                if (rax_11 == 0xffffffff)
                    goto label_141fc8a62
            
            if (rax_11 == 0xffffffff)
                goto label_141fc8a62
    else if (rax_8 != 0)
        int64_t rdx_2 = *rax_8
        
        if ((*(rdx_2 + 0x1b8))(rax_8, rdx_2) != 0)
            goto label_141fc89fa
    
    i = *(arg1 + 0x1110) + 1
    *(arg1 + 0x1110) = i

int32_t rax_26 = *(arg1 + 0x1108)
int32_t temp0 = *(arg1 + 0x1110)
rsi.b = temp0 == rax_26

if (temp0 == rax_26)
    int64_t rax_28 = (*(*arg3 + 0x20))(arg3)
    int64_t r8_4 = *arg3
    (*(r8_4 + 0x178))(arg3, *(arg1 + 0x1118), r8_4)
    int64_t* rdx_15 = arg3[1]
    int32_t* r8_5 = *rdx_15
    
    if (&r8_5[1] u<= rdx_15[1])
        *(arg1 + 0x1114) = *r8_5
        int64_t* rax_29 = arg3[1]
        *rax_29 += 4
    else if ((*(arg3 + 0x29) & 0x20) != 0)
        sub_140b54070(arg3, arg1 + 0x1114, arg4)
    else
        (*(*arg3 + 0x150))(arg3, arg1 + 0x1114, 4)
    
    int64_t r8_6 = *arg3
    (*(r8_6 + 0x178))(arg3, rax_28, r8_6)

return zx.q(rsi.b)
