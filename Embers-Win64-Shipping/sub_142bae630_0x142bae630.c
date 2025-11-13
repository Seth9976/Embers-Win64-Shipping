// 函数: sub_142bae630
// 地址: 0x142bae630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg1[3]
int32_t r14 = 0
int64_t rbp = sx.q(*(rsi + 0x62))
*(*(rsi + 0x68) + (rbp << 3)) = arg1[0xb]
int64_t r9 = sx.q((rbp + 1).d)
*(*(rsi + 0x68) + (r9 << 3)) = arg1[0xc]
int64_t r8 = sx.q((rbp + 2).d)
*(*(rsi + 0x68) + (r8 << 3)) = arg1[0x22]
int64_t rdx = sx.q((rbp + 3).d)
*(*(rsi + 0x68) + (rdx << 3)) = arg1[0x23]
*(rbp + *(rsi + 0x70)) = 0
*(r9 + *(rsi + 0x70)) = 0
*(r8 + *(rsi + 0x70)) = 0
*(rdx + *(rsi + 0x70)) = 0
void* rcx_4 = *arg1

if ((*(rcx_4 + 4) & 0x7fff0000) != 0 || (*(rcx_4 + 8) & 0x8000) != 0)
    r14 = sub_142bafd10(rcx_4, *(arg1 + 0x24), rsi + 0x60, rbp.d + 4, arg2)
    void* rax_12 = *arg1
    
    if ((*(rax_12 + 0x418) & 2) == 0)
        int64_t r9_2 = *(rsi + 0x68)
        arg1[0xa].d = *(r9_2 + (sx.q(rbp.d + 1) << 3)) - *(r9_2 + (sx.q(rbp.d) << 3))
    
    if ((*(rax_12 + 0x418) & 0x10) == 0)
        int64_t r8_3 = *(rsi + 0x68)
        *(arg1 + 0x10c) = *(r8_3 + (sx.q(rbp.d + 3) << 3)) - *(r8_3 + (sx.q(rbp.d + 2) << 3))

if (((*(rcx_4 + 4) & 0x7fff0000) == 0 && (*(rcx_4 + 8) & 0x8000) == 0) || r14 == 0)
    if ((arg1[4].b & 2) == 0)
        *(arg1 + 0xb4) = *(rsi + 0x62)
        *(arg1 + 0xb6) = *(rsi + 0x60)
        arg1[0x17] = *(rsi + 0x88)
        arg1[0x18] = *(rsi + 0x68)
        arg1[0x19] = *(rsi + 0x90)
        arg1[0x1a] = *(rsi + 0x70)
        arg1[0x1b] = *(rsi + 0x78)
        arg1[0x1c].w = 0
        memcpy(arg1[0x19], arg1[0x18], (zx.d(*(arg1 + 0xb4)) << 3) + 0x20)
    
    int32_t* i = *(rsi + 0x68)
    
    if ((arg1[4].b & 1) == 0)
        void* rcx_11 = *(arg1[1] + 0x40)
        int32_t r12_1 = *(rcx_11 + 4)
        int32_t r13_1 = *(rcx_11 + 8)
        
        for (; i u< &i[sx.q(rbp.d + 4) * 2]; i = &i[2])
            int32_t rax_26 = sub_142b93e80(*i, r12_1)
            int32_t rcx_13 = i[1]
            *i = rax_26
            i[1] = sub_142b93e80(rcx_13, r13_1)
    
    void* rdx_7 = *arg1
    
    if ((*(rdx_7 + 0x418) & 2) == 0 || (arg1[4].b & 2) != 0)
        arg1[0xb] = *(*(rsi + 0x68) + (sx.q(rbp.d) << 3))
        arg1[0xc] = *(*(rsi + 0x68) + (sx.q(rbp.d + 1) << 3))
    
    bool cond:2_1
    
    if ((*(rdx_7 + 0x418) & 0x10) == 0 || (arg1[4].b & 2) != 0)
        cond:2_1 = (arg1[4].b & 2) != 0
        arg1[0x22] = *(*(rsi + 0x68) + (sx.q(rbp.d + 2) << 3))
        arg1[0x23] = *(*(rsi + 0x68) + (sx.q(rbp.d + 3) << 3))
    
    if (((*(rdx_7 + 0x418) & 0x10) != 0 && (arg1[4].b & 2) == 0) || not(cond:2_1))
        *(arg1 + 0xb4) += 4
        r14 = sub_142bace40(arg1, 0)

return zx.q(r14)
