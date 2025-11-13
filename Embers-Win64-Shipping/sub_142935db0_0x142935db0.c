// 函数: sub_142935db0
// 地址: 0x142935db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int32_t rax = sub_142898c70(arg3)
int32_t* result = sub_142898be0(0, rax)

if (result == 0)
    sub_1428a5670((result + 0x22).d, (result + 0x67).d, (result + 0x41).d, 
        "crypto\x509v3\v3_extku.c", 0x52)
    sub_142898a10(nullptr)
    return 0

int32_t rbx = 0

if (rax s> 0)
    do
        int64_t* rax_2 = sub_142898ea0(arg3, rbx)
        char* rcx_3 = rax_2[2]
        
        if (rcx_3 == 0)
            rcx_3 = rax_2[1]
        
        void* rax_3 = sub_1428a9db0(rcx_3, 0)
        
        if (rax_3 == 0)
            sub_142898cb0(result, sub_1428cd400)
            int32_t var_28_1 = 0x60
            sub_1428a5670(0x22, 0x67, 0x6e, "crypto\x509v3\v3_extku.c", 0x60)
            *rax_2
            int64_t var_18_1 = rax_2[2]
            char const* const var_20_1 = ",value:"
            var_28_1.q = rax_2[1]
            sub_1428a4880(6)
            return nullptr
        
        sub_142898d50(result, rax_3)
        rbx += 1
    while (rbx s< rax)

return result
