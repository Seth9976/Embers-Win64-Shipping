// 函数: sub_14221aa10
// 地址: 0x14221aa10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
void* rdi = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143f51308 s> *(rdi + 0x14))
    _Init_thread_header(&data_143f51308)
    
    if (data_143f51308 == 0xffffffff)
        atexit(sub_142d08100)
        _Init_thread_footer(&data_143f51308)

if (data_143f51320 s> *(rdi + 0x14))
    _Init_thread_header(&data_143f51320)
    
    if (data_143f51320 == 0xffffffff)
        atexit(&data_142d08840)
        _Init_thread_footer(&data_143f51320)

if (&data_143f512f8 != arg1)
    int64_t rdi_1 = sx.q(arg1[1].d)
    int64_t rsi_1 = *arg1
    int32_t r8 = data_143f51304
    data_143f51300 = rdi_1.d
    
    if (rdi_1.d != 0 || r8 != 0)
        sub_1405c4a00(&data_143f512f8, rdi_1.d, r8)
        memcpy(data_143f512f8, rsi_1, (rdi_1 << 3).d)
    else
        data_143f51304 = 0

if (&data_143f51310 != arg2)
    int64_t rdi_2 = sx.q(arg2[1].d)
    int64_t rsi_2 = *arg2
    int32_t r8_3 = data_143f5131c
    data_143f51318 = rdi_2.d
    
    if (rdi_2.d != 0 || r8_3 != 0)
        sub_1405a4b40(&data_143f51310, rdi_2.d, r8_3)
        memcpy(data_143f51310, rsi_2, (rdi_2 * 0x30).d)
    else
        data_143f5131c = 0

int64_t*** var_80
RefPtr<class RefCount<class pdb_internal::Buffer> >::RefPtr<class RefCount<class pdb_internal::Buffer> >(
    &var_80)
char var_88
bool cond:0_1

if (arg4 != 0)
    cond:0_1 = *(arg4 + 0x14f) == 2
    var_88 = 0

if (arg4 == 0 || not(cond:0_1))
    var_88 = 1

char var_87_1

if (arg4 == 0)
    var_87_1 = 0
else
    void* rax_3 = sub_142591550()
    void* rdx_4 = *(arg4 + 0x10)
    int64_t rax_4 = sx.q(*(rax_3 + 0x38))
    
    if (rax_4.d s> *(rdx_4 + 0x38))
        var_87_1 = 0
    else
        var_87_1 = 1
        
        if (*(*(rdx_4 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
            var_87_1 = 0

void arg_8
int64_t* rax_6 = RefPtr<class RefCount<class pdb_internal::Buffer> >::RefPtr<class RefCount<class pdb_internal::Buffer> >(
    &arg_8)
int64_t** arg_28
int64_t** rcx_5 = arg_28
int64_t var_50 = *rax_6
char* var_38 = &var_88
int64_t rax_8 = data_143f510e0
int32_t var_44 = 0xbf800000
int64_t* var_78 = &data_143f512f8
int64_t* var_70 = &data_143f51310
int64_t var_68 = arg3
void* var_60 = arg4
char var_47 = 0
char var_48 = 1
bool var_30 = *rax_8 != 0
int64_t var_40 = 0

if (var_87_1 != 0)
    sub_142227700(&var_78)

if (sub_1422136d0(&var_78) != 0)
    arg_28 = &var_78
    var_80 = &arg_28
    var_88.q = j_sub_142210120
    sub_14226a6f0(rcx_5, &var_88)

int32_t rax_10 = data_143f51304
data_143f51300 = 0

if (rax_10 s< 0 && rax_10 != 0)
    sub_1405c5570(&data_143f512f8, 0)

int32_t result = data_143f5131c
data_143f51318 = 0

if (result s< 0 && result != 0)
    return sub_1405a5220(&data_143f51310, 0)

return result
