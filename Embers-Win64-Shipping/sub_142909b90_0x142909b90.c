// 函数: sub_142909b90
// 地址: 0x142909b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
int32_t rdi = 0
int32_t* r15 = nullptr
int32_t* rbp = nullptr
void* const rbx = nullptr
void* var_48
void var_38
int32_t arg_20
sub_1428daf50(&var_48, &arg_20, &var_38, arg2)

if (sub_1428a96d0(var_48) == 0x398 && arg_20 != 5)
    int32_t* rax_1 = sub_14060aa60(arg1)
    
    if (rax_1 != 0 && *rax_1 == 0x398)
        void* r14_1 = *(rax_1 + 0x28)
        void* rax_2 = sub_1428c1750()
        rbx = rax_2
        
        if (rax_2 == 0)
            rbx = nullptr
        else if (sub_14290a3c0(rax_2, r14_1, 0xffffffff) == 0)
            sub_1428c1620(rbx)
            rbx = nullptr
        
        int32_t rax_4 = sub_1406938b0(arg3)
        int64_t rax_5 = sub_14060aa50(arg3)
        int64_t var_40 = rax_5
        
        if (rax_5 != 0 && rax_4 != 0)
            int32_t* rax_6 = sub_1428c36d0(nullptr, &var_40, rax_4)
            r15 = rax_6
            
            if (rax_6 != 0)
                int64_t rax_7 = sub_1428e49a0(rax_6, nullptr)
                *(rbx + 0x20) = rax_7
                
                if (rax_7 != 0)
                    int32_t* rax_8 = sub_1428968f0()
                    rbp = rax_8
                    
                    if (rax_8 != 0)
                        sub_142896310(rbp, **(rax_1 + 0x10), rbx)
                        rbx = nullptr
                        
                        if (sub_1428bd610(arg1, rbp) s> 0)
                            rdi = 1
                else
                    sub_1428a5670((rax_7 + 5).d, (rax_7 + 0x73).d, (rax_7 + 0x6d).d, 
                        "crypto\dh\dh_ameth.c", 0x28b)
            else
                sub_1428a5670((rax_6 + 5).d, (rax_6 + 0x73).d, (&rax_6[0x1a]).d, 
                    "crypto\dh\dh_ameth.c", 0x285)

sub_1428c3460(r15)
sub_1428965a0(rbp)
sub_1428c1620(rbx)
return zx.q(rdi)
