// 函数: sub_14077b750
// 地址: 0x14077b750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 s<= 1 || (arg3.b & 1) != 0)
label_14077bb23:
    int32_t rsi_2 = 0
    
    if (arg1 s> 0)
        do
            int64_t rcx_18 = arg2[1]
            int32_t var_68 = rsi_2
            (*arg2)(rcx_18, &var_68)
            rsi_2 += 1
        while (rsi_2 s< arg1)
    
    return 

if (sub_140b011d0().b == 0)
    goto label_14077bb23

int64_t* rax_1 = sub_140a242a0()
int32_t r13_1 = arg1 - 1
int64_t rdx = *rax_1
int32_t* rax = (*(rdx + 0x18))(rax_1, rdx)

if (rax.d s<= r13_1)
    r13_1 = rax.d

if (r13_1 == 0)
    goto label_14077bb23

uint8_t rsi_1 = (arg3 u>> 2).b & 1
int32_t* rax_2 = j_sub_140a82f30(0x38)
int32_t* rbx_1 = rax_2
int64_t arg_20

if (rax_2 == 0)
    rbx_1 = nullptr
else
    uint64_t r15_1 = zx.q(r13_1 + 1)
    int64_t r12
    
    if (arg1 s<= r15_1.d || rsi_1 == 0)
        r12.b = 0
    else
        r12.b = 1
    
    int64_t rax_3 = *arg2
    int64_t rcx_1
    
    if (rax_3 == 0)
        rcx_1 = arg_20
    else
        rcx_1 = arg2[1]
    
    *(rbx_1 + 0x10) = rax_3
    
    if (rax_3 != 0)
        *(rbx_1 + 0x18) = rcx_1
    
    *(rbx_1 + 0x20) = sub_140a491d0(0)
    rbx_1[0xa] = 0
    rbx_1[0xb] = 0
    rbx_1[0xc].w = 0
    *(rbx_1 + 0x32) = r12.b
    
    if ((arg3.b & 2) == 0)
        *rbx_1 = 0
        uint32_t r9_2 = (r15_1 * 3).d * 2
        int32_t i_2 = 6
        int32_t rax_11
        int32_t temp0_1
        int32_t i
        
        do
            temp0_1 = divs.dp.d(sx.q(arg1), r9_2)
            rbx_1[1] = temp0_1
            
            if (temp0_1 == 0)
                rax_11 = *rbx_1
            else
                rax_11 = divs.dp.d(sx.q(arg1), temp0_1)
                *rbx_1 = rax_11
                
                if (rax_11 s>= zx.d(r12.b) + r15_1.d)
                    break
            
            r9_2 -= r15_1.d
            i = i_2
            i_2 -= 1
        while (i != 1)
        rbx_1[2] = arg1 - temp0_1 * rax_11
    else
        *rbx_1 = arg1
        rbx_1[1] = 1
        rbx_1[2] = 0

void*** rax_12 = j_sub_140a82f30(0x18)

if (rax_12 == 0)
    rax_12 = nullptr
else
    rax_12[1].d = 1
    *rax_12 = &data_142da8100
    *(rax_12 + 0xc) = 1
    rax_12[2] = rbx_1

void var_50
int64_t* rax_13 = sub_140789ce0(&var_50, nullptr, 0xff)
void* rdx_6 = *rax_13
*(rdx_6 + 0x10) = rbx_1
*(rdx_6 + 0x18) = rax_12

if (rax_12 != 0)
    rax_12[1].d += 1

*(rdx_6 + 0x20) = r13_1 - 1
void* rcx_8 = *rax_13
int32_t r8_5 = rax_13[2].d
int64_t* rdx_7 = rax_13[1]
int64_t* rbx_2 = *(rcx_8 + 0x30)
int64_t* var_60_1 = rbx_2
int32_t* rdi_3 = &rbx_2[9]

if (rbx_2 != 0)
    *rdi_3 += 1
    rbx_2 = var_60_1

sub_1407c9b70(rcx_8, rdx_7, r8_5, 1)

if (rbx_2 != 0)
    int32_t rax_14 = *rdi_3
    *rdi_3 -= 1
    
    if (rax_14 == 1)
        sub_140a2f6e0(var_60_1)

if (0 == rbx_1[0xa])
    rbx_1[0xa] = 0
else
    rbx_1[0xa]

int64_t rax_16 = *(rbx_1 + 0x10)
char r8_6 = *(rbx_1 + 0x32)
int32_t rcx_10 = rbx_1[1]
int32_t rdx_8 = *rbx_1
int32_t var_74_1 = rcx_10
int32_t var_70_1 = rdx_8
char arg_8 = r8_6
int64_t r13_2

if (rax_16 == 0)
    r13_2 = arg_20
else
    r13_2 = *(rbx_1 + 0x18)

int32_t r12_1 = rdx_8 - 1
int32_t var_78_1 = r12_1

while (true)
    int32_t rbx_3 = rbx_1[0xa]
    rbx_1[0xa] += 1
    
    if (r8_6 != 0 && rbx_3 s> r12_1)
        rbx_3 = r12_1
    
    if (rbx_3 s< rdx_8)
        int32_t rbp_1 = rcx_10
        
        if (rbx_3 == r12_1)
            rbp_1 = rbx_1[2] + rcx_10
        
        int32_t rdi_4 = 0
        
        if (rbp_1 s> 0)
            do
                arg_20.d = rbx_3 * rcx_10 + rdi_4
                rax_16(r13_2, &arg_20)
                rdi_4 += 1
            while (rdi_4 s< rbp_1)
            
            r12_1 = var_78_1
            rcx_10 = var_74_1
            rdx_8 = var_70_1
            r8_6 = arg_8
        
        int32_t rax_18 = rbx_1[0xb]
        rbx_1[0xb] += 1
        
        if (rax_18 + 1 == rdx_8)
            break
    
    if (rbx_3 s>= r12_1)
        char rax_20
        
        if (rsi_1 != 0)
            rax_20 = sub_140a80e70()
        
        if (rsi_1 == 0 || rax_20 == 0)
            int64_t* rcx_15 = *(rbx_1 + 0x20)
            (*(*rcx_15 + 0x20))(rcx_15, 0xffffffff, 0)
        else
            int64_t* rcx_12 = *(rbx_1 + 0x20)
            
            if ((*(*rcx_12 + 0x20))(rcx_12, 1, 0) == 0)
                char i_1
                
                do
                    int64_t* rax_24 = sub_140a242a0()
                    int64_t r8_7 = *rax_24
                    (*(r8_7 + 0x30))(rax_24, zx.q(data_14399e5e0), r8_7)
                    int64_t* rcx_14 = *(rbx_1 + 0x20)
                    i_1 = (*(*rcx_14 + 0x20))(rcx_14, 1, 0)
                while (i_1 == 0)
        
        break

rbx_1[0xc].b = 1
int64_t* rbx_4 = rax_12

if (rbx_4 == 0)
    return 

rbx_4[1].d -= 1

if (rbx_4[1].d != 1)
    return 

(**rbx_4)(rbx_4)
int32_t rdi_5 = *(rbx_4 + 0xc)
*(rbx_4 + 0xc) -= 1

if (rdi_5 == 1)
    (*(*rbx_4 + 8))(rbx_4, zx.q(rdi_5))
