// 函数: sub_142645f90
// 地址: 0x142645f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = data_143dbb200
int64_t zmm0 = data_143dbb1f8.q
int32_t var_68 = var_68 & 0xfffffffe
char var_1e
char var_1e_1 = var_1e & 0xfc
int64_t* rbx = arg1[1]
int32_t var_38 = rax
int32_t var_44 = rax
void* rax_1 = *arg1
int64_t var_64 = 0
int32_t var_5c = 0xffffffff
int32_t var_58 = 0
int32_t var_54 = 0xffffffff
int32_t var_50 = 0
int64_t var_40 = zmm0
int64_t var_4c = zmm0
char var_34 = 0
int64_t var_30
__builtin_memset(&var_30, 0, 0x12)

if (((*(rax_1 + 0x48) u>> 3).b & 1) == 0)
    void* rdx_2
    
    if (*rbx == 0)
        rdx_2 = nullptr
    else
        void* rax_5 = sub_14269ce80()
        
        if (rax_5 == 0)
            rdx_2 = nullptr
        else
            rdx_2 = *rbx
            int64_t rax_6 = sx.q(*(rax_5 + 0x38))
            
            if (rax_6.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
                rdx_2 = nullptr
    
    sub_141dcd870(&var_68, arg2, arg3, arg4, arg1[2], rdx_2)
else
    void* rdx
    
    if (*rbx == 0)
        rdx = nullptr
    else
        void* rax_2 = sub_14269ce80()
        
        if (rax_2 == 0)
            rdx = nullptr
        else
            rdx = *rbx
            int64_t rax_3 = sx.q(*(rax_2 + 0x38))
            
            if (rax_3.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
                rdx = nullptr
    
    sub_141dcda00(&var_68, arg2, arg3, arg4, rdx)

int32_t* rsi_1 = *arg1
char var_1e_2 = var_1e_1 | 1
int64_t rdi_1 = sx.q(rsi_1[8])
int32_t rax_9 = (rdi_1 + 1).d
rsi_1[8] = rax_9

if (rax_9 s> rsi_1[9])
    sub_1405c5060(&rsi_1[6])

sub_141db6cf0(rdi_1 * 0x50 + *(rsi_1 + 0x18), &var_68)
int32_t rax_10 = *rsi_1
int32_t rax_11 = rsi_1[0x12]
*rsi_1 = (((var_68 | rax_10) ^ rax_10) & 1) ^ rax_10
int32_t rcx_20 = ((((zx.d(var_1e_2) * 2) | rax_11) ^ rax_11) & 2) ^ rax_11
rsi_1[0x12] = rcx_20
int32_t result = ((((zx.d(var_1e_2) * 2) | rcx_20) ^ rcx_20) & 4) ^ rcx_20
rsi_1[0x12] = result
int64_t rcx_21 = var_30

if (rcx_21 == 0)
    return result

return sub_140a74f90(rcx_21)
