// 函数: sub_14292fd20
// 地址: 0x14292fd20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
void** result = sub_1428db530(&data_143538370)

if (result == 0)
    sub_1428a5670((result + 0x22).d, 0x92, (result + 0x41).d, "crypto\x509v3\v3_pcons.c", 0x40)
    return 0

int32_t rbx = 0

if (sub_142898c70(arg3) s> 0)
    int32_t rax_6
    
    do
        int64_t* rax_2 = sub_142898ea0(arg3, rbx)
        char* _Str1 = rax_2[1]
        void** result_1
        
        if (strcmp(_Str1, "requireExplicitPolicy") != 0)
            if (strcmp(_Str1, "inhibitPolicyMapping") != 0)
                int32_t var_28_1 = 0x4c
                sub_1428a5670(0x22, 0x92, 0x6a, "crypto\x509v3\v3_pcons.c", 0x4c)
                *rax_2
                int64_t var_18_1 = rax_2[2]
                char const* const var_20_1 = ",value:"
                var_28_1.q = rax_2[1]
                sub_1428a4880(6)
                goto label_14292fe2f
            
            result_1 = &result[1]
        else
            result_1 = result
        
        if (sub_1428e9050(rax_2, result_1) == 0)
            goto label_14292fe2f
        
        rbx += 1
        rax_6 = sub_142898c70(arg3)
    while (rbx s< rax_6)

if (result[1] != 0 || *result != 0)
    return result

sub_1428a5670(0x22, 0x92, 0x97, "crypto\x509v3\v3_pcons.c", 0x53)
label_14292fe2f:
sub_1428c3d60(result, &data_143538370)
return nullptr
