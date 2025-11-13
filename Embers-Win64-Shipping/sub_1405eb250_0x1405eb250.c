// 函数: sub_1405eb250
// 地址: 0x1405eb250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int64_t r14 = *arg4

if (*(arg1 + 0x11a) u> 0)
    uint32_t r15_1 = zx.d(*(arg1 + 0x118))
    void*** r8_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_1 = &r8_2[5]
    
    if (rax_1 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        r8_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_1 = &r8_2[5]
    
    *(arg2 + 0x30) = rax_1
    void** rax_2 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_2 = r8_2
    *(arg2 + 8) = &r8_2[1]
    r8_2[1] = 0
    *r8_2 = &data_142d5ebf8
    r8_2[2] = arg3
    r8_2[3].d = r15_1
    r8_2[4] = r14

int64_t* r14_1 = data_14395fa10

if (*(arg1 + 0x122) u> 0)
    uint32_t r15_2 = zx.d(*(arg1 + 0x120))
    
    if ((*(*r14_1 + 8))(r14_1) == 0)
        void*** rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_6 = &rcx_4[5]
        
        if (rax_6 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_6 = &rcx_4[5]
        
        *(arg2 + 0x30) = rax_6
        void**** rax_7 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_7 = rcx_4
        *(arg2 + 8) = &rcx_4[1]
        rcx_4[1] = 0
        *rcx_4 = &data_142d5a080
        rcx_4[2] = arg3
        rcx_4[3].d = r15_2
        rcx_4[4] = r14_1

int64_t* r14_2 = data_14395f4d0

if (*(arg1 + 0x126) u> 0)
    uint32_t r15_3 = zx.d(*(arg1 + 0x124))
    
    if ((*(*r14_2 + 8))(r14_2) == 0)
        void*** rcx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_11 = &rcx_11[5]
        
        if (rax_11 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_11 = &rcx_11[5]
        
        *(arg2 + 0x30) = rax_11
        void**** rax_12 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_12 = rcx_11
        *(arg2 + 8) = &rcx_11[1]
        rcx_11[1] = 0
        *rcx_11 = &data_142d5a080
        rcx_11[2] = arg3
        rcx_11[3].d = r15_3
        rcx_11[4] = r14_2

void var_68
sub_1405eb5d0(arg2, &arg_18, arg1 + 0x128, 
    sub_1419991a0(&var_68, &data_1439c92f0, &data_1439c9370), 0)
char arg_28
arg_28.d = zx.d(arg_28)
return sub_1405eb490(arg2, &arg_18, arg1 + 0x12e, &arg_28, 0)
