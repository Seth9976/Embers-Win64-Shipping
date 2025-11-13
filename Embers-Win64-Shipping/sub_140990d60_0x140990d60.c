// 函数: sub_140990d60
// 地址: 0x140990d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r13 = arg4
void* r12 = arg2
sub_1419c6730()
void*** rax = j_sub_140a82f30(0x1b0)
void*** rbx = rax
void var_a8

if (rax == 0)
    rbx = nullptr
else
    int64_t* rcx = *(data_143f5b298 + 0x370)
    int64_t rsi_1
    
    if (rcx == 0)
        rsi_1 = 0
    else
        rsi_1 = (*(*rcx + 0x280))(rcx)
    
    int32_t* rax_4 = sub_140b5e500(&var_a8, 0x3e)
    int128_t zmm6_1 = data_142e3d770
    int64_t var_b0
    var_b0:4.d = 0
    var_b0.d = *rax_4
    sub_142118c70(rbx)
    rbx[0x32] = rsi_1
    *rbx = &data_142e0eff8
    *(rbx + 0x198) = zmm6_1
    rbx[0x35] = var_b0

int64_t* r15 = arg5
int64_t rbp = sx.q(r15[0x16].d)
int32_t rax_6 = (rbp + 1).d
r15[0x16].d = rax_6

if (rax_6 s> *(r15 + 0xb4))
    sub_14083a310(&r15[0x15], rbp.d)

*(r15[0x15] + (rbp << 3)) = rbx
int64_t* rcx_5 = *(arg1 + 0x150)
void* result = (*(*rcx_5 + 0x280))(rcx_5)
int32_t i = 0
void* result_2 = result
void* result_1 = result

if (*(r12 + 8) s> 0)
    do
        if (test_bit(r13, i))
            int32_t rax_9 = sub_14081f8e0(r15, 1)
            int64_t* r12_3 = zx.q(rax_9 s% 0x66) * 0xa0 + *(*r15 + (sx.q(rax_9 s/ 0x66) << 3))
            int64_t* r13_1 = r12_3
            int64_t* rax_11 = r12_3[0xd]
            
            if (rax_11 != 0)
                r13_1 = rax_11
            
            r13_1[2] = arg1 + 0x260
            *(r12_3 + 0x9c) &= 0xffffffbf
            r12_3[0xf] = arg1 + 0x288
            r12_3[0x10] = result_2
            int64_t* rcx_11 = *(arg1 + 0x108)
            char var_d8
            bool var_d0
            char var_c8
            char var_b7
            void var_b6
            void var_88
            (*(*rcx_11 + 0x150))(rcx_11, *(arg1 + 0x110), &var_b7, &var_88, &var_a8, &var_b6, 
                var_d8, var_d0, var_c8)
            char var_b8 = 0
            char* var_98_1 = &var_b8
            void*** (* var_a0)() = j_sub_140597fc0
            void* rax_15 = sub_140a756e0(&var_a0, &data_143958018)
            void*** rbx_3 = (*(rax_15 + 0x10) + 0xf) & 0xfffffffffffffff0
            void* rax_16 = &rbx_3[6]
            
            if (rax_16 u> *(rax_15 + 0x18))
                sub_140b0e3d0(rax_15 + 0x10, 0x40)
                rbx_3 = (*(rax_15 + 0x10) + 0xf) & 0xfffffffffffffff0
                rax_16 = &rbx_3[6]
            
            *(rax_15 + 0x10) = rax_16
            
            if (rbx_3 == 0)
                rbx_3 = nullptr
            else
                rbx_3[2] = 0
                rbx_3[3] = 0
                *rbx_3 = &data_142e0f070
                rbx_3[2].d = 0xffffffff
                *(rbx_3 + 0x14) = 4
                rbx_3[1] = &data_142d99570
                rbx_3[3].d = 2
                rbx_3[4] = 0
                rbx_3[5] = 0
            
            int64_t r15_1 = sx.q(r15[0x18].d)
            int32_t rax_17 = (r15_1 + 1).d
            r15[0x18].d = rax_17
            
            if (rax_17 s> *(r15 + 0xc4))
                sub_14083a310(&r15[0x17], r15_1.d)
            
            var_c8 = 0
            *(r15[0x17] + (r15_1 << 3)) = rbx_3
            var_d0 = *(arg1 + 0x32) - 1 u<= 1
            var_d8 = var_b7
            void* var_e0_1
            var_e0_1.b = 1
            sub_1422f21f0(rbx_3, arg1 + 0x80, &var_88, arg1 + 0xc0, arg1 + 0xdc, var_e0_1.b, 
                var_d8, var_d0, 0)
            r15 = arg5
            r13_1[1] = &rbx_3[1]
            r13_1[8].d = 0
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = muls.dp.d(0x55555556, *(arg1 + 0x280))
            r13_1[0xa].d = 0
            *(r13_1 + 0x44) = temp2_1 + (temp2_1 u>> 0x1f)
            *(r13_1 + 0x54) = *(arg1 + 0x214) - 1
            *(r12_3 + 0x9c) = (zx.d(*(arg1 + 0x35)) & 1) | (*(r12_3 + 0x9c) & 0xfffe007e)
            result = sub_1422dd2a0(r15, i, r12_3)
            r12 = arg2
            r13 = arg4
            result_2 = result_1
        
        i += 1
    while (i s< *(r12 + 8))

return result
