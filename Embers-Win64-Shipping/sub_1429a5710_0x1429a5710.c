// 函数: sub_1429a5710
// 地址: 0x1429a5710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
void* result = __security_cookie ^ &var_c8
void* result_2 = result
int32_t* i = arg2
uint16_t result_1
struct std::exception::Iex_2_3::BaseExc::VTable* exceptionObject
uint128_t zmm0

if (arg5 == 0)
    if (arg7 != 1)
        if (arg8 == 0)
            if (arg9 == 0)
                if (i u<= arg3)
                    void* rdi_1 = i + 2
                    
                    do
                        *(rdi_1 - 2) = **arg1
                        *(rdi_1 - 1) = *(*arg1 + 1)
                        *rdi_1 = *(*arg1 + 2)
                        *(rdi_1 + 1) = *(*arg1 + 3)
                        rdi_1 += arg4
                        *arg1 += 4
                        result = rdi_1 - 2
                    while (result u<= arg3)
            else if (arg9 != 1)
                if (arg9 != 2)
                    sub_14297d3f0(&exceptionObject, "Unknown pixel data type.")
                    _CxxThrowException(&exceptionObject, &data_143946538)
                    noreturn
                
                if (i u<= arg3)
                    void* rcx_38 = *arg1
                    
                    do
                        char var_a7_3 = *(rcx_38 + 1)
                        char var_a6_3 = *(rcx_38 + 2)
                        char var_a5_3 = *(rcx_38 + 3)
                        result = sub_1429bd0b0((*rcx_38).d.d)
                        *i = result.d
                        i += arg4
                        *arg1 += 4
                        rcx_38 = *arg1
                    while (i u<= arg3)
            else
                while (i u<= arg3)
                    result = sub_1429bd110(**arg1)
                    *i = result.d
                    i += arg4
                    *arg1 += 2
        else if (arg8 != 1)
            if (arg8 != 2)
                sub_14297d3f0(&exceptionObject, "Unknown pixel data type.")
                _CxxThrowException(&exceptionObject, &data_143946538)
                noreturn
            
            if (arg9 == 0)
                if (i u<= arg3)
                    void* rcx_24 = *arg1
                    
                    do
                        result_1.b = *rcx_24
                        result_1:1.b = *(rcx_24 + 1)
                        char var_a2_1 = *(rcx_24 + 2)
                        char rax_40 = *(rcx_24 + 3)
                        rcx_24 = *arg1 + 4
                        char var_a1_1 = rax_40
                        result = zx.q(result_1.d)
                        *arg1 = rcx_24
                        zmm0.d = float.s(result)
                        *i = zmm0.d
                        i += arg4
                    while (i u<= arg3)
            else if (arg9 != 1)
                if (arg9 != 2)
                    sub_14297d3f0(&exceptionObject, "Unknown pixel data type.")
                    _CxxThrowException(&exceptionObject, &data_143946538)
                    noreturn
                
                if (i u<= arg3)
                    void* rdi = i + 2
                    
                    do
                        *(rdi - 2) = **arg1
                        *(rdi - 1) = *(*arg1 + 1)
                        *rdi = *(*arg1 + 2)
                        *(rdi + 1) = *(*arg1 + 3)
                        rdi += arg4
                        *arg1 += 4
                        result = rdi - 2
                    while (result u<= arg3)
            else if (i u<= arg3)
                void* rcx_23 = *arg1
                
                do
                    uint64_t rax_36 = zx.q(*rcx_23)
                    rcx_23 += 2
                    result = zx.q(*(&data_1436bbc50 + (rax_36 << 2)))
                    *i = result.d
                    i += arg4
                    *arg1 = rcx_23
                while (i u<= arg3)
        else if (arg9 == 0)
            if (i u<= arg3)
                void* rcx_33 = *arg1
                
                do
                    char var_a7_2 = *(rcx_33 + 1)
                    char var_a6_2 = *(rcx_33 + 2)
                    char var_a5_2 = *(rcx_33 + 3)
                    result = sub_1429bd160(&result_1, (*rcx_33).d)
                    *i = *result
                    i += arg4
                    *arg1 += 4
                    rcx_33 = *arg1
                while (i u<= arg3)
        else if (arg9 != 1)
            if (arg9 != 2)
                sub_14297d3f0(&exceptionObject, "Unknown pixel data type.")
                _CxxThrowException(&exceptionObject, &data_143946538)
                noreturn
            
            if (i u<= arg3)
                void* rcx_28 = *arg1
                
                do
                    char var_a7_1 = *(rcx_28 + 1)
                    char var_a6_1 = *(rcx_28 + 2)
                    char var_a5_1 = *(rcx_28 + 3)
                    result = sub_1429bd040(&result_1, (*rcx_28).d.d)
                    *i = *result
                    i += arg4
                    *arg1 += 4
                    rcx_28 = *arg1
                while (i u<= arg3)
        else if (arg4 == 2)
            int64_t rbx_3 = sx.q(arg3.d - i.d + arg4.d)
            result = memcpy(i, *arg1, rbx_3.d)
            *arg1 += rbx_3
        else
            while (i u<= arg3)
                result = *arg1
                *i = *result
                i += arg4
                *arg1 += 2
    else
        char var_a8
        
        if (arg8 == 0)
            if (arg9 == 0)
                for (; i u<= arg3; i += arg4)
                    void* rax_28 = *arg1
                    uint32_t r10_6 = zx.d(*rax_28)
                    *arg1 = rax_28 + 1
                    uint32_t r9_6 = zx.d(*(rax_28 + 1))
                    *arg1 = rax_28 + 2
                    uint32_t rdx_16 = zx.d(*(rax_28 + 2))
                    *arg1 = rax_28 + 3
                    result = rax_28 + 4
                    uint32_t r8_32 = zx.d(*(rax_28 + 3)) << 8 | rdx_16
                    *arg1 = result
                    *i = (r8_32 << 8 | r9_6) << 8 | r10_6
            else if (arg9 != 1)
                if (arg9 != 2)
                    sub_14297d3f0(&exceptionObject, "Unknown pixel data type.")
                    _CxxThrowException(&exceptionObject, &data_143946538)
                    noreturn
                
                for (; i u<= arg3; i += arg4)
                    void* rax_20 = *arg1
                    uint32_t r10_5 = zx.d(*rax_20)
                    *arg1 = rax_20 + 1
                    uint32_t r9_5 = zx.d(*(rax_20 + 1))
                    *arg1 = rax_20 + 2
                    uint32_t rdx_14 = zx.d(*(rax_20 + 2))
                    *arg1 = rax_20 + 3
                    uint32_t r8_25 = zx.d(*(rax_20 + 3)) << 8 | rdx_14
                    *arg1 = rax_20 + 4
                    var_a8.d = (r8_25 << 8 | r9_5) << 8 | r10_5
                    result = sub_1429bd0b0(var_a8.d.d)
                    *i = result.d
            else
                for (; i u<= arg3; i += arg4)
                    void* rax_25 = *arg1
                    uint16_t rdx_15 = zx.w(*rax_25)
                    *arg1 = rax_25 + 1
                    uint16_t rcx_15 = zx.w(*(rax_25 + 1)) << 8 | rdx_15
                    *arg1 = rax_25 + 2
                    result = sub_1429bd110(rcx_15)
                    *i = result.d
        else if (arg8 != 1)
            if (arg8 != 2)
                sub_14297d3f0(&exceptionObject, "Unknown pixel data type.")
                _CxxThrowException(&exceptionObject, &data_143946538)
                noreturn
            
            if (arg9 == 0)
                if (i u<= arg3)
                    void* r11_2 = *arg1
                    
                    do
                        uint32_t r10_2 = zx.d(*r11_2)
                        *arg1 = r11_2 + 1
                        uint32_t r9_2 = zx.d(*(r11_2 + 1))
                        *arg1 = r11_2 + 2
                        uint32_t rdx_4 = zx.d(*(r11_2 + 2))
                        *arg1 = r11_2 + 3
                        uint32_t r8_8 = zx.d(*(r11_2 + 3))
                        r11_2 += 4
                        *arg1 = r11_2
                        result = zx.q(r10_2) | zx.q(((r8_8 << 8 | rdx_4) << 8 | r9_2) << 8)
                        zmm0.d = float.s(result)
                        *i = zmm0.d
                        i += arg4
                    while (i u<= arg3)
            else if (arg9 != 1)
                if (arg9 != 2)
                    sub_14297d3f0(&exceptionObject, "Unknown pixel data type.")
                    _CxxThrowException(&exceptionObject, &data_143946538)
                    noreturn
                
                if (i u<= arg3)
                    void* r11_1 = *arg1
                    
                    do
                        uint32_t r10_1 = zx.d(*r11_1)
                        *arg1 = r11_1 + 1
                        uint32_t r9 = zx.d(*(r11_1 + 1))
                        *arg1 = r11_1 + 2
                        uint32_t rdx = zx.d(*(r11_1 + 2))
                        result = r11_1 + 3
                        *arg1 = result
                        r11_1 = result + 1
                        uint32_t r8_2 = zx.d(*result) << 8 | rdx
                        *arg1 = r11_1
                        *i = (r8_2 << 8 | r9) << 8 | r10_1
                        i += arg4
                    while (i u<= arg3)
            else if (i u<= arg3)
                void* r9_1 = *arg1
                
                do
                    uint64_t r8_7 = zx.q(*r9_1)
                    void* rax_3 = r9_1 + 1
                    *arg1 = rax_3
                    r9_1 = rax_3 + 1
                    uint64_t rdx_3 = zx.q(*rax_3) << 8 | r8_7
                    *arg1 = r9_1
                    result = zx.q(*(&data_1436bbc50 + (rdx_3 << 2)))
                    *i = result.d
                    i += arg4
                while (i u<= arg3)
        else if (arg9 == 0)
            for (; i u<= arg3; i += arg4)
                void* rax_15 = *arg1
                uint32_t r10_4 = zx.d(*rax_15)
                *arg1 = rax_15 + 1
                uint32_t r9_4 = zx.d(*(rax_15 + 1))
                *arg1 = rax_15 + 2
                uint32_t r8_22 = zx.d(*(rax_15 + 2))
                *arg1 = rax_15 + 3
                uint32_t rdx_9 = zx.d(*(rax_15 + 3)) << 8 | r8_22
                *arg1 = rax_15 + 4
                result = sub_1429bd160(&result_1, (rdx_9 << 8 | r9_4) << 8 | r10_4)
                *i = *result
        else if (arg9 != 1)
            if (arg9 != 2)
                sub_14297d3f0(&exceptionObject, "Unknown pixel data type.")
                _CxxThrowException(&exceptionObject, &data_143946538)
                noreturn
            
            for (; i u<= arg3; i += arg4)
                char* rax_8 = *arg1
                uint32_t r10_3 = zx.d(*rax_8)
                *arg1 = &rax_8[1]
                uint32_t r9_3 = zx.d(rax_8[1])
                *arg1 = &rax_8[2]
                uint32_t rdx_5 = zx.d(rax_8[2])
                *arg1 = &rax_8[3]
                uint32_t r8_16 = zx.d(rax_8[3]) << 8 | rdx_5
                *arg1 = &rax_8[4]
                var_a8.d = (r8_16 << 8 | r9_3) << 8 | r10_3
                result = sub_1429bd040(&result_1, var_a8.d.d)
                *i = *result
        else
            for (; i u<= arg3; i += arg4)
                void* rax_13 = *arg1
                uint16_t r8_21 = zx.w(*rax_13)
                *arg1 = rax_13 + 1
                result = rax_13 + 2
                uint16_t rdx_6 = zx.w(*(rax_13 + 1)) << 8 | r8_21
                *arg1 = result
                *i = rdx_6
else if (arg8 == 0)
    result = int.q(fconvert.t(arg6))
    
    for (; i u<= arg3; i += arg4)
        *i = result.d
else if (arg8 == 1)
    result = sub_142989720(&result_1, _mm_cvtpd_ps(zx.o(arg6)).d)
    
    if (i u<= arg3)
        result = zx.q(result_1)
        
        do
            *i = result.w
            i += arg4
        while (i u<= arg3)
else
    if (arg8 != 2)
        sub_14297d3f0(&exceptionObject, "Unknown pixel data type.")
        _CxxThrowException(&exceptionObject, &data_143946538)
        noreturn
    
    zmm0 = _mm_cvtpd_ps(zx.o(arg6))
    
    if (arg2 u<= arg3)
        do
            *i = zmm0.d
            i += arg4
        while (i u<= arg3)
__security_check_cookie(result_2 ^ &var_c8)
return result
