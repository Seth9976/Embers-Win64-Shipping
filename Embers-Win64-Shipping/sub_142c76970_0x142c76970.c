// 函数: sub_142c76970
// 地址: 0x142c76970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg2[0xd3]
void* rbx
char* rdi

if (rcx == 0)
    rdi = *(arg1 + 0x150)
    rbx = arg3
else
    rbx = &arg2[0xd4]
    int64_t rax_1 = sub_142c562c0(rcx, *rbx + *arg3)
    
    if (rax_1 == 0)
        arg2[0xd3] = rax_1
        *rbx = rax_1
        return 0x1b
    
    arg2[0xd3] = rax_1
    memcpy(rax_1 + *rbx, *(arg1 + 0x150), (*arg3).d)
    *rbx += *arg3
    rdi = arg2[0xd3]

int64_t rbx_1 = *rbx
bool cond:0 = rbx_1 == 0

if (rbx_1 s> 0)
    while (true)
        if (*rdi == 0x24)
            uint64_t r14_4
            
            if (rbx_1 s> 4)
                arg2[0xd5].d = zx.d(rdi[1])
                r14_4 = zx.q((zx.d(rdi[2]) << 8 | zx.d(rdi[3])) + 4)
            
            if (rbx_1 s<= 4 || rbx_1 s< r14_4)
                *arg4 = 1
            else
                int32_t rax_6
                int64_t r8_2
                rax_6, r8_2, arg5 = sub_142c76dd0(arg2, rdi, zx.q(r14_4.d), arg5)
                
                if (rax_6 != 0)
                    sub_142c64760(arg1, "Got an error writing an RTP packet", r8_2, arg5)
                    *arg4 = 0
                    data_143ccb8a0(arg2[0xd3])
                    arg2[0xd3] = 0
                    arg2[0xd4] = 0
                    return zx.q(rax_6)
                
                rbx_1 -= r14_4
                rdi = &rdi[r14_4]
                
                if (*(arg1 + 0x804) == 0xb)
                    *(arg1 + 0x220) &= 0xfffffffe
                
                if (rbx_1 s> 0)
                    continue
        
        cond:0 = rbx_1 == 0
        break

uint64_t result

if (cond:0 || *rdi != 0x24)
    *(arg1 + 0x150) += *arg3 - rbx_1
    *arg3 = rbx_1
    data_143ccb8a0(arg2[0xd3])
    result = 0
    arg2[0xd3] = 0
    arg2[0xd4] = 0
else
    int64_t rax_7 = data_143ccb898(rbx_1)
    
    if (rax_7 == 0)
        data_143ccb8a0(arg2[0xd3])
        arg2[0xd3] = 0
        arg2[0xd4] = 0
        return zx.q((rax_7 + 0x1b).d)
    
    memcpy(rax_7, rdi, rbx_1.d)
    data_143ccb8a0(arg2[0xd3])
    result = 0
    arg2[0xd3] = rax_7
    arg2[0xd4] = rbx_1
    *arg3 = 0

return result
