// 函数: sub_140f8cad0
// 地址: 0x140f8cad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1] == 0)
    return 

int32_t rax_2
int32_t r8
rax_2, r8 = (*(*arg1 + 0x18))()
void* rcx = arg1[1]
int32_t rbx_1 = rax_2
int32_t rsi_1 = rax_2

if (arg2 u<= rax_2)
    rbx_1 = arg2

int32_t rdi_1 = rbx_1 + arg3
int32_t r15_1 = 0
int64_t var_30 = 0
int64_t var_28_1 = 0
int64_t zmm0_1 = sub_140f048e0(*(rcx + 0x48), &var_30, r8)
int64_t arg_8
sub_140f08ab0(&var_30, &arg_8, rbx_1)

if (rdi_1 u<= rsi_1)
    rsi_1 = rdi_1

int64_t var_48
sub_140f08ab0(&var_30, &var_48, rsi_1)
void* rax_4 = arg1[1] + 0x780
int32_t var_40

if (&var_40 != rax_4 && *(rax_4 + 8) != 0)
    *(rax_4 + 8) = 0

if (arg4 == 0)
    void* rdx_5 = arg1[1]
    sub_140f8b080(rdx_5 + 0x790, *(rdx_5 + 0x48), &arg_8, rdi_1, zmm0_1)
    int64_t* rcx_9 = arg1[1] + 0x780
    
    if (&var_48 != rcx_9)
        if (rcx_9[1].b != 0)
            rcx_9[1].b = 0
        
        *rcx_9 = var_48
        rcx_9[1].b = 1
else if (arg4 == 1)
    int64_t* rcx_5 = arg1[1] + 0x780
    
    if (&arg_8 != rcx_5)
        if (rcx_5[1].b != 0)
            rcx_5[1].b = 0
        
        *rcx_5 = arg_8
        rcx_5[1].b = 1
    
    void* rdx_3 = arg1[1]
    sub_140f8b080(rdx_3 + 0x790, *(rdx_3 + 0x48), &var_48, rdi_1, zmm0_1)

int64_t* rdx_7 = arg1[1]
bool cond:3_1 = rdx_7[0xf3].b == 1
var_40 = rdx_7[0xf2].d
int32_t rcx_10
rcx_10.b = cond:3_1

if (rcx_10 + *(rdx_7 + 0x794) s>= 0)
    r15_1 = rcx_10 + *(rdx_7 + 0x794)

int32_t var_3c_1 = r15_1
int64_t* rcx_12 = *rdx_7
char rdx_9
uint32_t r8_5
rdx_9, r8_5 = (*(*rcx_12 + 0xa8))(rcx_12, &var_40)
sub_140f8fc70(arg1[1], rdx_9, r8_5)
int64_t rcx_14 = var_30

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)
