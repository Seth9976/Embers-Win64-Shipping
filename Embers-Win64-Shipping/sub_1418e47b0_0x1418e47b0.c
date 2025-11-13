// 函数: sub_1418e47b0
// 地址: 0x1418e47b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = __crt_deferred_errno_cache::get(&data_143db7b00)
void* rdx = *arg1
*(rdx + 0x7d4)
int64_t var_50
sub_140a2e390(&var_50, u".%x.%x", zx.q(*(rdx + 0x7d0)))
int64_t* var_60
int32_t rdx_2 = sub_140b291e0(arg2, &var_60, 0)
int32_t i_8 = arg1[3].d
int64_t rbx = arg1[2]
int64_t rsi = 0
int64_t* var_90 = nullptr
sub_1405a4c70(&var_90, sbb.d(rdx_2, rdx_2, i_8 != 0) + 0xc + i_8, 0)
memcpy(var_90, rbx, i_8 * 2)
sub_140a2cf70(&var_90, u"VulkanPSO_", 0xa)
int32_t var_84
int64_t* var_80
int32_t i_2
int32_t var_54
int32_t i_3
int32_t rcx_5
int64_t* r15

if (i_8 s> 1)
    int32_t rbx_2
    
    if (i_2 == 0)
        rbx_2 = 0
    else
        rbx_2 = i_2 - 1
    
    int32_t rcx_6
    
    if (i_8 == 0)
        rcx_6 = i_8 + 1
    
    if (i_8 != 0 || rbx_2 == 0)
        rcx_6 = 0
    
    int32_t rdx_9 = i_8 + rcx_6 + rbx_2
    var_80 = var_90
    var_90 = nullptr
    int32_t var_88
    var_88.q = 0
    
    if (rdx_9 s> var_84)
        sub_1405947f0(&var_80, rdx_9)
    
    sub_140a20ba0(&var_80, var_60, rbx_2)
    i_3 = i_8
    rcx_5 = var_84
    r15 = var_80
    int32_t var_78_1
    var_78_1.q = 0
    var_80 = nullptr
else
    r15 = var_60
    i_3 = i_2
    rcx_5 = var_54
    var_60 = nullptr
    i_2.q = 0

int64_t* var_70
int32_t i_9
int64_t* var_40
int32_t i_5
int64_t* rdi_1
int32_t r12

if (i_3 s> 1)
    int32_t rbx_3 = i_9 - 1
    
    if (i_9 == 0)
        rbx_3 = 0
    
    int32_t rdx_14
    
    if (i_3 == 0)
        rdx_14 = i_3 + 1
    
    if (i_3 != 0 || rbx_3 == 0)
        rdx_14 = 0
    
    var_70 = r15
    int32_t rdx_16 = rdx_14 + i_3 + rbx_3
    r15 = nullptr
    
    if (rdx_16 s> rcx_5)
        sub_1405947f0(&var_70, rdx_16)
    
    sub_140a20ba0(&var_70, var_50, rbx_3)
    rdi_1 = var_70
    i_5 = i_3
    r12 = rcx_5
    var_70 = nullptr
    int32_t var_68_1
    var_68_1.q = 0
else
    i_5 = i_9
    int64_t rdi = var_50
    var_40 = nullptr
    
    if (i_5 != 0)
        sub_1405a4c70(&var_40, i_5, 0)
        rdi_1 = var_40
        memcpy(rdi_1, rdi, i_5 * 2)
        int32_t var_34
        r12 = var_34
    else
        r12 = 0
        rdi_1 = nullptr

if (&arg1[4] != &var_40)
    int64_t rcx_13 = arg1[4]
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    arg1[4] = rdi_1
    arg1[5].d = i_5
    *(arg1 + 0x2c) = r12
else if (rdi_1 != 0)
    sub_140a74f90(rdi_1)

if (r15 != 0)
    sub_140a74f90(r15)

int64_t* rcx_16 = var_90

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

int64_t* rcx_17 = var_60

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

int32_t rdx_19 = sub_140b291e0(arg2, &var_60, 0)
int32_t i_6 = arg1[3].d
int64_t rdi_2 = arg1[2]
var_90 = nullptr
sub_1405a4c70(&var_90, sbb.d(rdx_19, rdx_19, i_6 != 0) + 0x14 + i_6, 0)
memcpy(var_90, rdi_2, i_6 * 2)
sub_140a2cf70(&var_90, u"TempScanVulkanPSO_", 0x12)
int32_t i_4
int32_t rcx_23
int64_t* rdi_3

if (i_6 s> 1)
    int32_t rbx_5
    
    if (i_2 == 0)
        rbx_5 = 0
    else
        rbx_5 = i_2 - 1
    
    int32_t rdx_24
    
    if (i_6 == 0)
        rdx_24 = i_6 + 1
    
    if (i_6 != 0 || rbx_5 == 0)
        rdx_24 = 0
    
    var_70 = var_90
    int32_t rdx_26 = rdx_24 + i_6 + rbx_5
    var_90 = nullptr
    int32_t var_88_1
    var_88_1.q = 0
    
    if (rdx_26 s> var_84)
        sub_1405947f0(&var_70, rdx_26)
    
    sub_140a20ba0(&var_70, var_60, rbx_5)
    i_4 = i_6
    rcx_23 = var_84
    rdi_3 = var_70
    int32_t var_68_2
    var_68_2.q = 0
    var_70 = nullptr
