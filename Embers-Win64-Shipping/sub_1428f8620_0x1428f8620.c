// 函数: sub_1428f8620
// 地址: 0x1428f8620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int32_t* result = sub_1428db530(&data_143517f40)

if (result == 0)
    sub_1428a5670((result + 0x22).d, (result + 0x66).d, (result + 0x41).d, 
        "crypto\x509v3\v3_bcons.c", 0x3f)
    return 0

int32_t rbx = 0

if (sub_142898c70(arg3) s> 0)
    int32_t rax_4
    
    do
        int64_t* rax_2 = sub_142898ea0(arg3, rbx)
        char* rdx_2 = rax_2[1]
        int32_t rax_3
        
        if (*rdx_2 != 0x43 || rdx_2[1] != 0x41 || rdx_2[2] != 0)
            for (int64_t i = 0; i != 8; )
                char rcx_7 = rdx_2[i]
                i += 1
                
                if (rcx_7 != *(i + 0x143517f77))
                    int32_t var_28_1 = 0x4b
                    sub_1428a5670(0x22, 0x66, 0x6a, "crypto\x509v3\v3_bcons.c", 0x4b)
                    *rax_2
                    int64_t var_18_1 = rax_2[2]
                    char const* const var_20_1 = ",value:"
                    var_28_1.q = rax_2[1]
                    sub_1428a4880(6)
                    goto label_1428f87aa
            
            rax_3 = sub_1428e9050(rax_2, &result[2])
        else
            rax_3 = sub_1428e8de0(rax_2, result)
        
        if (rax_3 == 0)
        label_1428f87aa:
            sub_1428c3d60(result, &data_143517f40)
            return nullptr
        
        rbx += 1
        rax_4 = sub_142898c70(arg3)
    while (rbx s< rax_4)

return result
