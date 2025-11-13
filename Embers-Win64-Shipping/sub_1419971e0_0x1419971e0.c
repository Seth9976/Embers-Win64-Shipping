// 函数: sub_1419971e0
// 地址: 0x1419971e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* lpCriticalSection = *(arg1 + 0x18) + 0x18
uint64_t rsi = zx.q(arg3)
EnterCriticalSection(lpCriticalSection)
*(arg1 + 0x20) += rsi
uint32_t r14 = (rsi << 2).d
int64_t* rcx_1 = data_143f0f180
void* rdi = *(arg1 + 0x18)
*arg2 = 0
arg2[1] = 0
int64_t* rdi_1 = *(rdi + 0x10)
int32_t rax_1 = (*(*rcx_1 + 0x1e8))(rcx_1, 0x1d)
int32_t r9_1 = neg.d(rax_1)
int32_t var_60
int32_t arg_8

if (rdi_1 == 0 || ((rdi_1[5].d - 1 + rax_1) & r9_1) + r14 u> rdi_1[3].d)
    int64_t* r8 = *(arg1 + 0x18)
    int64_t rax_7 = sx.q(r8[1].d)
    
    if (rax_7.d s<= 0)
    label_1419972a4:
        int32_t rcx_6 = data_1439c85c0
        int32_t rax_11 = divu.dp.d(0:(rcx_6 - 1 + rsi.d), rcx_6) * rcx_6
        int32_t rcx_7 = data_1439c85bc
        
        if (rax_11 u>= rcx_7)
            rcx_7 = rax_11
        
        arg_8 = rcx_7
        int64_t* rax_12 = j_sub_140a82f30(0x40)
        rdi_1 = rax_12
        
        if (rax_12 == 0)
            rdi_1 = nullptr
        else
            rax_12[3] = 0
            rax_12[7] = 0
            __builtin_memset(&rax_12[1], 0, 0x14)
            __builtin_memset(&rax_12[4], 0, 0x20)
            *rdi_1 = &data_143009e18
        
        int64_t* rsi_1 = *(arg1 + 0x18)
        int64_t r12_1 = sx.q(rsi_1[1].d)
        int32_t rax_13 = (r12_1 + 1).d
        rsi_1[1].d = rax_13
        
        if (rax_13 s> *(rsi_1 + 0xc))
            sub_140638870(rsi_1)
        
        uint64_t r8_2 = zx.q(arg_8)
        *(*rsi_1 + (r12_1 << 3)) = rdi_1
        (*(*rdi_1 + 8))(rdi_1, 4, r8_2, 0x1d, 4)
        rsi = zx.q(arg3)
    else
        int64_t** r8_1 = *r8
        int64_t rdx = 0
        
        while (true)
            rdi_1 = *r8_1
            
            if (((rax_1 - 1 + rdi_1[5].d) & r9_1) + r14 u<= rdi_1[3].d)
                break
            
            rdx += 1
            r8_1 = &r8_1[1]
            
            if (rdx s>= rax_7)
                goto label_1419972a4
    
    if (rdi_1[4] == 0)
        sub_1419aad20(&rdi_1[6], 0)
        int64_t* rcx_11 = data_143f0f180
        var_60 = 1
        rdi_1[4] = (*(*rcx_11 + 0x130))(rcx_11, &data_143f02b98, rdi_1[1], 0, rdi_1[3].d, 1)
    
    *(*(arg1 + 0x18) + 0x10) = rdi_1

int64_t rdx_3 = rdi_1[1]
int32_t r9_3 = rax_1 - 1 + rdi_1[5].d
arg2[1] = rdi_1
int32_t r9_4 = r9_3 & neg.d(rax_1)
*arg2 = sx.q(r9_4) + rdi_1[4]
rdi_1[5].d = r9_4
void var_58
int128_t* rax_21 = sub_141961e20(&var_58, rdx_3, 0x1d, r9_4)
int64_t* rcx_13 = data_143f0f180
(*(*rcx_13 + 0x4b0))(rcx_13, &arg_8, &data_143f02b98, rax_21, rsi.d, var_60)
int64_t rbp_2 = sx.q(rdi_1[7].d)
int32_t rax_22 = (rbp_2 + 1).d
rdi_1[7].d = rax_22

if (rax_22 s> *(rdi_1 + 0x3c))
    sub_1405a4d70(&rdi_1[6])

*(rdi_1[6] + (rbp_2 << 3)) = arg_8.q
arg_8.q = 0
sub_1405ec8a0(&arg_8)
rdi_1[5].d += r14
arg2[2] = *(rdi_1[6] + (sx.q(rdi_1[7].d) << 3) - 8)

if (lpCriticalSection != 0)
    LeaveCriticalSection(lpCriticalSection)

return arg2
