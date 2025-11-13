// 函数: sub_1424eb230
// 地址: 0x1424eb230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
*(arg2 + 0x38) = 0
void var_88

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_88, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

void* rax_2 = *(arg2 + 0x38)
void* rdi = &var_88
*(arg2 + 0x38) = 0

if (rax_2 != 0)
    rdi = rax_2

void var_48

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_48, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

void* result_2 = *(arg2 + 0x38)
void* result_1 = &var_48
int32_t arg_10 = (zx.o(0)).d

if (result_2 != 0)
    result_1 = result_2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_5 = *(arg2 + 0x20)
int32_t zmm1 = arg_10
int64_t rcx_3
rcx_3.b = rax_5 != 0
int64_t rdx_6 = 0
*(arg2 + 0x20) = rcx_3 + rax_5
void* rdi_1 = rdi - result_1

while (true)
    int64_t rcx_5 = 0
    void* result = result_1
    
    while (true)
        uint32_t zmm0_1[0x4] = *(rdi_1 + result)
        zmm0_1[0] = zmm0_1[0] f- *result
        
        if (_mm_and_ps(zmm0_1, 0x7fffffff)[0] f> zmm1)
            *arg3 = 0
        else
            rcx_5 += 1
            result += 4
            
            if (rcx_5 s< 4)
                continue
            else
                rdx_6 += 1
                result_1 += 0x10
                
                if (rdx_6 s< 4)
                    break
                
                *arg3 = 1
        
        return result
