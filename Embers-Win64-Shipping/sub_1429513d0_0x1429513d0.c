// 函数: sub_1429513d0
// 地址: 0x1429513d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x70)
void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int32_t r14 = arg2[1].d
int64_t* rsi = *arg2
int32_t rax_2 = sub_142890280(arg2)
int32_t rax_3

if (rax_2 == 0)
    rax_3 = sub_1428909a0(arg2, &data_143546478)

int64_t* result

if (rax_2 != 0 || rax_3 s>= 0)
    result = sub_1429084c0(arg1, arg2, &data_143546400, arg4)
else
    int32_t rax_4 = sub_1428909a0(&data_143546400, arg2)
    
    if (rax_4 == 0)
        sub_142890900(arg1, 0)
        result = 1
    else if (rax_4 s<= 0)
        int64_t* r15_1
        
        if (arg1 == arg2)
            r15_1 = rsi
        label_1429514df:
            int32_t rbx_1 = 0
            int32_t var_78
            
            if (r14 - 4 s> 0)
                memcpy(&var_78, &rsi[4], (r14 - 4) << 3)
                rbx_1 = r14 - 4
            
            if (r14 - 4 s<= 0 || r14 - 4 s< 4)
                __builtin_memset(&(&var_78)[sx.q(rbx_1) * 2], 0, sx.q(4 - rbx_1) << 3)
            
            int32_t var_64
            uint64_t r14_1 = zx.q(var_64)
            int32_t var_60
            uint64_t r8_2 = zx.q(var_60)
            int32_t var_5c
            uint64_t rdi_3 = zx.q(var_5c)
            int32_t var_6c
            uint64_t r11_1 = zx.q(var_6c)
            int32_t var_68
            uint64_t rbx_2 = zx.q(var_68)
            int32_t var_74
            uint64_t r10_1 = zx.q(var_74)
            int32_t var_70
            uint64_t r9 = zx.q(var_70)
            uint64_t rsi_1 = zx.q(var_78)
            uint64_t rax_12 = zx.q(*(r15_1 + 4))
            uint64_t rdx_3 = zx.q(*(r15_1 + 0xc))
            uint64_t rcx_15 = zx.q(*r15_1) - r11_1 - rbx_2 - r14_1 - r8_2 + rsi_1 + r10_1
            *r15_1 = rcx_15.d
            uint64_t rax_13 = zx.q(r15_1[1].d)
            int64_t rcx_23 = (rcx_15 s>> 0x20) + rax_12 - rdi_3 - rbx_2 - r14_1 - r8_2 + r9 + r10_1
            *(r15_1 + 4) = rcx_23.d
            int64_t rcx_30 = (rcx_23 s>> 0x20) + rax_13 - rdi_3 - r14_1 - r8_2 + r9 + r11_1
            r15_1[1].d = rcx_30.d
            int64_t rdx_4 =
                rdx_3 + (rcx_30 s>> 0x20) + ((r11_1 + rbx_2) << 1) - rdi_3 - rsi_1 - r10_1 + r14_1
            *(r15_1 + 0xc) = rdx_4.d
            int64_t rdx_7 =
                zx.q(r15_1[2].d) + (rdx_4 s>> 0x20) + ((rbx_2 + r14_1) << 1) - r9 - r10_1 + r8_2
            r15_1[2].d = rdx_7.d
            int64_t rdx_13 = (rdx_7 s>> 0x20) + ((r14_1 + r8_2) << 1) + zx.q(*(r15_1 + 0x14)) - r9
                - r11_1 + rdi_3
            *(r15_1 + 0x14) = rdx_13.d
            int64_t rdx_16 = zx.q(r15_1[3].d) + r8_2 * 3 + (rdi_3 << 1) + (rdx_13 s>> 0x20) - rsi_1
                - r10_1 + r14_1
            r15_1[3].d = rdx_16.d
            int64_t (* rdi_4)(int64_t* arg1, int64_t* arg2, int64_t* arg3, int32_t arg4) =
                sub_142921500
            int64_t rcx_39 = rdi_3 * 3 + (rdx_16 s>> 0x20) + zx.q(*(r15_1 + 0x1c)) - r9 - r11_1
                - rbx_2 - r14_1 + rsi_1
            *(r15_1 + 0x1c) = rcx_39.d
            int32_t rcx_40 = (rcx_39 s>> 0x20).d
            int64_t rsi_2
            
            if (rcx_40 s> 0)
                rsi_2 = sub_142921500(r15_1, r15_1, (sx.q(rcx_40 - 1) << 5) + &data_1435460d0, 4)
            else if (rcx_40 s>= 0)
                rsi_2 = 1
            else
                rsi_2 = sx.q(sub_14291cd80(r15_1, r15_1, 
                    (sx.q(not.d(rcx_40)) << 5) + &data_1435460d0, 4))
                int64_t rcx_45 = neg.q(rsi_2)
                rdi_4 = (not.q(rcx_45) & sub_14291cd80) | (rcx_45 & sub_142921500)
            
            void var_58
            int64_t rax_42 = neg.q(rdi_4(&var_58, r15_1, &data_1435460d0, 4)) & neg.q(sx.q(rsi_2.d))
            int64_t* rcx_53 = (not.q(rax_42) & &var_58) | (rax_42 & r15_1)
            *r15_1 = *rcx_53
            r15_1[1] = rcx_53[1]
            r15_1[2] = rcx_53[2]
            r15_1[3] = rcx_53[3]
            arg1[1].d = 4
            sub_142890ce0(arg1)
            result = 1
        else
            result = sub_142890e60(arg1, 4)
            
            if (result != 0)
                r15_1 = *arg1
                *r15_1 = *rsi
                r15_1[1] = rsi[1]
                r15_1[2] = rsi[2]
                r15_1[3] = rsi[3]
                goto label_1429514df
    else if (arg1 != arg2)
        int32_t result_1
        result_1.b = sub_142890040(arg1, arg2) != 0
        result = zx.q(result_1)
    else
        result = 1

__security_check_cookie(rax_1 ^ &var_98)
return result
