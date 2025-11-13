// 函数: sub_14271db80
// 地址: 0x14271db80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg2
int32_t rax = data_143dbb210
*arg2 = data_143dbb208
arg2[1].d = rax
void* rax_1 = sub_14271d890(arg1)

if (rax_1 != 0)
    void* rbx_1 = *(rax_1 + 0x130)
    int64_t var_28
    int32_t rax_5
    float zmm0_1[0x4]
    
    if (rbx_1 == 0)
        zmm0_1 = zx.o(data_143dbb208)
        rax_5 = data_143dbb210
    else
        float zmm1[0x4] = *(rbx_1 + 0x1c0)
        uint32_t temp0_2 = _mm_movemask_ps(_mm_cmpeq_ps(*(rbx_1 + 0x180), zmm1, 4))
        float var_18[0x4] = zmm1
        
        if (temp0_2 != 0)
            *(rbx_1 + 0x180) = zmm1
            int32_t* rax_3 = sub_140adf5d0(&var_18, &var_28)
            *(rbx_1 + 0x190) = *rax_3
            *(rbx_1 + 0x198) = rax_3[2]
        
        zmm0_1 = zx.o(*(rbx_1 + 0x190))
        rax_5 = *(rbx_1 + 0x198)
    
    var_28 = zmm0_1.q
    *result = var_28
    result[1].d = rax_5

return result
