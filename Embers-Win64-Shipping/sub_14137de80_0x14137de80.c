// 函数: sub_14137de80
// 地址: 0x14137de80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 s<= 1 || (arg3.b & 1) != 0)
label_14137e243:
    int32_t rsi_2 = 0
    
    if (arg1 s> 0)
        do
            sub_141389560(arg2, rsi_2)
            rsi_2 += 1
        while (rsi_2 s< arg1)
    
    return 

if (sub_140b011d0().b == 0)
    goto label_14137e243

int64_t* rax_1 = sub_140a242a0()
int32_t r13_1 = arg1 - 1
int64_t rdx = *rax_1
int32_t* rax = (*(rdx + 0x18))(rax_1, rdx)

if (rax.d s<= r13_1)
    r13_1 = rax.d

if (r13_1 == 0)
    goto label_14137e243

uint8_t rsi_1 = (arg3 u>> 2).b & 1
int32_t* rax_2 = j_sub_140a82f30(0x40)
int32_t* rdi_1 = rax_2

if (rax_2 == 0)
    rdi_1 = nullptr
else
    uint64_t r14_1 = zx.q(r13_1 + 1)
    int64_t r12
    
    if (arg1 s<= r14_1.d || rsi_1 == 0)
        r12.b = 0
    else
        r12.b = 1
    
    *(rax_2 + 0x10) = *arg2
    *(rax_2 + 0x20) = arg2[1].q
    *(rdi_1 + 0x28) = sub_140a491d0(0)
    rdi_1[0xc] = 0
    rdi_1[0xd] = 0
    rdi_1[0xe].w = 0
    *(rdi_1 + 0x3a) = r12.b
    
    if ((arg3.b & 2) == 0)
        *rdi_1 = 0
        uint32_t r9_2 = (r14_1 * 3).d * 2
        int32_t i_2 = 6
        int32_t rax_10
        int32_t temp0_1
        int32_t i
        
        do
            temp0_1 = divs.dp.d(sx.q(arg1), r9_2)
            rdi_1[1] = temp0_1
            
            if (temp0_1 == 0)
                rax_10 = *rdi_1
            else
                rax_10 = divs.dp.d(sx.q(arg1), temp0_1)
                *rdi_1 = rax_10
                
                if (rax_10 s>= zx.d(r12.b) + r14_1.d)
                    break
            
            r9_2 -= r14_1.d
            i = i_2
            i_2 -= 1
        while (i != 1)
        rdi_1[2] = arg1 - temp0_1 * rax_10
    else
        *rdi_1 = arg1
        rdi_1[1] = 1
        rdi_1[2] = 0

void*** rax_11 = j_sub_140a82f30(0x18)

if (rax_11 == 0)
    rax_11 = nullptr
else
    rax_11[1].d = 1
    *rax_11 = &data_142f6e330
    *(rax_11 + 0xc) = 1
    rax_11[2] = rdi_1

void var_50
void** rax_12 = sub_141397f30(&var_50, nullptr, 0xff)
void* rdx_6 = *rax_12
*(rdx_6 + 0x10) = rdi_1
*(rdx_6 + 0x18) = rax_11

if (rax_11 != 0)
    rax_11[1].d += 1

*(rdx_6 + 0x20) = r13_1 - 1
void* rcx_6 = *rax_12
int32_t r8_4 = rax_12[2].d
int64_t* rdx_7 = rax_12[1]
int64_t* rbx_3 = *(rcx_6 + 0x30)
int64_t* var_68_1 = rbx_3
int32_t* rdi_2 = &rbx_3[9]

if (rbx_3 != 0)
    *rdi_2 += 1
    rbx_3 = var_68_1

sub_1413aa910(rcx_6, rdx_7, r8_4, 1)

if (rbx_3 != 0)
    int32_t rax_13 = *rdi_2
    *rdi_2 -= 1
    
    if (rax_13 == 1)
        sub_140a2f6e0(var_68_1)

if (0 == rdi_1[0xc])
    rdi_1[0xc] = 0
else
    rdi_1[0xc]

int32_t rdx_8 = *rdi_1
char r8_5 = *(rdi_1 + 0x3a)
int64_t (* arg_20)(int64_t* arg1, int32_t* arg2)
int64_t (* r13_3)(int64_t* arg1, int32_t* arg2) = arg_20
int32_t rcx_8 = rdi_1[1]
int32_t r12_1 = rdx_8 - 1
int32_t var_74_1 = rcx_8
int32_t var_78_1 = r12_1

if (rdi_1 != -0x10)
    r13_3 = sub_141396a60

int32_t var_70_1 = rdx_8
char arg_8 = r8_5

while (true)
    int32_t rbx_4 = rdi_1[0xc]
    rdi_1[0xc] += 1
    
    if (r8_5 != 0 && rbx_4 s> r12_1)
        rbx_4 = r12_1
    
    if (rbx_4 s< rdx_8)
        int32_t rbp_1 = rcx_8
        
        if (rbx_4 == r12_1)
            rbp_1 = rdi_1[2] + rcx_8
        
        int32_t rdi_3 = 0
        
        if (rbp_1 s> 0)
            do
                arg_20.d = rbx_4 * rcx_8 + rdi_3
                r13_3(&rdi_1[4], &arg_20)
                rdi_3 += 1
            while (rdi_3 s< rbp_1)
            
            r12_1 = var_78_1
            rcx_8 = var_74_1
            rdx_8 = var_70_1
            r8_5 = arg_8
        
        int32_t rax_17 = rdi_1[0xd]
        rdi_1[0xd] += 1
        
        if (rax_17 + 1 == rdx_8)
            break
    
    if (rbx_4 s>= r12_1)
        char rax_19
        
        if (rsi_1 != 0)
            rax_19 = sub_140a80e70()
        
        if (rsi_1 == 0 || rax_19 == 0)
            int64_t* rcx_13 = *(rdi_1 + 0x28)
            (*(*rcx_13 + 0x20))(rcx_13, 0xffffffff, 0)
        else
            int64_t* rcx_10 = *(rdi_1 + 0x28)
            
            if ((*(*rcx_10 + 0x20))(rcx_10, 1, 0) == 0)
                char i_1
                
                do
                    int64_t* rax_23 = sub_140a242a0()
                    int64_t r8_6 = *rax_23
                    (*(r8_6 + 0x30))(rax_23, zx.q(data_14399e5e0), r8_6)
                    int64_t* rcx_12 = *(rdi_1 + 0x28)
                    i_1 = (*(*rcx_12 + 0x20))(rcx_12, 1, 0)
                while (i_1 == 0)
        
        break

rdi_1[0xe].b = 1
int64_t* rbx_5 = rax_11

if (rbx_5 == 0)
    return 

rbx_5[1].d -= 1

if (rbx_5[1].d != 1)
    return 

(**rbx_5)(rbx_5)
int32_t rdi_4 = *(rbx_5 + 0xc)
*(rbx_5 + 0xc) -= 1

if (rdi_4 == 1)
    (*(*rbx_5 + 8))(rbx_5, zx.q(rdi_4))
