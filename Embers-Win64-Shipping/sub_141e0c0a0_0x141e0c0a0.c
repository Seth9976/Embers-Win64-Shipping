// 函数: sub_141e0c0a0
// 地址: 0x141e0c0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
int64_t* r10 = arg2[1]
int32_t* rcx = *r10

if (&rcx[1] u<= r10[1])
    arg1[0xd].d = *rcx
    int64_t* rax_2 = arg2[1]
    *rax_2 += 4
else if ((*(arg2 + 0x29) & 0x20) != 0)
    sub_140b54070(arg2, &arg1[0xd], arg5)
else
    (*(*arg2 + 0x150))(arg2, &arg1[0xd], 4)

sub_141a34780(arg2, arg1, arg5)
int512_t zmm1 = sub_141df3140(arg2, &arg1[2], arg5)
int64_t* rcx_4 = arg2[1]
arg_8 = arg1[7].d
int32_t* rdx_3 = *rcx_4

if (&rdx_3[1] u> rcx_4[1])
    int32_t* rdx_4 = &arg_8
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_4, zmm1)
    else
        (*(*arg2 + 0x150))(arg2, rdx_4, 4)
else
    arg_8 = *rdx_3
    *rcx_4 += 4

uint64_t result = zx.q(arg2[5].b)
int64_t* var_148
uint64_t var_138
uint64_t var_128
uint64_t var_118
uint64_t var_108
void** var_e8
char var_bf
int32_t arg_10
uint64_t rcx_76
int64_t rbx

