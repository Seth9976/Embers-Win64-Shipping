// 函数: sub_1414a0040
// 地址: 0x1414a0040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_8 = 0
char* var_40 = &arg_8
void* r13 = arg2
void*** (* var_48)() = j_sub_140597fc0
void*** rax_1 = sub_14081d830(0x70, sub_140a756e0(&var_48, &data_143958018) + 0x10, 1, 0)
void*** r14 = rax_1

if (rax_1 == 0)
    r14 = nullptr
else
    int32_t rdi_1 = *(arg1 + 0x570)
    void* rdx_1 = *(r13 + 8)
    void* rbx_1 = *(arg1 + 0x10)
    uint8_t arg_21 = (rdi_1 u>> 5).b & 1
    uint8_t rdi_2 = (rdi_1 u>> 7).b & 1
    sub_14125c360(rax_1, rdx_1, *(rdx_1 + 8), rbx_1, 0)
    *r14 = &data_142f8da78
    r14[5] = 0
    r14[6] = 0
    r14[7].d = 0x11
    r14[8] = *(rbx_1 + 0x10)
    r14[9] = 0
    r14[0xa] = 0
    r14[0xb] = arg3
    r14[0xc].d = 0
    r14[0xd].w = ((rdi_1 u>> 4).b & 1).w
    *(r14 + 0x6a) = rdi_2
    int64_t rax_4
    
    if (rdi_2 != 0)
        rax_4 = data_14395da00
    
    if (rdi_2 == 0 || *(r14 + 0x69) != 0)
        rax_4 = data_1439b59c0
    
    r14[5] = rax_4
    r14[6] = data_1439b6e58
    r14[0xc].d = 0

if (*(r13 + 0x3d4) != 0)
    int64_t var_68 = 0
    int32_t var_60_1 = 0
    sub_14148c7c0(arg1, &var_68)
    int32_t rbx_3
    
    if (var_60_1 == 0)
        rbx_3 = 0
    else
        rbx_3 = var_60_1 - 1
    
    int64_t var_78 = 0
    int32_t var_6c_1 = 0
    int32_t rdx_3 = 0
    int32_t var_70_1 = 0
    int64_t rdi_3 = 0
    int32_t r12_1 = 0
    
    if (rbx_3 + 0xd s> 0)
        sub_1405947f0(&var_78, rbx_3 + 0xd)
        rdx_3 = var_70_1
        r12_1 = var_6c_1
        rdi_3 = var_78
    
    int32_t r13_2 = rdx_3 + 0xd + rbx_3
    
    if (r13_2 s> r12_1)
        sub_140594770(&var_78)
        r12_1 = var_6c_1
        rdi_3 = var_78
    
    int64_t rdx_5 = var_68
    int64_t rbx_4 = sx.q(rbx_3)
    __builtin_memcpy(rdi_3, u"ShadowDepth ", 0x18)
    memcpy(rdi_3 + 0x18, rdx_5, rbx_4.d * 2)
    *(rdi_3 + (rbx_4 << 1) + 0x18) = 0
    int64_t var_58 = rdi_3
    int32_t var_50_1 = r13_2
    int32_t var_4c_1 = r12_1
    sub_1412965b0(arg1 + 0x680, &var_58)
    int64_t rcx_11 = var_58
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)
    
    int64_t rcx_12 = var_68
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    r13 = arg2

void* rbx_5 = *(r13 + 8)
char rax_10
int32_t rdx_7

if (((*(arg1 + 0x570) u>> 5).b & 1) != 0)
    rax_10 = sub_14122e130((*U"1111")[sx.q(*(rbx_5 + 8))])
    rdx_7 = 6

if (((*(arg1 + 0x570) u>> 5).b & 1) == 0 || rax_10 != 0)
    rdx_7 = 1

sub_141267b30(arg1 + 0x680, rbx_5, *(arg1 + 0x10), 0x12, 0, r14, arg1 + 0x638, 0, 
    *(arg1 + 0x668) * rdx_7, arg1 + 0x658, *(arg1 + 0x66c) * rdx_7, arg1 + 0x670, 0, nullptr)
int64_t rdi_4 = sx.q(*(r13 + 0x308))
int32_t rax_12 = (rdi_4 + 1).d
*(r13 + 0x308) = rax_12

if (rax_12 s> *(r13 + 0x30c))
    sub_14083a310(r13 + 0x300, rdi_4.d)

int64_t result = *(r13 + 0x300)
*(result + (rdi_4 << 3)) = arg1 + 0x680
return result
