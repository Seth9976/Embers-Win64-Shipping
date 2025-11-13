// 函数: sub_141e227d0
// 地址: 0x141e227d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int32_t r15 = data_143f393d0
int256_t zmm1 = sub_140b34200("AnimSeq_GetBonePose", r15)
void* rsi = arg2[2]
int64_t rbp
int64_t r14

if (arg5 != 0)
    rbp.b = 1
    r14.b = 0
else
    char rax_2
    rax_2, zmm1 = sub_141e34820(arg1, rsi)
    
    if (rax_2 != 0)
        rbp.b = 1
        r14.b = 0
    else
        rbp.b = 0
        
        if ((*(*arg1 + 0x278))(arg1) == 0)
            r14.b = 0
        else
            r14.b = 1

void* rcx_2 = arg1[7]

if (rcx_2 != 0)
    if (r14.b != 0)
        sub_141e47c50(arg2, zmm1)
    else if (*(rsi + 0xf0) == 0)
        sub_141e0ba30(arg2)
    else
        void* rax_5 = sub_141dec140(rcx_2, *(arg1 + 0x164))
        int32_t i_2 = arg2[1].d
        
        if (i_2 != 0)
            int64_t r8 = 0
            uint64_t i_1 = zx.q(i_2)
            int64_t r9 = 0
            uint64_t i
            
            do
                r8 += 0x30
                int64_t rax_6 = *arg2
                r9 += 4
                int128_t* rcx_8 = sx.q(*(*(rsi + 0x70) + r9 - 4)) * 0x30 + *rax_5
                *(r8 + rax_6 - 0x30) = *rcx_8
                zmm1.o = rcx_8[1]
                *(r8 + rax_6 - 0x20) = zmm1.o
                *(r8 + rax_6 - 0x10) = rcx_8[2]
                i = i_1
                i_1 -= 1
            while (i != 1)
    
    (*(*arg1 + 0x298))(arg1, arg3, *(arg4 + 4), zx.q(rbp.b))
    int32_t rax_8
    
    if (rbp.b == 0)
        rax_8 = arg1[0x1d].d
    else
        rax_8 = arg1[0x17].d
    
    if (rax_8 != 0)
        if ((*(*arg1 + 0x278))(arg1) == 0 || rbp.b != 0)
            rbp.b = 0
        else
            rbp.b = 1
        
        uint32_t var_d8[0x3][0x4]
        uint32_t (* rax_11)[0x4] = sub_141e1ff70(arg1, &var_d8, zx.o(0), rsi)
        void* r9_3 = arg1[7]
        char var_a8
        char* var_e0_1 = &var_a8
        uint32_t zmm0_2[0x4] = *rax_11
        int128_t zmm1_1 = rax_11[1]
        int128_t zmm2_1 = rax_11[2]
        var_a8 = *(arg1 + 0x16d)
        uint32_t var_a4_1 = zx.d(*(arg1 + 0x16e))
        char var_a0_1 = *(arg1 + 0x16f)
        int64_t var_e8_1 = arg1[3]
        uint32_t var_98_1[0x4] = zmm0_2
        int128_t var_88_1 = zmm1_1
        int128_t var_78_1 = zmm2_1
        char var_68_1 = rbp.b
        sub_141df6aa0(arg2, &arg1[0x1c], arg4, r9_3, arg1[0x12].d[0], *(arg1 + 0x16c), r14.b, 
            *(arg1 + 0x164))
else if (r14.b == 0)
    sub_141e0ba30(arg2)
else
    sub_141e47c50(arg2, zmm1)

int64_t result = sub_140b38680("AnimSeq_GetBonePose", r15)
__security_check_cookie(rax_1 ^ &var_128)
return result
