// 函数: sub_14236e000
// 地址: 0x14236e000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_288
int64_t rax_1 = __security_cookie ^ &var_288
int64_t rsi = arg3
int64_t var_250 = arg3
void* const rcx_3

if (*(arg4 + 0x668) == *(arg4 + 0x694))
label_14236e0c0:
    rcx_3 = nullptr
else
    void* r8 = *(arg4 + 0x6a0)
    void* r9 = arg4 + 0x698
    
    if (r8 != 0)
        r9 = r8
    
    int32_t rax_7 =
        *(r9 + ((sx.q((rsi u>> 0x20).d * 0x17 + rsi.d) & (sx.q(*(arg4 + 0x6a8)) - 1)) << 2))
    
    if (rax_7 == 0xffffffff)
    label_14236e0c0_1:
        rcx_3 = nullptr
    else
        int64_t r8_1 = *(arg4 + 0x660)
        
        while (true)
            int64_t rdx_2 = sx.q(rax_7) * 3
            rcx_3 = r8_1 + (rdx_2 << 3)
            
            if (*(r8_1 + (rdx_2 << 3)) == rsi)
                break
            
            rax_7 = *(rcx_3 + 0x10)
            
            if (rax_7 == 0xffffffff)
                goto label_14236e0c0_2
        
        if (rax_7 == 0xffffffff)
        label_14236e0c0_2:
            rcx_3 = nullptr

void* rax_8 = rcx_3 + 8

if (rcx_3 == 0)
    rax_8 = nullptr

float result_1
float result
int32_t rcx_6
int32_t* rdx_6
int32_t* r8_3

if (rax_8 != 0)
    int64_t rcx_7 = sx.q(*rax_8)
    r8_3 = *(arg4 + 0x6b0)
    result = (rcx_7 + 4).d
    rdx_6 = r8_3 + rcx_7
    rcx_6 = *(r8_3 + rcx_7)
else
    int64_t rsi_1 = sx.q(*(arg4 + 0x6b8))
    int32_t rax_9 = (rsi_1 + 0xc).d
    *(arg4 + 0x6b8) = rax_9
    
    if (rax_9 s> *(arg4 + 0x6bc))
        sub_1405daba0(arg4 + 0x6b0)
    
    result_1 = rsi_1.d
    int64_t* rax_11 = rsi_1 + *(arg4 + 0x6b0)
    *rax_11 = 0
    rax_11[1].d = 0
    sub_141cf16a0(arg4 + 0x660, &var_250, &result_1)
    int64_t result_2 = sx.q(result_1)
    rcx_6 = 1
    rsi = var_250
    rdx_6 = result_2 + *(arg4 + 0x6b0)
    result = result_2.d + 4
    *rdx_6 = 1
    r8_3 = *(arg4 + 0x6b0)

void* rbx_2 = sx.q(result) + r8_3
float zmm6[0x4]
float var_58[0x4] = zmm6

if (rcx_6 == 0)
    goto label_14236e298

*rdx_6 = 0
int32_t rax_13 = *(arg1 + 0x3c) * 0xbb38435 + 0x3619636b
*(arg1 + 0x3c) = rax_13
zmm6 = arg1[9].d
zmm6[0] = zmm6[0] f- *(arg1 + 0x4c)
result = rax_13 u>> 9 | 0x3f800000
bool cond:0_1 = data_143f59378 == 0
result_1 = result
zmm6[0] = zmm6[0] * (result_1 - 1f)
zmm6[0] = zmm6[0] f+ *(arg1 + 0x4c)
float temp0_1[0x4] = _mm_max_ss(zmm6[0], 0)

if (not(cond:0_1))
    rdx_6.b = 1
    result = (*(*arg1 + 0x2d8))(arg1, rdx_6)

if (temp0_1[0] <= 0f || temp0_1[0] f> *(arg5 + 0x7c))
    *(rbx_2 + 4) = 0
    temp0_1[0] = temp0_1[0] f+ *(arg4 + 0x190)
    temp0_1[0] = temp0_1[0] f- *(arg5 + 0x7c)
    *rbx_2 = temp0_1[0]
label_14236e298:
    
    if (*(arg4 + 0x190) f>= *rbx_2)
        goto label_14236e20b
    
    *(arg4 + 0x180) &= 0xef
else
    *(rbx_2 + 4) = temp0_1[0]
    *rbx_2 = 0xbf800000
label_14236e20b:
    void var_248
    sub_14234f710(&var_248, arg5)
    float var_1cc
    float var_1cc_1 = var_1cc f- *(rbx_2 + 4)
    sub_14236d8f0(arg1, arg2, rsi, arg4, &var_248, arg6)
    result = sub_142351ee0(&var_248)

__security_check_cookie(rax_1 ^ &var_288)
return result
