// 函数: sub_141e7d090
// 地址: 0x141e7d090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x48)
void* rax = sub_141e7ac60(arg1, arg3)

if (rax != 0)
    sub_141e89970(arg1, rax)
    bool z_1
    
    if (0 == *(rax + 0x44))
        *(rax + 0x44) = 0
        z_1 = true
    else
        *(rax + 0x44)
        z_1 = false
    
    if (z_1)
        if (arg4 == 0)
            goto label_141e7d13d
        
        int64_t* rcx_3 = *(rax + 0x50)
        
        if (rcx_3 != 0)
            int512_t zmm1
            zmm1.o = zx.o(0)
            (*(*rcx_3 + 0x10))(rcx_3, zmm1)
            int64_t* rcx_4 = *(rax + 0x50)
            
            if (rcx_4 != 0)
                *(rax + 0x50) = 0
                (**rcx_4)(rcx_4, 1)
    
    *(rax + 0x48) += 1
    *arg2 = *(rax + 0x18)
    arg2[1].d = *(rax + 0x28)
    goto label_141e7d143

int128_t* rax_6 = sub_141e80110(arg1, arg3)

if (rax_6 != 0)
    void** const var_48_1 = &data_142d42d18
    char var_90_1 = arg5
    int64_t (* var_68)() = sub_140594850
    int64_t var_58_1 = 0
    sub_141e80e00(arg1, rax_6, arg3, &var_68, 0xff)
    
    if (arg4 == 0)
        if (arg5 != 0 && (*(arg1 + 0x80) != 0 || data_143f39bc0 != 0))
            int32_t rax_11 = sub_1423660c0(*arg3)
            int64_t rcx_10 = arg3[1]
            int32_t var_80_1 = arg3[2].d
            int32_t var_7c_1 = rax_11
            int64_t* rax_12 = j_sub_140a82f30(0x20)
            
            if (rax_12 != 0)
                *rax_12 = 0
                *(rax_12 + 8) = rcx_10.o
                rax_12[3].d = 0.d
                int64_t** rcx_13 = *(arg1 + 0x70)
                *(arg1 + 0x70) = rax_12
                *rcx_13 = rax_12
        
        *arg2 = 0
        arg2[1].d = 0
    else
        int64_t* rcx_7 = rax_6[5].q
        
        if (rcx_7 != 0)
            int512_t zmm1_1
            zmm1_1.o = zx.o(0)
            (*(*rcx_7 + 0x10))(rcx_7, zmm1_1)
            int64_t* rcx_8 = rax_6[5].q
            
            if (rcx_8 != 0)
                rax_6[5].q = 0
                (**rcx_8)(rcx_8, 1)
        
        *(rax_6 + 0x48) += 1
        *arg2 = *(rax_6 + 0x18)
        arg2[1].d = *(rax_6 + 0x28)
    
    if (arg1 != -0x48)
        LeaveCriticalSection(arg1 + 0x48)
else
label_141e7d13d:
    *arg2 = 0
    arg2[1].d = 0
label_141e7d143:
    
    if (arg1 != -0x48)
        LeaveCriticalSection(arg1 + 0x48)

return arg2
