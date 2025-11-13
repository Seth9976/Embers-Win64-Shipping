// 函数: sub_1428f7240
// 地址: 0x1428f7240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xd0)
void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int64_t* rbx = arg3
int32_t var_e0 = 0xffffffff
int32_t result_1 = 0
int64_t* var_c8 = rbx

if (arg4 s>= 0)
    result_1 = arg4

uint64_t result

if (sub_1428f71d0(arg1, arg2, result_1) == 0)
label_1428f759c:
    result = 0xffffffff
else
    int32_t rax_4 = arg5 & 0xf0000
    int32_t rcx = 3
    int32_t result_2
    int32_t var_e4_1
    int16_t* const var_d0_1
    int32_t rbp_1
    int32_t r12_1
    void* const r13_1
    
    if (rax_4 == 0x10000)
        var_e4_1 = 1
        var_d0_1 = &(*U"},{]")[1]
        r13_1 = &data_142d8bdac
        rbp_1 = 1
        result_2 = 0
    label_1428f734c:
        r12_1 = 1
    label_1428f7351:
        int32_t rax_6 = arg5 & 0x800000
        
        if (rax_6 == 0)
            rcx = 1
        
        void* const rcx_1 = &data_143517d00
        
        if (rax_6 == 0)
            rcx_1 = &data_142d8602c
        
        int32_t rax_8 = arg5 & 0x600000
        int32_t rax_9 = sub_1428e7350(rbx)
        int32_t rax_10 = 0
        int32_t var_dc_1 = 0
        
        if (rax_9 s> 0)
            int32_t r8_2 = arg5 & 0x100000
            int32_t rcx_4 = rax_9 - 1
            int32_t var_b4_1 = r8_2
            int32_t var_d8_1 = rcx_4
            
            do
                int32_t rdx = rcx_4
                
                if (r8_2 == 0)
                    rdx = rax_10
                
                int64_t* rax_11 = sub_1428e7380(rbx, rdx)
                
                if (var_e0 != 0xffffffff)
                    if (var_e0 != sub_142890eb0(rax_11))
                        if (arg1(arg2, var_d0_1, zx.q(r12_1)) == 0)
                            goto label_1428f759c_1
                        
                        if (sub_1428f71d0(arg1, arg2, result_2) == 0)
                            goto label_1428f759c_1
                        
                        result_1 += r12_1 + result_2
                    else
                        if (arg1(arg2, r13_1, zx.q(rbp_1)) == 0)
                            goto label_1428f759c_1
                        
                        result_1 += rbp_1
                
                var_e0 = sub_142890eb0(rax_11)
                void* rax_18 = sub_142891580(rax_11)
                int32_t* rax_19 = sub_1428e7030(rax_11)
                int32_t* rbx_3 = rax_19
                int32_t rax_20 = sub_1428a96d0(rax_18)
                
                if (rax_8 != 0x600000)
                    char* rax_22
                    int32_t rdi_5
                    
                    if (rax_8 == 0x400000 || rax_20 == 0)
                        void var_98
                        sub_1428a97f0(&var_98, 0x50, rax_18, 1)
                        rax_22 = &var_98
                        rdi_5 = 0
                    else if (rax_8 == 0)
                        rdi_5 = rax_8 + 0xa
                        rax_22 = sub_1428a9620(rax_20)
                    else if (rax_8 != 0x200000)
                        rax_22 = &data_1437020ab
                        rdi_5 = 0
                    else
                        rdi_5 = 0x19
                        rax_22 = sub_1428a94b0(rax_20)
                    
                    int64_t rbx_4 = -1
                    
                    do
                        rbx_4 += 1
                    while (rax_22[rbx_4] != 0)
                    
                    if (arg1(arg2, rax_22, zx.q(rbx_4.d)) == 0)
                        goto label_1428f759c_1
                    
                    if (rbx_4.d s< rdi_5 && (arg5 & 0x2000000) != 0)
                        int32_t rdi_6 = rdi_5 - rbx_4.d
                        
                        if (sub_1428f71d0(arg1, arg2, rdi_6) == 0)
                            goto label_1428f759c_1
                        
                        result_1 += rdi_6
                    
                    if (arg1(arg2, rcx_1, zx.q(rcx)) == 0)
                        goto label_1428f759c_1
                    
                    rbx_3 = rax_19
                    result_1 += rcx + rbx_4.d
                
                int32_t r8_10
                
                if (rax_20 != 0 || not(test_bit(arg5, 0x18)))
                    r8_10 = 0
                else
                    r8_10 = 0x80
                
                int32_t rax_27 = sub_1428f75d0(arg1, arg2, r8_10 | arg5, rbx_3)
                
                if (rax_27 s< 0)
                    goto label_1428f759c_1
                
                result_1 += rax_27
                rcx_4 = var_d8_1 - 1
                rbp_1 = var_e4_1
                rax_10 = var_dc_1 + 1
                r8_2 = var_b4_1
                rbx = var_c8
                var_dc_1 = rax_10
                var_d8_1 = rcx_4
            while (rax_10 s< rax_9)
        
        result = zx.q(result_1)
    else
        int16_t* rbx_1
        
        if (rax_4 == 0x20000)
            rbx_1 = &data_14321f660
        label_1428f730a:
            var_d0_1 = rbx_1
            rbx = var_c8
            r13_1 = &data_143517cf8
            result_2 = 0
            r12_1 = 2
            rbp_1 = 3
            var_e4_1 = 3
            goto label_1428f7351
        
        if (rax_4 == 0x30000)
            rbx_1 = &data_143517cfc
            goto label_1428f730a
        
        if (rax_4 == 0x40000)
            var_e4_1 = 3
            var_d0_1 = &data_14370209c
            r13_1 = &data_143517cf8
            rbx = var_c8
            rbp_1 = 3
            result_2 = result_1
            goto label_1428f734c
        
    label_1428f759c_1:
        result = 0xffffffff

__security_check_cookie(rax_1 ^ &var_108)
return result
