// 函数: sub_142259d10
// 地址: 0x142259d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
*arg1 = 0
arg1[1] = 0
arg1[2] = 2
arg1[3] = 0
arg1[4] = 0
arg1[5] = 2
arg1[6] = 0
arg1[7] = 0
arg1[8] = 2
arg1[0x16].b = 0
__builtin_memset(&arg1[0x1c], 0, 0x24)
arg1[0x21] = 0
__builtin_memset(&arg1[0x23], 0, 0x20)
void* rcx = &arg1[0x27]
int64_t* var_20 = arg1
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
void* rcx_1 = &arg1[0x31]
arg1[0x2b].d = 0xffffffff
*(arg1 + 0x15c) = 0
arg1[0x2d] = 0
arg1[0x2e].d = 0
arg1[0x2f] = 0
arg1[0x30] = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_1 = *(rcx_1 + 0x10)

if (rax_1 != 0)
    rcx_1 = rax_1

__builtin_memset(rcx_1, 0, 0x1c)
arg1[0x35].d = 0xffffffff
*(arg1 + 0x1ac) = 0
arg1[0x37] = 0
arg1[0x38].d = 0
__builtin_memset(&arg1[0x39], 0, 0x18)
__builtin_memset(&arg1[0x10], 0, 0x2c)
arg1[0xa] = 0
*(arg1 + 0x100) = 3.o
int64_t* rax_2 = sub_142565030()
void* r14 = rax_2[0x23]

if (r14 == 0)
    int64_t rdx = *rax_2
    (*(rdx + 0x390))(rax_2, rdx)
    r14 = rax_2[0x23]

arg1[0xe].d = 0
arg1[0xe].d = *(r14 + 0xd0)
arg1[9].b = *(r14 + 0xc4)
arg1[0x3c].d = *(r14 + 0xd8)
sub_14226fd60(arg1, arg2)
float zmm0_1 = arg1[0xe].d
int32_t zmm1 = (zx.o(0)).d
arg1[0xd].b = 0
*(arg1 + 0x6c) = *(r14 + 0xd4)

if (not(zmm0_1 < 0f))
    zmm0_1 = __minss_xmmss_memss(zmm0_1, 0x3f800000)
    zmm1 = zmm0_1

arg1[0xe].d = zmm1
int64_t* rcx_4 = data_143f52558
void*** rdx_3

if (rcx_4 == 0)
    void*** rax_9 = j_sub_140a82f30(0x60)
    rdx_3 = rax_9
    
    if (rax_9 == 0)
        rdx_3 = nullptr
    else
        void* rcx_5 = &rdx_3[3]
        *rdx_3 = &data_14330f7d8
        rdx_3[1] = 0
        rdx_3[2] = 0
        *(rcx_5 + 0x10) = 0
        *(rcx_5 + 0x18) = 0
        *(rcx_5 + 0x1c) = 0x80
        void* rax_10 = *(rcx_5 + 0x10)
        
        if (rax_10 != 0)
            rcx_5 = rax_10
        
        *rcx_5 = 0
        *(rcx_5 + 8) = 0
        rdx_3[7].d = 0xffffffff
        *(rdx_3 + 0x3c) = 0
        rdx_3[9] = 0
        rdx_3[0xa].d = 0
        rdx_3[0xb] = arg1
else
    rdx_3 = (**rcx_4)(zmm0_1, arg1)

arg1[0xb] = rdx_3
sub_140d21fd0()
int64_t* rax_11 = sub_140a84c80(0, 0x30, 0)

if (rax_11 != 0)
    rax_11[1] = arg1
    *rax_11 = &data_142d3fe58
    rax_11[2] = sub_142281530
    rax_11[4] = sub_140a387b0()
    *rax_11 = &data_142d3feb0

if (rax_11 != 0)
    sub_140599630(&data_1439aad30, 1)
    void arg_8
    int64_t* rax_14 = (*(*rax_11 + 0x30))(rax_11, &arg_8)
    int64_t r15_1 = sx.q(data_1439aad38)
    rbx = *rax_14
    int32_t rax_15 = (r15_1 + 1).d
    data_1439aad38 = rax_15
    
    if (rax_15 s> data_1439aad3c)
        sub_1405a4f90(&data_1439aad30)
    
    void** rax_18 = (r15_1 << 4) + data_1439aad30
    *rax_18 = rax_11
    rax_18[1].d = 3

arg1[0x3b] = rbx
int32_t rax_19 = *(r14 + 0x44)

if (rax_19 s> 0)
    int64_t* rcx_7 = arg1[0xc]
    int32_t temp0_2
    int32_t temp1_1
    temp0_2:temp1_1 = sx.q(rax_19 + 0x3fff)
    int32_t rbx_2 = ((temp0_2 & 0x3fff) + temp1_1) & 0xffffc000
    
    if (rcx_7 != 0)
        int64_t rdx_9 = *rcx_7
        
        if ((*(rdx_9 + 0x30))(rcx_7, rdx_9) != 0)
            arg1[0x14] = sub_140a82f30(sx.q(rbx_2), 0x10)
            arg1[0x15].d = rbx_2

return arg1
