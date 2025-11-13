// 函数: sub_14282076c
// 地址: 0x14282076c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = arg3
void** rdi = arg1
int64_t i

if (sub_142826774(arg1).b != 0)
label_1428208b0:
    i.b = 0
else
    int32_t* rax
    
    if (arg2 != 1)
        rax = sub_142821188()
    else
        rax = sub_1428214e0()
    
    void** rdx = rdi
    
    if (rdi[3] u>= 0x10)
        rdx = *rdi
    
    void* rsi_1 = &rdi[2]
    int64_t rax_1 = *rsi_1
    void** var_40 = rdx
    int64_t var_38_1 = rax_1
    int64_t var_30_1 = 0
    i = sub_14281f52c(rax, &var_40)
    
    if (i.d s< 0)
    label_1428208b0_1:
        i.b = 0
    else
        int64_t rbx_1 = *rsi_1
        
        if (rbx_1 != 0)
            void** rcx_1 = rdi
            
            if (rdi[3] u>= 0x10)
                rcx_1 = *rdi
            
            i = sub_14058e700(rcx_1)
        
        if (rbx_1 != 0 && *(i + rbx_1 - 1) == 0x20)
        label_1428208b0_2:
            i.b = 0
        else
            TEB* gsbase
            void* r14_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
            void var_118
            void* var_110
            int64_t var_108
            int64_t var_100
            void var_f8
            void* var_f0
            int64_t var_e8
            int64_t var_e0
            void var_d8
            void* var_d0
            int64_t var_c8
            int64_t var_c0
            void var_b8
            void* var_b0
            int64_t var_a8
            int64_t var_a0
            void var_98
            void* var_90
            int64_t var_88
            int64_t var_80
            void var_78
            void* var_70
            int64_t var_68
            int64_t var_60
            
            if (data_143f89810 s> *(r14_1 + 0x14))
                _Init_thread_header(&data_143f89810)
                
                if (data_143f89810 == 0xffffffff)
                    atexit(sub_142d13e24)
                    int32_t* rax_5 = sub_14281fdb8(&var_78)
                    sub_14281fbb0()
                    int32_t* rax_6 = sub_142826468(&var_98, &data_143f895b0, rax_5)
                    sub_1428200c0()
                    int32_t* rax_7 = sub_142826608(&var_b8, &data_143f897e0, rax_6)
                    sub_142820da0()
                    int32_t* rax_8 = sub_142826608(&var_d8, rax_7, &data_143f896a0)
                    sub_142821e44()
                    int32_t* rax_9 = sub_142826608(&var_f8, rax_8, &data_143f896c8)
                    sub_14281fc38()
                    int32_t* rax_10 = sub_142826608(&var_118, rax_9, &data_143f89588)
                    sub_1428218ac()
                    sub_142826608(&data_143f89818, rax_10, &data_143f89538)
                    data_143f89808 = &data_143f89818
                    void* rcx_11 = var_110
                    
                    if (rcx_11 != 0)
                        sub_14281f774(rcx_11, var_108)
                        void* rcx_12 = var_110
                        sub_14058ba50(rcx_12, (var_100 - rcx_12) & 0xffffffffffffffe0)
                        __builtin_memset(&var_110, 0, 0x18)
                    
                    void* rcx_13 = var_f0
                    
                    if (rcx_13 != 0)
                        sub_14281f774(rcx_13, var_e8)
                        void* rcx_14 = var_f0
                        sub_14058ba50(rcx_14, (var_e0 - rcx_14) & 0xffffffffffffffe0)
                        __builtin_memset(&var_f0, 0, 0x18)
                    
                    void* rcx_15 = var_d0
                    
                    if (rcx_15 != 0)
                        sub_14281f774(rcx_15, var_c8)
                        void* rcx_16 = var_d0
                        sub_14058ba50(rcx_16, (var_c0 - rcx_16) & 0xffffffffffffffe0)
                        __builtin_memset(&var_d0, 0, 0x18)
                    
                    void* rcx_17 = var_b0
                    
                    if (rcx_17 != 0)
                        sub_14281f774(rcx_17, var_a8)
                        void* rcx_18 = var_b0
                        sub_14058ba50(rcx_18, (var_a0 - rcx_18) & 0xffffffffffffffe0)
                        __builtin_memset(&var_b0, 0, 0x18)
                    
                    void* rcx_19 = var_90
                    
                    if (rcx_19 != 0)
                        sub_14281f774(rcx_19, var_88)
                        void* rcx_20 = var_90
                        sub_14058ba50(rcx_20, (var_80 - rcx_20) & 0xffffffffffffffe0)
                        __builtin_memset(&var_90, 0, 0x18)
                    
                    if (var_70 != 0)
                        sub_14281f774(var_70, var_68)
                        sub_14058ba50(var_70, (var_60 - var_70) & 0xffffffffffffffe0)
                    
                    _Init_thread_footer(&data_143f89810)
            
            if (data_143f89840 s> *(r14_1 + 0x14))
                _Init_thread_header(&data_143f89840)
                
                if (data_143f89840 == 0xffffffff)
                    atexit(sub_142d13e7c)
                    int32_t* rax_11 = sub_14281fdb8(&var_78)
                    sub_14281fbb0()
                    int32_t* rax_12 = sub_142826468(&var_118, &data_143f895b0, rax_11)
                    sub_14281ff5c()
                    int32_t* rax_13 = sub_142826608(&var_f8, &data_143f897b8, rax_12)
                    sub_142820da0()
                    int32_t* rax_14 = sub_142826608(&var_d8, rax_13, &data_143f896a0)
                    sub_142821e44()
                    int32_t* rax_15 = sub_142826608(&var_b8, rax_14, &data_143f896c8)
                    sub_14281fc38()
                    int32_t* rax_16 = sub_142826608(&var_98, rax_15, &data_143f89588)
                    sub_1428218ac()
                    sub_142826608(&data_143f89848, rax_16, &data_143f89538)
                    data_143f89838 = &data_143f89848
                    void* rcx_29 = var_90
                    
                    if (rcx_29 != 0)
                        sub_14281f774(rcx_29, var_88)
                        void* rcx_30 = var_90
                        sub_14058ba50(rcx_30, (var_80 - rcx_30) & 0xffffffffffffffe0)
                        int64_t var_90_1
                        __builtin_memset(&var_90_1, 0, 0x18)
                    
                    void* rcx_31 = var_b0
                    
                    if (rcx_31 != 0)
                        sub_14281f774(rcx_31, var_a8)
                        void* rcx_32 = var_b0
                        sub_14058ba50(rcx_32, (var_a0 - rcx_32) & 0xffffffffffffffe0)
                        int64_t var_b0_1
                        __builtin_memset(&var_b0_1, 0, 0x18)
                    
                    void* rcx_33 = var_d0
                    
                    if (rcx_33 != 0)
                        sub_14281f774(rcx_33, var_c8)
                        void* rcx_34 = var_d0
                        sub_14058ba50(rcx_34, (var_c0 - rcx_34) & 0xffffffffffffffe0)
                        int64_t var_d0_1
                        __builtin_memset(&var_d0_1, 0, 0x18)
                    
                    void* rcx_35 = var_f0
                    
                    if (rcx_35 != 0)
                        sub_14281f774(rcx_35, var_e8)
                        void* rcx_36 = var_f0
                        sub_14058ba50(rcx_36, (var_e0 - rcx_36) & 0xffffffffffffffe0)
                        int64_t var_f0_1
                        __builtin_memset(&var_f0_1, 0, 0x18)
                    
                    void* rcx_37 = var_110
                    
                    if (rcx_37 != 0)
                        sub_14281f774(rcx_37, var_108)
                        void* rcx_38 = var_110
                        sub_14058ba50(rcx_38, (var_100 - rcx_38) & 0xffffffffffffffe0)
                        int64_t var_110_1
                        __builtin_memset(&var_110_1, 0, 0x18)
                    
                    if (var_70 != 0)
                        sub_14281f774(var_70, var_68)
                        sub_14058ba50(var_70, (var_60 - var_70) & 0xffffffffffffffe0)
                    
                    _Init_thread_footer(&data_143f89840)
            
            int32_t* rbx_2 = data_143f89838
            
            if (arg2 == 1)
                rbx_2 = data_143f89808
            
            if (rdi[3] u>= 0x10)
                rdi = *rdi
            
            void** var_58 = rdi
            i = *rsi_1
            void* var_48_1 = nullptr
            
            if (i != 0)
                char* rdx_3
                
                do
                    if (sub_14281f760(rbx_2, &var_58).b != 0)
                        goto label_1428208b0_2
                    
                    rdx_3 = var_48_1
                    
                    if (r12.b != 0 && *(rdx_3 + var_58) u>= 0x80)
                        goto label_1428208b0_2
                    
                    var_48_1 = &rdx_3[1]
                while (&rdx_3[1] u< i)
            
            i.b = 1

return i
