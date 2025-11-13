// 函数: sub_141cb5c20
// 地址: 0x141cb5c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t performanceCount_1
QueryPerformanceCounter(&performanceCount_1)
uint128_t zmm7
zmm7.q = float.d(performanceCount_1)
zmm7.q = zmm7.q f* data_143d796f8
zmm7.q = zmm7.q f+ 16777216.0

if (not(arg2.d f>= 0f))
    zmm7 = -0x4010000000000000

void* rcx_1 = *(arg1 + 0x4c0)
char arg_10 = 0
uint64_t var_80 = 0
int64_t var_78 = 0
int32_t var_98 = 0
int32_t arg_20 = 0
char arg_18 = 0

if (rcx_1 != 0)
    arg_10 = sub_141ca1840(rcx_1, arg1 + 0x4d0, arg1 + 0x4e8, arg1 + 0x500, arg1 + 0x518, &var_80, 
        &var_98, &arg_20, &arg_18)

if (*(arg1 + 0x4f8) != *(arg1 + 0x4e8))
    zmm7 = sub_141ca7da0(arg1 - 0x28, zmm7, arg1 + 0x4e8)

int32_t rcx_5 = *(arg1 + 0x4e0) - *(arg1 + 0x4d0)

if (rcx_5 s<= 0)
    performanceCount_1.b = 0

if (rcx_5 s> 0 || *(arg1 + 0x510) - *(arg1 + 0x500) s> 0)
    performanceCount_1.b = 1

int64_t performanceCount

if (rcx_5 != 0)
    if (not(0.0 f!= *(arg1 + 0x630)))
        QueryPerformanceCounter(&performanceCount)
        *(arg1 + 0x630) = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0
    
    zmm7 = sub_141c990b0(arg1 - 0x28, zmm7, arg1 + 0x4d0)
    
    if (*(arg1 + 0x4e0) == *(arg1 + 0x4d0))
        QueryPerformanceCounter(&performanceCount)
        int64_t zmm0_1 =
            float.d(performanceCount) f* data_143d796f8 f+ 16777216.0 f- *(arg1 + 0x630)
        *(arg1 + 0x630) = 0
        *(arg1 + 0x638) = zmm0_1 f+ *(arg1 + 0x638)

BOOL result = *(arg1 + 0x510)

if (result != *(arg1 + 0x500))
    result, zmm7 = sub_141c9a540(arg1 - 0x28, zmm7, arg1 + 0x500)

int32_t rcx_11 = *(arg1 + 0x528)

if (rcx_11 != *(arg1 + 0x518))
    result = sub_141c9a130(arg1 - 0x28, zmm7, arg1 + 0x518)
    rcx_11 = *(arg1 + 0x528)

int32_t r12_9 = *(arg1 + 0x510) + *(arg1 + 0x4e0) + *(arg1 + 0x4f8) - *(arg1 + 0x500)
    - *(arg1 + 0x4d0) - *(arg1 + 0x4e8) - *(arg1 + 0x518) + rcx_11 + arg_20 + var_98
int32_t rcx_12 = r12_9

if (data_143f35530 s>= r12_9)
    rcx_12 = data_143f35530

data_143f35530 = rcx_12

if (arg_10 != 0 || performanceCount_1.b != 0)
    performanceCount.d = rcx_12
    *(arg1 + 0x624) += 1
    performanceCount:4.d = rcx_12 - r12_9
    int32_t rcx_14 = *(arg1 + 0x624)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r12_9)
    void* r15
    r15.b = 0
    int32_t var_88_1 = (temp1_1 - temp0_1) s>> 1
    char var_84_1 = arg_18
    int32_t rax_11 = *(arg1 + 0x618)
    int64_t rsi_1 = sx.q(rax_11 - 1)
    
    if (rax_11 - 1 s>= 0)
        int64_t rbx_2 = rsi_1 << 4
        int64_t temp4_1
        
        do
            int64_t rcx_15 = *(arg1 + 0x610)
            
            if (*(rbx_2 + rcx_15 + 8) == 0)
                r15.b = 1
            else
                int64_t* rcx_16 = *(rbx_2 + rcx_15)
                
                if (rcx_16 == 0)
                    r15.b = 1
                else if ((*(*rcx_16 + 0x50))(rcx_16, &performanceCount) == 0)
                    r15.b = 1
            
            rbx_2 -= 0x10
            temp4_1 = rsi_1
            rsi_1 -= 1
        while (temp4_1 - 1 s>= 0)
        rcx_14 = *(arg1 + 0x624)
    
    result = rcx_14 - 1
    *(arg1 + 0x624) = result
    
    if (r15.b != 0)
        result = sub_140599630(arg1 + 0x610, 0)
    
    if (arg_10 == 0)
        goto label_141cb5ef3
else
label_141cb5ef3:
    
    if (r12_9 == 0)
        data_143f35530 = r12_9
        
        if (*(arg1 + 0x641) == r12_9.b)
            *(arg1 + 0x641) = 1
            *(arg1 + 0x60c) += 1
            int32_t* r14
            r14.b = 0
            int32_t rax_15 = *(arg1 + 0x600)
            int32_t rcx_18 = *(arg1 + 0x60c)
            int64_t rdi_1 = sx.q(rax_15 - 1)
            
            if (rax_15 - 1 s>= 0)
                int64_t rbx_4 = rdi_1 << 4
                int64_t temp5_1
                
                do
                    int64_t rcx_19 = *(arg1 + 0x5f8)
                    
                    if (*(rbx_4 + rcx_19 + 8) == 0)
                        r14.b = 1
                    else
                        int64_t* rcx_20 = *(rbx_4 + rcx_19)
                        
                        if (rcx_20 == 0)
                            r14.b = 1
                        else if ((*(*rcx_20 + 0x50))(rcx_20) == 0)
                            r14.b = 1
                    
                    rbx_4 -= 0x10
                    temp5_1 = rdi_1
                    rdi_1 -= 1
                while (temp5_1 - 1 s>= 0)
                rcx_18 = *(arg1 + 0x60c)
            
            result = rcx_18 - 1
            *(arg1 + 0x60c) = result
            
            if (r14.b != 0)
                result = sub_140599630(arg1 + 0x5f8, 0)

uint64_t rcx_22 = var_80

if (rcx_22 == 0)
    return result

return sub_140a74f90(rcx_22)
