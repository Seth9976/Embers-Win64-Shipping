// 函数: sub_141e5e8b0
// 地址: 0x141e5e8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_868
int64_t rax_1 = __security_cookie ^ &var_868
bool rdx = sub_140b5b8a0(*arg3, 0) == 0
int32_t rcx
rcx.b = arg3[1] != 0
rcx.b |= rdx

if (rcx.b != 0)
    int64_t rax_3 = *(arg3 + 0x20)
    int64_t var_838 = rax_3
    
    if (rax_3 == 0 || (rax_3 u>> 0x20).d != 0)
    label_141e5ea48:
        uint64_t* rdx_6 = *arg3
        __builtin_memset(arg2, 0, 0x18)
        sub_140d2c570(arg2, rdx_6)
    else
        void* var_818
        int32_t rax_5 = sub_140b5e700(&var_838, &var_818)
        int32_t rdx_2 = rax_5
        wchar16 const* const var_848 = u"Blueprint"
        int32_t var_840_1 = 9
        
        if (rax_5 s> 9)
            rdx_2 = 9
        
        int32_t var_828_1 = rdx_2
        void* var_830 = &var_818 + ((sx.q(rax_5) - sx.q(rdx_2)) << 1)
        
        if (rdx_2 != 9)
            goto label_141e5ea48
        
        if (sub_140a22710(&var_848, &var_830, rdx_2 - 8) != 0)
            goto label_141e5ea48
        
        int16_t var_800_1 = 0x100
        void var_7f8
        var_818 = &var_7f8
        void* var_810_1 = &var_7f8
        void var_5f8
        void* var_808_1 = &var_5f8
        sub_140b5c850(arg3, &var_818)
        void* rcx_6 = var_810_1
        
        if (rcx_6 + 4 u>= var_808_1)
            sub_140b38e20(&var_818, 2)
            rcx_6 = var_810_1
        
        *rcx_6 = 0x43005f
        void* rax_11 = var_818
        var_848 = rax_11
        int32_t var_840_2 = ((rcx_6 + 4 - rax_11) s>> 1).d
        int128_t zmm0_1 = var_848.o
        __builtin_memset(arg2, 0, 0x18)
        var_848.o = zmm0_1
        sub_140d2c760(arg2, &var_848)
        sub_140b301c0(&var_818)
else
    __builtin_memset(arg2, 0, 0x18)

__security_check_cookie(rax_1 ^ &var_868)
return arg2
