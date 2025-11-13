// 函数: sub_14290c4c0
// 地址: 0x14290c4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x70)
int32_t rbx = 0
void** rdi = nullptr
int64_t arg_18 = 0
int64_t* result = sub_14293bfc0(arg1)

if (result == 0)
    return result

void* rax = sub_14060aa60(result)
int32_t* var_68
int64_t* arg_20
int64_t rax_4

if (sub_14293c470(arg1, &arg_20, &var_68, nullptr, nullptr, nullptr) == 0)
    rax_4 = arg_18
else
    int64_t var_58
    sub_1428daf50(&var_58, nullptr, nullptr, arg_20)
    void* rax_2 = sub_1428a9570(0)
    
    if (var_58 != rax_2)
        goto label_14290c60b
    
    void* rsi_1 = *(rax + 0x28)
    int32_t rax_3 = sub_1428f0400(rsi_1, nullptr)
    
    if (rax_3 s<= 0)
        rax_4 = arg_18
    else
        rax_4 = sub_1428a6730(sx.q(rax_3))
        arg_18 = rax_4
        
        if (rax_4 != 0)
            int64_t var_50 = rax_4
            int32_t rax_5 = sub_1428f0400(rsi_1, &var_50)
            
            if (rax_5 s<= 0)
                rax_4 = arg_18
            else
                sub_1428f2e40(var_68, arg_18, rax_5)
                int32_t* rax_6 = var_68
                rax_6[4] &= 0xfffffff0
                int32_t* rax_7 = var_68
                rax_7[4] |= 8
                arg_18 = 0
                void* rax_8 = sub_1428a9570(0x198)
                sub_1428dafb0(arg_20, rax_8, 0xffffffff, 0)
            label_14290c60b:
                int32_t rax_9 = sub_1428bcb30(result, 0x198, 0x400, 0x1004, 0xfffffffe, 0)
                void* const var_60
                
                if (rax_9 s<= 0)
                    rax_4 = arg_18
                else if (sub_1428bcb30(result, 0x198, 0x400, 0x1006, 0, &var_60) == 0)
                    rax_4 = arg_18
                else if (sub_1428bcb30(result, 0x198, 0x400, 0x1003, 0xfffffffe, 0) s< 0)
                    rax_4 = arg_18
                else if (rax_9 != 1)
                    rax_4 = arg_18
                else if (sub_1428bcb30(result, 0x198, 0x400, 0x1004, 2, 0) s<= 0)
                    rax_4 = arg_18
                else if (var_60 != 0)
                label_14290c70b:
                    int64_t var_48
                    
                    if (sub_14293c3e0(arg1, &arg_20, &var_48) == 0)
                        rax_4 = arg_18
                    else
                        sub_1406938b0(var_60)
                        int32_t arg_10
                        
                        if (sub_1428e39a0(&arg_10) == 0)
                            rax_4 = arg_18
                        else
                            int64_t* rax_17 = sub_14293c450(arg1)
                            int32_t rax_19 = sub_1428912b0(sub_140687ad0(rax_17))
                            int32_t rax_20 = sub_142890ee0(rax_17)
                            void** rax_21 = sub_1428daf90()
                            rdi = rax_21
                            
                            if (rax_21 == 0)
                                rax_4 = arg_18
                            else
                                *rdi = sub_1428a9570(rax_19)
                                int32_t* rax_23 = sub_1428c3640()
                                rdi[1] = rax_23
                                
                                if (rax_23 == 0)
                                    rax_4 = arg_18
                                else if (sub_142891110(rax_17, rax_23) s<= 0)
                                    rax_4 = arg_18
                                else
                                    if (sub_1428cd200(rdi[1]) == 0)
                                        sub_1428c3620(rdi[1])
                                        rdi[1] = 0
                                    
                                    if (sub_1428bcb30(result, 0x198, 0x400, 0x1007, rax_20, 0)
                                            s<= 0)
                                        rax_4 = arg_18
                                    else
                                        int32_t rax_27 = sub_14293ded0(&arg_18, rdi, var_48, rax_20)
                                        
                                        if (rax_27 == 0)
                                            rax_4 = arg_18
                                        else if (sub_1428bcb30(result, 0x198, 0x400, 0x1009, 
                                                rax_27, arg_18) s<= 0)
                                            rax_4 = arg_18
                                        else
                                            arg_18 = 0
                                            int32_t rax_30 = sub_1428db120(rdi, &arg_18)
                                            rax_4 = arg_18
                                            
                                            if (rax_4 != 0 && rax_30 != 0)
                                                int32_t* rax_31 = sub_1428f2cf0()
                                                
                                                if (rax_31 != 0)
                                                    sub_1428f2e40(rax_31, arg_18, rax_30)
                                                    int32_t rcx_30 = arg_10
                                                    arg_18 = 0
                                                    void* rax_32 = sub_1428a9570(rcx_30)
                                                    sub_1428dafb0(arg_20, rax_32, 0x10, rax_31)
                                                    rbx = 1
                                                
                                                rax_4 = arg_18
                else
                    var_60 = &data_1434e9110
                    
                    if (sub_1428bcb30(result, 0x198, 0x400, 0x1005, 0, &data_1434e9110) s> 0)
                        goto label_14290c70b
                    
                    rax_4 = arg_18

sub_1428a6780(rax_4)
sub_1428daf30(rdi)
return zx.q(rbx)
