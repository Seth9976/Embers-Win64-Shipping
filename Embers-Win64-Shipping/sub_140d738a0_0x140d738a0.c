// 函数: sub_140d738a0
// 地址: 0x140d738a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** rsi = arg1
void* rcx = *arg1

if (*(rcx + 8) == 0)
    return 

int64_t* rcx_1 = *(rcx + 0x10)

if ((*(*rcx_1 + 0x10))(rcx_1).b == 0)
    return 

int32_t rbp_1 = *rsi[2]
int64_t var_18
int64_t* rax_3 = sub_140d89620(*rsi, &var_18, arg2)
int32_t rcx_3 = rax_3[1].d
int32_t rbx_1 = rcx_3 - 1

if (rcx_3 == 0)
    rbx_1 = -1

int32_t rax_4 = rcx_3 - 1

if (rcx_3 == 0)
    rax_4 = -1

if (rcx_3 == 0)
    rax_4 = 0

int32_t r10_1

if (rbp_1 s>= 0)
    r10_1 = rax_4
    
    if (rbp_1 s< rax_4)
        r10_1 = rbp_1
else
    r10_1 = 0

if (rcx_3 == 0)
    rbx_1 = 0

int32_t rbx_2 = rbx_1 - r10_1
int32_t rax_5 = rax_4 - r10_1

if (rax_4 - r10_1 s>= 0)
    if (rax_5 s< rbx_2)
        rbx_2 = rax_5
    
    if (rbx_2 != 0)
        int32_t rax_7 = rcx_3 - rbx_2
        
        if (rax_7 != r10_1)
            int64_t r9_1 = *rax_3
            memmove(r9_1 + (sx.q(r10_1) << 1), r9_1 + (sx.q(rbx_2 + r10_1) << 1), 
                (rax_7 - r10_1) * 2)
            rcx_3 = rax_3[1].d
        
        rax_3[1].d = rcx_3 - rbx_2

int16_t* psz_1 = *rax_3
int16_t* const psz = &data_142d40450
*rax_3 = 0
bool cond:3_1 = rax_3[1].d != 0
rax_3[1] = 0

if (cond:3_1)
    psz = psz_1

**rsi[3] = SysAllocString(psz)

if (psz_1 != 0)
    sub_140a74f90(psz_1)

int64_t rcx_8 = var_18

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

*rsi[1] = 0
