// 函数: sub_14149e1e0
// 地址: 0x14149e1e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = *(arg2 + 0x1a0)
int64_t r9 = arg4[2]
int64_t arg_8 = r15
int128_t zmm6 = sub_141080ac0(arg1, arg2, r15, r9)
float temp0 = *(arg6 + 0x3e4)
0f - temp0
bool var_70 = 0f < temp0
char var_78 = 1
sub_14149c990(arg1 + 0x118, arg2, arg1, arg4, zmm6, arg6, arg5)
void* rcx_1 = arg6 + 0x558
int64_t* rbx = *(*(arg6 + 0x5c0) + 0x20)
void* rax_3 = *(rcx_1 + 8)

if (rax_3 != 0)
    rcx_1 = rax_3

sub_1405eb490(arg2, &arg_8, arg1 + 0x16e, rcx_1 + (sx.q(arg3) << 2), 0)
float arg_18 = *(rbx + 0xdc) * 7f + 1f
float zmm0_1[0x4] = sub_1405eb490(arg2, &arg_8, arg1 + 0x174, &arg_18, 0)
float zmm6_1[0x4] = *(rbx + 0x20)
(*(*rbx + 0x18))(rbx)
float var_68 = zmm6_1[0]
float zmm7 = 1f / zmm0_1[0]
zmm0_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55)
zmm6_1 = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xaa)
float var_5c = zmm7
float var_64 = zmm0_1[0]
float var_60 = zmm6_1[0]
sub_1405d0e10(arg2, &arg_8, arg1 + 0x17a, &var_68, 0)
int64_t rbx_1 = sx.q(*(arg1 + 0xe0))
int32_t r8_5 = 0

if (rbx_1 s> 0)
    int64_t rdx_4 = 0
    
    while (true)
        void* rcx_7 = *(arg1 + 0xd8)
        
        if ((*(arg1 + 0xd8) & 1) != 0)
            rcx_7 = (rcx_7 s>> 1) + arg1 + 0xd8
        
        if (*(rcx_7 + (rdx_4 << 3)) == data_143e83070)
            break
        
        r8_5 += 1
        rdx_4 += 1
        
        if (rdx_4 s>= rbx_1)
            goto label_14149e3b3

int16_t* rdx_5

if (rbx_1 s<= 0 || r8_5 == 0xffffffff)
label_14149e3b3:
    TEB* gsbase
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    rdx_5 = &data_143ce8560
else
    void* rcx_20 = *(arg1 + 0xe8)
    
    if ((rcx_20.b & 1) != 0)
        rcx_20 = (rcx_20 s>> 1) + arg1 + 0xe8
    
    rdx_5 = rcx_20 + (sx.q(r8_5) << 1)

int16_t rax_8 = *rdx_5
arg_18.w = rax_8

if (rax_8 != 0xffff)
    sub_1412155b0(arg2, r15, &arg_18, *(arg6 + 0x5c0), arg4.d)

int64_t* rcx_11 = *(*arg4 + 0x20)

if (rcx_11 != 0)
    (*(*rcx_11 + 0x248))(rcx_11)

sub_14139bef0(arg2)
void** const result = sub_1422c6ca0(arg2)

if (result == 0)
    result = data_1439b70c8

int64_t r14_1 = result[2]

if (*(arg1 + 0x182) u> 0)
    uint32_t rdi_1 = zx.d(*(arg1 + 0x180))
    void*** rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_11 = &rcx_16[5]
    
    if (rax_11 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_16 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_11 = &rcx_16[5]
    
    *(arg2 + 0x30) = rax_11
    void** rax_12 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_12 = rcx_16
    *(arg2 + 8) = &rcx_16[1]
    rcx_16[1] = 0
    result = &data_142d5a070
    *rcx_16 = &data_142d5a070
    rcx_16[2] = r15
    rcx_16[3].d = rdi_1
    rcx_16[4] = r14_1

return result
