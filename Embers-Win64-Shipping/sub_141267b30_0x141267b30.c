// 函数: sub_141267b30
// 地址: 0x141267b30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t* var_e0 = arg12
arg1[0x73] = arg9 + arg11 + arg12[1].d
*(arg1 + 0x30) = arg6
*(arg1 + 0x38) = arg13
*(arg1 + 0x40) = arg7
*(arg1 + 0x48) = arg8
*(arg1 + 0x10) = arg3
int32_t rax_9
rax_9.b = *(arg2 + 8) s>= 3
arg1[6] = rax_9
arg1[7] = (*U"1111")[sx.q(*(arg2 + 8))]
arg1[8] = arg4
int32_t rdx = *(arg3 + 0x1548)
int32_t var_d0 = rdx
arg1[9].b = sub_1411a4ac0(data_143f0f1a0, rdx)
*(arg1 + 0x25) = sub_141421520(*(arg3 + 0x1548))
*(arg1 + 0x26) = *(arg3 + 0xd34)
*(arg1 + 0x27) = *(arg3 + 0xd77)
arg1[0xa] = arg5
arg1[0xb] = *(arg2 + 0xf70)
arg1[0x15] = arg9
arg1[0x16] = arg11
int32_t rax_22

if (arg4 == 0x12)
    rax_22 = 1
else if (((&data_143e8e980)[sx.q(arg1[8]) + zx.q(arg1[6]) * 0x12].b & 2) == 0)
    rax_22 = 1
else
    rax_22 = 2
    
    if (sub_1422eb5d0(arg3) == 0)
        rax_22 = 1

arg1[0x14] = rax_22
arg1[0x4a] = 4
arg1[0x4b] = zx.d(*(arg3 + 0xdbc))
*(arg1 + 0x130) = *(arg3 + 0xdb0)
arg1[0x4e] = *(arg3 + 0xdb8)
*(arg1 + 0x13c) = *(arg3 + 0x60c)
arg1[0x51] = *(arg3 + 0x614)
*(arg1 + 0x150) = *(arg3 + 0x340)
*(arg1 + 0x160) = *(arg3 + 0x350)
*(arg1 + 0x170) = *(arg3 + 0x360)
int128_t zmm1 = *(arg3 + 0x370)
*(arg1 + 0x190) = arg2 + 0xde8
*(arg1 + 0x180) = zmm1

if (arg4 == 8)
    arg1[0x4a] = 0
else if (arg4 == 9)
    arg1[0x4a] = 1
else if (arg4 == 0xa)
    arg1[0x4a] = 2
else if (arg4 == 0xb)
    arg1[0x4a] = 3
else if (arg4 == 0x10)
    arg1[0x4a] = 0

int64_t rcx_5 = *(arg1 + 0x60)
int64_t* rdx_2 = var_e0
*(arg1 + 0x60) = *rdx_2
*rdx_2 = rcx_5
int64_t rcx_6 = *(arg1 + 0x68)
*(arg1 + 0x68) = rdx_2[1]
rdx_2[1] = rcx_6
int64_t rcx_7 = *(arg1 + 0x80)
*(arg1 + 0x80) = *arg10
*arg10 = rcx_7
int64_t* result = arg10[1]
int64_t rcx_8 = *(arg1 + 0x88)
*(arg1 + 0x88) = result
arg10[1] = rcx_8

if (arg1[6] == 0 && arg1[8] == 1)
    int64_t rcx_9 = *(arg1 + 0x70)
    *(arg1 + 0x70) = *arg14
    *arg14 = rcx_9
    result = arg14[1]
    int64_t rcx_10 = *(arg1 + 0x78)
    *(arg1 + 0x78) = result
    arg14[1] = rcx_10

int32_t rcx_11 = arg1[0x73]

