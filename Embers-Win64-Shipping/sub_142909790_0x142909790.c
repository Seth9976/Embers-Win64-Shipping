// 函数: sub_142909790
// 地址: 0x142909790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x58)
int32_t rbx = 0
void** rdi = nullptr
int64_t arg_10 = 0
int64_t r13 = 0
int64_t* result = sub_14293bfc0(arg1)

if (result == 0)
    return result

void* rax = sub_14060aa60(result)
int64_t* arg_18
int32_t* arg_20

if (sub_14293c470(arg1, &arg_18, &arg_20, nullptr, nullptr, nullptr) != 0)
    int64_t var_48
    sub_1428daf50(&var_48, nullptr, nullptr, arg_18)
    void* rax_2 = sub_1428a9570(0)
    
    if (var_48 != rax_2)
        goto label_1429098c8
    
    int64_t rax_3 = sub_1428e49c0(*(*(rax + 0x28) + 0x20), nullptr)
    
    if (rax_3 != 0)
        int32_t rax_4 = sub_1428c3750(rax_3, &arg_10)
        sub_1428c3460(rax_3)
        
        if (rax_4 s> 0)
            sub_1428f2e40(arg_20, arg_10, rax_4)
            int32_t* rax_5 = arg_20
            rax_5[4] &= 0xfffffff0
            int32_t* rax_6 = arg_20
            rax_6[4] |= 8
            arg_10 = 0
            void* rax_7 = sub_1428a9570(0x398)
            sub_1428dafb0(arg_18, rax_7, 0xffffffff, 0)
        label_1429098c8:
            int32_t rax_8 = sub_1428bcb30(result, 0x398, 0x400, 0x1006, 0xfffffffe, 0)
            void* const var_58
            
            if (rax_8 s> 0 && sub_1428bcb30(result, 0x398, 0x400, 0x1008, 0, &var_58) != 0)
                if (rax_8 == 1)
                    if (sub_1428bcb30(result, 0x398, 0x400, 0x1006, 2, 0) s> 0)
                        goto label_142909942
                else if (rax_8 == 2)
                label_142909942:
                    void* const rcx_12 = var_58
                    
                    if (rcx_12 != 0)
                        if (sub_1406938b0(rcx_12) == 0x40)
                        label_142909997:
                            char* var_50
                            
                            if (sub_14293c3e0(arg1, &arg_18, &var_50) != 0)
                                int64_t* rax_14 = sub_14293c450(arg1)
                                int32_t rax_16 = sub_1428912b0(sub_140687ad0(rax_14))
                                
                                if (sub_1428bcb30(result, 0x398, 0x400, 0x100d, 0, 
                                        sub_1428a9570(rax_16)) s> 0)
                                    int32_t rax_19 = sub_142890ee0(rax_14)
                                    void** rax_20 = sub_1428daf90()
                                    rdi = rax_20
                                    
                                    if (rax_20 != 0)
                                        *rdi = sub_1428a9570(rax_16)
                                        int32_t* rax_22 = sub_1428c3640()
                                        rdi[1] = rax_22
                                        
                                        if (rax_22 != 0 && sub_142891110(rax_14, rax_22) s> 0)
                                            if (sub_1428cd200(rdi[1]) == 0)
                                                sub_1428c3620(rdi[1])
                                                rdi[1] = 0
                                            
                                            if (sub_1428bcb30(result, 0x398, 0x400, 0x1009, rax_19, 
                                                    0) s> 0)
                                                char* rcx_26 = var_50
                                                int64_t r14_4
                                                
                                                if (rcx_26 == 0)
                                                    r14_4 = 0
                                                label_142909adf:
                                                    
                                                    if (sub_1428bcb30(result, 0x398, 0x400, 0x100b, 
                                                            r14_4.d, r13) s> 0)
                                                        arg_10 = 0
                                                        int32_t rax_30 = sub_1428db120(rdi, &arg_10)
                                                        
                                                        if (arg_10 != 0 && rax_30 != 0)
                                                            int32_t* rax_31 = sub_1428f2cf0()
                                                            
                                                            if (rax_31 != 0)
                                                                sub_1428f2e40(rax_31, arg_10, rax_30)
                                                                arg_10 = 0
                                                                void* rax_32 = sub_1428a9570(0xf5)
                                                                sub_1428dafb0(arg_18, rax_32, 0x10, 
                                                                    rax_31)
                                                                rbx = 1
                                                else
                                                    r14_4 = sx.q(sub_1406938b0(rcx_26))
                                                    int64_t rax_28 = sub_1428a6af0(
                                                        sub_14060aa50(var_50), r14_4, 
                                                        "crypto\dh\dh_ameth.c", 0x36a)
                                                    r13 = rax_28
                                                    
                                                    if (rax_28 != 0)
                                                        goto label_142909adf
                    else
                        var_58 = &data_1434e9110
                        
                        if (sub_1428bcb30(result, 0x398, 0x400, 0x1007, 0, &data_1434e9110) s> 0)
                            goto label_142909997

sub_1428a6780(arg_10)
sub_1428daf30(rdi)
return zx.q(rbx)
