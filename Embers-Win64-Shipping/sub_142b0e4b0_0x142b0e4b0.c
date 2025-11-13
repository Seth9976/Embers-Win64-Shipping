// 函数: sub_142b0e4b0
// 地址: 0x142b0e4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = -2
int64_t* result = nullptr
int32_t arg_8[0x4]
arg_8[0] = 0
TEB* gsbase

if (data_1440169a0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_1440169a0)
    
    if (data_1440169a0 == 0xffffffff)
        memset(&data_144016950, 0, 0x50)
        _Mtx_init_in_situ(&data_144016950, 2)
        atexit(sub_142d16140)
        _Init_thread_footer(&data_1440169a0)

void* arg_18 = &data_144016950
sub_142a860a0(&data_144016950)
void* rax_2 = arg1[1]

if (rax_2 != 0)
    int32_t rdi_1 = *(rax_2 + 8)
    int32_t rdi_2 = rdi_1 - 1
    
    if (rdi_1 - 1 s>= 0)
        int32_t temp1_1
        
        do
            int64_t* result_1 = sub_142ae72d0(arg1[1], rdi_2)
            result = result_1
            
            if (result_1 != 0 && (*(*result_1 + 8))(result, zx.q(arg2)) != 0)
                goto label_142b0e604
            
            temp1_1 = rdi_2
            rdi_2 -= 1
        while (temp1_1 - 1 s>= 0)
    
    goto label_142b0e5e4

struct icu_64::UObject::icu_64::UVector::VTable** rax_3 = j_sub_142a7dd00(zx.q((rax_2 + 0x28).d))
struct icu_64::UObject::icu_64::UVector::VTable** arg_20 = rax_3
struct icu_64::UVector::icu_64::UStack::VTable** rcx_2

if (rax_3 == 0)
    rcx_2 = nullptr
else
    rcx_2 = sub_142b10230(rax_3, sub_140a4f210, 0, &arg_8)

if (arg_8[0] s> 0)
    if (rcx_2 != 0)
        (*rcx_2)->__offset(0x0).q(rcx_2, 1)
else if (rcx_2 != 0)
    arg1[1] = rcx_2
label_142b0e5e4:
    int64_t* result_2 = (*(*arg1 + 0x10))(arg1, zx.q(arg2))
    result = result_2
    
    if (result_2 != 0)
        sub_142ae7110(arg1[1], result_2, &arg_8)

label_142b0e604:
sub_142a860d0(&data_144016950)
return result
