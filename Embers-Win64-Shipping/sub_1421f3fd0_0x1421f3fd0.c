// 函数: sub_1421f3fd0
// 地址: 0x1421f3fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int64_t* rcx = *(arg2 + 0x18)

if (rcx == 0)
    return 

int64_t rdx = *(arg1 + 0x48)
int32_t rsi_1 = 0
int64_t* var_40 = nullptr
(*(*rcx + 0x948))(rcx, rdx, &var_40)
int64_t rdi
rdi.b = sub_140d3c6e0(&arg3[1]) != var_40

if (sub_140d3e110(arg3).b != 0 && rdi.b == 0)
    return 

int64_t arg_10
sub_140d3a3a0(&arg_10, nullptr)
int64_t* rdx_1 = var_40
*arg3 = arg_10
sub_140d3a3a0(&arg3[1], rdx_1)
int64_t* rdi_1 = var_40

if (rdi_1 == 0)
    return 

void* rax_4 = sub_142590e60()
void* rdx_2 = rdi_1[2]
int64_t rax_5 = sx.q(*(rax_4 + 0x38))
uint64_t rax
void* rdi_2

if (rax_5.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (rax_5 << 3)) == rax_4 + 0x30)
    rdi_2 = rdi_1[0x46]
    
    if (rdi_2 != 0)
        goto label_1421f40df
    
    rax = *(arg2 + 0x18)
    *(rax + 0x430) |= 0x80
    return 

int64_t* rbx_1 = var_40
int64_t rax_7 = sub_142591550()
int64_t r8_2 = *rbx_1
void* rax_8 = (*(r8_2 + 0x610))(rbx_1, rax_7, r8_2)
rdi_2 = rax_8

if (rax_8 == 0 || rdi_2 == 0)
    rax = *(arg2 + 0x18)
    *(rax + 0x430) |= 0x80
    return 

label_1421f40df:

if (sub_141ee6400(rdi_2) == 0 || *(rdi_2 + 0x430) == 0)
    rax = *(arg2 + 0x18)
    *(rax + 0x430) |= 0x80
    return 

sub_141ee6400(rdi_2)
int64_t r12_1 = sx.q(*(*(rdi_2 + 0x430) + 0x138))
int32_t var_48_1 = r12_1.d
int64_t* rax_11 = sub_141f66020(rdi_2)
void* rax_12 = sub_141f66050(rdi_2, r12_1.d)
arg_10.b = rax_12 != 0
void* rbx_3 = *(*rax_11 + (r12_1 << 3))
int32_t rcx_12 = *(rbx_3 + 0xec)

if (rax_12 == 0 || *(rax_12 + 0x40) u<= 0 || *(rax_12 + 0x20) == 0)
    r12_1.b = 0
else
    r12_1.b = 1

int64_t* rbx_4 = *(rbx_3 + 0x18)
int64_t r13

if (rbx_4 == 0)
    r13.b = 0
    rax_12.b = 0
else
    r13.b = 1
    
    if ((*(*rbx_4 + 0x58))(rbx_4).d s<= 0)
        rax_12.b = 0
    else
        rax_12 = 1

if (rcx_12 u<= 0 || arg_10.b == 0 || r12_1.b == 0 || rbx_4 == 0 || r13.b == 0 || rax_12.b == 0)
    rax = *(arg2 + 0x18)
    *(rax + 0x430) |= 0x80
    return 

arg3[9].d = var_48_1
sub_140d3a3a0(arg3, rdi_2)
int32_t* rax_15 = sub_1421b7c40(arg2, arg1)
rax = sub_140d3c6e0(rax_15)
int32_t arg_20
arg_20.q = rax
uint64_t rcx_17 = rax

if (rax == 0)
    return 

int32_t i = 0

if (*(arg1 + 0x58) s> 0)
    int64_t r15_2 = 0
    int64_t r12_2 = 0
    
    do
        int32_t* rbx_5 = *(arg1 + 0x50)
        void* rdi_3 = *(rcx_17 + 0x430)
        int32_t rcx_18
        rcx_18.b = sub_140b5b8a0(*(rbx_5 + r12_2), 0).b == 0
        rax.b = *(rbx_5 + r12_2 + 4) != 0
        rax.b |= rcx_18.b
        
        if (rax.b != 0)
            int64_t rbx_6 = *(rbx_5 + r12_2)
            rax = zx.q(*(rdi_3 + 0x220))
            arg_10 = rbx_6
            
            if (rax.d != *(rdi_3 + 0x24c))
                int32_t rax_17 = sub_140b5ead0(rbx_6.d) + arg_10:4.d
                void* r8_3 = rdi_3 + 0x250
                void* rcx_20 = *(r8_3 + 8)
                
                if (rcx_20 != 0)
                    r8_3 = rcx_20
                
                rax = zx.q(*(r8_3 + (((sx.q(*(rdi_3 + 0x260)) - 1) & sx.q(rax_17)) << 2)))
                
                if (rax.d != 0xffffffff)
                    int64_t r8_4 = *(rdi_3 + 0x218)
                    
                    do
                        int64_t rcx_21 = sx.q(rax.d)
                        int64_t rdx_10 = rcx_21 * 5
                        
                        if (*(r8_4 + (rdx_10 << 2)) == rbx_6)
                            if (rax.d != 0xffffffff)
                                rax = r8_4 + rcx_21 * 0x14
                                
                                if (rax != 0 && rax != -8)
                                    int32_t rcx_22 = *(rax + 8)
                                    
                                    if (rcx_22 != 0xffffffff && *(arg1 + 0x58) s> rsi_1)
                                        rsi_1 += 1
                                        *(r15_2 + *(rax_15 + 0x20)) = rcx_22
                                        r15_2 += 4
                            
                            break
                        
                        rax = zx.q(*(r8_4 + (rdx_10 << 2) + 0xc))
                    while (rax.d != 0xffffffff)
        
        rcx_17 = arg_20.q
        i += 1
        r12_2 += 8
    while (i s< *(arg1 + 0x58))

rax_15[5] = rsi_1
