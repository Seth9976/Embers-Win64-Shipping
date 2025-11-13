// 函数: sub_142951ba0
// 地址: 0x142951ba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x80)
void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int32_t r15 = arg2[1].d
int64_t* rdi = *arg2
int32_t rax_2 = sub_142890280(arg2)
int32_t rax_3

if (rax_2 == 0)
    rax_3 = sub_1428909a0(arg2, &data_1435464a8)

int64_t* result

if (rax_2 != 0 || rax_3 s>= 0)
    result = sub_1429084c0(arg1, arg2, &data_143546430, arg4)
else
    int32_t rax_4 = sub_1428909a0(&data_143546430, arg2)
    
    if (rax_4 == 0)
        sub_142890900(arg1, 0)
        result = 1
    else if (rax_4 s<= 0)
        int64_t* rbx_1
        
        if (arg1 == arg2)
            rbx_1 = rdi
        label_142951cb7:
            uint64_t i = 0
            int64_t var_88
            uint64_t var_48
            
            if (r15 - 8 s> 0)
                do
                    (&var_88)[i] = *(&var_48 + rdi - &var_88 + (i << 3))
                    i += 1
                while (i s< sx.q(r15 - 8))
                
                i = zx.q(r15 - 8)
            
            if (r15 - 8 s<= 0 || r15 - 8 s< 9)
                __builtin_memset(&(&var_88)[sx.q(i.d)], 0, sx.q(9 - i.d) << 3)
            
            int64_t var_80
            var_88 = var_80 << 0x37 | var_88 u>> 9
            int64_t var_78
            int64_t var_80_1 = var_78 << 0x37 | var_80 u>> 9
            int64_t var_70
            int64_t var_78_1 = var_70 << 0x37 | var_78 u>> 9
            int64_t var_68
            int64_t var_70_1 = var_68 << 0x37 | var_70 u>> 9
            int64_t var_60
            int64_t var_68_1 = var_60 << 0x37 | var_68 u>> 9
            int64_t var_58
            int64_t var_60_1 = var_58 << 0x37 | var_60 u>> 9
            uint64_t rcx_18 = var_48
            int64_t var_50
            int64_t var_58_1 = var_50 << 0x37 | var_58 u>> 9
            var_48 = rcx_18 u>> 9
            int64_t var_50_1 = rcx_18 << 0x37 | var_50 u>> 9
            rbx_1[8] &= 0x1ff
            sub_14291cd80(rbx_1, rbx_1, &var_88, 9)
            int64_t rax_39 = neg.q(sub_142921500(&var_88, rbx_1, &data_143546300, 9))
            int64_t* rcx_25 = (not.q(rax_39) & &var_88) | (rax_39 & rbx_1)
            *rbx_1 = *rcx_25
            rbx_1[1] = rcx_25[1]
            rbx_1[2] = rcx_25[2]
            rbx_1[3] = rcx_25[3]
            rbx_1[4] = rcx_25[4]
            rbx_1[5] = rcx_25[5]
            rbx_1[6] = rcx_25[6]
            rbx_1[7] = rcx_25[7]
            rbx_1[8] = rcx_25[8]
            arg1[1].d = 9
            sub_142890ce0(arg1)
            result = 1
        else
            result = sub_142890e60(arg1, 9)
            
            if (result != 0)
                rbx_1 = *arg1
                *rbx_1 = *rdi
                rbx_1[1] = rdi[1]
                rbx_1[2] = rdi[2]
                rbx_1[3] = rdi[3]
                rbx_1[4] = rdi[4]
                rbx_1[5] = rdi[5]
                rbx_1[6] = rdi[6]
                rbx_1[7] = rdi[7]
                rbx_1[8] = rdi[8]
                goto label_142951cb7
    else if (arg1 == arg2)
        result = 1
    else
        result.b = sub_142890040(arg1, arg2) != 0

__security_check_cookie(rax_1 ^ &var_a8)
return result
