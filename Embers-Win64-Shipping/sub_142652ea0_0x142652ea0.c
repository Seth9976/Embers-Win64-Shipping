// 函数: sub_142652ea0
// 地址: 0x142652ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rbp = 0

if (arg3 == 0)
    return nullptr

void* rax_2 = sub_140d21950(arg3, sub_142548ca0())
uint64_t* r8_1

if (rax_2 == 0)
    void* rax_4 = *(arg3 + 0x130)
    int32_t* rax_5
    
    if (rax_4 == 0)
        int32_t var_54_1 = data_143dbb200
        uint64_t var_5c
        rax_5 = &var_5c
        var_5c = data_143dbb1f8.q
    else
        float zmm1[0x4] = *(rax_4 + 0x1d0)
        float var_68
        rax_5 = &var_68
        var_68 = zmm1[0]
        uint128_t zmm0_1 = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        float var_38_1[0x4] = zmm1
        float var_60_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
        int32_t var_64_1 = zmm0_1.d
    
    uint64_t var_50
    r8_1 = &var_50
    int32_t rax_7 = rax_5[2]
    var_50 = *rax_5
    int32_t var_48_1 = rax_7
else
    int64_t r8 = *rax_2
    void var_44
    r8_1 = (*(r8 + 0x18))(rax_2, &var_44, r8)

void* result
int128_t zmm6_1
result, zmm6_1 = sub_142653090(arg1, arg2, r8_1, arg4, arg5)
int64_t* rbx_1
int64_t r14

if (result == 0)
    rbx_1 = 0.q
    r14.b = 0
else
    rbx_1 = *(result + 0x68)
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    rbp = 1
    
    if (*(result + 0x60) == 0)
        r14.b = 0
    else
        r14 = 1

if ((rbp & 1) != 0 && rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t rax_12 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (rax_12 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

if (r14.b != 0)
    int64_t* rbx_2 = *(result + 0x68)
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    sub_142668620(*(result + 0x60), arg3, zmm6_1)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t rdi_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, zx.q(rdi_1))

return result
