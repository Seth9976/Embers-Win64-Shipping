// 函数: sub_1422d31a0
// 地址: 0x1422d31a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r11 = arg8
char* rbx = arg6
void* r13 = arg1
*arg7 = 0
*r11 = 0
*rbx = 0

if (*(arg1 + 0x30) == 0)
    return 

sub_1422d34a0(r13, arg2, &arg2[4], arg4, arg3, *arg2, arg4, *(*(arg1 + 0x60) + 0x58), rbx, arg7, 
    r11)
*(arg5 + 0x4a) = *rbx
uint64_t rax = *(r13 + 0x58)

if (rax == 0)
    return 

rax = zx.q(*(rax + 8))
int64_t rbx_1 = arg5[0xa]
int32_t i = 0
arg7.d = rax.d

if (rax.d == 0)
    return 

do
    int32_t rsi_1 = arg5[0x10].d
    uint64_t rax_3 = zx.q(i.w)
    void** r14_3 = zx.q(*(**(r13 + 0x58) + rax_3 * 0x18)) * 0x30 + *(r13 + 0x28)
    void* r13_1 = *r14_3
    int64_t* rax_7 = *(*(r13_1 + 0x78) + 0xb8)
    int64_t var_d8 = *arg5
    int64_t var_d0_1 = arg5[1]
    int64_t var_c8_1 = arg5[2]
    int64_t var_c0_1 = arg5[3]
    int64_t var_b8_1 = arg5[4]
    int64_t var_b0_1 = arg5[5]
    int64_t var_a8_1 = arg5[6]
    int64_t var_a0_1 = arg5[7]
    int64_t var_98_1 = arg5[8]
    char var_90_1 = arg5[9].b
    char var_8f_1 = *(arg5 + 0x49)
    char rax_19 = *(arg5 + 0x4a)
    char var_8d_1 = *(arg5 + 0x4b)
    char var_8c_1 = *(arg5 + 0x4c)
    char var_8b_1 = *(arg5 + 0x4d)
    char var_8a_1 = *(arg5 + 0x4e)
    char var_89_1 = *(arg5 + 0x4f)
    int64_t var_88_1 = arg5[0xa]
    int64_t var_80_1 = arg5[0xb]
    int64_t var_78_1 = arg5[0xc]
    int64_t var_70_1 = arg5[0xd]
    int16_t rax_29 = arg5[0xe].w
    uint64_t var_60 = 0
    int64_t r12_1 = arg5[0xf]
    int16_t var_68_1 = rax_29
    int32_t var_58_1 = rsi_1
    
    if (rsi_1 != 0)
        sub_1405a4c70(&var_60, rsi_1, 0)
        memcpy(var_60, r12_1, rsi_1 * 2)
    else
        int32_t var_54_1 = 0
    
    int64_t var_48
    int64_t* rax_30 = sub_140b63b70(&r14_3[1], &var_48)
    
    if (&var_60 != rax_30)
        uint64_t rcx_6 = var_60
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        var_60 = *rax_30
        *rax_30 = 0
        int32_t var_58_2 = rax_30[1].d
        int32_t var_54_2 = *(rax_30 + 0xc)
        rax_30[1] = 0
    
    int64_t rcx_8 = var_48
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    int64_t var_a0_2 = *(r13_1 + 0x78)
    int16_t var_68_2 = rax_3.w
    char var_8f_2 = 0
    char var_8d_2 = 0
    int64_t var_a8_2 = sx.q(*(r14_3 + 0x14)) + rbx_1
    (*(*rax_7 + 0x80))(rax_7, &var_d8)
    char rax_36 = var_8f_2
    
    if (rax_36 != 0 && r14_3[5].d != 0xffffffff)
        sub_1422cc6a0(arg2, arg5, r13_1, (r14_3[2].d).b)
        rax_36 = var_8f_2
    
    *(arg5 + 0x49) |= rax_36
    *(arg5 + 0x4b) |= var_8d_2
    *(arg5 + 0x4a) |= rax_19
    uint64_t rcx_11 = var_60
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    r13 = arg1
    i += 1
while (i s< arg7.d)
