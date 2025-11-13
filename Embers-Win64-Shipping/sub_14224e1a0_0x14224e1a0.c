// 函数: sub_14224e1a0
// 地址: 0x14224e1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = data_143f51360
int64_t rbx
int64_t r9

if (data_143de5480 == 0)
    rbx = 0
    r9 = 0
else
    rbx = 0
    r9.b = GetCurrentThreadId() != data_143de5470

*arg1 = *(r14 + (r9 << 2))
int64_t r14_1 = data_143f51378

if (data_143de5480 != 0)
    rbx.b = GetCurrentThreadId() != data_143de5470

*arg3 = *(r14_1 + (rbx << 2))
int32_t zmm0 = *arg1

if (not(zmm0 f>= 0f))
    int64_t* rax_5 = sub_142565030()
    void* rax_6 = rax_5[0x23]
    
    if (rax_6 == 0)
        int64_t rdx = *rax_5
        (*(rdx + 0x390))(rax_5, rdx)
        rax_6 = rax_5[0x23]
    
    zmm0 = *(rax_6 + 0xa0)

*arg1 = zmm0
zmm0 = *arg3

if (not(zmm0 f>= 0f))
    int64_t* rax_7 = sub_142565030()
    void* rax_8 = rax_7[0x23]
    
    if (rax_8 == 0)
        int64_t rdx_1 = *rax_7
        (*(rdx_1 + 0x390))(rax_7, rdx_1)
        rax_8 = rax_7[0x23]
    
    zmm0 = *(rax_8 + 0xa8)

*arg3 = zmm0
int64_t* rax_9 = sub_142565030()
void* result = rax_9[0x23]

if (result == 0)
    int64_t rdx_2 = *rax_9
    (*(rdx_2 + 0x390))(rax_9, rdx_2)
    result = rax_9[0x23]

*arg2 = *(result + 0xa4)
return result
