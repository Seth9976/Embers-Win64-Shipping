// 函数: sub_14195e5d0
// 地址: 0x14195e5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t result_3 = result.d
int64_t zmm0
int64_t zmm1

if (result.d s>= 0)
    int32_t r14_1 = ((result << 1) + 1).d
    int32_t result_4
    
    do
        int32_t result_1 = result_3
        
        if (r14_1 s< arg2)
            do
                int32_t r11_1 = result_1 * 2
                uint64_t rcx = zx.q(r11_1 + 1)
                
                if ((rcx + 1).d s< arg2)
                    int32_t rdx_1 = *arg4
                    void* r8 = arg1[sx.q(rcx.d)]
                    void* r10_1 = arg1[sx.q(r11_1) + 2]
                    bool c_1
                    
                    if (rdx_1 == 2)
                        c_1 = *(r8 + 0x34) u< *(r10_1 + 0x34)
                    else if (rdx_1 == 3)
                        c_1 = *(r8 + 0x38) u< *(r10_1 + 0x38)
                    else
                        zmm0 = *(r8 + 0x3c)
                        float temp12_1 = *(r10_1 + 0x3c)
                        zmm0.d f- temp12_1
                        c_1 = zmm0.d f< temp12_1
                    
                    int64_t rax_5
                    rax_5.b = c_1
                    
                    if (rax_5.b != 0)
                        rcx = zx.q(r11_1)
                    
                    rcx = zx.q(rcx.d + 1)
                
                int32_t rdx_3 = *arg4
                int64_t rax_6 = sx.q(rcx.d)
                void* r8_1 = arg1[rax_6]
                int64_t* r11_2 = &arg1[rax_6]
                result = sx.q(result_1)
                void* r10_2 = arg1[result]
                int64_t* rbx_1 = &arg1[result]
                bool c_2
                
                if (rdx_3 == 2)
                    c_2 = *(r8_1 + 0x34) u< *(r10_2 + 0x34)
                else if (rdx_3 == 3)
                    c_2 = *(r8_1 + 0x38) u< *(r10_2 + 0x38)
                else
                    zmm0 = *(r8_1 + 0x3c)
                    float temp10_1 = *(r10_2 + 0x3c)
                    zmm0.d f- temp10_1
                    c_2 = zmm0.d f< temp10_1
                
                result.b = c_2
                
                if (result.b == 0)
                    break
                
                if (rbx_1 != r11_2)
                    zmm1 = *rbx_1
                    *rbx_1 = *r11_2
                    *r11_2 = zmm1
                
                result = zx.q(((rcx << 1) + 1).d)
                result_1 = rcx.d
            while (result.d s< arg2)
        
        r14_1 -= 2
        result_4 = result_3
        result_3 -= 1
    while (result_4 - 1 s>= 0)

int32_t i = arg2 - 1

if (i s> 0)
    result = sx.q(i)
    int64_t* rbp = &arg1[result]
    
    do
        if (arg1 != rbp)
            zmm1 = *arg1
            *arg1 = *rbp
            *rbp = zmm1
        
        int32_t result_2 = 0
        
        if (i s> 1)
            do
                int32_t r11_3 = result_2 * 2
                uint64_t rcx_1 = zx.q(r11_3 + 1)
                
                if ((rcx_1 + 1).d s< i)
                    int32_t rdx_5 = *arg4
                    void* r8_2 = arg1[sx.q(rcx_1.d)]
                    void* r10_3 = arg1[sx.q(r11_3) + 2]
                    bool c_3
                    
                    if (rdx_5 == 2)
                        c_3 = *(r8_2 + 0x34) u< *(r10_3 + 0x34)
                    else if (rdx_5 == 3)
                        c_3 = *(r8_2 + 0x38) u< *(r10_3 + 0x38)
                    else
                        zmm0 = *(r8_2 + 0x3c)
                        float temp18_1 = *(r10_3 + 0x3c)
                        zmm0.d f- temp18_1
                        c_3 = zmm0.d f< temp18_1
                    
                    int64_t rax_9
                    rax_9.b = c_3
                    
                    if (rax_9.b != 0)
                        rcx_1 = zx.q(r11_3)
                    
                    rcx_1 = zx.q(rcx_1.d + 1)
                
                int32_t rdx_7 = *arg4
                int64_t rax_10 = sx.q(rcx_1.d)
                void* r8_3 = arg1[rax_10]
                void* r11_4 = &arg1[rax_10]
                result = sx.q(result_2)
                void* r10_4 = arg1[result]
                void* rbx_2 = &arg1[result]
                bool c_4
                
                if (rdx_7 == 2)
                    c_4 = *(r8_3 + 0x34) u< *(r10_4 + 0x34)
                else if (rdx_7 == 3)
                    c_4 = *(r8_3 + 0x38) u< *(r10_4 + 0x38)
                else
                    zmm0 = *(r8_3 + 0x3c)
                    float temp16_1 = *(r10_4 + 0x3c)
                    zmm0.d f- temp16_1
                    c_4 = zmm0.d f< temp16_1
                
                result.b = c_4
                
                if (result.b == 0)
                    break
                
                if (rbx_2 != r11_4)
                    zmm1 = *rbx_2
                    *rbx_2 = *r11_4
                    *r11_4 = zmm1
                
                result = zx.q(((rcx_1 << 1) + 1).d)
                result_2 = rcx_1.d
            while (result.d s< i)
        
        i -= 1
        rbp -= 8
    while (i s> 0)

return result
