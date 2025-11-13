// 函数: sub_142821920
// 地址: 0x142821920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
TEB* gsbase

if (data_143f89760 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f89760)
    
    if (data_143f89760 == 0xffffffff)
        int64_t var_28_1 = 0
        int64_t var_20_1 = 0xf
        char var_38 = 0
        SimpleString::operator=(&var_38, "#;/?:@&=+$_.~*'()")
        void var_58
        int32_t* rax_5 = sub_142826388(&var_58, 0x25)
        sub_1428204f8()
        void var_78
        int32_t* rax_6 = sub_142826468(&var_78, rax_5, &data_143f89678)
        sub_1428204f8()
        void var_98
        int32_t* rax_7
        char r9_1
        rax_7, r9_1 = sub_142826468(&var_98, rax_6, &data_143f89678)
        void var_b8
        int32_t* rax_8 = sub_142826308(&var_b8, &var_38, 3, r9_1)
        sub_142821f24()
        void var_d8
        sub_142826608(&data_143f89740, sub_142826608(&var_d8, &data_143f89650, rax_8), rax_7)
        void* var_d0
        
        if (var_d0 != 0)
            int64_t var_c8
            sub_14281f774(var_d0, var_c8)
            int64_t var_c0
            sub_14058ba50(var_d0, (var_c0 - var_d0) & 0xffffffffffffffe0)
            int64_t var_d0_1
            __builtin_memset(&var_d0_1, 0, 0x18)
        
        void* var_b0
        
        if (var_b0 != 0)
            int64_t var_a8
            sub_14281f774(var_b0, var_a8)
            int64_t var_a0
            sub_14058ba50(var_b0, (var_a0 - var_b0) & 0xffffffffffffffe0)
            int64_t var_b0_1
            __builtin_memset(&var_b0_1, 0, 0x18)
        
        void* var_90
        
        if (var_90 != 0)
            int64_t var_88
            sub_14281f774(var_90, var_88)
            int64_t var_80
            sub_14058ba50(var_90, (var_80 - var_90) & 0xffffffffffffffe0)
            int64_t var_90_1
            __builtin_memset(&var_90_1, 0, 0x18)
        
        void* var_70
        
        if (var_70 != 0)
            int64_t var_68
            sub_14281f774(var_70, var_68)
            int64_t var_60
            sub_14058ba50(var_70, (var_60 - var_70) & 0xffffffffffffffe0)
            int64_t var_70_1
            __builtin_memset(&var_70_1, 0, 0x18)
        
        void* var_50
        
        if (var_50 != 0)
            int64_t var_48
            sub_14281f774(var_50, var_48)
            int64_t var_40
            sub_14058ba50(var_50, (var_40 - var_50) & 0xffffffffffffffe0)
            int64_t var_50_1
            __builtin_memset(&var_50_1, 0, 0x18)
        
        if (var_20_1 u>= 0x10)
            sub_14058ba50(var_38.q, var_20_1 + 1)
        
        atexit(sub_142d143fc)
        _Init_thread_footer(&data_143f89760)

__security_check_cookie(rax_1 ^ &var_f8)
return &data_143f89740
