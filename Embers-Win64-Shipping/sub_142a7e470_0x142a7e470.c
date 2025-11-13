// 函数: sub_142a7e470
// 地址: 0x142a7e470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_1b8 = -2
void var_258
int64_t rax_1 = __security_cookie ^ &var_258
char* string_1 = arg1
int32_t var_1f8 = 0
int64_t r14
r14.b = 0

if (arg1 == 0)
label_142a7e529:
    r14.b = 1
else
    int64_t rcx = 0
    
    while (true)
        char rax_3 = string_1[rcx]
        rcx += 1
        
        if (rax_3 != *(rcx + 0x14363dfdf))
            break
        
        if (rcx == 8)
            goto label_142a7e529_2
    
    if (strncmp(string_1, "icudt64l-", 9) == 0)
    label_142a7e529_1:
        r14.b = 1
    else if (strncmp(string_1, "ICUDATA-", 8) == 0)
    label_142a7e529_2:
        r14.b = 1

int16_t var_8c
void* string = &var_8c:1
int32_t var_90 = 0x28
var_8c = 0
int32_t var_60 = 0
void* var_1e8
uint128_t zmm1

if (string_1 != 0 && strchr(string_1, 0x2f) != 0)
    zmm1 = *sub_142a85330(&var_1e8, string_1)
    sub_142a8cbd0(&string, zmm1.q, _mm_bsrli_si128(zmm1, 8).d, arg6)
    
    for (char* i = strchr(string, 0x2f); i != 0; i = strchr(string, 0x2f))
        *i = 0x5c
    
    string_1 = string

int16_t var_14c
void* var_158 = &var_14c:1
int32_t var_150 = 0x28
var_14c = 0
int32_t var_120 = 0
int16_t var_cc
void* var_d8 = &var_cc:1
int32_t var_d0 = 0x28
var_cc = 0
int32_t var_a0 = 0
int16_t var_18c
void* string_2 = &var_18c:1
int32_t var_190 = 0x28
var_18c = 0
int32_t var_160 = 0
int16_t var_10c
void* var_118 = &var_10c:1
int32_t var_110 = 0x28
var_10c = 0
int32_t var_e0 = 0
char* string_4 = "icudt64l"
void var_1c8

if (string_1 != 0)
    char* rax_8 = strrchr(string_1, 0x5c)
    var_1e8 = strchr(string_1, 0x5c)
    char const* const string_3
    
    if (sub_142a4bcf0(string_1) != 0 || rax_8 != var_1e8)
        string_3 = &rax_8[1]
        
        if (rax_8 == 0)
            string_3 = string_1
        
        goto label_142a7e735
    
    char* rax_11 = strchr(string_1, 0x2d)
    int64_t* rcx_8 = &var_1c8
    
    if (rax_11 == 0)
        if (r14.b == 0)
            string_3 = string_1
        else
            string_3 = "icudt64l"
        
        zmm1 = *sub_142a85330(rcx_8, string_3)
        sub_142a8cbd0(&string_2, zmm1.q, _mm_bsrli_si128(zmm1, 8).d, arg6)
    else
        zmm1 = *sub_142a85330(rcx_8, rax_11 + 1)
        sub_142a8cbd0(&var_118, zmm1.q, _mm_bsrli_si128(zmm1, 8).d, arg6)
        
        if (r14.b == 0)
            sub_142a8cbd0(&string_2, string_1, rax_11.d - string_1.d, arg6)
            
            if (var_1e8 == 0)
                string_1 = string_2
        else
            string_3 = "icudt64l"
        label_142a7e735:
            zmm1 = *sub_142a85330(&var_1c8, string_3)
            sub_142a8cbd0(&string_2, zmm1.q, _mm_bsrli_si128(zmm1, 8).d, arg6)
else
    zmm1 = *sub_142a85330(&var_1e8, "icudt64l")
    sub_142a8cbd0(&string_2, zmm1.q, _mm_bsrli_si128(zmm1, 8).d, arg6)

sub_142a8cbd0(&var_158, string_2, var_160, arg6)
sub_142a8cbd0(&var_d8, string_2, var_160, arg6)

if (var_e0 != 0)
    sub_142a8cbd0(sub_142a8cb30(&var_158, 0x2f, arg6), var_118, var_e0, arg6)
    sub_142a8cbd0(sub_142a8cb30(&var_d8, 0x5c, arg6), var_118, var_e0, arg6)

var_1e8.o = *sub_142a85330(&var_1c8, arg3)
char* rdx_12
rdx_12.b = 0x2f
int64_t* rax_17 = sub_142a8cb30(&var_158, rdx_12.b, arg6)
zmm1 = var_1e8.o
sub_142a8cbd0(rax_17, zmm1.q, _mm_bsrli_si128(zmm1, 8).d, arg6)
var_1e8.o = *sub_142a85330(&var_1c8, arg3)
char* rdx_14
rdx_14.b = 0x5c
int64_t* rax_19 = sub_142a8cb30(&var_d8, rdx_14.b, arg6)
zmm1 = var_1e8.o
sub_142a8cbd0(rax_19, zmm1.q, _mm_bsrli_si128(zmm1, 8).d, arg6)

