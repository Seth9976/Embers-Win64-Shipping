// 函数: sub_1417527a0
// 地址: 0x1417527a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result_1 = arg2
int64_t* result_2 = arg2
void* r13 = arg1
(*(*arg2 + 0x1d8))(result_2, &data_1439a9538)
int32_t rax_1
int512_t zmm1
uint128_t zmm6
rax_1, zmm1, zmm6 = sub_140b4e7c0(result_2, &data_1439a9538)
int32_t* var_70

if (rax_1 s>= 5)
    zmm1 = sub_14152ea20(result_2, r13 + 0x10, zmm1)
    int64_t* rcx_8 = result_2[1]
    int32_t* r8_1 = *rcx_8
    
    if (&r8_1[1] u<= rcx_8[1])
        *(r13 + 0x90) = *r8_1
        int64_t* rax_8 = result_2[1]
        *rax_8 += 4
    else if ((*(result_2 + 0x29) & 0x20) != 0)
        sub_140b54070(result_2, r13 + 0x90, zmm1)
    else
        (*(*result_2 + 0x150))(result_2, r13 + 0x90, 4)
else
    var_70 = nullptr
    int32_t var_68_1 = 0
    sub_14152de20(result_2, &var_70, zmm1)
    int64_t rsi_1 = sx.q(var_68_1)
    
    if (rsi_1.d s> *(r13 + 0x1c))
        sub_1413f6f70(r13 + 0x10, rsi_1.d)
    
    int32_t* r12_1 = var_70
    int64_t arg_18 = 0
    int32_t* r15_1 = r12_1
    void* rcx_4 = &r12_1[rsi_1]
    uint64_t r14_4 = (rcx_4 - r12_1 + 3) u>> 2
    
    if (r12_1 u> rcx_4)
        r14_4 = 0
    
    if (r14_4 != 0)
        uint128_t var_48_1 = zmm6
        int32_t var_88
        __builtin_memcpy(&var_88, 
            "\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\x7f\xff\xff\x7f\xff\xff\xff\x7f\xff\xff\xff\x"
        "7f\xff", 
            0x18)
        zmm6 = zx.o(var_88.q)
        int64_t rdx_6
        
        do
            int64_t rsi_2 = sx.q(*(r13 + 0x18))
            int32_t r13_1 = *r15_1
            int32_t rax_2 = (rsi_2 + 1).d
            *(r13 + 0x18) = rax_2
            
            if (rax_2 s> *(r13 + 0x1c))
                sub_1405c50f0(r13 + 0x10)
            
            r15_1 = &r15_1[1]
            int32_t* rdx_4 = rsi_2 * 0x1c + *(r13 + 0x10)
            *rdx_4 = r13_1
            int32_t var_7c
            *(rdx_4 + 4) = var_7c.q
            *(rdx_4 + 0x10) = zmm6.q
            rdx_4[3] = 0xff7fffff
            rdx_4[6] = 0x7f7fffff
            rdx_6 = arg_18 + 1
            arg_18 = rdx_6
        while (rdx_6 != r14_4)
        result_2 = result_1
        r12_1 = var_70
        r13 = arg1
    
    *(r13 + 0x90) = 0x47c35000
    
    if (r12_1 != 0)
        zmm1 = sub_140a74f90(r12_1)

int64_t i_12 = 3
void* rdi_1 = r13 + 0x20
int64_t i_7 = 3
int64_t i

do
    int64_t* rcx_7 = result_2[1]
    int32_t* rdx_7 = *rcx_7
    
    if (&rdx_7[1] u<= rcx_7[1])
        *rdi_1 = *rdx_7
        int64_t* rax_5 = result_2[1]
        *rax_5 += 4
    else if ((*(result_2 + 0x29) & 0x20) != 0)
        sub_140b54070(result_2, rdi_1, zmm1)
    else
        (*(*result_2 + 0x150))(result_2, rdi_1, 4)
    
    rdi_1 += 4
    i = i_7
    i_7 -= 1
while (i != 1)
void* rdi_2 = r13 + 0x2c
int64_t i_8 = 3
int64_t i_1

do
    int64_t* rcx_11 = result_2[1]
    int32_t* rdx_11 = *rcx_11
    
    if (&rdx_11[1] u<= rcx_11[1])
        *rdi_2 = *rdx_11
        int64_t* rax_13 = result_2[1]
        *rax_13 += 4
    else if ((*(result_2 + 0x29) & 0x20) != 0)
        sub_140b54070(result_2, rdi_2, zmm1)
    else
        (*(*result_2 + 0x150))(result_2, rdi_2, 4)
    
    rdi_2 += 4
    i_1 = i_8
    i_8 -= 1
while (i_1 != 1)
void* rdi_3 = r13 + 0x38
int64_t i_9 = 3
int64_t i_2

do
    int64_t* rcx_13 = result_2[1]
    int32_t* rdx_13 = *rcx_13
    
    if (&rdx_13[1] u<= rcx_13[1])
        *rdi_3 = *rdx_13
        int64_t* rax_17 = result_2[1]
        *rax_17 += 4
    else if ((*(result_2 + 0x29) & 0x20) != 0)
        sub_140b54070(result_2, rdi_3, zmm1)
    else
        (*(*result_2 + 0x150))(result_2, rdi_3, 4)
    
    rdi_3 += 4
    i_2 = i_9
    i_9 -= 1
