// 函数: sub_14104d4d0
// 地址: 0x14104d4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int32_t rbx = 0
uint64_t rsi = zx.q(arg3)
int64_t var_38
int64_t rdx_1

if (arg2 == 0)
    rdx_1 = 0
    var_38 = 0
else
    rdx_1 = zx.q(arg5) + *(arg2 + 0x48)
    var_38 = rdx_1

int32_t var_2c = arg4
int32_t rcx_1

if (arg2 == 0)
    rcx_1 = 0
    int32_t var_30_1 = 0
else
    rcx_1 = *(arg2 + 0x58) - arg5
    int32_t var_30 = rcx_1

uint64_t result = rsi << 4
int64_t* r8_1 = arg1 + 0x1e8 + result

if (rdx_1 != *r8_1 || arg4 != *(r8_1 + 0xc) || rcx_1 != r8_1[1].d)
    *(arg1 + 0x30) = 1
    *(arg1 + (rsi << 3) + 0x3e8) = arg2
    
    if (arg2 == 0)
        *r8_1 = 0
        r8_1[1] = 0
        *(arg1 + (rsi << 3) + 0x3e8) = 0
        *(arg1 + (rsi << 3) + 0x4e8) = 0
        result = zx.q(*(arg1 + 0x5ec)) & zx.q(not.d(1 << (rsi.d u% 0x20)))
    else
        void* rax_4 = *(arg2 + 0x10)
        void* rdx_2 = *(rax_4 + 0x28)
        void* rcx_2 = rdx_2 + 0x28
        
        if (rdx_2 == 0)
            rcx_2 = rax_4 + 0x30
        
        *(arg1 + (rsi << 3) + 0x4e8) = rcx_2
        *r8_1 = var_38.o
        result = zx.q(*(arg1 + 0x5ec)) | zx.q(1 << (rsi.d u% 0x20))
    
    *(arg1 + 0x5ec) = result.d
    int32_t temp0_1 = result.d
    
    if (temp0_1 == 0)
        *(arg1 + 0x5e8) = 0xffffffff
    else
        uint64_t rflags_1
        int32_t result_1
        result_1, rflags_1 = _bit_scan_reverse(result.d)
        result = zx.q(result_1)
        
        if (temp0_1 != 0)
            rbx = result.d
        
        *(arg1 + 0x5e8) = rbx

if (arg2 != 0)
    void* rdx_3 = *(arg2 + 0x10)
    
    if (rdx_3 != 0 && *(rdx_3 + 0xfc) != 0)
        result = sub_141037220(*(arg1 + 0x28) + 0x1c0, rdx_3, 1, 0xffffffff)

__security_check_cookie(rax_1 ^ &var_58)
return result
