// 函数: sub_14103e950
// 地址: 0x14103e950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
arg1[1] = 0
arg1[2] = 0
*arg1 = &data_142f00bb0
arg1[4] = 0
int32_t i_1 = arg2[1].d
int64_t r14 = *arg2
arg1[5].d = i_1

if (i_1 != 0)
    sub_1405a4be0(&arg1[4], i_1, 0)
    int64_t* rcx_1 = arg1[4]
    int64_t* r14_1 = r14 - rcx_1
    int32_t i
    
    do
        *rcx_1 = *(r14_1 + rcx_1)
        void* rax_2 = *(r14_1 + rcx_1 + 8)
        rcx_1[1] = rax_2
        
        if (rax_2 != 0)
            *(rax_2 + 8) += 1
        
        rcx_1 = &rcx_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
else
    *(arg1 + 0x2c) = 0

arg1[7] = 0
arg1[8].d = 0
arg1[0xb] = -1
sub_140af2b60()
arg1[0xc].b = sub_140b21a10(&data_143dbb3f0, u"novendordevice") == 0
data_143e2c550 = arg1
arg1[6].d = *(*arg1[4] + 0x5c)
int64_t rdi = data_143e2c598
int64_t rcx_3

if (data_143de5480 == 0)
    rcx_3 = 0
else
    rcx_3.b = GetCurrentThreadId() != data_143de5470

int32_t rax_7 = *(rdi + (rcx_3 << 2))
int32_t rcx_4 = 0

if (rax_7 s>= 0)
    rcx_4 = rax_7

int32_t rcx_5 = rcx_4 << 0x14
arg1[0xa].d = rcx_5
int64_t rax_8 = sub_140a82f30(rcx_5, 0)
uint64_t count = zx.q(arg1[0xa].d)
arg1[9] = rax_8
memset(rax_8, 0, count)
void* rcx_7 = data_143ddb400
data_143f0f1a4 = 1
data_143f0f208 = 0
data_143f0f200 = 0
sub_140af3c10(rcx_7, TextureStreaming", PoolSizeVRAMPercentage", &data_143f0f208, &data_143de5780)
bool cond:4 = data_143de5480 == 0
int64_t rdi_1 = data_143e2c580
data_1439c85fc = 0
data_1439c8624 = 2
data_1439c864c = 0x5a
data_1439c8674 = 0x3d
data_1439c869c = 0x38
data_1439c86c4 = 0x46
data_1439c86ec = 0x49
data_1439c8714 = 0x4c
data_1439c8c14 = 0x50
data_1439c873c = 0

if (not(cond:4))
    rbx.b = GetCurrentThreadId() != data_143de5470

int32_t temp1 = *(rdi_1 + (rbx << 2))
data_1439c87b8 = 1

if (temp1 == 0)
    data_1439c87b4 = 0x13
    data_1439c87ac = 5
    data_1439c8cdc = 0x16
    data_1439c8cd4 = 5
else
    data_1439c87b4 = 0x2c
    data_1439c87ac = 4
    data_1439c8cdc = 0x2f
    data_1439c8cd4 = 4

data_1439c87dc = 0x35
uint64_t rflags
int32_t temp0_1
temp0_1, rflags = _bit_scan_reverse(0x4000)
data_1439c87d4 = 2
data_1439c87e0 = 1
data_1439c8804 = 0x29
data_1439c882c = 0x23
data_1439c8854 = 0x22
data_1439c887c = 0x22
data_1439c88a4 = 0x10
data_1439c88cc = 0x18
data_1439c88f4 = 0xb
data_1439c891c = 0x2c
data_1439c8944 = 0x36
data_1439c896c = 0x36
data_1439c8764 = 0x1a
data_1439c875c = 4
data_1439c878c = 0xa
data_1439c8784 = 8
data_1439c8a0c = 0x1a
data_1439c8a10 = 1
data_1439c8a04 = 4
data_1439c89bc = 0x33
data_1439c8994 = 0x53
data_1439c89e4 = 0x42
data_1439c8a34 = 0x41
data_1439c8a5c = 0x2a
data_1439c8a84 = 0x2b
data_1439c8afc = 0x39
data_1439c8b24 = 0x3b
data_1439c8b4c = 0xc
data_1439c8b74 = 0xe
data_1439c8b9c = 0x55
data_1439c8bc4 = 0x1b
data_1439c8f5c = 0x1e
data_1439c8f84 = 0x1f
data_1439c8c3c = 0x31
data_1439c8d7c = 3
data_1439c8da4 = 0x24
data_1439c909c = 0x11
data_1439c8e94 = 0x5f
data_1439c8ebc = 0x61
data_1439c8ee4 = 0x3e
data_1439c8fac = 0xb
data_1439c8fd4 = 0xd
data_143f0f1bf = 1
data_1439c7a78 = 0x4000
data_1439c7a8c = 0x4000
data_1439c7a24 = 0x800
data_143f0f225 = 1
int32_t rax_10

if (temp1 == 0)
    rax_10 = 0x20
else
    rax_10 = 0x1f - temp0_1

int32_t rax_12 = rax_10 << 0x1a s>> 0x1f
uint64_t rflags_1
int32_t temp0_2
temp0_2, rflags_1 = _bit_scan_reverse(0x3fff)
int32_t rcx_8

if (rax_12 == 0)
    rcx_8 = 0x20
else
    rcx_8 = 0x1f - temp0_2

data_1439c7a70 = 0x4000
uint64_t rcx_9 = zx.q(data_14401b1a0)
data_1439c7a74 = 0x4000
int32_t rax_15 = (not.d(rax_12) & (0x20 - rcx_8)) + 1
data_143f0f21c = 1
data_143f0f19d = 1

if (rax_15 s>= 0xe)
    rax_15 = 0xe

data_143f0f223 = 1
data_1439c7a00 = rax_15
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
data_143f0f224 = 1
data_143f0f1b7 = 1
data_143f0f1c6 = 1

if (data_143e2c650 s> *(0x14 + *(ThreadLocalStoragePointer + (rcx_9 << 3))))
    _Init_thread_header(&data_143e2c650)
    
    if (data_143e2c650 == 0xffffffff)
        int64_t* rcx_14 = data_143db18d0
        
        if (rcx_14 == 0)
            sub_140a53c40()
            rcx_14 = data_143db18d0
        
        int64_t r8_2
        r8_2.b = 1
        data_143e2c648 = (*(*rcx_14 + 0xb0))(rcx_14, u"r.GPUStatsMaxQueriesPerFrame", r8_2)
        _Init_thread_footer(&data_143e2c650)

int64_t* rbx_1 = data_143e2c648

if (rbx_1 != 0)
    int16_t* var_18
    sub_140a2e390(&var_18, u"%d", 0x400)
    int16_t* const rdx_2 = &data_142d40450
    int32_t var_10
    
    if (var_10 != 0)
        rdx_2 = var_18
    
    (*(*rbx_1 + 0x80))(rbx_1, rdx_2, 0x8000000)
    int16_t* rcx_13 = var_18
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)

data_1439c79e0 = 1
data_143f0f221 = 1
return arg1
