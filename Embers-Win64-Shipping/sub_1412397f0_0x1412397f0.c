// 函数: sub_1412397f0
// 地址: 0x1412397f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = *(arg2 + 0x1a0)
int64_t r9 = *(arg3 + 0x10)
int64_t arg_10 = r15
sub_141080ac0(arg1, arg2, r15, r9)
int32_t zmm0

if (*(*(arg4 + 0x20) + 0xfc) != 0xffffffff)
    zmm0 = 0x3f800000
else
    zmm0 = (zx.o(0)).d

int32_t rbx = 0
int32_t arg_8 = zmm0
int32_t var_48 = 0
sub_1405eb490(arg2, &arg_10, arg1 + 0x118, &arg_8, 0)
int32_t r8_2 = *(arg3 + 0x1548)

if (*(arg1 + 0x11e) != 0xffff)
    int64_t arg_18
    int64_t* rcx_1 = &arg_18
    
    if (r8_2 s< 3)
        sub_14137b7f0(rcx_1, arg2)
    else
        sub_14137baa0(rcx_1, arg2, 0xf, r8_2)
    
    sub_141083500(arg2, &arg_10, arg1 + 0x11e, arg_18)
    sub_1405d1550(&arg_18)

int64_t r10 = sx.q(*(arg1 + 0xe0))

if (r10 s> 0)
    int64_t rdx_3 = 0
    
    while (true)
        void* rcx_5 = *(arg1 + 0xd8)
        
        if ((*(arg1 + 0xd8) & 1) != 0)
            rcx_5 = (rcx_5 s>> 1) + arg1 + 0xd8
        
        if (*(rcx_5 + (rdx_3 << 3)) == data_143e83070)
            break
        
        rbx += 1
        rdx_3 += 1
        
        if (rdx_3 s>= r10)
            goto label_14123992c

int16_t* r8_5

if (r10 s<= 0 || rbx == 0xffffffff)
label_14123992c:
    TEB* gsbase
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    r8_5 = &data_143ce8560
else
    void* rcx_9 = *(arg1 + 0xe8)
    
    if ((rcx_9.b & 1) != 0)
        rcx_9 = (rcx_9 s>> 1) + arg1 + 0xe8
    
    r8_5 = rcx_9 + (sx.q(rbx) << 1)

var_48.q = arg3
return sub_1412155b0(arg2, r15, r8_5, arg4, var_48)