if (rcx_11 s> 0)
    arg1[0x72].b = 0
    int32_t rax_34 = (arg1[0x14] * rcx_11) << 2
    arg1[0x44] = rax_34
    int64_t rax_35 = sub_140a82f30(sx.q(rax_34), 0)
    int32_t r8 = arg1[0x44]
    *(arg1 + 0x108) = rax_35
    void var_b8
    int32_t* rax_36 = sub_14125eb50(&data_1439b6580, &var_b8, r8)
    *arg1 = *rax_36
    arg1[1] = rax_36[1]
    sub_1405d1600(&arg1[2], &rax_36[2])
    void var_b0
    sub_1405d1550(&var_b0)
    int32_t rdx_7 = arg1[0x73]
    
    if (rdx_7 s> arg1[0x1b])
        sub_141105150(&arg1[0x18], rdx_7)
        rdx_7 = arg1[0x73]
    
    if (rdx_7 s> arg1[0x49])
        sub_141105150(&arg1[0x46], rdx_7)
    
    if (sub_140b011d0() == 0 || *(data_143e8ea60 + 4) s<= 0 || data_143db7aa8 == 0)
        int64_t* var_c8 = &arg1[4]
        sub_14125eea0(&var_c8)
        int64_t* var_c0 = &arg1[4]
        result = sub_14125ed90(&var_c0)
    else
        void* var_58_1 = nullptr
        int32_t var_50_1 = 0
        int32_t var_4c_1 = 4
        void var_a8
        void** rax_39 = sub_1412672a0(&var_a8, nullptr, data_14399e5dc)
        *(*rax_39 + 0x10) = &arg1[4]
        void* rcx_20 = *rax_39
        int32_t r8_2 = rax_39[2].d
        int64_t* rdx_8 = rax_39[1]
        void* rbx_1 = *(rcx_20 + 0x20)
        
        if (rbx_1 != 0)
            *(rbx_1 + 0x48) += 1
        
        sub_14129a2b0(rcx_20, rdx_8, r8_2, 1)
        int64_t rsi_1 = sx.q(var_50_1)
        int32_t i_2 = (rsi_1 + 1).d
        void var_78
        
        if (i_2 s> var_4c_1)
            sub_14083a490(&var_78, rsi_1.d)
        
        void* rcx_22 = &var_78
        
        if (var_58_1 != 0)
            rcx_22 = var_58_1
        
        *(rcx_22 + (rsi_1 << 3)) = rbx_1
        void var_90
        void** rax_41 = sub_141267120(&var_90, &var_78, data_14399e5dc)
        *(*rax_41 + 0x10) = &arg1[4]
        void* rcx_25 = *rax_41
        int32_t r8_4 = rax_41[2].d
        int64_t* rdx_11 = rax_41[1]
        int64_t* rbx_2 = *(rcx_25 + 0x20)
        var_e0 = rbx_2
        
        if (rbx_2 != 0)
            rbx_2[9].d += 1
        
        sub_14129a050(rcx_25, rdx_11, r8_4, 1)
        result = &var_e0
        
        if (&arg1[0x6c] != &var_e0)
            int64_t* rcx_26 = *(arg1 + 0x1b0)
            *(arg1 + 0x1b0) = rbx_2
            
            if (rcx_26 != 0)
                result = zx.q(rcx_26[9].d)
                rcx_26[9].d -= 1
                
                if (result.d == 1)
                    result = sub_140a2f6e0(rcx_26)
        else if (rbx_2 != 0)
            result = zx.q(rbx_2[9].d)
            rbx_2[9].d -= 1
            
            if (result.d == 1)
                result = sub_140a2f6e0(var_e0)
        
        void* rcx_28 = var_58_1
        void* rbx_3 = &var_78
        int32_t i_1 = i_2
        
        if (rcx_28 != 0)
            rbx_3 = rcx_28
        
        if (i_1 != 0)
            int32_t i
            
            do
                int64_t* rcx_27 = *rbx_3
                
                if (rcx_27 != 0)
                    result = zx.q(rcx_27[9].d)
                    rcx_27[9].d -= 1
                    
                    if (result.d == 1)
                        result = sub_140a2f6e0(rcx_27)
                
                rbx_3 += 8
                i = i_1
                i_1 -= 1
            while (i != 1)
            rcx_28 = var_58_1
        
        if (rcx_28 != 0)
            result = sub_140a74f90(rcx_28)

__security_check_cookie(rax_1 ^ &var_108)
return result
