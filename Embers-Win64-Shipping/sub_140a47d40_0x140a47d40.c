// 函数: sub_140a47d40
// 地址: 0x140a47d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143db4898 != 0)
    return zx.q(data_14399e9e0)

void* rcx = data_143ddb400
data_143db4898 = 1
int32_t var_a8 = 0
int32_t arg_20 = 0
int32_t arg_18 = 0
int32_t arg_8 = 0
int32_t arg_10 = 0
int32_t var_a0 = 0
sub_140af3c10(rcx, u"PlatformMemoryBuckets", u"LargestMemoryBucket_MinGB", &var_a8, &data_143de5780)
sub_140af3c10(data_143ddb400, PlatformMemoryBuckets", LargerMemoryBucket_MinGB", &arg_20, 
    &data_143de5780)
sub_140af3c10(data_143ddb400, PlatformMemoryBuckets", DefaultMemoryBucket_MinGB", &arg_18, 
    &data_143de5780)
sub_140af3c10(data_143ddb400, PlatformMemoryBuckets", SmallerMemoryBucket_MinGB", &arg_8, 
    &data_143de5780)
sub_140af3c10(data_143ddb400, PlatformMemoryBuckets", SmallestMemoryBucket_MinGB", &arg_10, 
    &data_143de5780)
sub_140af3c10(data_143ddb400, PlatformMemoryBuckets", TiniestMemoryBucket_MinGB", &var_a0, 
    &data_143de5780)
int64_t var_98
sub_140b6c480(&var_98)
int32_t rax = arg_8
uint32_t rcx_9 = ((var_98 + 0x3fffffff) u>> 0x1e).d
int64_t var_68
uint32_t rdx_2 = ((var_68 + 0x3fffffff) u>> 0x1e).d

if (rcx_9 u<= rdx_2)
    rdx_2 = rcx_9

int32_t rax_1

if (rax s<= 0)
    rax_1 = data_14399e9e0
else if (rdx_2 s< rax)
    int32_t rax_2
    rax_2.b = rdx_2 s< arg_10
    rax_1 = rax_2 + 4
    data_14399e9e0 = rax_1
else
    rax_1 = 3
    data_14399e9e0 = 3

int32_t rcx_10 = arg_18

if (rcx_10 s> 0)
    if (rdx_2 s>= rcx_10)
        rax_1 = 2
    
    data_14399e9e0 = rax_1

int32_t rcx_11 = arg_20

if (rcx_11 s> 0)
    if (rdx_2 s>= rcx_11)
        rax_1 = 1
    
    data_14399e9e0 = rax_1

int32_t rcx_12 = var_a8

if (rcx_12 s> 0)
    if (rdx_2 s>= rcx_12)
        rax_1 = 0
    
    data_14399e9e0 = rax_1

int32_t var_a4 = 0xffffffff
sub_140af2b60()
char rax_3 = sub_140b2ab20(&data_143dbb3f0, u"MemBucket=", &var_a4)
int32_t rcx_13 = data_14399e9e0

if (rax_3 != 0)
    rcx_13 = var_a4

data_14399e9e0 = rcx_13
return zx.q(rcx_13)
