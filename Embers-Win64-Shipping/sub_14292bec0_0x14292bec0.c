// 函数: sub_14292bec0
// 地址: 0x14292bec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x178)
void var_188
int64_t rax_1 = __security_cookie ^ &var_188
void* result_1 = arg3
int32_t rsi = 0

if (sub_142898c70(arg2) s> 0)
    int32_t rax_10
    
    do
        int32_t* rax_3 = sub_142898ea0(arg2, rsi)
        void* result_2 = result_1
        int64_t rcx_2 = sx.q(*rax_3)
        char var_138
        int32_t rax_4
        char* rcx_3
        char* rdx_3
        
        if (rcx_2.d u<= 8)
            switch (rcx_2)
                case 0
                    rcx_3 = "othername"
                label_14292bf51:
                    rdx_3 = "<unsupported>"
                    goto label_14292bf5d
                case 1
                    rax_4 = sub_1428e8d50("email", *(*(rax_3 + 8) + 8), &result_2)
                label_14292bf62:
                    
                    result_1 = rax_4 != 0 ? result_2 : nullptr
                case 2
                    rax_4 = sub_1428e8d50("DNS", *(*(rax_3 + 8) + 8), &result_2)
                    goto label_14292bf62
                case 3
                    rcx_3 = "X400Name"
                    goto label_14292bf51
                case 4
                    if (sub_1428a2e30(*(rax_3 + 8), &var_138, 0x100) != 0)
                        rdx_3 = &var_138
                        rcx_3 = "DirName"
                        goto label_14292bf5d
                    
                    result_1 = nullptr
                case 5
                    rcx_3 = "EdiPartyName"
                    goto label_14292bf51
                case 6
                    rax_4 = sub_1428e8d50("URI", *(*(rax_3 + 8) + 8), &result_2)
                    goto label_14292bf62
                case 7
                    int32_t* rax_6 = *(rax_3 + 8)
                    int32_t rcx_5 = *rax_6
                    void* rdi_1 = *(rax_6 + 8)
                    
                    if (rcx_5 == 4)
                        uint32_t var_158_1 = zx.d(*(rdi_1 + 3))
                        uint32_t var_160_1 = zx.d(*(rdi_1 + 2))
                        uint32_t var_168_1 = zx.d(*(rdi_1 + 1))
                        sub_1428b7080(&var_138, 0x100, "%d.%d.%d.%d", zx.q(*rdi_1))
                        rdx_3 = &var_138
                        rcx_3 = "IP Address"
                    else if (rcx_5 != 0x10)
                        rdx_3 = "<invalid>"
                        rcx_3 = "IP Address"
                    else
                        var_138 = 0
                        
                        for (int32_t i = 0; i s< 8; i += 1)
                            char var_140[0x7]
                            sub_1428b7080(&var_140, 5, "%X", 
                                zx.q(zx.d(*rdi_1) << 8) | zx.q(*(rdi_1 + 1)))
                            void var_139
                            void* rcx_9 = &var_139
                            rdi_1 += 2
                            bool cond:0_1
                            
                            do
                                cond:0_1 = *(rcx_9 + 1) != 0
                                rcx_9 += 1
                            while (cond:0_1)
                            int64_t rdx_12 = 0
                            char j
                            
                            do
                                j = var_140[rdx_12]
                                *(rcx_9 + rdx_12) = j
                                rdx_12 += 1
                            while (j != 0)
                            
                            if (i != 7)
                                void* rax_9 = &var_139
                                bool cond:1_1
                                
                                do
                                    cond:1_1 = *(rax_9 + 1) != 0
                                    rax_9 += 1
                                while (cond:1_1)
                                *rax_9 = 0x3a
                        
                        rdx_3 = &var_138
                        rcx_3 = "IP Address"
                    
                    goto label_14292bf5d
                case 8
                    sub_1428cddd0(&var_138, 0x100, *(rax_3 + 8))
                    rdx_3 = &var_138
                    rcx_3 = "Registered ID"
                label_14292bf5d:
                    rax_4 = sub_1428e8b00(rcx_3, rdx_3, &result_2)
                    goto label_14292bf62
        rsi += 1
        rax_10 = sub_142898c70(arg2)
    while (rsi s< rax_10)

void* result

if (result_1 != 0)
    result = result_1
else
    result = sub_142898ba0()

__security_check_cookie(rax_1 ^ &var_188)
return result
