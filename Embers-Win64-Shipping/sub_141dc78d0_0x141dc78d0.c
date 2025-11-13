// 函数: sub_141dc78d0
// 地址: 0x141dc78d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t* rdi = arg2
int128_t zmm6
int128_t var_18 = zmm6
*arg2 = 0xbf800000
int128_t zmm7
int128_t var_28 = zmm7
uint64_t var_48 = 0
int32_t var_40 = 0
uint32_t zmm0[0x4] = sub_141dc7a00(arg1, &var_48)
uint64_t rbx = var_48
int64_t rbp_2 = (sx.q(var_40) << 4) + rbx

if (rbx != rbp_2)
    do
        if (sub_14236bbc0(*rbx) == 0)
            int64_t* rcx_1 = *(arg1 + 0x18)
            
            if (rcx_1 != 0 && sub_14236bbe0(rcx_1, zmm0[0]) != 0
                    && _mm_and_ps(*(arg1 + 0x194), 0x7fffffff)[0] f<= 0.100000001f)
                rbx = var_48
                *rdi = 0
                rdi.b = 0
                goto label_141dc79d9
        
        zmm0 = *rdi
        uint32_t zmm1_1 = *(*rbx + 0x1c)
        
        if (not(zmm0[0] f< 0f))
            zmm0 = _mm_min_ss(zmm0[0], zmm1_1)
            zmm1_1 = zmm0[0]
        
        rbx += 0x10
        *rdi = zmm1_1
    while (rbx != rbp_2)
    
    rbx = var_48

if (0f f< *rdi)
    rdi.b = 1
else
    *rdi = 0
    rdi.b = 0

label_141dc79d9:

if (rbx != 0)
    sub_140a74f90(rbx)

return zx.q(rdi.b)
