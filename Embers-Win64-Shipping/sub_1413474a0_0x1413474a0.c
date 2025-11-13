// 函数: sub_1413474a0
// 地址: 0x1413474a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = 0
int64_t* r13 = arg1[2]
void* r12 = *arg1
int64_t rax_1 = *arg1[4]
int64_t* r15 = *arg1[3]
int64_t* rax_3 = arg1[1]
void* rsi = *rax_3
void* rbx = rax_3[1]
void* var_48 = rsi
void* var_40 = rbx

if (rsi != 0)
    int64_t* rbx_1 = *(rbx + 0x10)
    int64_t rdx_1 = sx.q(*(rsi + 0x10c))
    int64_t rax_4 = rbx_1[3]
    int64_t r14_1 = rdx_1 << 3
    
    if (*(r14_1 + rax_4) == 0)
        sub_1419ccf30(rbx_1, rdx_1.d)
        rax_4 = rbx_1[3]
    
    rbp = *(r14_1 + rax_4)

int64_t rax_5 = *r15
uint64_t rdx_2 = zx.q(r13[0x2a9].d)
int64_t arg_8 = 0
int32_t var_50 = 0xf
sub_141439db0(rsi, r12, rbp, r15, (*(rax_5 + 0x40))(r15, rdx_2, &arg_8), r13, r13.d + 0x10)
sub_14133b010(r12, &var_48, rbp, rax_1)
int64_t rsi_1 = 0
int64_t* r15_1 = arg1[2]
void* r12_1 = *arg1
int64_t r13_1 = *arg1[4]
int64_t* r14_2 = *arg1[3]
int64_t* rax_9 = arg1[5]
void* rbp_1 = *rax_9
void* rbx_3 = rax_9[1]
var_48 = rbp_1
void* var_40_1 = rbx_3

if (rbp_1 != 0)
    int64_t* rbx_4 = *(rbx_3 + 0x10)
    int64_t rdx_5 = sx.q(*(rbp_1 + 0x10c))
    int64_t rax_10 = rbx_4[3]
    int64_t rsi_2 = rdx_5 << 3
    
    if (*(rsi_2 + rax_10) == 0)
        sub_1419ccf30(rbx_4, rdx_5.d)
        rax_10 = rbx_4[3]
    
    rsi_1 = *(rsi_2 + rax_10)

int64_t rax_11 = *r14_2
uint64_t rdx_6 = zx.q(r15_1[0x2a9].d)
arg_8 = 0
int32_t var_50_1 = 0xf
sub_141439db0(rbp_1, r12_1, rsi_1, r14_2, (*(rax_11 + 0x40))(r14_2, rdx_6, &arg_8), r15_1, 
    r15_1.d + 0x10)
sub_14133aa50(r12_1, &var_48, rsi_1, r13_1)
void* rbx_6 = *arg1
int32_t rsi_3 = *arg1[6]
void*** rcx_10 = (*(rbx_6 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_14 = &rcx_10[3]

if (rax_14 u> *(rbx_6 + 0x38))
    sub_140b0e3d0(rbx_6 + 0x30, 0x20)
    rcx_10 = (*(rbx_6 + 0x30) + 7) & 0xfffffffffffffff8
    rax_14 = &rcx_10[3]

*(rbx_6 + 0x30) = rax_14
int64_t* rax_15 = *(rbx_6 + 8)
*(rbx_6 + 0x14) += 1
*rax_15 = rcx_10
*(rbx_6 + 8) = &rcx_10[1]
rcx_10[1] = 0
*rcx_10 = &data_142f18bb8
rcx_10[2].d = rsi_3
return &data_142f18bb8
