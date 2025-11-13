// 函数: sub_140bc4910
// 地址: 0x140bc4910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t var_58
int32_t var_50

if ((*(arg1 + 0x1a) & 1) != 0)
    void*** rax = j_sub_140a82f30(0x1d0)
    void*** rdi_1 = rax
    
    if (rax == 0)
        rdi_1 = nullptr
    else
        int64_t var_38_1 = 0
        *rdi_1 = &data_142e868b8
        rdi_1[0x29] = 0
        rdi_1[0x2a].d = 0
        *(rdi_1 + 0x154) = 8
        rdi_1[0x2c] = 0
        rdi_1[0x2e] = 0
        __builtin_memset(&rdi_1[0x35], 0, 0x1a)
        void* rbx_1 = &rdi_1[1]
        rdi_1[0x34] = arg7
        uint128_t zmm0_1 = zx.o(*arg1)
        int64_t rsi_1 = sx.q(*(rbx_1 + 0x148))
        var_50 = arg1[1].d
        var_58 = zmm0_1.q
        int32_t rax_3 = (rsi_1 + 1).d
        int64_t var_40_1 = arg3
        *(rbx_1 + 0x148) = rax_3
        
        if (rax_3 s> *(rbx_1 + 0x14c))
            sub_140bceea0(rbx_1, rsi_1.d)
        
        void* rax_4 = *(rbx_1 + 0x140)
        int64_t rdx_1 = rsi_1 * 5
        arg5 = arg2.o
        
        if (rax_4 != 0)
            rbx_1 = rax_4
        
        *(rbx_1 + (rdx_1 << 3)) = var_58.o
        *(rbx_1 + (rdx_1 << 3) + 0x10) = arg5
        *(rbx_1 + (rdx_1 << 3) + 0x20) = var_38_1
        
        if (arg6 != 0)
            sub_140a3c510(&rdi_1[0x2c], arg6)
            sub_140bd1060(rdi_1)
            return rdi_1
    
    sub_140bd1060(rdi_1, arg5)
    return rdi_1

sub_140bc7f20(arg1)
sub_140bc8400(&var_58, arg1[1].d)
int32_t rcx_5 = arg1[3].d
void*** rbx_2 = nullptr
int16_t* var_68
int32_t var_60

if (((rcx_5 u>> 0xb).b & 1) != 0)
    sub_140b0f020(&var_68, &var_50, &data_143e1a878)
else if (((rcx_5 u>> 8).b & 1) != 0)
    int64_t* r8
    
    if ((not.b(rcx_5.b) & 1) == 0)
        r8 = &data_143e1a868
        
        if (((rcx_5 u>> 0xc).b & 1) == 0)
            r8 = &data_143e1a858
    else
        r8 = &data_143e1a848
    
    sub_140b0f020(&var_68, &var_50, r8)
else
    int64_t r14_1 = var_50.q
    var_68 = nullptr
    int32_t var_48
    var_60 = var_48
    
    if (var_48 != 0)
        sub_1405a4c70(&var_68, var_48, 0)
        memcpy(var_68, r14_1, var_48 * 2)
    else
        int32_t var_5c_1 = 0

int16_t* const rdi_3 = &data_142d40450

if (((arg1[3].d u>> 1).b & 1) != 0)
    int16_t* const r9 = &data_142d40450
    
    if (var_60 != 0)
        r9 = var_68
    
    sub_140af98a0("Unknown", 0x46a, u"Package level compression is no longer supported (%s).", r9)
    sub_140afbb40()

int64_t* rax_13 = __crt_deferred_errno_cache::get(&data_143db7b00)

if (var_60 != 0)
    rdi_3 = var_68

int64_t r8_3 = *rax_13
int64_t rax_14 = (*(r8_3 + 0x118))(rax_13, rdi_3, r8_3)

if (rax_14 != 0)
    int64_t r14_3 = var_58 + arg2
    void*** rax_15 = j_sub_140a82f30(0x20)
    void*** rdi_4 = rax_15
    
    if (rax_15 == 0)
        rdi_4 = nullptr
    else
        rdi_4[1] = rax_14
        *rdi_4 = &data_142e85b00
        rdi_4[2] = 0
        rdi_4[3] = -1
    
    if (sub_140bcb7e0(rdi_4, r14_3, arg3, arg4, arg6, arg7) != 0)
        rbx_2 = rdi_4
    else if (rdi_4 != 0)
        (**rdi_4)(rdi_4, 1)

int16_t* rcx_13 = var_68

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

int64_t rcx_14 = var_50.q

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

return rbx_2
