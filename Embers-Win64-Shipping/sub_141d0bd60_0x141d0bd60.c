// 函数: sub_141d0bd60
// 地址: 0x141d0bd60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15 = data_143de7030
sub_140b34200("PakPrecacherQueueRequest", r15)
EnterCriticalSection(&arg1[1])
int16_t* rax = sub_141d0cee0(arg1, arg3, arg4, arg5)
void* rbx

if (rax != 0)
    uint32_t rsi_1 = zx.d(*rax)
    int64_t r8_1 = sx.q(sub_141cfc5b0(&arg1[0x17]))
    int64_t rdx_3 = sx.q(not.d(*(arg1 + 0xdc))) & r8_1
    int32_t arg_8 = r8_1.d
    int64_t* r14_3 = rdx_3 * 0x30 + arg1[0x17]
    r14_3[1] = arg7
    r14_3[5].d = arg8
    *r14_3 = zx.q(rsi_1) << 0x30 | arg6
    *(r14_3 + 0x2c) = 1
    r14_3[2] = arg2
    r14_3[3] = arg1[7]
    arg1[7] += 1
    r14_3[4].d = r8_1.d
    *(arg2 + 8) = *r14_3
    int64_t rax_6 = r14_3[3]
    *(arg2 + 0x18) = r8_1.d
    *(arg2 + 0x10) = rax_6
    sub_141cf16a0(&arg1[0x21], &r14_3[3], &arg_8)
    arg1[0xa].d += 1
    int64_t* rcx_10 = &data_143f36208
    
    if (sub_141cfb5e0(arg1, r14_3, arg_8) == 0)
        rcx_10 = &data_143f36210
    
    *rcx_10 += 1
    sub_141d124f0(arg1, 0, 0xffff)
    rbx.b = 1
else
    rbx.b = 0

if (arg1 != -8)
    LeaveCriticalSection(&arg1[1])

sub_140b38680("PakPrecacherQueueRequest", r15)
return zx.q(rbx.b)
