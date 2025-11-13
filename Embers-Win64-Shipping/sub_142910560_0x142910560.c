// 函数: sub_142910560
// 地址: 0x142910560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
__chkstk(0x48)
int32_t rdi = -1

if (sub_1428a96d0(*arg3) != 0x390)
    sub_1428a5670(4, 0x9b, 0x9b, "crypto\rsa\rsa_ameth.c", 0x289)
    return 0xffffffff

int64_t* rax_2 = sub_142910050(arg3)

if (rax_2 == 0)
    goto label_14291063a

int32_t* rax_3 = sub_14290f6d0(*rax_2)

if (rax_3 == 0)
    goto label_14291063a

int64_t rax_4 = sub_14290f6d0(rax_2[4])

if (rax_4 == 0)
    goto label_14291063a

int32_t* rcx_4 = rax_2[2]
int32_t var_48_1
int32_t rbp_1
int32_t r8

if (rcx_4 == 0)
    rbp_1 = 0x14
label_14291068c:
    int32_t* rcx_6 = rax_2[3]
    int32_t rax_7
    
    if (rcx_6 != 0)
        rax_7 = sub_1428e4860(rcx_6)
    
    if (rcx_6 != 0 && rax_7 != 1)
        var_48_1 = 0x2cc
        r8 = 0x8b
        goto label_142910635
    
    int32_t var_48
    
    if (arg4 == 0)
        var_48 = 0
        char* arg_18
        
        if (sub_1428bcb30(arg_10, 0xffffffff, 0xf8, 0xd, 0, &arg_18) s> 0)
            int32_t rax_10 = sub_1406938b0(arg_18)
            
            if (sub_1406938b0(rax_3) == rax_10)
                goto label_14291075c
            
            sub_1428a5670(4, 0x9b, 0x9e, "crypto\rsa\rsa_ameth.c", 0x29d)
    else
        var_48.q = arg4
        
        if (sub_1428935d0(arg1, &arg_10, rax_3, nullptr, var_48) != 0)
        label_14291075c:
            var_48.q = 0
            
            if (sub_1428973a0(arg_10, 0xffffffff, 0x1001, 6, 0) s> 0)
                var_48.q = 0
                
                if (sub_1428973a0(arg_10, 0x18, 0x1002, rbp_1, 0) s> 0)
                    var_48.q = rax_4
                    
                    if (sub_1428973a0(arg_10, 0x3f8, 0x1005, 0, var_48) s> 0)
                        rdi = 1
else
    int32_t rax_5 = sub_1428e4860(rcx_4)
    rbp_1 = rax_5
    
    if (rax_5 s>= 0)
        goto label_14291068c
    
    var_48_1 = 0x2c0
    r8 = 0x96
label_142910635:
    sub_1428a5670(4, 0x97, r8, "crypto\rsa\rsa_ameth.c", var_48_1)
label_14291063a:
    sub_1428a5670(4, 0x9b, 0x95, "crypto\rsa\rsa_ameth.c", 0x290)
sub_1428979d0(rax_2)
return zx.q(rdi)
