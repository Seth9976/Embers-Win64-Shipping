// 函数: sub_14218ff50
// 地址: 0x14218ff50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x600)
int32_t rsi = 0x670
int64_t rdi = 0
uint64_t r14_1 = sx.q(*(arg1 + 0x608)) << 3 u>> 3

if (rbx u> &rbx[sx.q(*(arg1 + 0x608))])
    r14_1 = 0

if (r14_1 != 0)
    do
        int64_t* rcx = *rbx
        
        if (rcx != 0)
            int32_t arg_8
            void arg_10
            (*(*rcx + 0x130))(rcx, &arg_10, &arg_8)
            rsi += arg_8
        
        rbx = &rbx[1]
        rdi += 1
    while (rdi != r14_1)

void* rcx_1 = *(arg1 + 0x3e8)

if (rcx_1 == 0)
    return zx.q(rsi)

void* r8_2 = *(rcx_1 + 0x178)
int32_t rdx_2 = rsi + (*(rcx_1 + 0x7c) << 3)

if (r8_2 == 0)
    return zx.q(rdx_2)

uint64_t rax_4 = zx.q(*(r8_2 + 0x74))
void* rbx_1 = r8_2 + 8
int64_t rsi_1 = 0
uint32_t rbp_1 = (rax_4 << 3).d
void* rax_5 = *(r8_2 + 0x68)

if (rax_4.d u<= 0xc)
    rbp_1 = 0

int32_t rbp_3 = rbp_1 + 0x88 + rdx_2

if (rax_5 != 0)
    rbx_1 = rax_5

int64_t r14_2 = sx.q(*(r8_2 + 0x70)) << 3
uint64_t r14_3 = r14_2 u>> 3

if (rbx_1 u> rbx_1 + r14_2)
    r14_3 = 0

if (r14_3 == 0)
    return zx.q(rbp_3)

do
    int64_t* rdi_1 = *rbx_1
    
    if (rdi_1 != 0)
        void** var_c8
        sub_140b4c2a0(&var_c8)
        int64_t rax_8 = *rdi_1
        char var_9e = var_9e | 0x80
        var_c8 = &data_142e716f8
        int64_t var_38_1 = 0
        int32_t var_30_1 = 0
        int64_t* rax_9 = (*(rax_8 + 0x38))(rdi_1)
        int64_t r8_3 = *rax_9
        (*(r8_3 + 8))(rax_9, &var_c8, r8_3)
        rbp_3 += var_30_1
        sub_140b4cb40(&var_c8)
    
    rbx_1 += 8
    rsi_1 += 1
while (rsi_1 != r14_3)

return zx.q(rbp_3)
