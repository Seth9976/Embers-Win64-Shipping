// 函数: sub_142951750
// 地址: 0x142951750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xa0)
void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int32_t r14 = arg2[1].d
int64_t* rsi = *arg2
int32_t rax_2 = sub_142890280(arg2)
int32_t rax_3

if (rax_2 == 0)
    rax_3 = sub_1428909a0(arg2, &data_143546490)

int64_t* result

if (rax_2 != 0 || rax_3 s>= 0)
    result = sub_1429084c0(arg1, arg2, &data_143546418, arg4)
else
    int32_t rax_4 = sub_1428909a0(&data_143546418, arg2)
    
    if (rax_4 == 0)
        sub_142890900(arg1, 0)
        result = 1
    else if (rax_4 s<= 0)
        int64_t* r13_1
        
        if (arg1 == arg2)
            r13_1 = rsi
        label_142951885:
            int32_t rbx_1 = 0
            int32_t var_a0
            
            if (r14 - 6 s> 0)
                memcpy(&var_a0, &rsi[6], (r14 - 6) << 3)
                rbx_1 = r14 - 6
            
            if (r14 - 6 s<= 0 || r14 - 6 s< 6)
                __builtin_memset(&(&var_a0)[sx.q(rbx_1) * 2], 0, sx.q(6 - rbx_1) << 3)
            
            uint64_t r8_2 = zx.q(var_a0)
            int32_t var_74
            uint64_t r12_1 = zx.q(var_74)
            int32_t var_78
            uint64_t r14_1 = zx.q(var_78)
            int32_t var_80
            uint64_t r15_1 = zx.q(var_80)
            int32_t var_9c
            uint64_t r10_1 = zx.q(var_9c)
            int32_t var_98
            uint64_t rbx_2 = zx.q(var_98)
            int32_t var_7c
            uint64_t rbp_1 = zx.q(var_7c)
            int32_t var_94
            uint64_t rsi_1 = zx.q(var_94)
            uint64_t rcx_9 = zx.q(*(r13_1 + 4))
            uint64_t rdx_3 = zx.q(r13_1[1].d)
            uint64_t rdi_4 = zx.q(rbp_1.d) - r12_1
            int32_t var_90
            uint64_t r11_1 = zx.q(var_90)
            uint64_t rax_17 = zx.q(*r13_1) + r8_2 + r15_1 + rdi_4
            int32_t var_8c
            uint64_t r9 = zx.q(var_8c)
            *r13_1 = rax_17.d
            int64_t rcx_12 = rcx_9 + (rax_17 s>> 0x20) - r8_2 - r15_1 + r10_1 + r14_1 + r12_1
            *(r13_1 + 4) = rcx_12.d
            int64_t rdx_5 = rdx_3 + rbx_2 + (rcx_12 s>> 0x20) - r10_1 - rbp_1 + r12_1
            r13_1[1].d = rdx_5.d
            uint64_t rdx_9 = zx.q(*(r13_1 + 0x1c))
            int64_t rcx_20 = zx.q(*(r13_1 + 0xc)) + rsi_1 + (rdx_5 s>> 0x20) - rbx_2 - r14_1 + r8_2
                + r15_1 + rdi_4
            *(r13_1 + 0xc) = rcx_20.d
            int32_t var_88
            uint64_t rdi_5 = zx.q(var_88)
            int32_t var_84
            uint64_t r8_3 = zx.q(var_84)
            int64_t rcx_27 = zx.q(r13_1[2].d) + (rcx_20 s>> 0x20) + (rdi_4 << 1) - rsi_1 + r11_1
                + r10_1 + r14_1 + r8_2 + r15_1
            r13_1[2].d = rcx_27.d
            int64_t rcx_34 = zx.q(*(r13_1 + 0x14)) + (rcx_27 s>> 0x20) + (r14_1 << 1) - r11_1 + r9
                + rbx_2 + r10_1 + rbp_1 + r12_1
            *(r13_1 + 0x14) = rcx_34.d
            int64_t rcx_40 = zx.q(r13_1[3].d) + (rcx_34 s>> 0x20) + (r12_1 << 1) - r9 + rdi_5
                + rsi_1 + rbx_2 + r14_1
            r13_1[3].d = rcx_40.d
            uint64_t rcx_43 = zx.q(*(r13_1 + 0x24))
            uint64_t rax_34 = zx.q(r13_1[4].d)
            int64_t rdx_13 = rdx_9 + r11_1 + (rcx_40 s>> 0x20) - rdi_5 + rsi_1 + r12_1 + r8_3
            *(r13_1 + 0x1c) = rdx_13.d
            int64_t rdx_19 = (rdx_13 s>> 0x20) + rax_34 - r8_3 + r9 + r11_1 + r15_1
            r13_1[4].d = rdx_19.d
            uint64_t rdx_22 = zx.q(r13_1[5].d)
            int64_t rcx_46 = rcx_43 + rdi_5 + (rdx_19 s>> 0x20) - r15_1 + r9 + rbp_1
            *(r13_1 + 0x24) = rcx_46.d
            int64_t (* rdi_6)(int64_t* arg1, int64_t* arg2, int64_t* arg3, int32_t arg4) =
                sub_142921500
            int64_t rdx_25 = rdx_22 + rdi_5 + (rcx_46 s>> 0x20) - rbp_1 + r14_1 + r8_3
            r13_1[5].d = rdx_25.d
            int64_t rcx_52 =
                zx.q(*(r13_1 + 0x2c)) + r15_1 + (rdx_25 s>> 0x20) - r14_1 + r12_1 + r8_3
            *(r13_1 + 0x2c) = rcx_52.d
            int32_t rcx_53 = (rcx_52 s>> 0x20).d
            int64_t rsi_2
            
            if (rcx_53 s> 0)
                rsi_2 = sub_142921500(r13_1, r13_1, sx.q(rcx_53 - 1) * 0x30 + &data_1435461b0, 6)
            else if (rcx_53 s>= 0)
                rsi_2 = 1
            else
                rsi_2 = sx.q(sub_14291cd80(r13_1, r13_1, 
                    sx.q(not.d(rcx_53)) * 0x30 + &data_1435461b0, 6))
                int64_t rcx_59 = neg.q(rsi_2)
                rdi_6 = (not.q(rcx_59) & sub_14291cd80) | (rcx_59 & sub_142921500)
            
            void var_70
            int64_t rax_47 =
                neg.q(rdi_6(&var_70, r13_1, &data_1435461b0, 6, arg1)) & neg.q(sx.q(rsi_2.d))
            int64_t* rcx_67 = (not.q(rax_47) & &var_70) | (rax_47 & r13_1)
            *r13_1 = *rcx_67
            r13_1[1] = rcx_67[1]
            r13_1[2] = rcx_67[2]
            r13_1[3] = rcx_67[3]
            r13_1[4] = rcx_67[4]
            r13_1[5] = rcx_67[5]
            arg1[1].d = 6
            sub_142890ce0(arg1)
            result = 1
        else
            result = sub_142890e60(arg1, 6)
            
            if (result != 0)
                r13_1 = *arg1
                *r13_1 = *rsi
                r13_1[1] = rsi[1]
                r13_1[2] = rsi[2]
                r13_1[3] = rsi[3]
                r13_1[4] = rsi[4]
                r13_1[5] = rsi[5]
                goto label_142951885
    else if (arg1 != arg2)
        int32_t result_1
        result_1.b = sub_142890040(arg1, arg2) != 0
        result = zx.q(result_1)
    else
        result = 1

__security_check_cookie(rax_1 ^ &var_c8)
return result
