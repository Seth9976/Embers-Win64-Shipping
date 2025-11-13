// 函数: ?FInit@OBJImpl@@AEAA_NPEBG0K_NKK@Z
// 地址: 0x1405eaf90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int64_t rbp = *arg4

if (*(arg1 + 0x11a) u> 0)
    uint32_t r14_1 = zx.d(*(arg1 + 0x118))
    void*** rdx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_1 = &rdx_2[5]
    
    if (rax_1 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rdx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_1 = &rdx_2[5]
    
    *(arg2 + 0x30) = rax_1
    void** rax_2 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_2 = rdx_2
    *(arg2 + 8) = &rdx_2[1]
    rdx_2[1] = 0
    *rdx_2 = &data_142d5ebf8
    rdx_2[2] = arg3
    rdx_2[3].d = r14_1
    rdx_2[4] = rbp

int64_t rbp_1 = *arg5

if (*(arg1 + 0x11e) u> 0)
    uint32_t r14_2 = zx.d(*(arg1 + 0x11c))
    void*** rcx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_5 = &rcx_3[5]
    
    if (rax_5 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_5 = &rcx_3[5]
    
    *(arg2 + 0x30) = rax_5
    void**** rax_6 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_6 = rcx_3
    *(arg2 + 8) = &rcx_3[1]
    rcx_3[1] = 0
    *rcx_3 = &data_142d5ebf8
    rcx_3[2] = arg3
    rcx_3[3].d = r14_2
    rcx_3[4] = rbp_1

int64_t* rdi = data_14395fa10

if (*(arg1 + 0x122) u> 0)
    uint32_t rbp_2 = zx.d(*(arg1 + 0x120))
    
    if ((*(*rdi + 8))(rdi) == 0)
        void*** rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_10 = &rcx_10[5]
        
        if (rax_10 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_10 = &rcx_10[5]
        
        *(arg2 + 0x30) = rax_10
        void**** rax_11 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_11 = rcx_10
        *(arg2 + 8) = &rcx_10[1]
        rcx_10[1] = 0
        *rcx_10 = &data_142d5a080
        rcx_10[2] = arg3
        rcx_10[3].d = rbp_2
        rcx_10[4] = rdi
    
    rdi = data_14395fa10

char arg_38

if (arg_38 != 0)
    rdi = data_14395f4d0

if (*(arg1 + 0x126) u> 0)
    uint32_t rbp_3 = zx.d(*(arg1 + 0x124))
    
    if ((*(*rdi + 8))(rdi) == 0)
        void*** rcx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_15 = &rcx_17[5]
        
        if (rax_15 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_17 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_15 = &rcx_17[5]
        
        *(arg2 + 0x30) = rax_15
        void**** rax_16 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_16 = rcx_17
        *(arg2 + 8) = &rcx_17[1]
        rcx_17[1] = 0
        *rcx_17 = &data_142d5a080
        rcx_17[2] = arg3
        rcx_17[3].d = rbp_3
        rcx_17[4] = rdi

void var_68
sub_1405eb5d0(arg2, &arg_18, arg1 + 0x128, 
    sub_1419991a0(&var_68, &data_1439c92f0, &data_1439c9370), 0)
arg_38.d = zx.d(arg6)
return sub_1405eb490(arg2, &arg_18, arg1 + 0x12e, &arg_38, 0)
