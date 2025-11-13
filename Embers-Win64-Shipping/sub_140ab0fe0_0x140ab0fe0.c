// 函数: sub_140ab0fe0
// 地址: 0x140ab0fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
int64_t var_68
sub_140b1a9d0(&var_68)
int64_t* i = *arg2

for (void* rbx_3 = &i[sx.q(arg2[1].d) * 2]; i != rbx_3; i = &i[2])
    int64_t var_58
    int64_t* rax_1 = sub_140b18720(&var_58, i, 1)
    int64_t rcx_2 = *rax_1
    int32_t rdx_1 = rax_1[1].d
    int32_t rdx_2 = neg.d(rdx_1)
    *rax_1 = 0
    int32_t r8_2 = rax_1[1].d
    int64_t var_98 = rcx_2
    int32_t rcx_3 = *(rax_1 + 0xc)
    int32_t rdx_5 = sbb.d(rdx_2, rdx_2, rdx_1 != 0) + 8 + r8_2
    rax_1[1] = 0
    
    if (rdx_5 s> rcx_3)
        sub_1405947f0(&var_98, rdx_5)
    
    sub_140a20ba0(&var_98, u".locres", 7)
    int64_t rcx_6 = var_58
    int64_t var_88 = var_98
    int32_t var_80_1 = r8_2
    int32_t var_7c_1 = rcx_3
    int32_t var_90_1
    var_90_1.q = 0
    var_98 = 0
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    sub_140a464c0()
    int64_t* var_40_1 = &var_68
    int64_t* var_38_1 = &var_88
    int64_t* var_48
    int64_t** var_70_1 = &var_48
    var_48 = arg1
    int64_t (* var_78)(int64_t* arg1, int64_t* arg2, char* arg3) = sub_140aa38d0
    int16_t* const rdx_6
    
    if (i[1].d == 0)
        rdx_6 = &data_142d40450
    else
        rdx_6 = *i
    
    (*(data_14399ea08 + 0x88))(&data_14399ea08, rdx_6, &var_78)
    int64_t rcx_7 = var_88
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)

char* rax_6 = sub_140a752e0()
int32_t r15 = arg1[1].d

if (r15 != 0)
    int32_t i_1 = 0
    int32_t arg_8 = 0
    int64_t r13
    r13.b = sub_140a80e60(rax_6, *arg1) != 0
    int32_t rcx_15
    
    do
        int64_t i_3 = sx.q(i_1)
        
        for (i_1 += 1; i_1 s< r15; i_1 += 1)
            int32_t rcx_10
            rcx_10.b = sub_140a80e60(rax_6, (sx.q(i_1) << 4) + *arg1) != 0
            
            if (zx.d(r13.b) != rcx_10)
                break
        
        int32_t i_4 = i_1 - i_3.d
        
        if (r13.b == 0)
            int64_t* rsi_2 = (i_3 << 4) + *arg1
            
            if (i_4 != 0)
                int32_t i_2
                
                do
                    int64_t rcx_14 = *rsi_2
                    
                    if (rcx_14 != 0)
                        sub_140a74f90(rcx_14)
                    
                    rsi_2 = &rsi_2[2]
                    i_2 = i_4
                    i_4 -= 1
                while (i_2 != 1)
            
            rcx_15 = arg_8
        else
            int64_t rcx_11 = sx.q(arg_8)
            
            if (rcx_11.d != i_3.d)
                memmove((rcx_11 << 4) + *arg1, (i_3 << 4) + *arg1, i_4 << 4)
                rcx_11 = zx.q(arg_8)
            
            rcx_15 = rcx_11.d + i_4
            arg_8 = rcx_15
        
        r13.b ^= 1
    while (i_1 s< r15)
    
    arg1[1].d = rcx_15

int64_t rcx_16 = var_68

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

return arg1
