// 函数: sub_1410765a0
// 地址: 0x1410765a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2[8]
void* r14 = data_143ec4d30
void* r12 = data_143ec4d28
void* var_38
sub_1419a2ec0(arg2[0xc], &var_38, &data_143e3eb10, 0)
void* rsi = var_38
void* rdi = nullptr

if (rsi != 0)
    int64_t rdx_1 = sx.q(*(rsi + 0x10c))
    void* var_30
    int64_t* rdi_1 = *(var_30 + 0x10)
    int64_t r14_1 = rdx_1 << 3
    int64_t rax_2 = rdi_1[3]
    
    if (*(r14_1 + rax_2) == 0)
        sub_1419ccf30(rdi_1, rdx_1.d)
        rax_2 = rdi_1[3]
    
    rdi = *(r14_1 + rax_2)

data_143f02f10 = rdi
sub_14198aa60(rdi)
void*** rcx_6 = (data_143f02d90 + 7) & 0xfffffffffffffff8
void* rax_3 = &rcx_6[3]

if (rax_3 u> data_143f02d98)
    sub_140b0e3d0(&data_143f02d90, 0x20)
    rcx_6 = (data_143f02d90 + 7) & 0xfffffffffffffff8
    rax_3 = &rcx_6[3]

data_143f02d74 += 1
data_143f02d90 = rax_3
*data_143f02d68 = rcx_6
data_143f02d68 = &rcx_6[1]
rcx_6[1] = 0
*rcx_6 = &data_142dd5b40
rcx_6[2] = rdi
sub_141081100(rsi, &data_143f02d60, arg2, arg4, arg5, *(arg1 + 0x154), (*(r12 + 0x18)).d, 
    *(r14 + 0x18), var_38)
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg3[3] - arg3[1] + 7)
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(arg3[2] - *arg3 + 7)
sub_1419cd1c0(&data_143f02d60, rsi, ((temp2 & 7) + temp3) s>> 3, ((temp0 & 7) + temp1) s>> 3, 1)
int64_t rbx_1 = data_143f02f10
uint32_t rdi_2 = zx.d(*(rsi + 0x21e))
void*** rcx_12 = (data_143f02d90 + 7) & 0xfffffffffffffff8
void* rax_18 = &rcx_12[5]

if (rax_18 u> data_143f02d98)
    sub_140b0e3d0(&data_143f02d90, 0x30)
    rcx_12 = (data_143f02d90 + 7) & 0xfffffffffffffff8
    rax_18 = &rcx_12[5]

data_143f02d74 += 1
data_143f02d90 = rax_18
*data_143f02d68 = rcx_12
data_143f02d68 = &rcx_12[1]
*rcx_12 = &data_142da77d8
rcx_12[2] = rbx_1
rcx_12[3].d = rdi_2
rcx_12[4] = 0
rcx_12[1] = 0
uint32_t rdi_3 = zx.d(*(rsi + 0x222))
void*** rcx_17 = (data_143f02d90 + 7) & 0xfffffffffffffff8
void* rax_21 = &rcx_17[5]

if (rax_21 u> data_143f02d98)
    sub_140b0e3d0(&data_143f02d90, 0x30)
    rcx_17 = (data_143f02d90 + 7) & 0xfffffffffffffff8
    rax_21 = &rcx_17[5]

data_143f02d74 += 1
data_143f02d90 = rax_21
*data_143f02d68 = rcx_17
data_143f02d68 = &rcx_17[1]
rcx_17[1] = 0
rcx_17[2] = rbx_1
rcx_17[4] = 0
*rcx_17 = &data_142da77d8
rcx_17[3].d = rdi_3
return &rcx_17[1]
