// 函数: sub_140cf9960
// 地址: 0x140cf9960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
int32_t* rdi_1 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143e1c400 s> *rdi_1)
    _Init_thread_header(&data_143e1c400)
    
    if (data_143e1c400 == 0xffffffff)
        sub_140b58170(&data_143e1c3f8, "AssetObjectProperty", 1)
        _Init_thread_footer(&data_143e1c400)

if (data_143e1c410 s> *rdi_1)
    _Init_thread_header(&data_143e1c410)
    
    if (data_143e1c410 == 0xffffffff)
        sub_140b58170(&data_143e1c408, "SoftObjectPath", 1)
        _Init_thread_footer(&data_143e1c410)

if (data_143e1c420 s> *rdi_1)
    _Init_thread_header(&data_143e1c420)
    
    if (data_143e1c420 == 0xffffffff)
        sub_140b58170(&data_143e1c418, "SoftClassPath", 1)
        _Init_thread_footer(&data_143e1c420)

if (data_143e1c430 s> *rdi_1)
    _Init_thread_header(&data_143e1c430)
    
    if (data_143e1c430 == 0xffffffff)
        sub_140b58170(&data_143e1c428, "StringAssetReference", 1)
        _Init_thread_footer(&data_143e1c430)

if (data_143e1c440 s> *rdi_1)
    _Init_thread_header(&data_143e1c440)
    
    if (data_143e1c440 == 0xffffffff)
        sub_140b58170(&data_143e1c438, "StringClassReference", 1)
        _Init_thread_footer(&data_143e1c440)

int64_t rdi_2 = *(arg2 + 8)
void* r14 = *(*arg3 + 8)

if (rdi_2 != data_143e1c3f8)
    int32_t rcx_3
    rcx_3.b = (rdi_2 u>> 0x20).d == 0
    
    if ((rcx_3.b & sub_140b5b8a0(rdi_2.d, 5)) != 0)
        int32_t rax_13 = sub_140d2c070(
            sx.q(*(arg2 + 0x40) * *(arg1 + 0x3c)) + arg4 + sx.q(*(arg1 + 0x4c)) + 0x10, arg2, arg3)
        char temp0_1 = rax_13.b
        rax_13.b = neg.b(rax_13.b)
        return zx.q(sbb.d(rax_13, rax_13, temp0_1 != 0)) & 2
    
    int32_t rcx_7
    rcx_7.b = *(arg2 + 0xc) == 0
    
    if ((rcx_7.b & sub_140b5b8a0(*(arg2 + 8), 0xa)) == 0)
        return 0
    
    int64_t rax_16 = *(arg2 + 0x1c)
    
    if (rax_16 != data_143e1c408 && rax_16 != data_143e1c418 && rax_16 != data_143e1c428
            && rax_16 != data_143e1c438)
        return 0
    
    int64_t var_58
    __builtin_memset(&var_58, 0, 0x18)
    sub_140d2c040(&var_58, arg3)
    int64_t rax_17 = var_58
    uint64_t var_28 = 0
    int64_t var_20_1 = 0
    int64_t var_3c_1 = 0
    int32_t var_40_1 = 0xffffffff
    int64_t var_50
    sub_140597df0(&var_28, &var_50)
    var_3c_1:4.d = 0
    int64_t* rdx_7 = sx.q(*(arg1 + 0x4c)) + sx.q(*(arg2 + 0x40) * *(arg1 + 0x3c)) + arg4
    *rdx_7 = var_40_1.q
    rdx_7[1].d = 0
    rdx_7[2] = rax_17
    sub_140597df0(&rdx_7[3], &var_28)
    uint64_t rcx_11 = var_28
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    int64_t rcx_12 = var_50
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
else
    sub_140d10980(arg2, arg3, arg1, 
        sx.q(*(arg1 + 0x4c)) + sx.q(*(arg2 + 0x40) * *(arg1 + 0x3c)) + arg4, 0)
    
    if ((*(r14 + 0x29) & 2) != 0)
        return 1

return 2
