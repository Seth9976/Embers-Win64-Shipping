// 函数: sub_14233e6f0
// 地址: 0x14233e6f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x1ba) != 0)
    return 

float zmm3 = arg2[2]
float zmm1 = zmm3 * *arg2
zmm3 = zmm3 * arg2[1]
zmm1 = zmm1 + zmm1 + 0.5f
int32_t r15_2 = int.d(zmm1) s>> 1
int32_t rsi_2 = int.d(zmm3 + zmm3 + 0.5f) s>> 1
void arg_8
int32_t* rax = (*(*(arg1 - 0xc8) + 0x18))(arg1 - 0xc8, &arg_8)

if (*rax == r15_2 && rax[1] == rsi_2)
    return 

int64_t* rcx_1 = data_143e29f28
int64_t* rbx_1 = *(arg1 + 0x188)

if (rbx_1 != 0)
    int32_t rax_2 = rbx_1[1].d
    
    if (rax_2 != 0)
        rbx_1[1].d = rax_2 + 1
        rax_2.b = 1
    
    if (rax_2.b == 0)
        rbx_1 = nullptr

int64_t rax_3 = 0

if (rbx_1 != 0)
    rax_3 = *(arg1 + 0x180)

int64_t var_48 = rax_3
int64_t* var_40_1 = rbx_1

if (rbx_1 != 0)
    rbx_1[1].d += 1

int32_t* var_58
(*(*rcx_1 + 0x28))(rcx_1, &var_58, &var_48)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

rax = var_58

if (rax != 0 && not(0f f!= rax[0x1ea]))
    int64_t* rbx_2 = *(arg1 + 0x188)
    void* rcx_4 = nullptr
    
    if (rbx_2 != 0)
        int32_t rax_7 = rbx_2[1].d
        
        if (rax_7 != 0)
            rbx_2[1].d = rax_7 + 1
            rax_7.b = 1
        
        if (rax_7.b == 0)
            rbx_2 = nullptr
        
        if (rbx_2 != 0)
            rcx_4 = *(arg1 + 0x180)
    
    char rbp_1 = *(rcx_4 + 0x3f8)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp5_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    if (rbp_1 != 0)
        *(arg1 - 0x28) = (int.q(_mm_max_ss(arg2[3], 0))).d
        zmm1 = _mm_max_ss(arg2[4], 0)
        *(arg1 - 0x24) = (int.q(zmm1)).d
    
    int64_t* rcx_7 = *(var_58 + 0x910)
    int32_t rax_14 = (*(*rcx_7 + 0x68))(rcx_7, zmm1)
    
    if (rsi_2 s<= 0)
        rsi_2 = 0
    
    if (r15_2 s<= 0)
        r15_2 = 0
    
    (*(*(arg1 - 0xd0) + 0x18))(arg1 - 0xd0, zx.q(r15_2), zx.q(rsi_2), zx.q(rax_14))

int64_t* var_50

if (var_50 == 0)
    return 

var_50[1].d -= 1

if (var_50[1].d != 1)
    return 

(**var_50)(var_50)
int32_t temp3_1 = *(var_50 + 0xc)
*(var_50 + 0xc) -= 1

if (temp3_1 == 1)
    (*(*var_50 + 8))(var_50, 1)
