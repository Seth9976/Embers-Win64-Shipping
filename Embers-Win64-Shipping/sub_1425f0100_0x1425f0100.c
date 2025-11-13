// 函数: sub_1425f0100
// 地址: 0x1425f0100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x17c0)
void var_17f8
int64_t rax_1 = __security_cookie ^ &var_17f8
char r15 = 0
int32_t var_17c8 = 0
*(arg1 + 0x1778) = *arg2
*(arg1 + 0x177c) = arg2[1]
*(arg1 + 0x1780) = arg2[2]
*(arg1 + 0x1784) = arg2[3]
*(arg1 + 0x1788) = arg2[4]
*(arg1 + 0x178c) = arg2[5]
sub_142476260(arg1 + 0x1790, &arg2[6])
var_17c8 = 0x14
int32_t var_17c4 = 2
*(arg1 + 0x17a0) = var_17c8.q
sub_1425f1310(arg1 + 0x1790, arg1 + 0x17a0)
int64_t* rax_9 = j_sub_140a82f30(0x10)
int64_t* rdi

if (rax_9 == 0)
    rdi = nullptr
else
    rdi = sub_1425e9180(rax_9)

if (arg1 + 0x17a8 != &var_17c8)
    int64_t* rsi_1 = *(arg1 + 0x17a8)
    *(arg1 + 0x17a8) = rdi
    
    if (rsi_1 != 0)
        int64_t* rcx_3 = rsi_1[1]
        
        if (rcx_3 != 0)
            (*(*rcx_3 + 0x10))(rcx_3)
        
        int64_t* rcx_4 = *rsi_1
        
        if (rcx_4 != 0)
            (*(*rcx_4 + 0x10))(rcx_4)
        
        j_sub_140a74f90(rsi_1)
else if (rdi != 0)
    int64_t* rcx_5 = rdi[1]
    
    if (rcx_5 != 0)
        (*(*rcx_5 + 0x10))(rcx_5)
    
    int64_t* rcx_6 = *rdi
    
    if (rcx_6 != 0)
        (*(*rcx_6 + 0x10))(rcx_6)
    
    j_sub_140a74f90(rdi)

int64_t rax_15 = GetProcAddress(*(arg1 + 0x48), "NvEncodeAPICreateInstance")
int64_t rax_16 = j_sub_140a82f30(0x9f8)
int64_t rcx_9 = *(arg1 + 0x50)

if (rcx_9 != rax_16)
    *(arg1 + 0x50) = rax_16
    j_sub_140a74f90(rcx_9)
    rcx_9 = *(arg1 + 0x50)

memset(rcx_9, 0, 0x9f8)
**(arg1 + 0x50) = 0x71020008
rax_15(*(arg1 + 0x50))
int32_t var_1454
memset(&var_1454, 0, 0x60c)
int64_t* rax_18 = *(arg1 + 0x17a8)
int32_t var_1458 = 0x71010008
int64_t rax_19 = *(arg1 + 0x50)
HANDLE var_1450 = *rax_18
var_1454 = 0
int32_t var_1440 = 0x1000008
(*(rax_19 + 0xf0))(&var_1458, arg1 + 0x58)
*(arg1 + 0x74) = 0
*(arg1 + 0x7c) = 0
*(arg1 + 0x9c) = 0
__builtin_memset(arg1 + 0xa4, 0, 0x14)
memset(arg1 + 0xc8, 0, 0x6a8)
int32_t rax_20 = *(arg1 + 0x1778)
int128_t zmm0 = data_14344a380
*(arg1 + 0x8c) = rax_20
*(arg1 + 0x84) = rax_20
int32_t rax_21 = *(arg1 + 0x177c)
*(arg1 + 0x90) = rax_21
*(arg1 + 0x88) = rax_21
int32_t rax_22 = *(arg1 + 0x178c)
*(arg1 + 0x60) = 0xf1050008
*(arg1 + 0x64) = zmm0

if (rax_22 == 0)
    *(arg1 + 0x74) = data_14344a3a0
else if (rax_22 == 1)
    *(arg1 + 0x74) = data_14344a390

int32_t rax_23 = *(arg1 + 0x1780)
*(arg1 + 0xa4) &= 0xfffffffc
*(arg1 + 0xb8) = arg1 + 0x798
*(arg1 + 0x94) = rax_23
*(arg1 + 0x98) = 1
*(arg1 + 0xa0) = 1
*(arg1 + 0xc0) = 0xf00
*(arg1 + 0xc4) = 0x870
sub_140af2b60()
sub_140b2ab80(&data_143dbb3f0, u"NvEncMaxEncodeWidth=", arg1 + 0xc0)
sub_140af2b60()
sub_140b2ab80(&data_143dbb3f0, u"NvEncMaxEncodeHeight=", arg1 + 0xc4)
memset(&var_1458, 0, 0x1408)
int64_t rax_24 = *(arg1 + 0x50)
int64_t rcx_16 = *(arg1 + 0x58)
var_17c8.o = *(arg1 + 0x74)
int128_t var_17b8 = *(arg1 + 0x64)
var_1458 = 0xf1040008
var_1450.d = 0xf1070008
(*(rax_24 + 0x58))(rcx_16, &var_17b8, &var_17c8, &var_1458)
memcpy(arg1 + 0x798, &var_1450, 0xe00)
void* const rax_25 = &data_143449e08

if (*(arg1 + 0x178c) == 0)
    rax_25 = &data_143449df8

