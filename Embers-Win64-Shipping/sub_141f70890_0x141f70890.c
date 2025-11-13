// 函数: sub_141f70890
// 地址: 0x141f70890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4] = arg2

if (zmm6[0] f== *(arg1 + 0x458) || sub_141ee6400(arg1) == 0)
    return 

void* rax = *(arg1 + 0x440)
*(arg1 + 0x458) = zmm6[0]

if (rax == 0)
    return 

if ((*(arg1 + 0x44d) & 2) == 0)
    zmm6 = *(rax + 0x84)

void* rbx_1 = *(arg1 + 0x3e8)
float temp0_1[0x4] = _mm_max_ss(zmm6[0], 0)
float var_58_1 = temp0_1[0]

if (sub_140a80f40() == 0)
    uint32_t rax_2
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_2.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_2.b == 0))
        void var_38
        int64_t* rax_3 = sub_141f5ab90(&var_38, nullptr, 0xff)
        *(*rax_3 + 0x10) = var_58_1.o
        void* rcx_4 = *rax_3
        int32_t r8_1 = rax_3[2].d
        int64_t* rdx_1 = rax_3[1]
        int64_t* rbx_2 = *(rcx_4 + 0x28)
        int64_t* arg_8 = rbx_2
        int32_t* rsi_1 = &rbx_2[9]
        
        if (rbx_2 != 0)
            *rsi_1 += 1
            rbx_2 = arg_8
        
        sub_1405e48c0(rcx_4, rdx_1, r8_1, 1)
        
        if (rbx_2 != 0)
            int32_t rax_4 = *rsi_1
            *rsi_1 -= 1
            
            if (rax_4 == 1)
                sub_140a2f6e0(arg_8)
    else
        int32_t var_3c_1 = rbx_1:4.d
        void* rcx_1 = rbx_1.d.q
        
        if (rcx_1 != 0)
            sub_1422ac770(rcx_1, temp0_1[0])
else if (rbx_1 != 0)
    sub_1422ac770(rbx_1, temp0_1[0])

int64_t* rax_5 = sub_141ee6400(arg1)
int64_t r8_2 = *rax_5
(*(r8_2 + 0x38))(rax_5, arg1, r8_2)
