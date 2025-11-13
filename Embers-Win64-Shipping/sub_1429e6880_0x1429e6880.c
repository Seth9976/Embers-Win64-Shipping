// 函数: sub_1429e6880
// 地址: 0x1429e6880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int64_t r10 = *(arg1 + 0x4ea8)
int32_t var_f0 = 0
int64_t var_c0 = 0
int64_t (* var_b0)(int32_t* arg1) = sub_1429e3870
void* var_b8 = &arg1[0x27]
void* var_d0

if (r10 == 0)
    var_d0 = arg2
    int64_t var_c8_1 = arg3
else
    int32_t rbx_1
    
    if (arg3 - arg2 s<= 0x50)
        rbx_1 = arg3.d - arg2.d
    else
        rbx_1 = 0x50
    
    void var_a8
    r10(arg1[0x4eb].q, arg2, &var_a8, zx.q(rbx_1))
    var_d0 = &var_a8
    void* var_c8 = &var_a8 + sx.q(rbx_1)

int64_t rax_5
int64_t r9_1
rax_5, r9_1 = sub_1429e4cc0(arg1, &var_d0, arg5)
int32_t r13 = 1 << (arg1[0x47b].d).b
int32_t rax_6 = 1 << (*(arg1 + 0x47ac)).b
int32_t var_f8 = r13
int128_t* result = *(arg1 + 0x47e8) + 0x70 + sx.q(arg1[0x5a].d) * 0xd0
int128_t* result_1 = result
*(arg1 + 0x1f8) = result

