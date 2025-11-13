// 函数: sub_141e6d060
// 地址: 0x141e6d060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
uint64_t rsi
rsi.b = 0

if (arg3[1].d != 0)
    int64_t* rax_2
    int32_t rcx
    rax_2, rcx = sub_140b257f0()
    int16_t* var_128 = nullptr
    int32_t rdi_1 = rax_2[1].d
    int64_t rbx_1 = *rax_2
    sub_1405a4c70(&var_128, sbb.d(rcx, rcx, rdi_1 != 0) + 9 + rdi_1, 0)
    memcpy(var_128, rbx_1, rdi_1 * 2)
    sub_140a20ba0(&var_128, u"Reports/", 8)
    int16_t* var_118 = var_128
    int32_t var_110_1 = rdi_1
    int32_t var_120_1
    var_120_1.q = 0
    var_128 = nullptr
    int16_t* var_f8
    sub_140b11a30(&var_f8, &var_118)
    int16_t* rcx_6 = var_118
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    if (arg2[1].d != 0)
        *arg2
    
    int16_t* const r8_2 = &data_142d40450
    int32_t var_f0
    
    if (var_f0 != 0)
        r8_2 = var_f8
    
    int16_t* var_108
    sub_140a2e390(&var_108, u"%s%s", r8_2)
    sub_140a464c0()
    int16_t* const rdx_4 = &data_142d40450
    int32_t var_100
    
    if (var_100 != 0)
        rdx_4 = var_108
    
    int64_t* rax_9 = (*(data_14399ea08 + 0x20))(&data_14399ea08, rdx_4, 0)
    
    if (rax_9 != 0)
        rsi = 0
        
        if (arg3[1].d s> 0)
            int64_t* r14_1 = nullptr
            
            do
                int64_t rax_10 = *arg3
                int16_t* const r8_3
                
                if (*(r14_1 + rax_10 + 8) == 0)
                    r8_3 = &data_142d40450
                else
                    r8_3 = *(r14_1 + rax_10)
                
                int32_t rcx_9 = sub_140a2e390(&var_118, u"%s", r8_3)
                int32_t var_120_2 = var_110_1
                var_128 = var_118
                int32_t rdx_6 = var_110_1 + sbb.d(rcx_9, rcx_9, var_110_1 != 0) + 3
                var_118 = nullptr
                int32_t var_11c
                int32_t var_11c_1 = var_11c
                var_110_1.q = 0
                
                if (rdx_6 s> var_11c)
                    sub_1405947f0(&var_128, rdx_6)
                
                sub_140a20ba0(&var_128, &data_142d6acb4, 2)
                int16_t* rcx_14 = var_118
                int16_t* rbx_2 = var_128
                var_128 = nullptr
                int32_t rdi_2 = var_120_2
                var_120_2.q = 0
                
                if (rcx_14 != 0)
                    sub_140a74f90(rcx_14)
                
                int16_t* rdx_7
                int32_t rdi_3
                
                if (rdi_2 == 0)
                    rdi_3 = 0
                    rdx_7 = &data_142d40450
                else
                    rdi_3 = rdi_2 - 1
                    rdx_7 = rbx_2
                
                void var_e8
                sub_1408f2b40(&var_e8, rdx_7)
                int64_t var_60
                (*(*rax_9 + 0x150))(rax_9, var_60, sx.q(rdi_3))
                int64_t var_68
                
                if (var_68 != 0)
                    sub_140a74f90(var_68)
                
                if (rbx_2 != 0)
                    sub_140a74f90(rbx_2)
                
                rsi = zx.q(rsi.d + 1)
                r14_1 = &r14_1[2]
            while (rsi.d s< arg3[1].d)
        
        (*(*rax_9 + 0x1b8))(rax_9)
        (**rax_9)(rax_9, 1)
        rsi.b = 1
    
    int16_t* rcx_21 = var_108
    
    if (rcx_21 != 0)
        sub_140a74f90(rcx_21)
    
    int16_t* rcx_22 = var_f8
    
    if (rcx_22 != 0)
        sub_140a74f90(rcx_22)

int64_t rcx_23 = *arg2

if (rcx_23 != 0)
    sub_140a74f90(rcx_23)

__security_check_cookie(rax_1 ^ &var_148)
return zx.q(rsi.b)
