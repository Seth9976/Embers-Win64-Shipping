// 函数: sub_14058f770
// 地址: 0x14058f770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
int64_t var_10 = r12
void var_248
int64_t rax_1 = __security_cookie ^ &var_248
void* r14 = arg1
void* var_1e0 = arg1
int64_t* var_188 = arg2
int32_t rdi = 0
int32_t var_1e8 = 0
int64_t* rcx = *(arg1 + 8)
int32_t var_1d8
(**rcx)(rcx, &var_1d8)
int64_t var_1c0
class std::basic_ostream<wchar_t,struct std::char_traits<wchar_t> >* result

if (var_1c0 != 0)
    int32_t var_228
    int32_t var_1d4
    int32_t var_1d0
    int64_t var_1c8
    uint64_t var_180
    uint64_t var_f8
    
    while (true)
        result = *(r14 + 8)
        
        if (*(result + 0x30) == 0)
            break
        
        void** rax_4 = sub_140593a10(std::wclog, "Saving screenshot "")
        void* rcx_4 = *(r14 + 8)
        wchar16* rdx_4 = *(*(rcx_4 + 0x18) + (((*(rcx_4 + 0x20) - 1) & *(rcx_4 + 0x28)) << 3))
        wchar16* r8_1 = *(rdx_4 + 0x10)
        
        if (*(rdx_4 + 0x18) u>= 8)
            rdx_4 = *rdx_4
        
        std::wostream::operator<<(sub_140593a10(sub_1405943c0(rax_4, rdx_4, r8_1), ""..."), 
            sub_140593eb0)
        void* rax_7 = *(r14 + 8)
        void** rdx_5 = *(*(rax_7 + 0x18) + (((*(rax_7 + 0x20) - 1) & *(rax_7 + 0x28)) << 3))
        int64_t rax_9 = rdx_5[2]
        
        if (rdx_5[3] u>= 8)
            rdx_5 = *rdx_5
        
        int64_t var_140_1 = rax_9
        int128_t var_198 = rdx_5.o
        int64_t* var_98
        sub_1405945d0(&var_98, &var_198)
        int32_t rdi_1 = rdi | 1
        var_1e8 = rdi_1
        int64_t* rcx_13 = &var_98
        int64_t var_80
        
        if (var_80 u>= 8)
            rcx_13 = var_98
        
        int64_t var_88
        void* rbx_1 = rcx_13 + (var_88 << 1)
        void* r11_1 = rbx_1
        int32_t* rax_11 = sub_14058eef0(rcx_13, rbx_1)
        
        if (rax_11 != rbx_1)
            void* rdx_8
            
            do
                rdx_8 = r11_1 - 2
                int16_t rcx_14 = *rdx_8
                
                if (rcx_14 == 0x5c)
                    break
                
                if (rcx_14 == 0x2f)
                    break
                
                r11_1 = rdx_8
            while (rax_11 != rdx_8)
        
        void* rcx_15 = r11_1
        void* rax_12
        
        if (r11_1 == rbx_1)
        labelid_58:
            rax_12 = rcx_15
        else
            while (*rcx_15 != 0x3a)
                rcx_15 += 2
                
                if (rcx_15 == rbx_1)
                    break
            
            if (r11_1 == rcx_15)
            labelid_58:
                rax_12 = rcx_15
            else
                rax_12 = rcx_15 - 2
                
                if (r11_1 == rax_12)
                label_14058f98f:
                    rax_12 = rcx_15
                else if (*rax_12 != 0x2e)
                    rax_12 -= 2
                    
                    if (r11_1 == rax_12)
                    label_14058f98f_1:
                        rax_12 = rcx_15
                    else
                        while (*rax_12 != 0x2e)
                            rax_12 -= 2
                            
                            if (r11_1 == rax_12)
                                goto label_14058f98f_2
                else if (r11_1 == rax_12 - 2 && *(rax_12 - 2) == 0x2e)
                label_14058f98f_2:
                    rax_12 = rcx_15
        
        int64_t var_130_1 = (rcx_15 - rax_12) s>> 1
        var_198 = rax_12.o
        int64_t* var_78
        sub_1405945d0(&var_78, &var_198)
        int32_t rdi_2 = rdi_1 | 6
        var_1e8 = rdi_2
        int64_t var_110_1 = 0
        int64_t var_108_1 = 0
        int64_t* rsi_1 = &var_78
        int64_t var_60
        r12.b = var_60 u>= 8
        int64_t* r14_1 = var_78
        
        if (var_60 u>= 8)
            rsi_1 = r14_1
        
        int64_t var_68
        int128_t var_120
        int64_t var_108_2
        
        if (var_68 u>= 8)
            int64_t rdi_4 = var_68 | 7
            
            if (rdi_4 u> 0x7ffffffffffffffe)
                rdi_4 = 0x7ffffffffffffffe
            
            if (rdi_4 + 1 u> 0x7fffffffffffffff)
                stdext::threads::_Throw_lock_error()
                noreturn
            
            int64_t rcx_20 = (rdi_4 + 1) * 2
            void* const rax_16
            
            if (rcx_20 u< 0x1000)
                if (rcx_20 == 0)
                    rax_16 = nullptr
                else
                    rax_16 = j_sub_140a82f30(rcx_20)
                
                goto label_14058faab
            
            if (rcx_20 + 0x27 u<= rcx_20)
                stdext::threads::_Throw_lock_error()
                noreturn
            
            int64_t rax_14 = j_sub_140a82f30(rcx_20 + 0x27)
            
            if (rax_14 != 0)
                rax_16 = (rax_14 + 0x27) & 0xffffffffffffffe0
                *(rax_16 - 8) = rax_14
            label_14058faab:
                var_120.q = rax_16
                memcpy(rax_16, rsi_1, (var_68 << 1).d + 2)
                var_108_2 = rdi_4
                rdi_2 = var_1e8
                goto label_14058fad2
        else
            var_120 = *rsi_1
            var_108_2 = 7
        label_14058fad2:
            int64_t var_110_2 = var_68
            var_1e8 = rdi_2 | 8
            int32_t rax_17 = sub_14058f4d0(&var_120)
            
            if (var_108_2 u< 8)
                goto label_14058fb3d
            
            void* rcx_25 = var_120.q
            void* rax_18 = rcx_25
            
            if ((var_108_2 << 1) + 2 u>= 0x1000)
                rcx_25 = *(rcx_25 - 8)
            
            if ((var_108_2 << 1) + 2 u< 0x1000 || rax_18 - rcx_25 - 8 u<= 0x1f)
                arg4 = j_sub_140a74f90(rcx_25)
            label_14058fb3d:
                int64_t var_110_3 = 0
                int64_t var_108_3 = 7
                var_120.w = 0
                
                if (r12.b != 0)
                    int64_t* rax_21 = r14_1
                    
                    if ((var_60 << 1) + 2 u>= 0x1000)
                        r14_1 = r14_1[-1]
                        
                        if (rax_21 - r14_1 - 8 u> 0x1f)
                            _invalid_parameter_noinfo_noreturn()
                            noreturn
                    
                    arg4 = j_sub_140a74f90(r14_1)
                
                uint64_t r10_1 = zx.q(var_1d4)
                var_180 = r10_1
                uint64_t r9_1 = zx.q(var_1d0)
                uint64_t var_178_1 = r9_1
                int32_t rcx_27 = var_1d8
                int32_t rdx_15
                
                if (rcx_27 == 0)
                    rdx_15 = 0x57
                else if (rcx_27 == 1)
                    rdx_15 = 0x1c
                else
                    rdx_15 = 0x18
                
                int32_t var_170_1 = rdx_15
                int64_t var_168_1 = var_1c8
                int64_t var_160_1 = r9_1 * var_1c8
                int64_t var_158_1 = var_1c0
                r14 = arg1
                void* rax_27 = *(r14 + 8)
                
                if (rax_17 == 0xffff0001)
                    void** r8_5 =
                        *(*(rax_27 + 0x18) + (((*(rax_27 + 0x20) - 1) & *(rax_27 + 0x28)) << 3))
                    
                    if (r8_5[3] u>= 8)
                        r8_5 = *r8_5
                    
                    int128_t var_d8
                    var_d8:8.q = 0
                    var_f8 = r10_1
                    uint64_t var_f0_1 = r9_1
                    int128_t var_e8
                    __builtin_memcpy(&var_e8, 
                        "\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x01\x00\x00\x"
                    "00\x00\x00\x00\x00", 
                        0x18)
                    int128_t var_c8
                    var_c8.d = rdx_15
                    var_c8:4.d = 3
                    var_228.q = r8_5
                    enum WIN32_ERROR exceptionObject_5
                    exceptionObject_5, arg4 = sub_14284c490(&var_180, 1, &var_f8, 0, var_228)
                    
                    if (exceptionObject_5 s< NO_ERROR)
                        enum WIN32_ERROR exceptionObject_2 = exceptionObject_5
                        _CxxThrowException(&exceptionObject_2, &data_143948c48)
                        noreturn
                else if (rax_17 == 0xffff0002)
                    PWSTR r8_4 =
                        *(*(rax_27 + 0x18) + (((*(rax_27 + 0x20) - 1) & *(rax_27 + 0x28)) << 3))
                    
                    if (*(r8_4 + 0x18) u>= 8)
                        r8_4 = *r8_4
                    
                    enum WIN32_ERROR exceptionObject_4
                    exceptionObject_4, arg4 = sub_14283e4b0(&var_180, 0, r8_4, nullptr)
                    
                    if (exceptionObject_4 s< NO_ERROR)
                        enum WIN32_ERROR exceptionObject_1 = exceptionObject_4
                        _CxxThrowException(&exceptionObject_1, &data_143948c48)
                        noreturn
                else
                    int64_t var_40_1 = 0
                    void** rbx_3 =
                        *(*(rax_27 + 0x18) + (((*(rax_27 + 0x20) - 1) & *(rax_27 + 0x28)) << 3))
                    
                    if (rbx_3[3] u>= 8)
                        rbx_3 = *rbx_3
                    
                    int32_t var_220
                    var_220.q = &var_78
                    var_228.q = 0
                    int32_t exceptionObject_3
                    exceptionObject_3, arg4, arg3 = sub_14284c250(&var_180, 0, 
                        sub_14284b1f0(rax_17), rbx_3, arg4, arg3, var_228, var_220)
                    
                    if (exceptionObject_3 s< 0)
                        int32_t exceptionObject = exceptionObject_3
                        _CxxThrowException(&exceptionObject, &data_143948c48)
                        noreturn
                
                void** rax_32 = sub_140593a10(std::wclog, "Screenshot "")
                void* rcx_40 = *(r14 + 8)
                wchar16* rdx_22 =
                    *(*(rcx_40 + 0x18) + (((*(rcx_40 + 0x20) - 1) & *(rcx_40 + 0x28)) << 3))
                wchar16* r8_7 = *(rdx_22 + 0x10)
                
                if (*(rdx_22 + 0x18) u>= 8)
                    rdx_22 = *rdx_22
                
                std::wostream::operator<<(
                    sub_140593a10(sub_1405943c0(rax_32, rdx_22, r8_7), "" has been saved."), 
                    sub_140593eb0)
                
                if (var_80 u>= 8)
                    int64_t* rcx_45 = var_98
                    int64_t* rax_35 = rcx_45
                    
                    if ((var_80 << 1) + 2 u>= 0x1000)
                        rcx_45 = rcx_45[-1]
                        
                        if (rax_35 - rcx_45 - 8 u> 0x1f)
                            _invalid_parameter_noinfo_noreturn()
                            noreturn
                    
                    arg4 = j_sub_140a74f90(rcx_45)
                
                void* rbx_4 = *(r14 + 8)
                int64_t* rdi_7 =
                    *(*(rbx_4 + 0x18) + (((*(rbx_4 + 0x20) - 1) & *(rbx_4 + 0x28)) << 3))
                int64_t rdx_25 = rdi_7[3]
                
                if (rdx_25 u>= 8)
                    void* rcx_49 = *rdi_7
                    
                    if ((rdx_25 << 1) + 2 u>= 0x1000)
                        void* r8_8 = *(rcx_49 - 8)
                        
                        if (rcx_49 - r8_8 - 8 u> 0x1f)
                            _invalid_parameter_noinfo_noreturn()
                            noreturn
                        
                        rcx_49 = r8_8
                    
                    arg4 = j_sub_140a74f90(rcx_49)
                
                rdi_7[2] = 0
                rdi_7[3] = 7
                *rdi_7 = 0
                int64_t temp1_1 = *(rbx_4 + 0x30)
                *(rbx_4 + 0x30) -= 1
                
                if (temp1_1 != 1)
                    *(rbx_4 + 0x28) += 1
                else
                    *(rbx_4 + 0x28) = 0
                
                rdi = var_1e8
                continue
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    if (*(result + 0x38) != 0 && arg2[7] != 0)
        av_init_packet(arg2[4])
        *(arg2[4] + 0x18) = 0
        *(arg2[4] + 0x20) = 0
        __builtin_memset(&var_f8, 0, 0x58)
        int32_t rcx_52 = var_1d8
        void** rax_50
        int32_t rbx_5
        
        if (rcx_52 == 0)
            rbx_5 = 0x1c
        else if (rcx_52 == 1)
            rbx_5 = 0x1a
        else
            var_180 = zx.q(var_1d4)
            uint64_t rcx_53 = zx.q(var_1d0)
            uint64_t var_178_2 = rcx_53
            int32_t var_170_2 = 0x18
            int64_t var_168_2 = var_1c8
            int64_t var_160_2 = rcx_53 * var_1c8
            int64_t var_158_2 = var_1c0
            int32_t rcx_55 = *(arg2[5] + 0x74)
            rbx_5 = 0x6b
            
            if (rcx_55 != 0x40)
                rbx_5 = 0x1a
            
            int32_t rdx_27 = 0xb
            
            if (rcx_55 != 0x40)
                rdx_27 = 0x1c
            
            var_228.q = &var_f8
            
            if (_fcvt(&var_180, rdx_27, 0, 0x3f000000, var_228) s< 0)
                rax_50 = sub_140593a10(
                    std::wostream::operator<<(sub_140593a10(
                        sub_140593a10(std::wcerr, "Fail to convert frame for video"), " (hr=")), 
                    ").")
                goto label_140590192
            
            void* rax_51 = sub_14284d320(&var_f8, 0, 0, 0)
            var_1c8 = *(rax_51 + 0x18)
            var_1c0 = *(rax_51 + 0x28)
        
        void* rax_53 = arg2[5]
        int32_t rdx_28 = *(rax_53 + 0x74)
        int32_t r8_9 = *(rax_53 + 0x6c)
        int32_t r10_2 = *(rax_53 + 0x68)
        int64_t rcx_63 = arg2[3]
        arg2[3] = 0
        int64_t var_208
        __builtin_memset(&var_208, 0, 0x18)
        int64_t var_200
        int64_t var_1f8
        int64_t rax_54 = sws_getCachedContext(rcx_63, zx.q(var_1d4), zx.q(var_1d0), zx.q(rbx_5), 
            r10_2, r8_9, rdx_28, 2, var_208, var_200, var_1f8)
        int64_t rcx_64 = arg2[3]
        arg2[3] = rax_54
        
        if (rcx_64 != 0)
            arg2[2](rcx_64)
        
        int64_t* rcx_65
        char* rdx_30
        
        if (arg2[3] != 0)
            var_1e8 = var_1c8.d
            int32_t rax_57 = av_frame_make_writable(arg2[5])
            int32_t rsi_2 = rax_57
            
            if (rax_57 s< 0)
            label_140590157:
                int64_t* rax_64 =
                    sub_140593a10(std::wcerr, "Fail to prepare video frame for writing: ")
                char* rbx_6 = *arg2
                av_strerror(zx.q(rsi_2), rbx_6, 0x40)
                rcx_65 = rax_64
                rdx_30 = rbx_6
                goto label_140590183
            
            int64_t rdx_31 = arg2[5]
            int32_t var_218_1
            var_218_1.q = rdx_31 + 0x40
            int32_t var_220_1
            var_220_1.q = rdx_31
            sws_scale(arg2[3], &var_1c0, &var_1e8, 0, var_1d0, var_220_1, var_218_1)
            sub_14284d590(&var_f8)
            int64_t i
            
            do
                int32_t rax_60 = av_frame_make_writable(arg2[5])
                rsi_2 = rax_60
                
                if (rax_60 s< 0)
                    goto label_140590157
                
                void* rax_61 = arg2[5]
                *(rax_61 + 0x88) += 1
                
                if (sub_14058f120(arg2) == 0)
                    goto label_14059019b
                
                void* rax_63 = *(r14 + 8)
                i = *(rax_63 + 0x38)
                *(rax_63 + 0x38) -= 1
            while (i != 1)
        else
            rdx_30 = "Fail to convert frame for video"
            rcx_65 = std::wcerr
        label_140590183:
            rax_50 = sub_140593c70(sub_140593a10(rcx_65, rdx_30), 0x2e)
        label_140590192:
            std::wostream::operator<<(rax_50, sub_140593eb0)
        label_14059019b:
            sub_14058f290(arg2)
        result = sub_14284d590(&var_f8)
else
    result = std::wostream::operator<<(
        sub_140593a10(std::wcerr, "Invalid frame occured. Skipping it."), sub_140593eb0)

__security_check_cookie(rax_1 ^ &var_248)
return result
