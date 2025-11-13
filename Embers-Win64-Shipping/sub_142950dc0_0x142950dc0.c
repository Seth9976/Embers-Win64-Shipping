// 函数: sub_142950dc0
// 地址: 0x142950dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x60)
void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int32_t rbp = arg2[1].d
int64_t* r14 = *arg2
int32_t rax_2 = sub_142890280(arg2)
int32_t rax_3

if (rax_2 == 0)
    rax_3 = sub_1428909a0(arg2, &data_143546448)

int64_t* result

if (rax_2 != 0 || rax_3 s>= 0)
    result = sub_1429084c0(arg1, arg2, &data_143546348, arg4)
else
    int32_t rax_4 = sub_1428909a0(&data_143546348, arg2)
    
    if (rax_4 == 0)
        sub_142890900(arg1, 0)
        result = 1
    else if (rax_4 s<= 0)
        int64_t* rbx_1
        
        if (arg1 == arg2)
            rbx_1 = r14
        label_142950eaa:
            int32_t rdi_1 = 0
            int32_t var_68
            
            if (rbp - 3 s> 0)
                memcpy(&var_68, &r14[3], (rbp - 3) << 3)
                rdi_1 = rbp - 3
            
            if (rbp - 3 s<= 0 || rbp - 3 s< 3)
                __builtin_memset(&(&var_68)[sx.q(rdi_1) * 2], 0, sx.q(3 - rdi_1) << 3)
            
            int32_t var_58
            uint64_t rdi_3 = zx.q(var_58)
            uint64_t rcx_7 = zx.q(*(rbx_1 + 4))
            uint64_t r9 = zx.q(var_68)
            int32_t var_64
            uint64_t r11_1 = zx.q(var_64)
            int32_t var_54
            uint64_t r8_2 = zx.q(var_54)
            uint64_t rdx_5 = zx.q(*rbx_1) + r9 + rdi_3
            *rbx_1 = rdx_5.d
            int32_t var_60
            uint64_t r10_2 = zx.q(var_60) + rdi_3
            int32_t var_5c
            uint64_t rdi_5 = zx.q(var_5c) + r8_2
            uint64_t rcx_8 = zx.q(rbx_1[1].d)
            uint64_t rdx_9 = (rdx_5 u>> 0x20) + r11_1 + rcx_7 + r8_2
            *(rbx_1 + 4) = rdx_9.d
            uint64_t rdx_13 = (rdx_9 u>> 0x20) + r10_2 + rcx_8 + r9
            rbx_1[1].d = rdx_13.d
            uint64_t rdx_15 = zx.q(rbx_1[2].d)
            uint64_t rcx_10 = zx.q(*(rbx_1 + 0x14))
            uint64_t rax_13 = rdi_5 + (rdx_13 u>> 0x20) + zx.q(*(rbx_1 + 0xc)) + r11_1
            *(rbx_1 + 0xc) = rax_13.d
            uint64_t rdx_16 = rdx_15 + (rax_13 u>> 0x20) + r10_2
            rbx_1[2].d = rdx_16.d
            uint64_t rdx_19 = (rdx_16 u>> 0x20) + rdi_5 + rcx_10
            *(rbx_1 + 0x14) = rdx_19.d
            uint64_t rdx_20 = rdx_19 u>> 0x20
            int32_t rbp_2
            
            if (rdx_20.d == 0)
                rbp_2 = 1
            else
                rbp_2 = sub_142921500(rbx_1, rbx_1, &data_143545fe0 + (rdx_20 - 1) * 0x18, 3)
            
            void var_50
            int64_t rax_20 =
                neg.q(sub_142921500(&var_50, rbx_1, &data_143545fe0, 3)) & neg.q(sx.q(rbp_2))
            int64_t* rcx_19 = (not.q(rax_20) & &var_50) | (rax_20 & rbx_1)
            *rbx_1 = *rcx_19
            rbx_1[1] = rcx_19[1]
            rbx_1[2] = rcx_19[2]
            arg1[1].d = 3
            sub_142890ce0(arg1)
            result = 1
        else
            result = sub_142890e60(arg1, 3)
            
            if (result != 0)
                rbx_1 = *arg1
                *rbx_1 = *r14
                rbx_1[1] = r14[1]
                rbx_1[2] = r14[2]
                goto label_142950eaa
    else if (arg1 != arg2)
        int32_t result_1
        result_1.b = sub_142890040(arg1, arg2) != 0
        result = zx.q(result_1)
    else
        result = 1

__security_check_cookie(rax_1 ^ &var_88)
return result
