// 函数: sub_141e81570
// 地址: 0x141e81570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3.d f>= 2097152f)
    return true

bool rax = sub_140a80ea0()

if (data_143de5480 != 0)
    GetCurrentThreadId()

int32_t rdi_1

if (rax == 0)
    rdi_1 = *(arg1 + 0x88)
else
    rdi_1 = *(arg1 + 0x138)

int32_t rbx_2 = 0

if (rdi_1 s<= 0)
    return false

while (true)
    if (arg3.d f>= 2097152f)
        return true
    
    float var_38
    
    if (rbx_2 != 0xffffffff && sub_141e7dd40(arg1, rbx_2, &var_38, 1) != 0)
        float var_30
        float zmm0_1 = var_30 - arg2[2]
        float var_34
        float zmm2 = var_34 - arg2[1]
        float zmm1 = var_38 - *arg2
        
        if (arg3.d f* arg3.d > zmm2 * zmm2 + zmm1 * zmm1 + zmm0_1 * zmm0_1 != 0)
            return true
    
    rbx_2 += 1
    
    if (rbx_2 s>= rdi_1)
        return false
