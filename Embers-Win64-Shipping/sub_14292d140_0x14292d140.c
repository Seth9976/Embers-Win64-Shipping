// 函数: sub_14292d140
// 地址: 0x14292d140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rax = sub_142898c70(arg3)
int32_t* result = sub_142898be0(0, rax)

if (result == 0)
    sub_1428a5670((result + 0x22).d, (result + 0x76).d, (result + 0x41).d, 
        "crypto\x509v3\v3_alt.c", 0x182)
    sub_142898a10(nullptr)
    return 0

int32_t rdi = 0

if (rax s> 0)
    do
        void* rax_2 = sub_142898ea0(arg3, rdi)
        int64_t rbp_1 = *(rax_2 + 0x10)
        char* rbx_1 = *(rax_2 + 8)
        
        if (rbp_1 == 0)
            sub_1428a5670(0x22, 0x75, 0x7c, "crypto\x509v3\v3_alt.c", 0x200)
            sub_142898cb0(result, sub_1428e7b70)
            return nullptr
        
        int32_t rax_3 = sub_1428ea5d0(rbx_1, "email")
        int32_t r9_1
        
        if (rax_3 != 0)
            int32_t rax_4 = sub_1428ea5d0(rbx_1, "URI")
            
            if (rax_4 != 0)
                int32_t rax_5 = sub_1428ea5d0(rbx_1, "DNS")
                
                if (rax_5 != 0)
                    int32_t rax_6 = sub_1428ea5d0(rbx_1, "RID")
                    
                    if (rax_6 != 0)
                        int32_t rax_7 = sub_1428ea5d0(rbx_1, "IP")
                        
                        if (rax_7 != 0)
                            int32_t rax_8 = sub_1428ea5d0(rbx_1, "dirName")
                            
                            if (rax_8 != 0)
                                if (sub_1428ea5d0(rbx_1, "otherName") != 0)
                                    sub_1428a5670(0x22, 0x75, 0x75, "crypto\x509v3\v3_alt.c", 0x213)
                                    sub_1428a4880(2)
                                    sub_142898cb0(result, sub_1428e7b70)
                                    return nullptr
                                
                                r9_1 = 0
                            else
                                r9_1 = rax_8 + 4
                        else
                            r9_1 = rax_7 + 7
                    else
                        r9_1 = rax_6 + 8
                else
                    r9_1 = rax_5 + 2
            else
                r9_1 = rax_4 + 6
        else
            r9_1 = rax_3 + 1
        
        int32_t var_38
        var_38.q = rbp_1
        int32_t* rax_10 = sub_14292c820(nullptr, arg1, arg2, r9_1, var_38, 0)
        
        if (rax_10 == 0)
            sub_142898cb0(result, sub_1428e7b70)
            return nullptr
        
        sub_142898d50(result, rax_10)
        rdi += 1
    while (rdi s< rax)

return result
