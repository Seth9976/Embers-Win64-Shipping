// 函数: sub_141024c90
// 地址: 0x141024c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
void* r12 = arg2
arg1[0x27] = arg2
void* rdi = nullptr
arg1[0xf] = arg2
arg1[3] = arg3
arg1[0x2a] = arg1
arg1[0x12] = arg1
*(arg1 + 0x1c0) = *arg6
int32_t rbx = arg1[0x39].d
int32_t temp1
int32_t temp2
temp1:temp2 = mulu.dp.d(0xd1b71759, *(arg1 + 0x1cc))
uint32_t i_2 = temp1 u>> 0xd

if (i_2 != 0)
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        void** const var_98_1 = &data_142efcd90
        int64_t var_90_1 = 0
        int64_t var_88_1 = 0
        int32_t var_80_1 = rbx
        int64_t var_7c_1 = 0x2710
        char var_74_1 = 1
        int64_t* rax_2 = j_sub_140a82f30(0x30)
        
        if (rax_2 != 0)
            *rax_2 = 0
            rax_2[2] = 0
            rax_2[1] = &data_142efcd90
            rax_2[3] = 0
            rax_2[4].d = rbx
            *(rax_2 + 0x24) = 0x2710
            *(rax_2 + 0x2c) = 1
            int64_t** rcx = arg1[0x36]
            arg1[0x36] = rax_2
            *rcx = rax_2
        
        rbx += 0x2710
        i = i_1
        i_1 -= 1
    while (i != 1)
    r12 = arg2

int64_t* rbx_1 = arg1[0x31]
int64_t* rcx_1 = *(arg1[0x38] + 0x58)
arg1[0x31] = rcx_1

if (rcx_1 != 0)
    (*(*rcx_1 + 8))()

if (rbx_1 != 0)
    (*(*rbx_1 + 0x10))(rbx_1)

void* rcx_3 = arg1[0x38]
arg1[0x2d].d = *(rcx_3 + 0x38)
*(arg1 + 0x190) = *(rcx_3 + 0x60)
sub_14101c2d0(&arg1[0x36], &arg1[0x3a])
void* r8 = arg1[0x38]
int32_t rdx_2 = arg1[0x3d].d
arg1[0x2e] = zx.q(*(r8 + 0x38) * rdx_2) + *(r8 + 0x40)
arg1[0x2f] = zx.q(*(r8 + 0x38) * rdx_2) + *(r8 + 0x48)
sub_141025490(&arg1[0xe], arg5, 1)
*(arg1 + 0x274) = arg4
arg1[0xa] = &arg1[0x26]
arg1[0xb] = &arg1[0xe]
arg1[0x4e].b = 0
int64_t var_b8 = 0x1688
int64_t var_ac = 1
int64_t var_a0 = 0
int32_t var_bc = 4
int32_t var_c0 = 0x57
int32_t var_b0 = 0
int32_t var_a4 = 0
int64_t* rax_7 = j_sub_140a82f30(0x18)
int64_t* rbx_3 = rax_7

if (rax_7 == 0)
    rbx_3 = nullptr
else
    void* rcx_12 = *arg1
    *rax_7 = rcx_12
    rax_7[1] = 0
    
    if (rcx_12 != 0)
        rbx_3[1] = *sub_141013ee0(rcx_12 + 0x1b0, &arg6, &rax_7[2])

arg1[4] = rbx_3
sub_141010dc0(*(*(*rbx_3 + 0x20) + 0x18), 0, &var_c0, rbx_3[1])
int64_t var_cc = 0
int32_t var_c4 = 0
int32_t var_d4 = 4
int32_t var_d8 = 0x57
int32_t var_d0 = 0
int64_t* rax_10 = j_sub_140a82f30(0x18)
int64_t* rbx_4 = rax_10

if (rax_10 == 0)
    rbx_4 = nullptr
else
    void* rcx_17 = *arg1
    *rax_10 = rcx_17
    rax_10[1] = 0
    void arg_8
    
    if (rcx_17 != 0)
        rbx_4[1] = *sub_141013ee0(rcx_17 + 0xb0, &arg_8, &rax_10[2])

arg1[5] = rbx_4
sub_141010dd8(*(*(*rbx_4 + 0x20) + 0x18), 0, &var_d8, rbx_4[1])
int32_t var_6c = 4
int32_t var_70 = 0x1c
int32_t var_68
__builtin_memset(&var_68, 0, 0x20)
int64_t* rax_13 = j_sub_140a82f30(0x18)
int64_t* rbx_5 = rax_13

if (rax_13 == 0)
    rbx_5 = nullptr
else
    void* rcx_22 = *arg1
    *rax_13 = rcx_22
    rax_13[1] = 0
    void arg_18
    
    if (rcx_22 != 0)
        rbx_5[1] = *sub_141013ee0(rcx_22 + 0x230, &arg_18, &rax_13[2])

arg1[6] = rbx_5
sub_141010dcc(*(*(*rbx_5 + 0x20) + 0x18), 0, 0, &var_70, rbx_5[1])
int32_t var_ec = 0x7f7fffff
int32_t var_f8 = 0x1010102
int64_t var_f4 = 0
int64_t var_e8 = 0
char var_e0 = 0
void*** result = sub_141048e20(r12, &var_f8)
void*** result_1 = result

if (result != 0)
    result[1].d += 1

int64_t* r14_1 = arg1[7]
arg1[7] = result_1

if (result_1 != 0)
    result[1].d += 1

if (r14_1 != 0)
    result = zx.q(r14_1[1].d)
    r14_1[1].d -= 1
    
    if (result.d == 1)
        char rax_16
        
        if (r14_1[2].b == 0 && data_143f0f1d0 == 0)
            rax_16 = sub_1405949a0()
        
        if (r14_1[2].b != 0 || (data_143f0f1d0 == 0 && rax_16 != 0))
            result = (**r14_1)(r14_1, 1)
        else
            result = nullptr
            bool z_1
            
            if (0 == *(r14_1 + 0xc))
                *(r14_1 + 0xc) = 1
                z_1 = true
            else
                result = zx.q(*(r14_1 + 0xc))
                z_1 = false
            
            if (z_1)
                int32_t rax_17 = sub_140a20af0()
                uint64_t rdx_8 = zx.q(rax_17)
                void* const rax_18
                
                if (rax_17 != 0)
                    rax_18 =
                        *((rdx_8 u>> 0xe << 3) + &data_143cf0bf8) + (zx.q(rdx_8.d) & 0x3fff) * 0x18
                else
                    rax_18 = nullptr
                
                *(rax_18 + 8) = r14_1
                result = sub_1405a42f0(&data_143f02390, rdx_8.d)

if (result_1 != 0)
    result_1[1].d -= 1
    
    if (result_1[1].d == 1)
        if (result_1[2].b != 0)
            return (**result_1)(result_1, 1)
        
        if (data_143f0f1d0 == 0 && sub_1405949a0() != 0)
            return (**result_1)(result_1, 1)
        
        result = nullptr
        bool z_2
        
        if (0 == *(result_1 + 0xc))
            *(result_1 + 0xc) = 1
            z_2 = true
        else
            result = zx.q(*(result_1 + 0xc))
            z_2 = false
        
        if (z_2)
            int32_t rax_24 = sub_140a20af0()
            
            if (rax_24 != 0)
                rdi = *((zx.q(rax_24) u>> 0xe << 3) + &data_143cf0bf8)
                    + (zx.q(rax_24) & 0x3fff) * 0x18
            
            *(rdi + 8) = result_1
            return sub_1405a42f0(&data_143f02390, rax_24)

return result
