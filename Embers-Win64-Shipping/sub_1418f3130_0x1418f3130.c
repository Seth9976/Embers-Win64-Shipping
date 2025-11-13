// 函数: sub_1418f3130
// 地址: 0x1418f3130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int32_t r14 = arg7
*arg1 = &data_142ff18d8
sub_1418f20e0(&arg1[1], arg2, arg3, arg4, arg5, arg6, r14, arg8, arg9, arg10, arg11, arg12)
__builtin_memset(&arg1[0x10], 0, 0x14)
uint32_t rax_7
rax_7.b = arg3 - 4 u<= 2
arg1[0x13] = 0
arg1[0x14] = 0
int32_t r8 = *(arg1 + 0x24)
char var_d8 = rax_7.b

if (r8 == 0)
    int64_t r8_1 = sx.q(arg4)
    arg1[4].d = (&data_1439c85fc)[r8_1 * 0xa]
    int32_t rax_9 = sub_1418f0050(r8_1.d, (arg11 u>> 4).b & 1)
    r8 = rax_9
    *(arg1 + 0x24) = rax_9
    rax_7 = zx.d(var_d8)

int32_t var_e8

if (arg3 != 0x7fffffff)
    int32_t rdx_2
    bool cond:1_1
    
    if (rax_7.b == 0)
        rdx_2 = r14
        cond:1_1 = r14 u<= 1
    else
        rdx_2 = arg8
        cond:1_1 = arg8 u<= 1
    
    if (cond:1_1)
        rdx_2 = 1
    
    int32_t rax_10 = 1
    int64_t rbx_1 = arg1[3]
    
    if (arg9 u>= 1)
        rax_10 = arg9
    
    var_e8.b = 0
    int64_t rax_11 = sub_141903390(arg2, rbx_1, arg3, arg1[0xf].d, *(arg1 + 0x34), r8, 0, rax_10, 
        0, rdx_2, var_e8.b, nullptr)
    arg1[0x11] = rbx_1
    arg1[0x10] = rax_11
    
    if (data_1439c7a08 s<= 1)
        int32_t rax_12 = (data_143efb4e0).d
        data_143efb4e0 += 1
        arg1[0x12].d = rax_12 + 1

if (arg1[0xf].d != *(arg1 + 0x7c))
    int64_t* rax_15 = j_sub_140a82f30(0x18)
    int64_t* rdi_1 = rax_15
    
    if (rax_15 == 0)
        rdi_1 = nullptr
    else
        __builtin_memset(rax_15, 0, 0x14)
    
    arg1[0x13] = rdi_1
    bool cond:4_1
    
    if (var_d8 == 0)
        cond:4_1 = r14 u<= 1
    else
        r14 = arg8
        cond:4_1 = arg8 u<= 1
    
    if (cond:4_1)
        r14 = 1
    
    int32_t rax_16 = 1
    int64_t rbx_2 = arg1[3]
    
    if (arg9 u>= 1)
        rax_16 = arg9
    
    var_e8.b = 0
    *rdi_1 = sub_141903390(arg2, rbx_2, arg1[0xc].d, *(arg1 + 0x7c), *(arg1 + 0x34), 
        *(arg1 + 0x24), 0, rax_16, 0, r14, var_e8.b, nullptr)
    rdi_1[1] = rbx_2
    
    if (data_1439c7a08 s<= 1)
        int32_t rax_18 = (data_143efb4e0).d
        data_143efb4e0 += 1
        rdi_1[2].d = rax_18 + 1
else
    arg1[0x13] = &arg1[0x10]

int64_t* rcx_8 = *arg12

