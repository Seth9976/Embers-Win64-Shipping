// 函数: sub_140f458e0
// 地址: 0x140f458e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
TEB* gsbase

if (data_143e2b058 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e2b058)
    
    if (data_143e2b058 == 0xffffffff)
        arg5 = sub_140acbb50(&data_143e2adc0)
        atexit(sub_142ccbe20)
        _Init_thread_footer(&data_143e2b058)

int16_t* const r8

if (arg3[1].d == 0)
    r8 = &data_142d40450
else
    r8 = *arg3

_mm_cvtps_pd(*arg4)
void var_58
sub_140ad3de0(&data_143e2adc0, &var_58, r8, arg5)
char var_40
char var_30

if (var_30 == 0 || var_40 != 0)
    arg2[1].b = 0
    char var_30_1 = 0
    
    if (var_40 != 0)
        char var_40_1 = 0
        int64_t* var_50
        
        if (var_50 != 0)
            var_50[1].d -= 1
            
            if (var_50[1].d == 1)
                (**var_50)(var_50)
                int32_t rdi_1 = *(var_50 + 0xc)
                *(var_50 + 0xc) -= 1
                
                if (rdi_1 == 1)
                    (*(*var_50 + 8))(var_50, zx.q(rdi_1))
else
    int64_t var_38
    *arg2 = _mm_cvtpd_ps(zx.o(var_38)).d
    arg2[1].b = 1

__security_check_cookie(rax_1 ^ &var_78)
return arg2