int32_t rcx_18 = *(arg1 + 0x17a4)
uint128_t zmm0_2 = *rax_25
*(arg1 + 0x7ac) = *(arg1 + 0x94)
*(arg1 + 0x79c) = zmm0_2
int32_t rax_27

if (rcx_18 == 0)
    rax_27 = 0
else if (rcx_18 == 1)
    rax_27 = 1
else
    rax_27 = 2

*(arg1 + 0x7e4) |= 1
*(arg1 + 0x7c4) = rax_27
var_17c8 = 0x14
int32_t var_17c4_1 = 0x14
*(arg1 + 0x7e8) = var_17c8.q
*(arg1 + 0x7f0) = 0x14
int32_t rcx_20 = *(arg1 + 0x1784)
*(arg1 + 0x7d8) = rcx_20
int32_t rax_28 = *(arg1 + 0x1788)

if (rax_28 u<= rcx_20)
    rcx_20 = rax_28

*(arg1 + 0x7d4) = rcx_20
*(arg1 + 0x848) = *(arg1 + 0x7ac)
int32_t rax_30 = *(arg1 + 0x178c)
int32_t rcx_21
rcx_21.b = rax_30 != 0
int32_t rax_31 = neg.d(rax_30)
*(arg1 + 0x880) = sbb.d(rax_31, rax_31, rax_30 != 0) & 3
*(arg1 + 0x884) = rcx_21
int32_t rax_34 = *(arg1 + 0x178c)
*(arg1 + 0x840) |= 0x1000
*(arg1 + 0x844) = sbb.d(rcx_21, rcx_21, rax_34 != 0) + 0x34
int32_t var_17a0
memset(&var_17a0, 0, 0xf8)
int64_t rax_36 = *(arg1 + 0x50)
int64_t rcx_25 = *(arg1 + 0x58)
var_17b8 = *(arg1 + 0x64)
int32_t var_17a8 = 0x71010008
int32_t var_17a4 = 0x1e
var_17c8 = 0
int64_t r9_2 = (*(rax_36 + 0x40))(rcx_25, &var_17b8, &var_17a8, &var_17c8)
void* result

if (var_17c8 != 0)
    int64_t rax_37 = *(arg1 + 0x50)
    int64_t rcx_28 = *(arg1 + 0x58)
    *(arg1 + 0x9c) = 1
    (*(rax_37 + 0x60))(rcx_28, arg1 + 0x60)
    void* i = arg1 + 0x15a0
    int32_t rcx_29 = 0
    
    for (void* rdx_9 = i + 0x1c8; i != rdx_9; i += 0x98)
        *i = rcx_29
        rcx_29 += 1
    
    int32_t i_1 = 0
    void* rdi_2 = arg1 + 0x15f8
    
    do
        if (sub_1425ef4f0(arg1, rdi_2 - 0x58, *(arg1 + 0x84), *(arg1 + 0x88)).b == 0)
            goto label_1425f05b7
        
        __builtin_memset(rdi_2, 0, 0x18)
        void var_179c
        memset(&var_179c, 0, 0x2fc)
        int64_t rax_38 = *(arg1 + 0x50)
        int64_t rcx_32 = *(arg1 + 0x58)
        var_17a8 = 0x71010008
        int32_t var_17a4_1 = 0x200000
        var_17a0 = 2
        (*(rax_38 + 0x78))(rcx_32, &var_17a8)
        int64_t var_1798
        *rdi_2 = var_1798
        memset(&var_1454, 0, 0x604)
        var_1458 = 0x71010008
        HANDLE rax_40 = CreateEventW(nullptr, 0, 0, nullptr)
        int64_t rcx_34 = *(arg1 + 0x58)
        var_1450 = rax_40
        (*(*(arg1 + 0x50) + 0xc0))(rcx_34, &var_1458)
        i_1 += 1
        *(rdi_2 + 8) = var_1450
        rdi_2 += 0x98
    while (i_1 u< 3)
    
    void** rax_43 = j_sub_140a82f30(0x10)
    int64_t (* var_1498)(int64_t* arg1)
    void*** var_1488
    void** const var_1478
    void** rdi_3
    
    if (rax_43 == 0)
        rdi_3 = nullptr
    else
        int64_t var_17d0_1 = -1
        var_1478 = &data_142d578b0
        var_1488 = nullptr
        var_1498 = sub_1425ec820
        void* var_1470_1 = arg1
        rdi_3 = sub_140a61790(rax_43, u"NvVideoEncoder", &var_1498, 0, 0, var_17d0_1)
        r15 = 1
    
    if ((r15 & 1) != 0 && var_1498 != 0)
        void** const* rcx_36 = &var_1478
        
        if (var_1488 != 0)
            rcx_36 = var_1488
        
        (*rcx_36)[2](rcx_36)
    
    if (arg1 + 0x1768 != &var_17c8)
        void** rsi_2 = *(arg1 + 0x1768)
        *(arg1 + 0x1768) = rdi_3
        
        if (rsi_2 != 0)
            sub_1405970a0(rsi_2)
            j_sub_140a74f90(rsi_2)
    else if (rdi_3 != 0)
        sub_1405970a0(rdi_3)
        j_sub_140a74f90(rdi_3)
    
    *(arg1 + 0x40) = 1
    result.b = 1
else
    sub_140af98a0("Unknown", 0x224, u"NvEnc doesn't support async mode", r9_2)
    sub_140afbb40()
label_1425f05b7:
    result.b = 0

__security_check_cookie(rax_1 ^ &var_17f8)
return result