if ((result.b & 1) != 0)
    rbx.b = 0
    
    if (arg3 == 0)
        int32_t rax_8
        rax_8, zmm1 = sub_140b4e7c0(arg2, &data_1439a94d8)
        
        if (rax_8 s>= 0x1a)
            int64_t* rcx_7 = arg2[1]
            int64_t rdx_5 = *rcx_7
            bool cond:2_1
            
            if (rdx_5 + 4 u> rcx_7[1])
                var_148.d = 0
                (*(*arg2 + 0x150))(arg2, &var_148, 4)
                cond:2_1 = var_148.d != 0
            else
                cond:2_1 = *rdx_5 != 0
                *rcx_7 = rdx_5 + 4
            
            rbx.b = cond:2_1
    
    var_138 = 0
    int32_t var_130_1 = 0
    char var_158
    int32_t var_150
    void* rsi_1
    
    if (rbx.b == 0)
        int32_t rcx_20 = arg_8
        rsi_1 = &arg1[4]
        int32_t rdx_9 = 0
        *(rsi_1 + 0x18) = 0
        
        if (*(rsi_1 + 0x1c) != rcx_20)
            sub_141e0bdd0(rsi_1, rcx_20)
            rdx_9 = arg1[7].d
            rcx_20 = arg_8
        
        int32_t rax_17 = rdx_9 + rcx_20
        *(rsi_1 + 0x18) = rax_17
        
        if (rax_17 s> *(rsi_1 + 0x1c))
            sub_141e0bc80(rsi_1)
            rcx_20 = arg_8
        
        (*(*arg2 + 0x150))(arg2, *rsi_1, sx.q(rcx_20))
    else
        var_150 = 1
        var_158 = 0
        int64_t var_f8_1 = 0
        int32_t var_f0_1 = 0
        char var_ec_1 = 0
        var_108 = 0
        int32_t var_100_1 = 0xffffffff
        sub_140bcfa90(&var_108, arg2, arg4, zmm1, 0xff, 0)
        sub_140bc78b0(&var_108)
        int32_t rax_12 = sub_140bc7f20(&var_108)
        int64_t* rax_13 = sub_140bd19b0(&var_108)
        arg1[7].d = rax_12
        rsi_1 = &arg1[4]
        *(rsi_1 + 0x1c) = rax_12
        void* rbx_2 = rax_13[2]
        int64_t r13_1 = rax_13[1]
        int64_t* rax_14 = sub_140bc8810(rax_13)
        int64_t* rcx_14 = *(rsi_1 + 0x10)
        var_148 = rax_14
        
        if (rcx_14 != 0)
        label_141e0c2ab:
            (**rcx_14)(rcx_14, 1)
        label_141e0c2ad:
            int64_t* rcx_16 = *(rsi_1 + 8)
            
            if (rcx_16 != 0)
                (**rcx_16)(rcx_16, 1)
            
            __builtin_memset(rsi_1, 0, 0x18)
            rax_14 = var_148
        else
            if (*(rsi_1 + 8) != rcx_14)
                if (rcx_14 == 0)
                    goto label_141e0c2ad
                
                goto label_141e0c2ab
            
            int64_t rcx_15 = *rsi_1
            
            if (rcx_15 != 0)
                sub_140a74f90(rcx_15)
                __builtin_memset(rsi_1, 0, 0x18)
                rax_14 = var_148
        
        if (r13_1 != 0 || rbx_2 != 0)
            *(rsi_1 + 8) = r13_1
            *(rsi_1 + 0x10) = rbx_2
            rax_14 = *(rbx_2 + 8)
        
        *rsi_1 = rax_14
        __builtin_memset(rax_13, 0, 0x18)
        sub_140bc04a0(rax_13)
        j_sub_140a74f90(rax_13)
        zmm1 = sub_140bc0410(&var_108)
    
    var_128 = 0
    int64_t var_120_1
    __builtin_memset(&var_120_1, 0, 0x18)
    int512_t zmm1_2 = sub_140a1d9d0(arg2, &var_128, sub_140a1d9d0(arg2, &var_118, zmm1))
    int64_t* rcx_26 = arg2[1]
    int32_t* rdx_14 = *rcx_26
    
    if (&rdx_14[1] u> rcx_26[1])
        int32_t* rdx_15 = &arg_10
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_15, zmm1_2)
        else
            (*(*arg2 + 0x150))(arg2, rdx_15, 4)
    else
        arg_10 = *rdx_14
        *rcx_26 += 4
    
    int32_t rcx_29 = arg_10
    int32_t rdx_16 = 0
    arg1[9].d = 0
    
    if (*(arg1 + 0x4c) != rcx_29)
        sub_1405c5510(&arg1[8], rcx_29)
        rdx_16 = arg1[9].d
        rcx_29 = arg_10
    
    int32_t rax_22 = rdx_16 + rcx_29
    arg1[9].d = rax_22
    
    if (rax_22 s> *(arg1 + 0x4c))
        sub_1405daba0(&arg1[8])
        rcx_29 = arg_10
    
    (*(*arg2 + 0x150))(arg2, arg1[8], sx.q(rcx_29))
    arg1[0xb] = sub_141dea200(arg6, &var_118)
    int64_t* rcx_33 = *(arg7 + 0x28)
    result = (*(*rcx_33 + 0x260))(rcx_33, &var_128)
    int64_t* rcx_34 = arg1[0xb]
    arg1[0xc] = result
    
    if (rcx_34 != 0)
        int64_t* rax_28 = (*(*rcx_34 + 0x270))(rcx_34, &var_148)
        
        if (&arg1[0xa] != rax_28)
            int64_t* rcx_35 = arg1[0xa]
            arg1[0xa] = *rax_28
            *rax_28 = 0
            
            if (rcx_35 != 0)
                (**rcx_35)(rcx_35, 1)
        
        int64_t* rcx_36 = var_148
        
        if (rcx_36 != 0)
            (**rcx_36)(rcx_36, 1)
        
        int64_t* rcx_37 = arg1[0xa]
        (*(*rcx_37 + 8))(rcx_37, arg2)
        int64_t* rcx_38 = arg1[0xa]
        var_148 = *rsi_1
        int32_t var_140_1 = *(rsi_1 + 0x18)
        int128_t zmm0_1 = var_148.o
        var_108.o = zmm0_1
        result = (*(*rcx_38 + 0x10))(zmm0_1, &var_108)
        
        if (var_130_1 != 0)
            memset(&var_e8, 0, 0x90)
            sub_140b4c2a0(&var_e8)
            int64_t var_58_1 = 0
            var_e8 = &data_142d6b230
            int64_t* var_50_1 = &var_138
            int64_t var_48_1 = 0x7fffffffffffffff
            sub_140b55290(&var_e8, 1)
            var_e8[0x1b](&var_e8, 1)
            int64_t rdx_25 = arg1[0xa]
            int64_t* rcx_44 = arg1[0xb]
            char var_bf_1 = var_bf ^ ((*(arg2 + 0x29) ^ var_bf) & 0x20)
            var_148 = *rsi_1
            int128_t zmm0_2 = var_148.o
            var_108.o = zmm0_2
            (*(*rcx_44 + 0x278))(zmm0_2, rdx_25, &var_108, &var_e8, var_158, var_150, var_148, 
                *(rsi_1 + 0x18))
            result = sub_140b4cb40(&var_e8)
    
    uint64_t rcx_46 = var_128
    
    if (rcx_46 != 0)
        result = sub_140a74f90(rcx_46)
    
    uint64_t rcx_47 = var_118
    
    if (rcx_47 != 0)
        result = sub_140a74f90(rcx_47)
    
    rcx_76 = var_138
label_141e0c91f:
    
    if (rcx_76 != 0)
        return sub_140a74f90(rcx_76)
