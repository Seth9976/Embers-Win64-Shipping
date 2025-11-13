// 函数: sub_1419cb2a0
// 地址: 0x1419cb2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = nullptr
int64_t rsi = sx.q(arg1)
int64_t* rbx = nullptr
int64_t* arg_20 = nullptr

if (rsi.d u> 0x1f)
    if (*(&data_143f025f0 + rsi * 0x14) != data_143f025b0)
        goto label_1419cb33e
    
    goto label_1419cb2ee

int64_t* var_78
int64_t* var_68

if (test_bit(0xc8451800, rsi.d) || *(&data_143f025f0 + rsi * 0x14) == data_143f025b0)
label_1419cb2ee:
    int64_t* rcx_1 = data_143f0f180
    var_78 = arg3
    (*(*rcx_1 + 0x88))(rcx_1, &var_68, zx.q(rsi.d), arg2, var_78)
    rbx = var_68
    arg_20 = rbx
    var_68 = nullptr
    sub_1405d1550(&var_68)
    
    if (rbx == 0)
        goto label_1419cb33e
    
label_1419cb51f:
    int64_t* result_1 = j_sub_140a82f30(0x130)
    
    if (result_1 != 0)
        __builtin_memset(result_1, 0, 0x28)
        SRWLOCK* SRWLock = &result_1[5]
        int64_t i_1 = 0x20
        int64_t i
        
        do
            InitializeSRWLock(SRWLock)
            SRWLock = &SRWLock[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
        InitializeSRWLock(&result_1[0x25])
        result = result_1
    
    sub_1405d16e0(result, rbx)
    int32_t rax_13 = (*(*rbx + 0x10))(rbx)
    int64_t rsi_3 = sx.q(result[4].d)
    int64_t r15_3 = sx.q(rax_13)
    int32_t rcx_22 = (rsi_3 + r15_3).d
    result[4].d = rcx_22
    
    if (rcx_22 s> *(result + 0x24))
        sub_1405a4d70(&result[3])
    
    memset(result[3] + (rsi_3 << 3), 0, r15_3 << 3)
    int32_t rax_16 = (*(*rbx + 0x18))(rbx)
    int64_t rdi_2 = sx.q(result[2].d)
    int64_t rsi_4 = sx.q(rax_16)
    int32_t rcx_26 = (rdi_2 + rsi_4).d
    result[2].d = rcx_26
    
    if (rcx_26 s> *(result + 0x14))
        sub_1405a4d70(&result[1])
    
    memset(result[1] + (rdi_2 << 3), 0, rsi_4 << 3)
else
label_1419cb33e:
    sub_141976940(&var_68, rsi.d)
    int16_t* var_60
    int512_t zmm1_1 = sub_1419ce4b0(&var_60, arg2, arg3, var_68)
    sub_140a464c0()
    int16_t* const rdx_3 = &data_142d40450
    int16_t* r13_1 = var_60
    char const (* r9_3)[0x4] = data_14399ea08
    int32_t var_58
    
    if (var_58 != 0)
        rdx_3 = r13_1
    
    int64_t* rax_3 = (*(r9_3 + 0x18))(&data_14399ea08, rdx_3, 0, r9_3, var_78)
    
    if (rax_3 != 0)
        int64_t* rcx_5 = rax_3[1]
        int32_t arg_8 = 0
        int32_t* rdx_4 = *rcx_5
        
        if (&rdx_4[1] u> rcx_5[1])
            int32_t* rdx_5 = &arg_8
            
            if ((*(rax_3 + 0x29) & 0x20) != 0)
                sub_140b54070(rax_3, rdx_5, zmm1_1)
            else
                (*(*rax_3 + 0x150))(rax_3, rdx_5, 4)
        else
            arg_8 = *rdx_4
            *rcx_5 += 4
        
        if (arg_8 == data_1439c95b8)
            sub_1405d16e0(&arg_20, sub_1419cb100(rsi.d, rax_3, &var_60, arg2, zmm1_1, arg3))
            rbx = arg_20
            
            if (rbx != 0)
                sub_140af2b60()
                char rax_9 = sub_140b21a10(&data_143dbb3f0, ShaderCodeLibrarySeperateLoadingCache")
                
                if (data_143f1d990 != 0 || rax_9 != 0)
                    var_60 = nullptr
                    int32_t var_58_1 = 1
                    sub_1405a4f90(&var_60)
                    int16_t* r15_1 = var_60
                    *r15_1 = 0
                    *(r15_1 + 8) = 0
                    *(r15_1 + 8) = 1
                    
                    if (1 s> *(r15_1 + 0xc))
                        sub_1405a4f90(r15_1)
                    
                    int64_t* rsi_1 = *r15_1
                    *rsi_1 = 0
                    rsi_1[1].d = var_58
                    
                    if (var_58 != 0)
                        sub_1405a4c70(rsi_1, var_58, 0)
                        memcpy(*rsi_1, r13_1, var_58 * 2)
                    else
                        *(rsi_1 + 0xc) = 0
                    
                    int64_t* rax_10 = __crt_deferred_errno_cache::get(&data_143db7b00)
                    uint64_t var_50[0x3]
                    var_50[0] = 0
                    int64_t* var_78_1
                    var_78_1.d = 0
                    sub_1419be210(&var_50, r15_1, var_58_1, 0, var_78_1.d)
                    int64_t r8_6 = *rax_10
                    (*(r8_6 + 0x30))(rax_10, &var_50, r8_6)
                    sub_1409f1840(&var_60)
        
        (**rax_3)(rax_3, 1)
    
    if (r13_1 != 0)
        sub_140a74f90(r13_1)
    
    if (rbx != 0)
        goto label_1419cb51f
sub_1405d1550(&arg_20)
return result
