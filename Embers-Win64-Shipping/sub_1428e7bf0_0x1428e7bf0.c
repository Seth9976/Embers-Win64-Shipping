// 函数: sub_1428e7bf0
// 地址: 0x1428e7bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
int64_t* rbx = nullptr
int64_t* result = sub_1428db530(&data_1435148b0)

if (result != 0)
    int32_t rsi_1 = 0
    
    if (sub_142898c70(arg3) s<= 0)
        return result
    
    while (true)
        void* rax_1 = sub_142898ea0(arg3, rsi_1)
        int32_t rax_2 = strncmp(*(rax_1 + 8), "permitted", 9)
        void* rax_3
        
        if (rax_2 == 0)
            rax_3 = *(rax_1 + 8)
        
        void* rax_4
        int64_t* result_1
        
        if (rax_2 != 0 || *(rax_3 + 9) == 0)
            int32_t rax_5 = strncmp(*(rax_1 + 8), "excluded", 8)
            void* rax_6
            
            if (rax_5 == 0)
                rax_6 = *(rax_1 + 8)
            
            if (rax_5 != 0 || *(rax_6 + 8) == 0)
                sub_1428a5670(0x22, 0x93, 0x8f, "crypto\x509v3\v3_ncons.c", 0x7f)
                rbx = nullptr
                goto label_1428e7d8b
            
            result_1 = &result[1]
            rax_4 = rax_6 + 9
        else
            result_1 = result
            rax_4 = rax_3 + 0xa
        
        void* var_30_1 = rax_4
        int64_t var_28_1 = *(rax_1 + 0x10)
        int64_t* rax_8 = sub_1428db530(&data_143514840)
        rbx = rax_8
        
        if (rax_8 == 0)
            break
        
        void var_38
        
        if (sub_14292d360(*rax_8, arg1, arg2, &var_38, 1) == 0)
            goto label_1428e7d8b
        
        int32_t* rax_10 = *result_1
        
        if (rax_10 == 0)
            rax_10 = sub_142898ba0()
            *result_1 = rax_10
            
            if (rax_10 == 0)
                break
        
        if (sub_142898d50(rax_10, rbx) == 0)
            break
        
        rsi_1 += 1
        
        if (rsi_1 s>= sub_142898c70(arg3))
            return result

sub_1428a5670(0x22, 0x93, 0x41, "crypto\x509v3\v3_ncons.c", 0x92)
label_1428e7d8b:
sub_1428c3d60(result, &data_1435148b0)
sub_1428c3d60(rbx, &data_143514840)
return nullptr
