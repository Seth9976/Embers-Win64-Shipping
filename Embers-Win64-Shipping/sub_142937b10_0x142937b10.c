// 函数: sub_142937b10
// 地址: 0x142937b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int32_t rax = sub_142898c70(arg3)
int32_t* result = sub_142898be0(0, rax)

if (result == 0)
    sub_1428a5670((result + 0x22).d, 0x91, (result + 0x41).d, "crypto\x509v3\v3_pmaps.c", 0x4c)
    return 0

int32_t rdi = 0

if (rax s> 0)
    do
        int64_t* rax_2 = sub_142898ea0(arg3, rdi)
        char* rcx_3
        
        if (rax_2[2] != 0)
            rcx_3 = rax_2[1]
        
        void* rbp_1
        void* rsi_1
        
        if (rax_2[2] == 0 || rcx_3 == 0)
            int32_t var_38_2 = 0x54
            sub_1428a5670(0x22, 0x91, 0x6e, "crypto\x509v3\v3_pmaps.c", 0x54)
            *rax_2
            int64_t var_28_2 = rax_2[2]
            char const* const var_30_2 = ",value:"
            var_38_2.q = rax_2[1]
            sub_1428a4880(6)
            rbp_1 = nullptr
            rsi_1 = nullptr
        label_142937d03:
            sub_1428cd400(rbp_1)
            sub_1428cd400(rsi_1)
            sub_142898cb0(result, sub_142937e00)
            return nullptr
        
        rbp_1 = sub_1428a9db0(rcx_3, 0)
        void* rax_4 = sub_1428a9db0(rax_2[2], 0)
        rsi_1 = rax_4
        
        if (rbp_1 == 0 || rax_4 == 0)
            int32_t var_38_1 = 0x5c
            sub_1428a5670(0x22, 0x91, 0x6e, "crypto\x509v3\v3_pmaps.c", 0x5c)
            *rax_2
            int64_t var_28_1 = rax_2[2]
            char const* const var_30_1 = ",value:"
            var_38_1.q = rax_2[1]
            sub_1428a4880(6)
            goto label_142937d03
        
        void** rax_5 = sub_1428db530(&data_14353a2f0)
        
        if (rax_5 == 0)
            sub_1428a5670(0x22, 0x91, 0x41, "crypto\x509v3\v3_pmaps.c", 0x62)
            goto label_142937d03
        
        *rax_5 = rbp_1
        rax_5[1] = rsi_1
        sub_142898d50(result, rax_5)
        rdi += 1
    while (rdi s< rax)

return result
