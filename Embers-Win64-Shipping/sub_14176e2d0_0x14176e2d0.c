// 函数: sub_14176e2d0
// 地址: 0x14176e2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = arg6
int32_t r13 = 0
int32_t rax = rdi[0xa]
int32_t r14 = rdi[9]
int128_t zmm11 = (*arg1)[0x2a]
char r12 = *(rdi + 0x3a)
zmm11.d = zmm11.d f+ zmm11.d
int128_t zmm13 = (*arg1)[0x29] ^ data_142d3f780
zmm13.d = zmm13.d f+ zmm13.d
*arg2 = 0
int128_t zmm1 = (*arg1)[0x2e]
int128_t zmm14 = arg5[0].o
int128_t zmm0 = (*arg1)[0x2d]
int128_t zmm9 = zmm0 ^ data_142d3f780
int128_t zmm3
zmm3.d = zmm1.d f+ zmm1.d
zmm9.d = zmm9.d f+ zmm9.d
arg5[0].o = zmm11
arg5[0] = arg5[0] f* (*arg1)[0x2b]
int128_t zmm6
zmm6.d = zmm9.d f* zmm0.d
zmm0.d = zmm3.d f* zmm1.d
zmm1.d = zmm3.d f* (*arg1)[0x2f]
zmm3.d = zmm3.d f* arg1[0xb][0]
zmm6.d = zmm6.d f- zmm0.d
zmm0 = zmm9
zmm9.d = zmm9.d f* (*arg1)[0x2f]
zmm0.d = zmm0.d f* arg1[0xb][0]
zmm6.d = zmm6.d f+ 1f
zmm9.d = zmm9.d f+ zmm3.d
zmm1.d = zmm1.d f- zmm0.d
zmm0.d = zmm13.d f* arg1[0xa][0]
arg5[0] = arg5[0] f- zmm0.d
zmm0.d = zmm11.d f* (*arg1)[0x2a]
zmm11.d = zmm11.d f* arg1[0xa][0]
arg5[0] = arg5[0] f* zmm1.d
zmm1.d = zmm13.d f* (*arg1)[0x29]
zmm13.d = zmm13.d f* (*arg1)[0x2b]
zmm1.d = zmm1.d f- zmm0.d
zmm0 = data_1439b8e04
zmm13.d = zmm13.d f+ zmm11.d
zmm1.d = zmm1.d f+ 1f
zmm13.d = zmm13.d f* zmm9.d
zmm1.d = zmm1.d f* zmm6.d
arg5[0] = arg5[0] f+ zmm1.d
arg5[0] = arg5[0] f+ zmm13.d
int64_t r15
r15.b = zmm0.d f> arg5[0]
char var_a0
float (* rcx)[0x4]

if (*(arg4 + 0x20) != 0 && r15.b == 0 && rdi[8] == 1)
    void var_88
    int64_t rdx_1
    int32_t zmm1_1[0x8]
    int32_t zmm3_1[0x8]
    rcx, rdx_1, arg3, zmm1_1, arg5, zmm3_1 = sub_141779950(&arg1[0xa], &arg1[0xb], &var_88, &arg6)
    zmm1_1[0].o = arg1[0x19][0]
    arg5[0].o = zx.o(0)
    zmm1_1[0] = zmm1_1[0] f+ rdi[0xb]
    int128_t zmm4_1 = arg6.d
    zmm3_1[0].o = zx.o(0)
    
    if (not(zmm4_1.d f<= zmm1_1[0]))
        zmm3_1[0].o = zmm4_1
        zmm3_1[0] = zmm3_1[0] f- zmm1_1[0]
    else if (not(zmm4_1.d f>= (zmm1_1[0].o ^ data_142d3f780)[0]))
        zmm3_1[0].o = zmm1_1[0].o
        zmm3_1[0] = zmm3_1[0] f+ zmm4_1.d
    
    int32_t rax_2
    
    if (__andps_xmmxud_memxud(zmm3_1[0].o, data_142d3f770)[0] f<= 0f)
        rax_2 = 0
        r13 = 1
    else if (*(rdi + 0x39) == 0)
        zmm1_1[0].o = *(arg4 + 0x2c)
        
        if (not(zmm1_1[0] f> 0f))
            zmm1_1[0].o = *rdi
        
        arg3, arg5, zmm14 = sub_14176def0(arg1, rdx_1, &var_88)
        rax_2 = 1
    else
        zmm1_1[0].o = *(arg4 + 0x48)
        
        if (not(zmm1_1[0] f> 0f))
            zmm1_1[0].o = rdi[0x13]
        
        uint32_t zmm0_1[0x4] = *(arg4 + 0x4c)
        
        if (not(zmm0_1[0] f> 0f))
            zmm0_1 = rdi[0x14]
        
        arg5[0].o = zmm1_1[0].o
        char var_98
        var_98.d = zmm3_1[0]
        rcx.b = rdi[0x10] == 0
        var_a0.q = &var_88
        zmm3_1[0].o = zmm0_1
        zmm1_1[0].o = zmm14
        arg3, arg5, zmm14 =
            sub_14176e1f0(arg1, zmm1_1, arg5, zmm3_1, rcx.b, var_a0, var_98, &(*arg1)[0x36])
        rax_2 = 1
    
    *arg2 += rax_2
    *(arg2 + 4) += r13

