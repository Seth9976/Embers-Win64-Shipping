// 函数: sub_1418abed0
// 地址: 0x1418abed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
char var_30 = 0xff
int32_t var_48 = *arg2
int64_t var_40
sub_140596d10(&var_40, &arg2[2])
char var_30_1 = 0
int64_t* rax_3
int64_t r9
rax_3, r9 = j_sub_140a82f30(0x28)

if (rax_3 != 0)
    *rax_3 = 0
    rax_3[4].b = 0xff
    uint64_t rax_4 = zx.q(var_30_1)
    
    if (rax_4.d u> 0xff)
        sub_140af98a0("Unknown", 0x189, u"Unrecognized TUnion subtype", r9)
        sub_140afbb40()
    else if (rax_4.d != 0xff)
        if (rax_4.d u> 5)
            sub_140af98a0("Unknown", 0x189, u"Unrecognized TUnion subtype", r9)
            sub_140afbb40()
        else
            switch (rax_4)
                case 0
                    sub_14189cba0(&rax_3[1], &var_48)
                case 1
                    sub_14189cbe0(&rax_3[1], &var_48)
                case 2, 3, 4, 5
                    sub_1418aac00(&rax_3[1])
                    rax_3[4].b = 2
    
    int64_t* temp0_1 = *(arg1 + 0x10)
    *(arg1 + 0x10) = rax_3
    *temp0_1
    *temp0_1 = rax_3

uint64_t rdx_5 = zx.q(var_30_1)
uint64_t result = zx.q(rdx_5.d)
bool cond:1_1

if (rdx_5.d u<= 5)
    switch (rdx_5)
        case 0
            cond:1_1 = rdx_5.b != 0
        label_1418abfef:
            
            if (not(cond:1_1))
                int64_t rcx_6 = var_40
                char var_30_2 = 0xff
                
                if (rcx_6 != 0)
                    result = sub_140a74f90(rcx_6)
        case 1
            cond:1_1 = rdx_5.b != 1
            goto label_1418abfef
int64_t rcx_7 = *(arg2 + 8)

if (rcx_7 != 0)
    result = sub_140a74f90(rcx_7)

__security_check_cookie(rax_1 ^ &var_68)
return result
