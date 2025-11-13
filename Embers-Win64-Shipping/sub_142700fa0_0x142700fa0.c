// 函数: sub_142700fa0
// 地址: 0x142700fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = *arg3
void* rax_1 = sub_140d3c6e0(&arg_10)
int64_t var_18
float rax_6
float zmm0[0x4]

if (rax_1 == 0)
    zmm0 = zx.o(data_143b58098)
    rax_6 = data_143b580a0
else
    void* rbx_1 = *(rax_1 + 0x130)
    float var_28[0x4]
    int32_t rax_5
    
    if (rbx_1 == 0)
        zmm0 = zx.o(data_143dbb208)
        rax_5 = data_143dbb210
    else
        float zmm1[0x4] = *(rbx_1 + 0x1c0)
        uint32_t temp0_2 = _mm_movemask_ps(_mm_cmpeq_ps(*(rbx_1 + 0x180), zmm1, 4))
        var_28 = zmm1
        
        if (temp0_2 != 0)
            *(rbx_1 + 0x180) = zmm1
            int32_t* rax_3 = sub_140adf5d0(&var_28, &var_18)
            *(rbx_1 + 0x190) = *rax_3
            *(rbx_1 + 0x198) = rax_3[2]
        
        zmm0 = zx.o(*(rbx_1 + 0x190))
        rax_5 = *(rbx_1 + 0x198)
    
    var_28[2] = rax_5
    var_28[0].q = zmm0.q
    zmm0 = zx.o(var_28[0].q)
    rax_6 = var_28[2]

var_18 = zmm0.q
*arg2 = var_18
arg2[1].d = rax_6
return arg2