while (i_2 != 1)
void* rdi_4 = r13 + 0x44
int64_t i_10 = 3
int64_t i_3

do
    int64_t* rcx_15 = result_2[1]
    int32_t* rdx_15 = *rcx_15
    
    if (&rdx_15[1] u<= rcx_15[1])
        *rdi_4 = *rdx_15
        int64_t* rax_21 = result_2[1]
        *rax_21 += 4
    else if ((*(result_2 + 0x29) & 0x20) != 0)
        sub_140b54070(result_2, rdi_4, zmm1)
    else
        (*(*result_2 + 0x150))(result_2, rdi_4, 4)
    
    rdi_4 += 4
    i_3 = i_10
    i_10 -= 1
while (i_3 != 1)
void* rdi_5 = r13 + 0x50
int64_t i_4

do
    int64_t* rcx_17 = result_2[1]
    int32_t* rdx_17 = *rcx_17
    
    if (&rdx_17[1] u<= rcx_17[1])
        *rdi_5 = *rdx_17
        int64_t* rax_25 = result_2[1]
        *rax_25 += 4
    else if ((*(result_2 + 0x29) & 0x20) != 0)
        sub_140b54070(result_2, rdi_5, zmm1)
    else
        (*(*result_2 + 0x150))(result_2, rdi_5, 4)
    
    rdi_5 += 4
    i_4 = i_12
    i_12 -= 1
while (i_4 != 1)
int64_t* rcx_19 = result_2[1]
result_1.d = *(r13 + 0x68)
int32_t* rdx_19 = *rcx_19

if (&rdx_19[1] u> rcx_19[1])
    int64_t** rdx_20 = &result_1
    
    if ((*(result_2 + 0x29) & 0x20) != 0)
        sub_140b54070(result_2, rdx_20, zmm1)
    else
        (*(*result_2 + 0x150))(result_2, rdx_20, 4)
else
    result_1.d = *rdx_19
    *rcx_19 += 4

int32_t rax_31 = result_1.d

if (rax_31 s> *(r13 + 0x6c))
    sub_1405a5410(r13 + 0x60, rax_31)
    rax_31 = result_1.d

int64_t rdi_6 = sx.q(*(r13 + 0x68))

if (rax_31 s> rdi_6.d)
    *(r13 + 0x68) = rax_31
    
    if (rax_31 s> *(r13 + 0x6c))
        sub_1405a4f90(r13 + 0x60)
    
    memset((rdi_6 << 4) + *(r13 + 0x60), 0, sx.q(rax_31 - rdi_6.d) << 4)
    rax_31 = result_1.d
else if (rax_31 s< rdi_6.d)
    zmm1 = sub_140838580(r13 + 0x60, rax_31, rdi_6.d - rax_31, 1)
    rax_31 = result_1.d

int32_t i_5 = 0

if (rax_31 s> 0)
    do
        zmm1 = sub_14152e570(result_2, (sx.q(i_5) << 4) + *(r13 + 0x60), zmm1)
        i_5 += 1
    while (i_5 s< result_1.d)

int512_t zmm1_1 = sub_14152e570(result_2, r13 + 0x70, zmm1)
int64_t* rcx_29 = result_2[1]
int32_t* rdx_28 = *rcx_29
int64_t* result

if (&rdx_28[1] u> rcx_29[1])
    int32_t rax_33
    rax_33.b = *(r13 + 0x94) != 0
    result_1.d = rax_33
    (*(*result_2 + 0x150))(result_2, &result_1, 4)
    result.b = result_1.d != 0
    *(r13 + 0x94) = result.b
else
    void* rax_32
    rax_32.b = *rdx_28 != 0
    *(r13 + 0x94) = rax_32.b
    result = result_2[1]
    *result += 4

if ((result_2[5].b & 1) != 0)
    var_70 = nullptr
    int32_t var_68_2 = 0
    sub_14152de20(result_2, &var_70, zmm1_1)
    int32_t* r13_2 = var_70
    int32_t* r15_2 = r13_2
    result = &r13_2[sx.q(var_68_2)]
    result_1 = result
    
    if (r13_2 != result)
        do
            int64_t r12_2 = sx.q(*r15_2)
            int64_t r14_7 = sx.q(*(r13 + 0x88))
            
            if (r12_2.d s>= r14_7.d)
                int32_t i_11 = r12_2.d - r14_7.d + 1
                int32_t rax_37 = i_11 + r14_7.d
                *(r13 + 0x88) = rax_37
                
                if (rax_37 s> *(r13 + 0x8c))
                    sub_140adefe0(r13 + 0x80)
                
                if (i_11 != 0)
                    char* rax_40 = *(r13 + 0x80) + r14_7 * 0x24 + 0x20
                    int32_t i_6
                    
                    do
                        *rax_40 = 0
                        rax_40 = &rax_40[0x24]
                        i_6 = i_11
                        i_11 -= 1
                    while (i_6 != 1)
            
            int64_t rdx_32 = r12_2 * 9
            *(*(r13 + 0x80) + (rdx_32 << 2) + 0x20) = 1
            result = sub_14152e0d0(result_2, *(r13 + 0x80) + (rdx_32 << 2), zmm1_1)
            r15_2 = &r15_2[1]
        while (r15_2 != result_1)
    
    if (r13_2 != 0)
        return sub_140a74f90(r13_2)

return result
