// 函数: sub_1428eebf0
// 地址: 0x1428eebf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
char* arg_10 = nullptr
int32_t rax_1
int32_t* result
int32_t r8

if (arg2 != 0)
    result = arg2
label_1428eec46:
    int64_t* rdx = *(result + 8)
    *result = 1
    
    if (sub_1428efd20(arg1, rdx) != 0)
        if (sub_1428efaa0(arg1, *(result + 0x10)) != 0)
            int64_t* rax_4 = sub_14060aa50(arg1)
            
            if (rax_4 != 0)
                uint64_t rax_6 = sub_142919df0(arg1, rax_4, sub_1408cb900(arg1), &arg_10, nullptr)
                int32_t rsi_2 = rax_6.d
                
                if (rax_6 != 0)
                    int32_t* rax_7 = *(result + 0x18)
                    
                    if (rax_7 != 0)
                    label_1428eed2a:
                        sub_1428f2e40(rax_7, arg_10, rsi_2)
                        int64_t* rax_8 = sub_14060aa60(arg1)
                        
                        if (rax_8 != 0)
                            int64_t rax_9 = sub_1428e49c0(rax_8, *(result + 0x20))
                            *(result + 0x20) = rax_9
                            
                            if (rax_9 != 0)
                                int64_t* rax_10 = sub_142891590(arg1)
                                int64_t rax_11
                                
                                if (rax_10 != 0)
                                    rax_11 = sub_1428e49c0(rax_10, *(result + 0x28))
                                    *(result + 0x28) = rax_11
                                
                                if (rax_10 == 0 || rax_11 != 0)
                                    return result
                                
                                rax_1 = 0x1fe
                            else
                                rax_1 = 0x1f5
                            
                            r8 = 0xd
                        else
                            rax_1 = 0x1f0
                            r8 = 0x10
                    else
                        rax_7 = sub_1428c35d0()
                        *(result + 0x18) = rax_7
                        
                        if (rax_7 != 0)
                            goto label_1428eed2a
                        
                        sub_1428a6780(arg_10)
                        rax_1 = 0x1e8
                        r8 = 0x41
                else
                    rax_1 = 0x1e3
                    r8 = rsi_2 + 0x10
            else
                rax_1 = 0x1db
                r8 = (rax_4 + 0x71).d
        else
            rax_1 = 0x1d5
            r8 = 0x10
    else
        rax_1 = 0x1cf
        r8 = 0x10
else
    int32_t* result_1 = sub_1428db530(&data_143515690)
    result = result_1
    
    if (result_1 != 0)
        goto label_1428eec46
    
    rax_1 = 0x1c4
    r8 = (arg2 + 0x41).d

sub_1428a5670(0x10, 0x105, r8, "crypto\ec\ec_asn1.c", rax_1)

if (arg2 == 0)
    sub_1428c3d60(result, &data_143515690)

return nullptr
