// 函数: sub_142b73390
// 地址: 0x142b73390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_448
int64_t rax_1 = __security_cookie ^ &var_448
int64_t rbp = sx.q(arg2)
int32_t var_408 = rbp.d
int32_t rax_2

if (arg1[6].d s> 0x10ffff)
    void* rax_3 = *arg1
    
    if (*(arg1 + 0x1103f) != 0)
        rax_2 = *(arg1[2] + (zx.q(*(rax_3 + 0x43ffc) + 0xf) << 2))
    else
        rax_2 = *(rax_3 + 0x43ffc)
else
    rax_2 = *(arg1 + 0x34)

*(arg1 + 0x34) = rax_2
int32_t r15_1 = (sub_142b73b60(arg1) + 0x1ff) & 0xfffffe00

if (r15_1 == 0x110000)
    *(arg1 + 0x34) = arg1[5].d

int32_t r9_1 = rbp.d << 4

if (r15_1 s>= r9_1)
    arg1[6].d = r15_1
else
    for (int64_t i = sx.q(r15_1) s>> 4; i s< rbp; i += 1)
        *(arg1 + i + 0x40) = 0
        *(*arg1 + (i << 2)) = *(arg1 + 0x34)
    
    arg1[6].d = r9_1

int32_t result_1 = 0
void var_248
void* r9_2 = &var_248

for (int32_t i_1 = 0; i_1 s< 0x80; )
    int32_t rax_7
    
    if (i_1 u> 0x10ffff)
        rax_7 = *(arg1 + 0x2c)
    else if (i_1 s< arg1[6].d)
        int64_t r8 = sx.q(i_1 s>> 4)
        rax_7 = *(*arg1 + (r8 << 2))
        
        if (*(r8 + arg1 + 0x40) != 0)
            rax_7 = *(arg1[2] + (zx.q((i_1 & 0xf) + rax_7) << 2))
    else
        rax_7 = *(arg1 + 0x34)
    
    *r9_2 = rax_7
    i_1 += 1
    r9_2 += 4

int32_t rdi = -1
int32_t var_3d8 = 0
int32_t var_3d4 = 0xffffffff
uint64_t rax_12 = sub_142b736a0(arg1, rbp.d, &var_3d8)
int32_t r12 = rax_12.d
void* result

if (rax_12.d s>= 0)
    result = sub_142a7dd00(sx.q((rax_12 << 2).d))
    void* result_2 = result
    
    if (result != 0)
        void* rcx_10 = &var_248
        int64_t i_3 = 4
        int64_t i_2
        
        do
            result += 0x80
            int128_t zmm0_1 = *rcx_10
            int128_t zmm1 = *(rcx_10 + 0x10)
            rcx_10 += 0x80
            *(result - 0x80) = zmm0_1
            zmm0_1 = *(rcx_10 - 0x60)
            *(result - 0x70) = zmm1
            zmm1 = *(rcx_10 - 0x50)
            *(result - 0x60) = zmm0_1
            zmm0_1 = *(rcx_10 - 0x40)
            *(result - 0x50) = zmm1
            zmm1 = *(rcx_10 - 0x30)
            *(result - 0x40) = zmm0_1
            zmm0_1 = *(rcx_10 - 0x20)
            *(result - 0x30) = zmm1
            zmm1 = *(rcx_10 - 0x10)
            *(result - 0x20) = zmm0_1
            *(result - 0x10) = zmm1
            i_2 = i_3
            i_3 -= 1
        while (i_2 != 1)
        int32_t r9_3 = var_3d8
        
        if (r9_3 != 0)
            int32_t r8_2 = 0
            int32_t rax_14 = 0
            
            if (r9_3 s> 0)
                void var_2d0
                void* rcx_11 = &var_2d0
                
                do
                    int32_t rdx_2 = *rcx_11
                    
                    if (rdx_2 s> r8_2)
                        rdi = rax_14
                        r8_2 = rdx_2
                    
                    rax_14 += 1
                    rcx_11 += 4
                while (rax_14 s< r9_3)
            
            int32_t var_3d0[0x40]
            rdi = var_3d0[sx.q(rdi)]
        
        int64_t var_400
        int64_t* var_420_1 = &var_400
        __builtin_memset(&var_400, 0, 0x1c)
        int32_t rax_16 = sub_142b72430(arg1, rbp.d, result_2, r12, rdi, var_420_1, arg3)
        
        if (*arg3 s<= 0)
            sub_142a7dcd0(arg1[2])
            arg1[2] = result_2
            arg1[3].d = r12
            *(arg1 + 0x1c) = rax_16
            
            if (rax_16 s<= 0x4000f)
                if (rdi s< 0)
                    arg1[4].d = 0xfffff
                else
                    int64_t rdx_4 = sx.q(*(*arg1 + (sx.q(rdi) << 2)))
                    arg1[4].d = rdx_4.d
                    arg1[5].d = *(result_2 + (rdx_4 << 2))
                
                result_1 = sub_142b728b0(arg1, var_408, &var_400, arg3)
                arg1[6].d = r15_1
            else
                *arg3 = 8
        
        sub_142a7dcd0(var_400)
        result = zx.q(result_1)
    else
        *arg3 = 7
else
    *arg3 = 7
    result = nullptr

__security_check_cookie(rax_1 ^ &var_448)
return result
