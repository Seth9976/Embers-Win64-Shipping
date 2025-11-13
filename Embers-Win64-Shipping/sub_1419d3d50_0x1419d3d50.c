// 函数: sub_1419d3d50
// 地址: 0x1419d3d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = data_143f1d988

if (rsi == 0)
    int64_t result
    result.b = 0
    return result

int32_t r8 = rsi[2].d
int64_t rbp
rbp.b = 0

if (r8 s< 0x31)
    char rax
    int32_t rcx_1
    rax, rcx_1 = sub_1419d41c0(rsi, arg2, r8, arg1)
    
    if (rax != 0)
        rbp.b = 1
        int64_t rbx_1 = *arg1
        int32_t rdi_1 = arg1[1].d
        int64_t var_38 = 0
        sub_1405a4c70(&var_38, sbb.d(rcx_1, rcx_1, rdi_1 != 0) + 4 + rdi_1, 0)
        memcpy(var_38, rbx_1, rdi_1 * 2)
        sub_140a20ba0(&var_38, &data_14300eb30, 3)
        int32_t rbx_2 = rsi[2].d
        int64_t var_28 = var_38
        int32_t var_20_1 = rdi_1
        int32_t var_2c
        int32_t var_1c_1 = var_2c
        int32_t var_30_1
        var_30_1.q = 0
        var_38 = 0
        int64_t* rax_6 = sub_1419cb2a0(rbx_2, arg2, &var_28)
        
        if (rax_6 != 0)
            rsi[2].d = rbx_2
            int64_t* rcx_7 = *rax_6
            int64_t rdx_4 = *rcx_7
            (*(rdx_4 + 8))(rcx_7, rdx_4)
            AcquireSRWLockExclusive(&rsi[4])
            ReleaseSRWLockExclusive(&rsi[4])
            int64_t rbx_3 = sx.q(rsi[1].d)
            int32_t rax_7 = (rbx_3 + 1).d
            rsi[1].d = rax_7
            
            if (rax_7 s> *(rsi + 0xc))
                sub_1405a4d70(rsi)
            
            *(*rsi + (rbx_3 << 3)) = rax_6
            rsi[3] += sx.q(rax_6[2].d)
        
        int64_t rcx_11 = var_28
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        void* rcx_12 = data_143f1da40
        
        if (rcx_12 != 0)
            sub_1419d30b0(rcx_12, 0, rsi[2].d, arg1)

return zx.q(rbp.b)