else if ((result.b & 2) != 0 || *(arg2 + 0x2a) s< 0)
    var_128 = 0
    int32_t var_120_2 = 0
    
    if (arg3 != 0 || arg2[0xe] == 0)
        rbx.b = 0
    else
        rbx.b = 1
    
    if (arg1[0xb] != 0)
        var_148 = nullptr
        memset(&var_e8, 0, 0x90)
        sub_140b4c2a0(&var_e8)
        int64_t var_58_2 = 0
        var_e8 = &data_142d6ad48
        uint64_t* var_50_2 = &var_128
        int64_t var_48_2 = 0
        sub_140b552b0(&var_e8, 1)
        int64_t rdx_27
        rdx_27.b = 1
        var_e8[0x1b](&var_e8, rdx_27)
        int64_t rdx_28 = arg1[0xa]
        int64_t* rcx_53 = arg1[0xb]
        char var_bf_2 = var_bf ^ ((*(arg2 + 0x29) ^ var_bf) & 0x20)
        var_138 = arg1[4]
        int64_t var_130
        var_130.d = arg1[7].d
        int128_t zmm0_3 = var_138.o
        var_138.o = zmm0_3
        (*(*rcx_53 + 0x280))(zmm0_3, rdx_28, &var_138, &var_e8)
        zmm1 = sub_140b4cb40(&var_e8)
    
    if (arg8 == 0 || arg_8 == 0 || rbx.b == 0)
        rbx.b = 0
    else
        int64_t* rcx_55 = arg2[0xe]
        
        if ((*(*rcx_55 + 0xd8))(rcx_55, 0x13) == 0)
            rbx.b = 0
        else
            int64_t* rcx_56 = arg2[0xe]
            
            if ((*(*rcx_56 + 0xd8))(rcx_56, 0x15) == 0)
                rbx.b = 0
            else
                rbx.b = 1
    
    int64_t r15
    r15.b = 0
    
    if (arg3 == 0)
        (*(*arg2 + 0x1d8))(arg2, &data_1439a94d8)
        int32_t rax_50
        rax_50, zmm1 = sub_140b4e7c0(arg2, &data_1439a94d8)
        
        if (rax_50 s>= 0x1a)
            r15.b = 1
        else
            rbx.b = 0
    
    int64_t rdx_29 = sx.q(var_120_2)
    int64_t r9_2 = (*(*arg2 + 8))(arg2, rdx_29, rdx_29)
    
    if (r15.b != 0)
        int64_t* rcx_60 = arg2[1]
        int64_t rdx_30 = *rcx_60
        bool cond:5_1
        
        if (rdx_30 + 4 u> rcx_60[1])
            int32_t rax_54
            rax_54.b = rbx.b != 0
            var_148.d = rax_54
            r9_2 = (*(*arg2 + 0x150))(arg2, &var_148, 4)
            cond:5_1 = var_148.d != 0
        else
            cond:5_1 = *rdx_30 != 0
            *rcx_60 = rdx_30 + 4
        
        rbx.b = cond:5_1
    
    if (rbx.b == 0)
        (*(*arg2 + 0x150))(arg2, var_128, sx.q(var_120_2))
    else
        zmm1 = sub_140af98a0("Unknown", 0x269, 
            Can't save animation as bulk data in non-editor builds!", r9_2)
        sub_140afbb40()
    
    int64_t* rcx_63 = arg1[0xb]
    int64_t* rcx_64
    int32_t r15_1
    
    if (rcx_63 == 0)
        var_138 = 0
        rcx_64 = &var_138
        int64_t var_130_2 = 0
        r15_1 = 2
    else
        rcx_64 = (*(*rcx_63 + 0x268))(rcx_63, &var_148)
        r15_1 = 1
    
    var_118 = *rcx_64
    *rcx_64 = 0
    int64_t var_110
    var_110.d = rcx_64[1].d
    var_110:4.d = *(rcx_64 + 0xc)
    rcx_64[1] = 0
    
    if ((r15_1.b & 2) != 0)
        uint64_t rcx_65 = var_138
        r15_1 &= 0xfffffffd
        
        if (rcx_65 != 0)
            zmm1 = sub_140a74f90(rcx_65)
    
    if ((r15_1.b & 1) != 0)
        int64_t* rcx_66 = var_148
        
        if (rcx_66 != 0)
            zmm1 = sub_140a74f90(rcx_66)
    
    sub_140a1d9d0(arg2, &var_118, zmm1)
    int512_t zmm1_4 = sub_140a1d9d0(arg2, &var_108, sub_140d21e10(arg1[0xc], &var_108, 0))
    int64_t* rcx_70 = arg2[1]
    arg_10 = arg1[9].d
    int32_t* rdx_37 = *rcx_70
    
    if (&rdx_37[1] u> rcx_70[1])
        int32_t* rdx_38 = &arg_10
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_38, zmm1_4)
        else
            (*(*arg2 + 0x150))(arg2, rdx_38, 4)
    else
        arg_10 = *rdx_37
        *rcx_70 += 4
    
    result = (*(*arg2 + 0x150))(arg2, arg1[8], sx.q(arg_10))
    
    if (arg1[0xb] != 0)
        int64_t* rcx_73 = arg1[0xa]
        result = (*(*rcx_73 + 8))(rcx_73, arg2)
    
    uint64_t rcx_74 = var_108
    
    if (rcx_74 != 0)
        result = sub_140a74f90(rcx_74)
    
    uint64_t rcx_75 = var_118
    
    if (rcx_75 != 0)
        result = sub_140a74f90(rcx_75)
    
    rcx_76 = var_128
    goto label_141e0c91f
return result
