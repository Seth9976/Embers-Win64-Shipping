// 函数: sub_142b9df50
// 地址: 0x142b9df50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = arg2
int32_t r12 = arg4
int32_t var_50
sub_142b97220(&var_50, arg3, arg4)
int32_t r14 = arg5
var_50 += *rdi
int32_t var_4c
int32_t var_4c_1 = var_4c + rdi[1]
int32_t r13_3 = (r14 s>> 0x1f & 0xff4c0000) + 0x5a0000

if (r14 == 0)
    return 0

int32_t rax_16
int32_t r15_1
int32_t temp2_1

do
    if (r14 s<= 0x5a0000)
        r15_1 = r14
        
        if (r14 s< 0xffa60000)
            r15_1 = -0x5a0000
    else
        r15_1 = 0x5a0000
    
    int32_t rcx_1 = r15_1 + r12
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r15_1)
    int32_t rsi_4 = ((temp1_1 ^ temp0_1) - temp0_1) s>> 1
    int32_t var_58
    sub_142b97220(&var_58, arg3, rcx_1)
    var_58 += *rdi
    int32_t var_54 = var_54 + rdi[1]
    uint64_t rax_8 = zx.q(sub_142b91760(rsi_4) + 0x10000)
    uint32_t rax_11 = sub_142b93dd0(arg3, sub_142b964b0(rsi_4) << 2, (rax_8 * 3).d)
    int32_t var_48
    sub_142b97220(&var_48, rax_11, r12 + r13_3)
    var_48 += var_50
    r12 = rcx_1
    int32_t var_44 = var_44 + var_4c_1
    int32_t var_40
    sub_142b97220(&var_40, rax_11, r12 - r13_3)
    var_40 += var_58
    int32_t var_3c = var_3c + var_54
    rax_16 = sub_142b9e2d0(arg1, 3)
    
    if (rax_16 == 0)
        uint64_t rcx_9 = zx.q(*arg1)
        int64_t r8_6 = *(arg1 + 0x10)
        int64_t* rdx_6 = *(arg1 + 8) + (rcx_9 << 3)
        *rdx_6 = var_48.q
        rdx_6[1] = var_40.q
        rdx_6[2] = var_58.q
        *(r8_6 + rcx_9) = 0x202
        *(r8_6 + rcx_9 + 2) = 1
        *arg1 += 3
    
    arg1[6].b = 0
    
    if (rax_16 != 0)
        break
    
    rdi = arg2
    var_50.q = var_58.q
    temp2_1 = r14
    r14 -= r15_1
while (temp2_1 != r15_1)
return zx.q(rax_16)
