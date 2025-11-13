// 函数: sub_14123cde0
// 地址: 0x14123cde0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r14 = *(arg2 + 0x1a0)
int64_t var_d8 = 0
sub_14123be70(arg1, arg2, r14, arg3, nullptr, nullptr)
int64_t rbx = sx.q(*(arg1 + 0xe0))
int32_t r8_1 = 0

if (rbx s> 0)
    int64_t rdx = 0
    
    while (true)
        void* rcx_1 = *(arg1 + 0xd8)
        
        if ((*(arg1 + 0xd8) & 1) != 0)
            rcx_1 = (rcx_1 s>> 1) + arg1 + 0xd8
        
        if (*(rcx_1 + (rdx << 3)) == data_143e83070)
            break
        
        r8_1 += 1
        rdx += 1
        
        if (rdx s>= rbx)
            goto label_14123ce94

void* r8_2

if (rbx s<= 0 || r8_1 == 0xffffffff)
label_14123ce94:
    TEB* gsbase
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    r8_2 = &data_143ce8560
else
    void* rcx_6 = *(arg1 + 0xe8)
    
    if ((rcx_6.b & 1) != 0)
        rcx_6 = (rcx_6 s>> 1) + arg1 + 0xe8
    
    r8_2 = rcx_6 + (sx.q(r8_1) << 1)

uint128_t zmm0 = data_142d3f660
int32_t temp0 = __maxss_xmmss_memss(*(arg4 + 0xc), 0x38d1b717)
uint128_t var_b8 = zmm0
uint64_t var_88 = *arg5
zmm0.d = 1f f/ temp0
int32_t var_80 = arg5[1].d
int32_t var_70 = arg4[1].d
int32_t var_60 = 0
int32_t var_50 = 0
void* rax_6 = data_143f10dc8
int64_t var_30 = 0
int64_t var_44 = 0x3f800000
int32_t var_5c = 0x3f800000
int32_t var_4c = 0
int32_t var_3c = 0
int32_t var_c0 = 0
uint64_t arg_8 = r14
int32_t var_c0_1 = 0
int32_t var_7c = zmm0.d
uint64_t var_78 = *arg4
int32_t var_6c = arg4[2].d.d
uint64_t var_68 = (_mm_unpacklo_ps(0x3f800000, 0)).q
uint64_t var_58 = (_mm_unpacklo_ps(0x3f800000, 0)).q
int32_t var_48 = 0xc0000000
int64_t var_30_1 = *(rax_6 + 0x10)
int64_t var_a4 = 0
var_b8:0xc.q = 0
int64_t var_98 = 0
return sub_141217d90(arg2, &arg_8, r8_2, &var_b8)
