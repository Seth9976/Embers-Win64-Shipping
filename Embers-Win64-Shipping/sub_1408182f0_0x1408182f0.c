// 函数: sub_1408182f0
// 地址: 0x1408182f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r14 = arg7
uint64_t rdx = zx.q(*(arg1 + 0xac))
int32_t i_3 = 0
uint64_t j_2 = zx.q(arg3)
arg7 = nullptr
int64_t* rcx = *(r14 + 0x20)
int64_t* rax_1 = (*(*rcx + 0x40))(rcx, rdx, &arg7)
int64_t r8_1 = *rax_1
int32_t* rax_2 = (*(r8_1 + 0x1d8))(rax_1, arg5, r8_1)
int32_t* r10 = *arg2

if (rax_2.d u<= 1 || *(r14 + 0x80) == 0)
    int32_t i_2 = *(r14 + 0x30)
    int32_t* r9_1 = *(r14 + 0x28)
    
    if (i_2 s> 0)
        uint64_t i_1 = zx.q(i_2)
        uint64_t i
        
        do
            if (j_2.d s> 0)
                uint64_t j_1 = j_2
                int32_t rdx_4 = ((zx.q(*r9_1 * j_2.d) << 1) + 1).d
                uint64_t j
                
                do
                    *r10 = rdx_4 - 1
                    r10[1] = rdx_4
                    r10[2] = rdx_4 + 1
                    r10[3] = rdx_4
                    r10[4] = rdx_4 + 2
                    r10[5] = rdx_4 + 1
                    i_2 = rdx_4 + 3
                    r10 = &r10[6]
                    rdx_4 += 2
                    
                    if (i_3 u>= i_2)
                        i_2 = i_3
                    
                    i_3 = i_2
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            r9_1 = &r9_1[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    arg2[4].d = i_3
    return i_2

int32_t* rbx = *(r14 + 0x78)
void* rbp_2 = &rbx[sx.q(*(r14 + 0x80)) * 8]

if (rbx != rbp_2)
    void* rsi_1 = &rbx[5]
    int128_t zmm8
    int128_t var_58_1 = zmm8
    int128_t zmm9
    int128_t var_68_1 = zmm9
    
    do
        zmm8.d = (*(rsi_1 - 0x10)).d f- arg6[1]
        arg5 = (*(rsi_1 - 0xc) - arg6[2]) * arg4[2]
        zmm8.d = zmm8.d f* arg4[1]
        zmm9.d = (*(rsi_1 - 4)).d f- arg6[1]
        zmm8.d = zmm8.d f+ (*rbx - *arg6) * *arg4
        int32_t var_70_1 = *(rsi_1 + 8)
        float zmm0 = *(rsi_1 - 8) - *arg6
        zmm9.d = zmm9.d f* arg4[1]
        int64_t var_78 = *(r14 + 0x28) + (sx.q(*(rsi_1 + 4)) << 2)
        zmm8.d = zmm8.d f+ arg5
        char rax_6 = *(arg1 + 0x219)
        zmm9.d = zmm9.d f+ zmm0 * *arg4
        zmm9.d = zmm9.d f+ (*rsi_1 - arg6[2]) * arg4[2]
        
        if (zmm8.d f< zmm9.d)
            if (rax_6 != 0)
                rax_6 = 0
            else
                rax_6 = 1
        else if (rax_6 == 1 || (not(zmm8.d f>= zmm9.d) && rax_6 == 0))
            rax_6 = 1
        else
            rax_6 = 0
        
        rax_2 = sub_1408128b0(r10, &arg2[4], &var_78, j_2.d, rax_6)
        rbx = &rbx[8]
        rsi_1 += 0x20
        r10 = rax_2
    while (rbx != rbp_2)

return rax_2
