// 函数: sub_14125e400
// 地址: 0x14125e400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg2 + 0x9c) & 8) == 0 || (arg4 != 0 && *(arg4 + 0x37) s>= 0))
    return 

int64_t* rcx = *(arg2 + 0x80)
uint64_t rdx = zx.q(*(arg1 + 0x10))
void* r14_1 = nullptr
int64_t var_38 = 0
int64_t* rax_2 = (*(*rcx + 0x40))(rcx, rdx, &var_38)
int64_t r15_1 = var_38

if (r15_1 == 0)
    r15_1 = *(arg2 + 0x80)

int32_t rax_4 = (*(*rax_2 + 0x1d8))(rax_2)
int64_t r8_1 = *rax_2
uint16_t arg_10
(*(r8_1 + 0x1e8))(rax_2, &arg_10, r8_1)
uint16_t rcx_3 = arg_10
bool cond:1_1 = rax_4 u> 1
uint16_t rdx_2
rdx_2.b = (rcx_3 u>> 0xa).b & 1
uint16_t var_78_1
char var_70_1
int32_t var_68_1
void* rcx_6
void* r9

if (*(arg1 + 0x6c) == 0)
    if (cond:1_1 == 0 && rdx_2.b == 0)
        r9 = sub_14126c090(*(arg1 + 8), arg4)
        var_68_1 = *(arg1 + 0x10)
        var_70_1 = *(arg1 + 0x6d)
        var_78_1 = arg_10
        rcx_6 = *(arg1 + 8)
    label_14125e5ab:
        int32_t rax_13 = sub_141295890(rcx_6, arg2, arg4, r9, var_78_1.b, var_70_1, var_68_1)
        var_68_1.q = rax_2
        var_70_1.q = r15_1
        var_78_1.q = arg4
        sub_14128cbb0(arg1, arg2, arg3, arg5, var_78_1, var_70_1, var_68_1, rax_4, arg_10, rax_13, 
            arg2 + 0x88)
else if (cond:1_1 != 0 || rdx_2.b != 0)
    int32_t rax = *(arg1 + 0x68)
    
    if (rax == 3)
        goto label_14125e518
    
    if (rax == 0)
        if ((*(*rax_2 + 0x258))(rax_2).b != 0)
            goto label_14125e4f2
        
    label_14125e510:
        rcx_3 = arg_10
    label_14125e518:
        void* r10_1 = *(arg1 + 8)
        
        if (arg4 != 0 && r10_1 != 0)
            char rax_7 = *(arg4 + 0x3f)
            int32_t rax_8
            
            if (rax_7 == 0)
                rax_8 = -1
            else
                uint64_t rflags_1
                int32_t temp0_1
                temp0_1, rflags_1 = _bit_scan_forward(zx.d(rax_7))
                rax_8 = temp0_1
            
            if (rax_8 s>= 0)
                r14_1 = *(r10_1 + (sx.q(rax_8) << 3) + 0xfa0)
        
        r9 = r14_1
        var_68_1 = *(arg1 + 0x10)
        var_70_1 = *(arg1 + 0x6d)
        var_78_1 = rcx_3
        rcx_6 = r10_1
        goto label_14125e5ab
    
label_14125e4f2:
    
    if (*(arg1 + 0x68) == 1 && (*(*rax_2 + 0x258))(rax_2).b != 0)
        goto label_14125e510
