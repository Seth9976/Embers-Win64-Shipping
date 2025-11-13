// 函数: sub_141e33b90
// 地址: 0x141e33b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x70))
int32_t rax = (rdi + 1).d
*(arg1 + 0x70) = rax

if (rax s> *(arg1 + 0x74))
    sub_1405c4f50(arg1 + 0x68)

int64_t* r14_2 = rdi * 0x30 + *(arg1 + 0x68)
*r14_2 = 0
r14_2[1] = 0
r14_2[2].d = 0x3f800000
*(r14_2 + 0x14) = 0x3f800000
r14_2[4] = 0
r14_2[5] = 0
void* r12 = arg2[1]
int64_t var_38

if (r12 != 0)
    void*** rax_1 = sub_141e11780()
    void*** rbx_1 = rax_1
    void*** rdi_1 = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
        rbx_1 = rax_1
    
    if (&r14_2[4] == &var_38)
    label_141e33c7f:
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d != 1)
                rbx_1 = rax_1
            else
                (**rdi_1)(rdi_1)
                int32_t temp2_1 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (temp2_1 != 1)
                    rbx_1 = rax_1
                else
                    (*rdi_1)[1](rdi_1, 1)
                    rbx_1 = rax_1
    else
        r14_2[4] = &rax_1[2]
        void*** rsi_1 = r14_2[5]
        
        if (rdi_1 == rsi_1)
            goto label_141e33c7f
        
        r14_2[5] = rdi_1
        
        if (rsi_1 != 0)
            rsi_1[1].d -= 1
            
            if (rsi_1[1].d != 1)
                rbx_1 = rax_1
            else
                (**rsi_1)(rsi_1)
                int32_t temp5_1 = *(rsi_1 + 0xc)
                *(rsi_1 + 0xc) -= 1
                
                if (temp5_1 != 1)
                    rbx_1 = rax_1
                else
                    (*rsi_1)[1](rsi_1, 1)
                    rbx_1 = rax_1
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp4_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*rbx_1)[1](rbx_1, 1)
    
    sub_141e1aeb0(r14_2[4], r12)

int64_t rax_8 = *arg2
int32_t zmm2 = *(arg2 + 0x14)
int32_t zmm4 = arg2[3].d
float var_28[0x4]
var_28[0] = arg2[2].d
float temp0_2[0x4] = _mm_shuffle_ps(var_28, var_28, 0xe1)
temp0_2[0] = zmm2
var_38 = rax_8
int64_t result = r14_2[4]
float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0xc6)
int64_t result_1 = result
temp0_3[0] = zmm4
int128_t zmm0 = var_38.o
float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0xc9)
*r14_2 = zmm0
*(r14_2 + 0x10) = temp0_4
return result