if (rax_5 != 0)
    void* r14_1 = arg2 + sub_1429e0b70(&var_d0)
    
    if (rax_5 u> arg3 - r14_1)
        r9_1 = sub_1429da010(&arg1[0x27], 7, "Truncated packet or corrupt header length", r9_1)
    
    int32_t rax_14
    
    if (*(arg1 + 0x47a4) == 0 && *(arg1 + 0x3d8) == *(arg1 + 0x3e8)
            && *(arg1 + 0x3dc) == *(arg1 + 0x3ec) && *(arg1 + 0x5b9) == 0 && arg1[0x5b].d != 0)
        rax_14 = 1
    
    if (*(arg1 + 0x47a4) != 0 || *(arg1 + 0x3d8) != *(arg1 + 0x3e8)
            || *(arg1 + 0x3dc) != *(arg1 + 0x3ec) || *(arg1 + 0x5b9) != 0 || arg1[0x5b].d == 0
            || *(arg1 + 0x5a4) == 0)
        rax_14 = 0
    
    arg1[0x69].d = rax_14
    sub_142a25220(arg1, arg1[0x3f].d, *(arg1 + 0x3f4))
    int64_t i_5 = 0xf
    int128_t* rdx_3 = *(arg1 + 0x13d8)
    int64_t i_3 = 0xf
    int128_t* r8_3 = zx.q(*(arg1 + 0x13e8)) * 0x7fc + arg1[0x13e].q
    int128_t zmm0_1
    int64_t i
    
    do
        rdx_3 = &rdx_3[8]
        zmm0_1 = *r8_3
        r8_3 = &r8_3[8]
        rdx_3[-8] = zmm0_1
        rdx_3[-7] = r8_3[-7]
        rdx_3[-6] = r8_3[-6]
        rdx_3[-5] = r8_3[-5]
        rdx_3[-4] = r8_3[-4]
        rdx_3[-3] = r8_3[-3]
        rdx_3[-2] = r8_3[-2]
        rdx_3[-1] = r8_3[-1]
        i = i_3
        i_3 -= 1
    while (i != 1)
    *rdx_3 = *r8_3
    rdx_3[1] = r8_3[1]
    rdx_3[2] = r8_3[2]
    rdx_3[3] = r8_3[3]
    rdx_3[4] = r8_3[4]
    rdx_3[5] = r8_3[5]
    rdx_3[6] = r8_3[6]
    rdx_3[7].q = r8_3[7].q
    *(rdx_3 + 0x78) = *(r8_3 + 0x78)
    
    if (*(*(arg1 + 0x13d8) + 0x7f8) == 0)
        sub_1429da010(&arg1[0x27], 7, "Uninitialized entropy context.", r9_1)
    
    *(arg1 + 0x25c) = 0
    int32_t rax_19
    int64_t r9_2
    rax_19, r9_2 = sub_1429e42a0(arg1, r14_1, rax_5)
    *(result_1 + 0x88) = rax_19
    
    if (rax_19 != 0)
        sub_1429da010(&arg1[0x27], 7, "Decode failed. Frame data header is corrupted.", r9_2)
    
    int32_t rdx_5 = *(arg1 + 0x1328)
    
    if (rdx_5 != 0 && *(arg1 + 0x47b8) == 0)
        sub_142a26c20(&arg1[0x27], rdx_5)
    
    if (*(arg1 + 0x4818) != 0 && *(arg1 + 0x47a8) != 0)
        void* rbx_4 = *(arg1 + 0x4828)
        void* r13_1 = *(rbx_4 + 0x18)
        
        if (arg1[0x131].d != 0)
            int128_t* rdx_6 = *(arg1 + 0x13d8)
            var_f0 = 1
            int64_t i_4 = 0xf
            int128_t* r8_6 = zx.q(*(arg1 + 0x13e8)) * 0x7fc + arg1[0x13e].q
            int64_t i_1
            
            do
                r8_6 = &r8_6[8]
                zmm0_1 = *rdx_6
                rdx_6 = &rdx_6[8]
                r8_6[-8] = zmm0_1
                r8_6[-7] = rdx_6[-7]
                r8_6[-6] = rdx_6[-6]
                r8_6[-5] = rdx_6[-5]
                r8_6[-4] = rdx_6[-4]
                r8_6[-3] = rdx_6[-3]
                r8_6[-2] = rdx_6[-2]
                r8_6[-1] = rdx_6[-1]
                i_1 = i_4
                i_4 -= 1
            while (i_1 != 1)
            *r8_6 = *rdx_6
            r8_6[1] = rdx_6[1]
            r8_6[2] = rdx_6[2]
            r8_6[3] = rdx_6[3]
            r8_6[4] = rdx_6[4]
            r8_6[5] = rdx_6[5]
            r8_6[6] = rdx_6[6]
            r8_6[7].q = rdx_6[7].q
            *(r8_6 + 0x78) = *(rdx_6 + 0x78)
        
        sub_1429e7450(rbx_4)
        *(arg1[0x482].q + 0xc8) = 0xffffffff
        *(arg1[0x482].q + 0xcc) = 0xffffffff
        *(r13_1 + 0x78) = 1
        sub_1429e7460(rbx_4)
        sub_1429e7470(rbx_4)
        r13 = var_f8
    
    void* rcx_17 = *(arg1 + 0x4868)
    int32_t rdx_7
    
    if (rcx_17 != 0)
        rdx_7 = rax_6
    
    if (rcx_17 == 0 || rdx_7 * r13 != *(arg1 + 0x4e74))
        int32_t rax_27 = *(arg1 + 0x4eb8)
        int32_t rbx_5 = 0
        
        if (rax_27 s> 1)
            rbx_5 = rax_27
        
        sub_1429dde60(rcx_17)
        int32_t r13_3 = rax_6 * var_f8
        void* rax_29
        int64_t r9_3
        rax_29, r9_3 = sub_1429ddec0(0x20, sx.q(rbx_5 + r13_3) * 0x3fd0)
        *(arg1 + 0x4868) = rax_29
        
        if (rax_29 == 0)
            sub_1429da010(&arg1[0x27], (rax_29 + 2).d, "Failed to allocate pbi->tile_worker_data", 
                r9_3)
        
        rdx_7 = rax_6
        *(arg1 + 0x4e74) = r13_3
        r13 = var_f8
    
    int64_t r9_4
    
    if (*(arg1 + 0x4eb8) s<= 1 || r13 != 1 || rdx_7 s<= r13)
        result, r9_4 = sub_1429e2ba0(arg1, rax_5 + r14_1, arg3)
        *arg4 = result
    else
        result, r9_4 = sub_1429e3340(arg1, rax_5 + r14_1, arg3)
        *arg4 = result
        
        if (*(arg1 + 0x25c) != 0)
            result, r9_4 =
                sub_1429da010(&arg1[0x27], 7, "Decode failed. Frame data is corrupted.", r9_4)
        else if (*(arg1 + 0x47b8) == 0)
            result, r9_4 = sub_142a27cc0(result_1, &arg1[0x27], arg1, *(arg1 + 0x1328), 0, 0, 
                arg1[0x486].q, arg1[0x4e7].d, arg1 + 0x4e78)
    
    if (*(arg1 + 0x25c) != 0)
        result = sub_1429da010(&arg1[0x27], 7, "Decode failed. Frame data is corrupted.", r9_4)
    else if (*(arg1 + 0x47a4) == 0 && *(arg1 + 0x47a8) == 0)
        result = sub_142a235a0(&arg1[0x27])
        
        if (*(arg1 + 0x5a8) != 0 && *(arg1 + 0x5b8) == 0)
            sub_142a23ee0(&arg1[0x27])
            result = sub_142a23930(&arg1[0x27], *(arg1 + 0x5bc))
    
    if (arg1[0x131].d != 0 && var_f0 == 0)
        int128_t* rdx_16 = *(arg1 + 0x13d8)
        result = arg1[0x13e].q + zx.q(*(arg1 + 0x13e8)) * 0x7fc
        int64_t i_2
        
        do
            result = &result[8]
            int128_t zmm0_2 = *rdx_16
            rdx_16 = &rdx_16[8]
            result[-8] = zmm0_2
            result[-7] = rdx_16[-7]
            result[-6] = rdx_16[-6]
            result[-5] = rdx_16[-5]
            result[-4] = rdx_16[-4]
            result[-3] = rdx_16[-3]
            result[-2] = rdx_16[-2]
            result[-1] = rdx_16[-1]
            i_2 = i_5
            i_5 -= 1
        while (i_2 != 1)
        *result = *rdx_16
        result[1] = rdx_16[1]
        result[2] = rdx_16[2]
        result[3] = rdx_16[3]
        result[4] = rdx_16[4]
        result[5] = rdx_16[5]
        result[6] = rdx_16[6]
        result[7].q = rdx_16[7].q
        *(result + 0x78) = *(rdx_16 + 0x78)
else
    void* rbp
    rbp.b = *(arg1 + 0x4798) s> 2
    *arg4 = rbp + 1 + arg2

__security_check_cookie(rax_1 ^ &var_148)
return result