else
    rdi_3 = var_60
    i_4 = i_2
    rcx_23 = var_54
    var_60 = nullptr
    i_2.q = 0

int32_t i_7
int16_t* r15_1

if (i_4 s> 1)
    int32_t rbx_6 = i_9 - 1
    
    if (i_9 == 0)
        rbx_6 = 0
    
    int32_t r8_12
    
    if (i_4 == 0)
        r8_12 = i_4 + 1
    
    if (i_4 != 0 || rbx_6 == 0)
        r8_12 = 0
    
    var_40 = rdi_3
    int32_t rdx_32 = i_4 + rbx_6 + r8_12
    int32_t var_34_1 = rcx_23
    
    if (rdx_32 s> rcx_23)
        sub_1405947f0(&var_40, rdx_32)
    
    sub_140a20ba0(&var_40, var_50, rbx_6)
    r15_1 = var_40
    i_7 = i_4
else
    i_7 = i_9
    r15_1 = nullptr
    int64_t r12_1 = var_50
    var_80 = nullptr
    
    if (i_7 != 0)
        sub_1405a4c70(&var_80, i_7, 0)
        r15_1 = var_80
        memcpy(r15_1, r12_1, i_7 * 2)
    
    if (rdi_3 != 0)
        sub_140a74f90(rdi_3)

int64_t* rcx_31 = var_90

if (rcx_31 != 0)
    sub_140a74f90(rcx_31)

int64_t* rcx_32 = var_60

if (rcx_32 != 0)
    sub_140a74f90(rcx_32)

int16_t* const r12_2 = &data_142d40450
int16_t* const rdx_34

if (arg1[5].d == 0)
    rdx_34 = &data_142d40450
else
    rdx_34 = arg1[4]

char rax_10 = (*(*rax + 0x70))(rax, rdx_34)
char arg_8
uint64_t result

if (rax_10 != 0)
    int16_t* const rdx_35 = &data_142d40450
    
    if (i_7 != 0)
        rdx_35 = r15_1
    
    (*(*rax + 0x80))(rax, rdx_35)
    int16_t* const r8_14
    
    if (arg1[5].d == 0)
        r8_14 = &data_142d40450
    else
        r8_14 = arg1[4]
    
    int16_t* const rdx_36 = &data_142d40450
    
    if (i_7 != 0)
        rdx_36 = r15_1
    
    (*(*rax + 0x90))(rax, rdx_36, r8_14)
    var_60 = nullptr
    i_2.q = 1
    sub_1405a4f90(&var_60)
    int64_t* rdi_5 = var_60
    *rdi_5 = 0
    rdi_5[1].d = i_7
    
    if (i_7 != 0)
        sub_1405a4c70(rdi_5, i_7, 0)
        memcpy(*rdi_5, r15_1, i_7 * 2)
    else
        *(rdi_5 + 0xc) = 0
    
    result = sub_1418e3e00(arg1, &var_60)
    arg_8 = result.b
    
    if (result.b != 0)
        *(arg1 + 0xa) = 1
        int16_t* const rdx_41
        
        if (arg1[5].d == 0)
            rdx_41 = &data_142d40450
        else
            rdx_41 = arg1[4]
        
        result = (*(*rax + 0x90))(rax, rdx_41)
        int64_t rbx_7 = data_143efb3d8
        int64_t rcx_41
        
        if (data_143de5480 == 0)
            rcx_41 = 0
        else
            result = GetCurrentThreadId()
            rcx_41.b = result.d != data_143de5470
        
        if (*(rbx_7 + (rcx_41 << 2)) != 0)
            arg1[1].b = 1
    
    int32_t i_1 = i_2
    int64_t* r14_1 = var_60
    int64_t* rbx_8 = r14_1
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t rcx_42 = *rbx_8
            
            if (rcx_42 != 0)
                result = sub_140a74f90(rcx_42)
            
            rbx_8 = &rbx_8[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    if (r14_1 != 0)
        result = sub_140a74f90(r14_1)

if (rax_10 == 0 || arg_8 == 0)
    int64_t* rax_14 = __crt_deferred_errno_cache::get(&data_143db7b00)
    
    if (arg1[3].d != 0)
        r12_2 = arg1[2]
    
    result = (*(*rax_14 + 0x170))(rax_14, r12_2)

if (*(arg1 + 0xa) == 0)
    result = arg3
    *result = 1
else if (arg1[1].b != 0)
    int64_t rbx_9 = data_143efb3a8
    
    if (data_143de5480 != 0)
        result = GetCurrentThreadId()
        rsi.b = result.d != data_143de5470
    
    if (*(rbx_9 + (rsi << 2)) != 0)
        result = arg3
        *result = 1

if (r15_1 != 0)
    result = sub_140a74f90(r15_1)

int64_t rcx_46 = var_50

if (rcx_46 == 0)
    return result

return sub_140a74f90(rcx_46)
