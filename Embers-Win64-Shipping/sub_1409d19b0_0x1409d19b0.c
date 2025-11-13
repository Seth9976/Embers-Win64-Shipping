// 函数: sub_1409d19b0
// 地址: 0x1409d19b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x28)
int64_t rbx = sx.q(arg3)
int64_t* rdi = *(rax + 0xc8)
void* rbp = *(rax + 0xc0)

if (rdi != 0)
    rdi[1].d += 1

uint64_t result = *arg4
int64_t r9 = data_143f360f8
int64_t* rsi_1 = *(arg2 + 0x28) + 0x1a8

if (result == r9 || result == data_143f36100 || result == data_143f36108)
    if (*(arg2 + 0x520) s<= 0)
        int64_t var_48
        sub_14099ad60(rsi_1, &var_48, rbx.d, r9, 0)
        int64_t var_38
        sub_14099ad60(rsi_1, &var_38, rbx.d, data_143f36100, 0)
        sub_14099acb0(rsi_1, rbx.d, data_143f36108, 0)
        int64_t rcx_7 = *(rbp + 0x1f0)
        int64_t rdx_5 = rbx * 3
        *(rcx_7 + (rdx_5 << 2)) = var_48
        int64_t zmm0_2 = var_38
        int32_t var_40
        *(rcx_7 + (rdx_5 << 2) + 8) = var_40
        int64_t rcx_8 = *(rbp + 0x1c0)
        int32_t result_1
        result = zx.q(result_1)
        *(rcx_8 + (rdx_5 << 2)) = zmm0_2
        *(rcx_8 + (rdx_5 << 2) + 8) = result.d
else
    float zmm1[0x4]
    
    if (result != data_143f360f0)
        if (result == data_143f36110 && *(arg2 + 0x520) s<= 0)
            float zmm2[0x4] = *(arg4 + 0x20)
            arg3.b = 1
            float var_28 = zmm2[0]
            float zmm0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            float var_1c_1 = _mm_shuffle_ps(zmm2, zmm2, 0xff)[0]
            float var_24_1 = zmm0[0]
            float var_20_1 = zmm1[0]
            void arg_8
            sub_140ae16d0(&var_28, &arg_8, arg3.b)
            int128_t var_18
            sub_140acc920(&var_18, &arg_8)
            result = *(rbp + 0x1a8)
            *(result + rbx * 0x10) = var_18
    else if (*(arg2 + 0x520) s<= 0)
        result = *(rbp + 0x190)
        zmm1 = arg4[8].d
        *(result + (rbx << 3)) = (*(arg4 + 0x3c))[0]
        *(result + (rbx << 3) + 4) = zmm1[0]

if (rdi != 0)
    result = zx.q(rdi[1].d)
    rdi[1].d -= 1
    
    if (result.d == 1)
        result = (**rdi)(rdi)
        int32_t rbx_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rbx_1 == 1)
            return (*(*rdi + 8))(rdi, zx.q(rbx_1))

return result
