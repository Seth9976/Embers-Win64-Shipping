// 函数: sub_1414168c0
// 地址: 0x1414168c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_38 = zmm6
void* rcx = arg1[2]

if (rcx == 0 || *(arg1 + 0x1c) u>= arg1[3].d)
    int64_t rbx_1 = sx.q(arg1[1].d)
    int32_t rax_2 = (rbx_1 + 1).d
    arg1[1].d = rax_2
    
    if (rax_2 s> *(arg1 + 0xc))
        sub_141104ec0(arg1, rbx_1.d)
    
    int64_t* rbx_2 = *arg1 + rbx_1 * 0x28
    int128_t var_78
    
    if (rbx_2 == 0)
        rbx_2 = nullptr
    else
        *rbx_2 = 0
        rbx_2[1] = 0
        var_78 = zx.o(0)
        int64_t* rax_4 = j_sub_140a82f30(0x14)
        *rax_4 = 0
        rax_4[1] = 0
        rbx_2[1] = rax_4
        rax_4[2].d = 1
        int64_t* rcx_3 = rbx_2[1]
        *rbx_2 = &rax_4[2]
        sub_1413c6650(rcx_3, &var_78)
        int64_t* rcx_4 = var_78:8.q
        
        if (rcx_4 != 0 && var_78.q != 0)
            (*(*rcx_4 + 0x10))(rcx_4, &var_78)
            var_78:8.q = 0
        
        sub_14081c9d0(&var_78)
        __builtin_memset(&rbx_2[2], 0, 0x14)
    
    int64_t* rcx_6 = arg1[4]
    arg1[2] = rbx_2
    int64_t* rax_8 = (*(*rcx_6 + 8))(rcx_6, &var_78)
    int64_t* rax_9 = j_sub_140a82f30(0x14)
    *rax_9 = 0
    rax_9[1] = 0
    rax_9[2].d = 1
    sub_1413c6650(rax_9, rax_8)
    void** rbx_4 = arg1[2]
    sub_1413de930(rbx_4)
    *rbx_4 = &rax_9[2]
    rbx_4[1] = rax_9
    int64_t* rcx_9 = var_78:8.q
    
    if (rcx_9 != 0 && var_78.q != 0)
        (*(*rcx_9 + 0x10))(rcx_9, &var_78)
        var_78:8.q = 0
    
    sub_14081c9d0(&var_78)
    int64_t* rax_12 = sub_141996dc0(arg5, &var_78, arg1[3].d * 0x60)
    void* rcx_12 = arg1[2]
    *(rcx_12 + 0x10) = *rax_12
    *(rcx_12 + 0x20) = rax_12[2]
    rcx = arg1[2]
    *(arg1 + 0x1c) = 0

float* rax_13 = *(rcx + 0x10)
int128_t zmm8 = *arg4
int128_t zmm7 = *(arg4 + 4)
zmm6 = *(arg4 + 8)
float zmm2 = *arg3
int64_t zmm1 = arg3[1]
int128_t zmm0 = arg3[2]
float zmm3 = zmm2 f- zmm8.d
zmm8.d = zmm8.d f+ zmm2
float zmm5 = zmm1.d f- zmm7.d
float zmm4 = zmm0.d f- zmm6.d
zmm7.d = zmm7.d f+ zmm1.d
zmm6.d = zmm6.d f+ zmm0.d
*rax_13 = zmm3
rax_13[0xc] = zmm8.d
rax_13[0xf] = zmm8.d
rax_13[0x12] = zmm8.d
rax_13[7] = zmm7.d
rax_13[5] = zmm6.d
rax_13[0xa] = zmm7.d
rax_13[0xb] = zmm6.d
rax_13[0x11] = zmm6.d
rax_13[0x13] = zmm7.d
rax_13[0x15] = zmm8.d
rax_13[0x16] = zmm7.d
rax_13[0x17] = zmm6.d
rax_13[1] = zmm5
rax_13[2] = zmm4
rax_13[3] = zmm3
rax_13[4] = zmm5
rax_13[6] = zmm3
rax_13[8] = zmm4
rax_13[9] = zmm3
rax_13[0xd] = zmm5
rax_13[0xe] = zmm4
rax_13[0x10] = zmm5
rax_13[0x14] = zmm4
*(rcx + 0x10) = &rax_13[0x18]
int64_t* rcx_13 = arg1[2]
*(arg1 + 0x1c) += 1
int32_t* rax_15 = *rcx_13
*rax_15 += 1
*arg2 = *rcx_13
arg2[1] = rcx_13[1]
return arg2
