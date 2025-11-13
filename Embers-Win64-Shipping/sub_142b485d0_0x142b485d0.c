// 函数: sub_142b485d0
// 地址: 0x142b485d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg3 + 0xd0) != 0)
    int64_t result
    result.b = 0
    return result

uint64_t rbx
uint64_t arg_8 = rbx
int32_t rax = sub_1408e52c0(arg2)
char rax_1 = sub_142ab9920(arg3)
int32_t rax_4

if (rax_1 != 0 && (*(arg1 + 0x260) & 0xffe0) != 0)
    rbx = zx.q(sub_142b46670(arg2, arg1 + 0x258))
    int16_t rax_3 = *(arg1 + 0x260)
    int32_t rcx_4
    
    if (rax_3 s< 0)
        rcx_4 = *(arg1 + 0x264)
    else
        rcx_4 = sx.d(rax_3) s>> 5
    
    if (rbx.d == rcx_4)
        sub_142b464f0(arg2, rbx.d)
    
    rax_4 = sub_142b467c0(arg2)

char rax_5

if (rax_1 == 0 || (*(arg1 + 0x260) & 0xffe0) == 0 || rbx.d != rax_4)
    rax_5 = sub_142b48730(arg1, arg2, arg3, arg4)

if ((rax_1 != 0 && (*(arg1 + 0x260) & 0xffe0) != 0 && rbx.d == rax_4) || rax_5 != 0)
    rbx.b = 1
else
    rbx.b = 0

if (*(arg3 + 0xd0) != 0)
    if (sub_142ab9920(arg3) == 0 && (*(arg1 + 0x220) & 0xffe0) != 0)
        int32_t rax_7 = sub_142b46670(arg2, arg1 + 0x218)
        int16_t rax_8 = *(arg1 + 0x220)
        int32_t rcx_12
        
        if (rax_8 s< 0)
            rcx_12 = *(arg1 + 0x224)
        else
            rcx_12 = sx.d(rax_8) s>> 5
        
        if (rax_7 == rcx_12)
            sub_142b464f0(arg2, rax_7)
        
        int32_t rax_9
        
        if (rbx.b == 0)
            rax_9 = sub_142b467c0(arg2)
        
        if (rbx.b != 0 || rax_7 == rax_9)
            rbx.b = 1
else
    sub_14266cbe0(arg2, rax)

return zx.q(rbx.b)