if (arg2 != 0 && *arg2 != 0)
    var_1e8.o = *sub_142a85330(&var_1c8, arg2)
    void var_1b0
    zmm1 = *sub_142a85330(&var_1b0, &data_143640e4c)
    int64_t* rax_22 = sub_142a8cbd0(&var_158, zmm1.q, _mm_bsrli_si128(zmm1, 8).d, arg6)
    zmm1 = var_1e8.o
    sub_142a8cbd0(rax_22, zmm1.q, _mm_bsrli_si128(zmm1, 8).d, arg6)
    var_1e8.o = *sub_142a85330(&var_1b0, arg2)
    zmm1 = *sub_142a85330(&var_1c8, &data_143640e4c)
    int64_t* rax_25 = sub_142a8cbd0(&var_d8, zmm1.q, _mm_bsrli_si128(zmm1, 8).d, arg6)
    zmm1 = var_1e8.o
    sub_142a8cbd0(rax_25, zmm1.q, _mm_bsrli_si128(zmm1, 8).d, arg6)

var_1e8 = var_d8 + sx.q(var_120) + 1

if (string_1 != 0)
    string_4 = string_1

void* rax_28 = sub_142a4b740()
void* result

if (r14.b == 0)
label_142a7e9eb:
    int32_t rax_34 = data_144015a1c
    
    if (rax_34 != 2)
        if (rax_34 != 0)
            goto label_142a7ead1
        
    label_142a7ea67:
        
        if (rax_28 == 0)
            if (r14.b != 0)
                goto label_142a7ead1
            
            goto label_142a7eab2
        
        if (*rax_28 == 0 && r14.b != 0)
            goto label_142a7ead1
        
    label_142a7eab2:
        void* result_3 = sub_142a7e2c0(string_2, rax_28, var_1e8, string_4, arg2, arg3, arg4, arg5, 
            &var_1f8, arg6)
        result = result_3
        
        if (result_3 == 0 && *arg6 s<= result_3.d)
            rax_34 = data_144015a1c
        label_142a7ead1:
            
            if (rax_34 u> 1)
                goto label_142a7eb3e
            
            int32_t* var_200_2 = arg6
            int32_t* var_208_2 = &var_1f8
            int64_t var_210_4 = arg5
            void* result_4 = sub_142a7e190(r14.b, string_4, string_2, rax_28, var_1e8, var_158, 
                string_4, arg2, arg3, arg4)
            result = result_4
            
            if (result_4 == 0 && *arg6 s<= result_4.d)
                rax_34 = data_144015a1c
            label_142a7eb3e:
                
                if (rax_34 == 3)
                    int32_t* var_200_3 = arg6
                    int32_t* var_208_3 = &var_1f8
                    int64_t var_210_5 = arg5
                    void* result_5 = sub_142a7e190(r14.b, string_4, string_2, &data_1434cce10, 
                        var_1e8, var_158, string_4, arg2, arg3, arg4)
                    result = result_5
                    
                    if (result_5 == 0 && *arg6 s<= result_5.d)
                        goto label_142a7eba8
                else if (*arg6 s> 0)
                    result = nullptr
                else
                label_142a7eba8:
                    int32_t rax_43 = var_1f8
                    
                    if (rax_43 s<= 0)
                        rax_43 = 4
                    
                    *arg6 = rax_43
                    result = nullptr
    else
        int32_t* var_200_1 = arg6
        int32_t* var_208_1 = &var_1f8
        int64_t var_210_2 = arg5
        void* result_2 = sub_142a7e190(r14.b, string_4, string_2, rax_28, var_1e8, var_158, 
            string_4, arg2, arg3, arg4)
        result = result_2
        
        if (result_2 == 0 && *arg6 s<= result_2.d)
            rax_34 = data_144015a1c
            
            if (rax_34 == 2 || rax_34 == 0)
                goto label_142a7ea67
            
            goto label_142a7ead1
else
    if (sub_142a7ed70(arg3, arg2) == 0)
        goto label_142a7e9eb
    
    char* rax_30 = sub_142a4b790(arg6)
    
    if (*rax_30 == 0)
        goto label_142a7e9eb
    
    void* result_1 = sub_142a7e2c0(&data_1434cce10, rax_30, var_1e8, &data_1434cce10, arg2, arg3, 
        arg4, arg5, &var_1f8, arg6)
    result = result_1
    
    if (result_1 == 0 && *arg6 s<= result_1.d)
        goto label_142a7e9eb

if (var_10c.b != 0)
    sub_142a7dcd0(var_118)

if (var_18c.b != 0)
    sub_142a7dcd0(string_2)

if (var_cc.b != 0)
    sub_142a7dcd0(var_d8)

if (var_14c.b != 0)
    sub_142a7dcd0(var_158)

if (var_8c.b != 0)
    sub_142a7dcd0(string)

__security_check_cookie(rax_1 ^ &var_258)
return result
