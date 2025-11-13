// 函数: sub_1418acd40
// 地址: 0x1418acd40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg2[1].d == 0
int16_t* const rdi = &data_142d40450
int32_t arg_10 = 0
int16_t** rbx = arg2
int16_t* const rdx

if (cond:0)
    rdx = &data_142d40450
else
    rdx = *arg2

int64_t* rcx = *(arg1 + 8)
char rax_1 = (*(*rcx + 0x20))(rcx, rdx, &arg_10)
uint8_t r12 = *(arg3 + 0x34)
char r14 = rax_1
int32_t rcx_1 = arg_10
uint8_t rdx_1 = r12
uint8_t result = (rcx_1 u>> 2).b & 1
uint32_t r8_2
r8_2.b = (rcx_1 u>> 3).b & 1
uint8_t rsi_1 = (rcx_1 u>> 1).b & 1
uint8_t r15_1 = r12 u>> 1 & 1
r12 = r12 u>> 2 & 1

if (r14 != 0 && (rcx_1.b & 1) == 0)
    return result

if (arg4 != 0)
    r14 = 0
label_1418acdfe:
    rsi_1 = 0
    int16_t* rdx_2
    
    if (rbx[1].d == 0)
        rdx_2 = &data_142d40450
    else
        rdx_2 = *rbx
    
    int64_t* rcx_2 = *(arg1 + 8)
    (*(*rcx_2 + 0x30))(rcx_2, rdx_2, 0)
    goto label_1418ace20

if (r14 == 0)
    goto label_1418acdfe

if (result != r15_1)
    if (rsi_1 != 0)
        goto label_1418acdfe
    
label_1418ace20:
    int16_t* rdx_3
    
    if (rbx[1].d == 0)
        rdx_3 = &data_142d40450
    else
        rdx_3 = *rbx
    
    int64_t* rcx_3 = *(arg1 + 8)
    result = (*(*rcx_3 + 0x38))(rcx_3, rdx_3, zx.q(r15_1))

if (r14 == 0)
label_1418ace4c:
    rsi_1 = 0
    int16_t* rdx_4
    
    if (rbx[1].d == 0)
        rdx_4 = &data_142d40450
    else
        rdx_4 = *rbx
    
    int64_t* rcx_4 = *(arg1 + 8)
    (*(*rcx_4 + 0x30))(rcx_4, rdx_4, 0)
    goto label_1418ace6e

if (r8_2.b != r12)
    if (rsi_1 != 0)
        goto label_1418ace4c
    
label_1418ace6e:
    int16_t* rdx_5
    
    if (rbx[1].d == 0)
        rdx_5 = &data_142d40450
    else
        rdx_5 = *rbx
    
    int64_t* rcx_5 = *(arg1 + 8)
    result = (*(*rcx_5 + 0x40))(rcx_5, rdx_5, zx.q(r12))

if (r14 != 0 && rsi_1 == (rdx_1 & 1))
    return result

if (rbx[1].d != 0)
    rdi = *rbx

int64_t* rcx_6 = *(arg1 + 8)
return (*(*rcx_6 + 0x30))(rcx_6, rdi)
