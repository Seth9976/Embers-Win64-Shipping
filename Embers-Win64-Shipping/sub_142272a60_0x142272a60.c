// 函数: sub_142272a60
// 地址: 0x142272a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

uint64_t rax = arg1[0x45]

if (rax != 0 && (*(rax + 0x22a) & 4) != 0)
    return 

int64_t rbp_1 = arg1[0x4a]

if (rbp_1 != 0 && rbp_1 != arg2)
    sub_141f9ecf0(arg1)

int64_t* rcx = arg2[0x4b]

if (rcx != 0)
    sub_141f9ecf0(rcx)

(*(*arg2 + 0x6a8))(arg2, arg1)
void* rsi_1 = arg2[0x26]
int32_t rax_5
float zmm0[0x4]

if (rsi_1 == 0)
    zmm0 = zx.o(data_143dbb208)
    rax_5 = data_143dbb210
else
    float zmm1[0x4] = *(rsi_1 + 0x1c0)
    uint32_t temp0_2 = _mm_movemask_ps(_mm_cmpeq_ps(*(rsi_1 + 0x180), zmm1, 4))
    float var_28[0x4] = zmm1
    
    if (temp0_2 != 0)
        *(rsi_1 + 0x180) = zmm1
        void var_40
        int32_t* rax_3 = sub_140adf5d0(&var_28, &var_40)
        *(rsi_1 + 0x190) = *rax_3
        *(rsi_1 + 0x198) = rax_3[2]
    
    zmm0 = zx.o(*(rsi_1 + 0x190))
    rax_5 = *(rsi_1 + 0x198)

int32_t var_44_1 = rax_5
int64_t rax_7 = *arg1
int64_t var_4c = zmm0.q
(*(rax_7 + 0x668))(arg1, &var_4c)
(*(*arg1 + 0x690))(arg1, arg2)
int64_t* rax_9 = arg1[0x4a]
int64_t* rcx_5 = rax_9

if (rax_9 != 0 && (*(rax_9 + 0x32) & 4) != 0)
    sub_141dd7200(rcx_5, 1)
    rcx_5 = arg1[0x4a]

if (rcx_5 != 0)
    void* rax_11 = (*(*rcx_5 + 0x628))(rcx_5)
    
    if (rax_11 != 0)
        void* rax_13 = sub_140d21950(rax_11, sub_14254d8b0())
        
        if (rax_13 != 0)
            int64_t rdx_6 = *rax_13
            (*(rdx_6 + 0x50))(rax_13, rdx_6)

bool cond:0_1 = (*(arg1 + 0x294) & 2) == 0
arg1[0x54] = 0
char rax_15

if (not(cond:0_1))
    rax_15 = (*(*arg1 + 0x6a8))(arg1)

if (cond:0_1 || rax_15 == 0)
    int64_t* rcx_9 = arg1[0x4a]
    (*(*rcx_9 + 0x648))(rcx_9)

sub_142569690(arg1, arg1[0x4a])
int32_t arg_1c = 0
void arg_10
(*(*arg1 + 0x658))(arg1, (*sub_140b5e500(&arg_10, 0x140)).q)

if (arg1[0x59].b != 0)
    (*(*arg1 + 0xd18))(arg1, arg1[0x4a])
    (*(*arg1 + 0xda0))(arg1)

if (rbp_1 == arg2)
    return 

int64_t r14_1 = arg1[0x4a]
rbp_1.b = 0
*(arg1 + 0x284) += 1
int32_t rax_21 = arg1[0x4f].d
int32_t rcx_16 = *(arg1 + 0x284)
int64_t rdi_2 = sx.q(rax_21 - 1)

if (rax_21 - 1 s>= 0)
    int64_t rbx_3 = rdi_2 << 4
    int64_t temp1_1
    
    do
        int64_t rax_23 = arg1[0x4e]
        
        if (*(rbx_3 + rax_23 + 8) == 0)
            rbp_1.b = 1
        else
            int64_t* rcx_17 = *(rbx_3 + rax_23)
            
            if (rcx_17 == 0)
                rbp_1.b = 1
            else if ((*(*rcx_17 + 0x50))(rcx_17, r14_1) == 0)
                rbp_1.b = 1
        
        rbx_3 -= 0x10
        temp1_1 = rdi_2
        rdi_2 -= 1
    while (temp1_1 - 1 s>= 0)
    rcx_16 = *(arg1 + 0x284)

*(arg1 + 0x284) = rcx_16 - 1

if (rbp_1.b != 0)
    sub_140599630(&arg1[0x4e], 0)