if (rcx_8 != 0)
    void*** rax_26 = sub_1418ba820(arg2 + 0x3f0, (*(*rcx_8 + 0x10))(rcx_8), 1, 4)
    void* rcx_20 = rax_26[2]
    int64_t* rcx_21 = *arg12
    int64_t rdi_4 = zx.q(*(rcx_20 + 0x24)) + *(*(rcx_20 + 0x28) + 0x18)
    int64_t rdx_11 = *rcx_21
    uint32_t count = (*(rdx_11 + 0x10))(rcx_21, rdx_11)
    int64_t* rcx_22 = *arg12
    int64_t rdx_12 = *rcx_22
    memcpy(rdi_4, (*(rdx_12 + 8))(rcx_22, rdx_12), count)
    int64_t* rcx_24 = *arg12
    (*(*rcx_24 + 0x18))(rcx_24)
    int32_t rax_30
    
    if (arg3 != 6)
        rax_30 = 1
    
    if (arg3 == 6 || arg3 == 3)
        rax_30 = 6
    
    int32_t rdx_14 = arg1[5].d
    int32_t rcx_25 = *(arg1 + 0x2c)
    int32_t r15_1 = arg8 * rax_30
    bool cond:7_1 = data_143f01c92 == 0
    int32_t rax_31 = arg1[0xf].d
    int64_t var_88_1 = 0
    int32_t var_5c_1 = arg1[6].d
    int32_t var_74_1 = r15_1
    int32_t var_a0_1 = arg1[0xe].d
    int64_t var_70_1 = 0
    int32_t var_68_1 = 0
    int64_t var_90 = 0
    var_88_1.d = rdx_14
    var_88_1:4.d = rcx_25
    int64_t var_7c_1 = 0
    int32_t var_64_1 = rdx_14
    int64_t var_a8 = 1
    int32_t var_9c_1 = 0
    
    if (cond:7_1)
        int32_t var_118
        var_118.q = rax_26
        sub_1418fbce0(*(arg2 + 0x1a50), &arg1[1], &var_a8, &var_90)
    else
        void*** rcx_28 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        void* rax_34 = &rcx_28[0xe]
        
        if (rax_34 u> data_143f02bd0)
            sub_140b0e3d0(&data_143f02bc8, 0x78)
            rcx_28 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
            rax_34 = &rcx_28[0xe]
        
        data_143f02bac += 1
        data_143f02bc8 = rax_34
        *data_143f02ba0 = rcx_28
        data_143f02ba0 = &rcx_28[1]
        rcx_28[1] = 0
        *rcx_28 = &data_142ff1dd8
        rcx_28[2] = &arg1[1]
        *(rcx_28 + 0x18) = var_a8.o
        rcx_28[5].d = r15_1
        *(rcx_28 + 0x30) = var_90.o
        *(rcx_28 + 0x40) = rax_31.o
        *(rcx_28 + 0x50) = var_70_1.o
        rcx_28[0xc] = rcx_25.q
        rcx_28[0xd] = rax_26
else
    int32_t r14_1 = data_1439c7350
    char r12_1
    
    if (r14_1 != 0xffffffff)
        r12_1 = arg11.b & 5
    
    if (r14_1 == 0xffffffff || r12_1 != 0)
        sub_1418fbbb0(arg2, arg1[3], 0)
    else
        int32_t rdi_2 = arg1[0xf].d
        int64_t rbx_3 = arg1[3]
        char rax_20 = sub_140a80f40()
        int64_t var_c0 = rbx_3
        int32_t var_b8_1 = r14_1
        int32_t var_b4_1 = rdi_2
        
        if (rax_20 == 0 || data_143f01c92 == r12_1)
            sub_1418f4ed0(&var_c0, &data_143f02b98)
        else
            if (data_143f02ba8 == r12_1)
                void*** rcx_12 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                void* rax_21 = &rcx_12[4]
                
                if (rax_21 u> data_143f02bd0)
                    sub_140b0e3d0(&data_143f02bc8, 0x28)
                    rcx_12 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                    rax_21 = &rcx_12[4]
                
                data_143f02bac += 1
                int128_t zmm0_1 = var_c0.o
                data_143f02bc8 = rax_21
                *data_143f02ba0 = rcx_12
                data_143f02ba0 = &rcx_12[1]
                rcx_12[1] = 0
                *rcx_12 = &data_142ff3db0
                *(rcx_12 + 0x10) = zmm0_1
            else
                sub_1418f4ed0(&var_c0, &data_143f02b98)
            
            int64_t* var_b0
            sub_141980430(&data_143f02b98, &var_b0, 1)
            int64_t* rdx_7 = var_b0
            
            if (rdx_7 != 0)
                rdx_7[9].d -= 1
                
                if (rdx_7[9].d == 1)
                    sub_140a2f6e0(rdx_7)

__security_check_cookie(rax_1 ^ &var_138)
return arg1
