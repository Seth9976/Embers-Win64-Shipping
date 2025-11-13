// 函数: sub_14292cd30
// 地址: 0x14292cd30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x160)
void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int64_t rax_2 = sx.q(*arg2)
int64_t result_1 = arg3
int64_t result
char var_118
int32_t rax_3
char const* const rcx_2
char* rdx

if (rax_2.d u> 8)
    result = arg3
else
    switch (rax_2)
        case 0
            rdx = "<unsupported>"
            rcx_2 = "othername"
        label_14292cf74:
            rax_3 = sub_1428e8b00(rcx_2, rdx, &result_1)
            goto label_14292cf79
        case 1
            rax_3 = sub_1428e8d50("email", *(*(arg2 + 8) + 8), &result_1)
        label_14292cf79:
            
            result = rax_3 != 0 ? result_1 : 0
        case 2
            rax_3 = sub_1428e8d50("DNS", *(*(arg2 + 8) + 8), &result_1)
            goto label_14292cf79
        case 3
            rdx = "<unsupported>"
            rcx_2 = "X400Name"
            goto label_14292cf74
        case 4
            if (sub_1428a2e30(*(arg2 + 8), &var_118, 0x100) != 0)
                rcx_2 = "DirName"
                rdx = &var_118
                goto label_14292cf74
            
            result = 0
        case 5
            rdx = "<unsupported>"
            rcx_2 = "EdiPartyName"
            goto label_14292cf74
        case 6
            rax_3 = sub_1428e8d50("URI", *(*(arg2 + 8) + 8), &result_1)
            goto label_14292cf79
        case 7
            int32_t* rax_5 = *(arg2 + 8)
            int32_t rcx_4 = *rax_5
            void* rdi_1 = *(rax_5 + 8)
            
            if (rcx_4 == 4)
                uint32_t var_138_1 = zx.d(*(rdi_1 + 3))
                uint32_t var_140_1 = zx.d(*(rdi_1 + 2))
                uint32_t var_148_1 = zx.d(*(rdi_1 + 1))
                sub_1428b7080(&var_118, 0x100, "%d.%d.%d.%d", zx.q(*rdi_1))
                rcx_2 = "IP Address"
                rdx = &var_118
                goto label_14292cf74
            
            if (rcx_4 != 0x10)
                rdx = "<invalid>"
                rcx_2 = "IP Address"
                goto label_14292cf74
            
            int32_t i = 0
            var_118 = 0
            
            do
                char var_120[0x7]
                sub_1428b7080(&var_120, 5, "%X", zx.q(zx.d(*rdi_1) << 8) | zx.q(*(rdi_1 + 1)))
                void var_119
                void* rax_8 = &var_119
                rdi_1 += 2
                bool cond:0_1
                
                do
                    cond:0_1 = *(rax_8 + 1) != 0
                    rax_8 += 1
                while (cond:0_1)
                int64_t rdx_9 = 0
                char j
                
                do
                    j = var_120[rdx_9]
                    *(rax_8 + rdx_9) = j
                    rdx_9 += 1
                while (j != 0)
                
                if (i != 7)
                    void* rcx_8 = &var_119
                    bool cond:1_1
                    
                    do
                        cond:1_1 = *(rcx_8 + 1) != 0
                        rcx_8 += 1
                    while (cond:1_1)
                    *rcx_8 = 0x3a
                
                i += 1
            while (i s< 8)
            
            rcx_2 = "IP Address"
            rdx = &var_118
            goto label_14292cf74
        case 8
            sub_1428cddd0(&var_118, 0x100, *(arg2 + 8))
            rcx_2 = "Registered ID"
            rdx = &var_118
            goto label_14292cf74
__security_check_cookie(rax_1 ^ &var_168)
return result