if (*(arg4 + 0x21) != 0)
    char var_98_1
    char var_98_2
    int64_t* rax_3
    
    if (rax != 1)
        char var_98_3
        
        if (rax != 2)
            if (rax == 0)
                if (r14 != 1)
                    if (r14 == 2)
                        var_98_3 = 0
                        var_a0.d = 1
                        goto label_14176e6ca
                else if (r15.b == 0)
                    var_98_2 = r12
                    var_a0.d = r14
                label_14176e616:
                    arg5[0].o = zmm14
                    rax_3, arg3, arg5, zmm14 =
                        sub_14176acc0(arg1, &arg6, arg3, arg4, rdi, var_a0, var_98_2)
                    *arg2 += *rax_3
                    *(arg2 + 4) += *(rax_3 + 4)
        else if (r14 == 1)
            var_a0.d = rax
            arg5[0].o = zmm14
            int64_t* rax_5
            rax_5, arg3, arg5, zmm14 = sub_14176f330(arg1, &arg6, arg5, arg4, rdi, var_a0, 0)
            rcx = zx.q(*rax_5)
            *(arg2 + 4) += *(rax_5 + 4)
            *arg2 += rcx.d
            
            if (r15.b == 0)
                var_98_1 = r12
                var_a0.d = r14
            label_14176e5d6:
                arg5[0].o = zmm14
                rax_3, arg3, arg5, zmm14 =
                    sub_14176fb50(arg1, &arg6, arg3, arg4, rdi, var_a0, var_98_1)
                *arg2 += *rax_3
                *(arg2 + 4) += *(rax_3 + 4)
        else if (r14 == 0)
            var_98_3 = r14.b
            var_a0.d = 2
        label_14176e6ca:
            arg5[0].o = zmm14
            rax_3, arg3, arg5, zmm14 = sub_14176f330(arg1, &arg6, arg5, arg4, rdi, var_a0, var_98_3)
            *arg2 += *rax_3
            *(arg2 + 4) += *(rax_3 + 4)
    else if (r14 == rax)
        arg5[0].o = zmm14
        rax_3, arg3, arg5, zmm14 = sub_141766d90(arg1, &arg6, arg5[0].o, arg4, rdi, r12)
        *arg2 += *rax_3
        *(arg2 + 4) += *(rax_3 + 4)
    else if (r14 == 2)
        var_a0.d = 1
        arg5[0].o = zmm14
        int64_t* rax_4
        rax_4, arg3, arg5, zmm14 = sub_14176f330(arg1, &arg6, arg5, arg4, rdi, 1, 0)
        rcx = zx.q(*rax_4)
        *(arg2 + 4) += *(rax_4 + 4)
        *arg2 += rcx.d
        
        if (r15.b == 0)
            var_98_1 = r12
            var_a0.d = r14
            goto label_14176e5d6
    else if (r14 == 0 && r15.b == 0)
        var_98_2 = r12
        var_a0.d = 2
        goto label_14176e616

if (*(arg4 + 0x20) == 0 || rdi[8] != 2)
    rcx.b = 0
else
    rcx.b = 1

if (*(arg4 + 0x21) == 0 || rdi[0xa] != 2 || rdi[9] != 2)
    rax.b = 0
else
    rax.b = 1

if (rcx.b != 0 || rax.b != 0)
    arg5[0].o = zmm14
    int64_t* rax_6 = sub_14176ae20(arg1, &arg6, arg3, arg4, rdi, rcx.b, rax.b)
    *arg2 += *rax_6
    *(arg2 + 4) += *(rax_6 + 4)

return arg2
