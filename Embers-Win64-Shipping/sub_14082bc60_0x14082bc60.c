// 函数: sub_14082bc60
// 地址: 0x14082bc60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rbx = zx.d((arg5 u>> 1).b)
void var_48
sub_142048ad0(&var_48, arg4, rbx.b & 1)
void* var_58
sub_1419a2ec0(std::_Get_future_error_what((*1111")[sx.q(*(arg1 + 0x10))]), &var_58, 
    &data_143ce8fa0, rbx & 1)
void* r15 = var_58
void* rbx_2 = nullptr

if (r15 != 0)
    int64_t rdx_2 = sx.q(*(r15 + 0x10c))
    void* var_50
    int64_t* rbx_3 = *(var_50 + 0x10)
    int64_t rdi_1 = rdx_2 << 3
    int64_t rax_5 = rbx_3[3]
    
    if (*(rdi_1 + rax_5) == 0)
        sub_1419ccf30(rbx_3, rdx_2.d)
        rax_5 = rbx_3[3]
    
    rbx_2 = *(rdi_1 + rax_5)

*(arg2 + 0x1b0) = rbx_2
sub_14198aa60(rbx_2)
void*** rcx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_6 = &rcx_7[3]

if (rax_6 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x20)
    rcx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_6 = &rcx_7[3]

*(arg2 + 0x30) = rax_6
void**** rax_7 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_7 = rcx_7
*(arg2 + 8) = &rcx_7[1]
rcx_7[2] = rbx_2
rcx_7[1] = 0
*rcx_7 = &data_142dd5b40
sub_14088fc70(r15, arg2, arg6, arg7)
int32_t* i = *(arg1 + 0x20)

for (void* r14_2 = sx.q(*(arg1 + 0x28)) * 0x68 + i; i != r14_2; i = &i[0x1a])
    if (i[0x15] == arg3)
        char var_44
        void var_3c
        sub_1408905f0(r15, arg2, i, i[0x16] << var_44, i[0x14], &var_3c)
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(*i + 0x3f)
        sub_1419cd1c0(arg2, r15, ((temp0_1 & 0x3f) + temp1_1) s>> 6, 1, 1)
        int64_t* rbx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_14 = &rbx_7[2]
        
        if (rax_14 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x18)
            rbx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_14 = &rbx_7[2]
        
        *(arg2 + 0x30) = rax_14
        *rbx_7 = arg6
        rbx_7[1] = arg7
        void*** rax_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rcx_16 = &rax_19[6]
        
        if (rcx_16 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x38)
            rax_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rcx_16 = &rax_19[6]
        
        *(arg2 + 0x30) = rcx_16
        void**** rcx_18 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rcx_18 = rax_19
        *(arg2 + 8) = &rax_19[1]
        rax_19[1] = 0
        *rax_19 = &data_142da7798
        rax_19[2].d = 2
        rax_19[3] = rbx_7
        rax_19[4].d = 3
        *(rax_19 + 0x24) = 3
        rax_19[5] = 0

return sub_1408918a0(r15, arg2)
