// 函数: sub_142951030
// 地址: 0x142951030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x78)
void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int32_t r14 = arg2[1].d
int64_t* rdi = *arg2
int32_t rax_2 = sub_142890280(arg2)
int32_t rax_3

if (rax_2 == 0)
    rax_3 = sub_1428909a0(arg2, &data_143546460)

int64_t* result

if (rax_2 != 0 || rax_3 s>= 0)
    result = sub_1429084c0(arg1, arg2, &data_1435463e8, arg4)
else
    int32_t rax_4 = sub_1428909a0(&data_1435463e8, arg2)
    
    if (rax_4 == 0)
        sub_142890900(arg1, 0)
        result = 1
    else if (rax_4 s<= 0)
        int64_t* r15_1
        
        if (arg1 == arg2)
            r15_1 = rdi
        label_142951159:
            int32_t r9 = 0
            int64_t var_68
            int64_t var_50
            
            if (r14 - 3 s> 0)
                int64_t i = 0
                r9 = r14 - 3
                
                do
                    (&var_68)[i] = *(&var_50 + rdi - &var_68 + (i << 3))
                    i += 1
                while (i s< sx.q(r14 - 3))
            
            if (r14 - 3 s<= 0 || r9 s< 4)
                __builtin_memset(&(&var_68)[sx.q(r9)], 0, sx.q(4 - r9) << 3)
            
            int64_t rsi_1 = var_50
            int64_t var_60
            int64_t r14_3 = var_60 << 0x20 | var_68 u>> 0x20
            uint64_t rsi_2 = rsi_1 u>> 0x20
            int64_t var_58
            int64_t rbx_3 = rsi_1 << 0x20 | var_58 u>> 0x20
            int64_t rdi_5 = var_58 << 0x20 | var_60 u>> 0x20
            *(r15_1 + 0x1c) = 0
            int64_t var_88 = 0
            int64_t var_80_1 = r14_3 << 0x20
            int64_t var_78_1 = rdi_5 << 0x20 | r14_3 u>> 0x20
            uint64_t var_70_1 = rdi_5 u>> 0x20
            sub_14291cd80(r15_1, r15_1, &var_88, 4)
            var_88 = 0
            int64_t var_80_2 = rbx_3 << 0x20
            int64_t var_70_2 = 0
            uint64_t var_78_2 = rsi_2 << 0x20 | rbx_3 u>> 0x20
            sub_14291cd80(r15_1, r15_1, &var_88, 4)
            var_88 = r14_3
            int64_t var_80_3 = rdi_5
            int64_t var_78_3 = rbx_3
            uint64_t var_70_3 = rsi_2
            sub_142921500(r15_1, r15_1, &var_88, 4)
            uint64_t var_80_4 = rsi_2
            var_88 = rbx_3
            __builtin_memset(&var_80_4:4, 0, 0x14)
            sub_142921500(r15_1, r15_1, &var_88, 4)
            int64_t (* rdi_6)(int64_t* arg1, int64_t* arg2, int64_t* arg3, int32_t arg4) =
                sub_142921500
            uint32_t rax_27 = (r15_1[3] u>> 0x20).d
            uint64_t rbx_7
            
            if (rax_27 s> 0)
                sub_142921500(r15_1, r15_1, (sx.q(rax_27 - 1) << 5) + &data_143546090, 4)
                rbx_7 = zx.q(not.d((r15_1[3] u>> 0x20).d)) & 1
            else if (rax_27 s>= 0)
                rbx_7 = 1
            else
                rbx_7 = sx.q(sub_14291cd80(r15_1, r15_1, 
                    (sx.q(not.d(rax_27)) << 5) + &data_143546090, 4))
                int64_t rcx_25 = neg.q(rbx_7)
                rdi_6 = (not.q(rcx_25) & sub_14291cd80) | (rcx_25 & sub_142921500)
            
            int64_t rax_36 = neg.q(rdi_6(&var_68, r15_1, &data_143546090, 4)) & neg.q(sx.q(rbx_7.d))
            int64_t* rcx_33 = (not.q(rax_36) & &var_68) | (rax_36 & r15_1)
            *r15_1 = *rcx_33
            r15_1[1] = rcx_33[1]
            r15_1[2] = rcx_33[2]
            r15_1[3] = rcx_33[3]
            arg1[1].d = 4
            sub_142890ce0(arg1)
            result = 1
        else
            result = sub_142890e60(arg1, 4)
            
            if (result != 0)
                r15_1 = *arg1
                *r15_1 = *rdi
                r15_1[1] = rdi[1]
                r15_1[2] = rdi[2]
                r15_1[3] = rdi[3]
                goto label_142951159
    else if (arg1 != arg2)
        int32_t result_1
        result_1.b = sub_142890040(arg1, arg2) != 0
        result = zx.q(result_1)
    else
        result = 1

__security_check_cookie(rax_1 ^ &var_a8)
return result
