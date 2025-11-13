// 函数: sub_142329640
// 地址: 0x142329640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = nullptr
*arg1 = &data_143328ae0
arg1[0xa] = 0
arg1[0xb] = 0
arg1[0xc].d = arg4
arg1[0xd] = 0
int64_t rbp = sx.q(arg5[1].d)
int64_t r15 = *arg5
arg1[0xe].d = rbp.d

if (rbp.d != 0)
    sub_1405a4be0(&arg1[0xd], rbp.d, 0)
    memcpy(arg1[0xd], r15, (rbp << 4).d)
else
    *(arg1 + 0x74) = 0

arg1[0xf] = 0
int64_t rbp_1 = sx.q(arg6[1].d)
int64_t r15_1 = *arg6
arg1[0x10].d = rbp_1.d

if (rbp_1.d != 0)
    sub_140638750(&arg1[0xf], rbp_1.d, 0)
    memcpy(arg1[0xf], r15_1, (rbp_1 << 2).d)
else
    *(arg1 + 0x84) = 0

arg1[0x11] = 0
void* rdx_4 = &arg1[0x13]
arg1[0x12] = 0
*(rdx_4 + 0x10) = 0
*(rdx_4 + 0x18) = 0
*(rdx_4 + 0x1c) = 0x80
void* rax_2 = *(rdx_4 + 0x10)

if (rax_2 != 0)
    rdx_4 = rax_2

*rdx_4 = 0
*(rdx_4 + 8) = 0
arg1[0x17].d = 0xffffffff
*(arg1 + 0xbc) = 0
arg1[0x19] = 0
arg1[0x1a].d = 0
arg1[0x1b].d = 0
sub_14234b010(&arg1[0xa], arg2, arg3, arg1[0xc].d, 0)

if (arg2 != 0)
    void* rax_3 = sub_142591550()
    void* rdx_6 = arg2[2]
    int64_t rax_4 = sx.q(*(rax_3 + 0x38))
    
    if (rax_4.d s<= *(rdx_6 + 0x38) && *(*(rdx_6 + 0x30) + (rax_4 << 3)) == rax_3 + 0x30)
        rbx = arg2

float var_a8[0x4][0x4]
float var_68[0x4][0x4]
float (* rax_12)[0x4]
int64_t* rcx_12
int64_t* r8_6

if (sub_140d3e110(&arg2[0x87]) == 0)
label_14232981d:
    
    if (rbx != 0)
        rax_12 = sub_1408041d0((*(*rbx + 0x698))(rbx, &var_68), &var_a8)
        r8_6 = nullptr
        rcx_12 = rbx
    label_14232984c:
        *(arg1 + 0x10) = *rax_12
        *(arg1 + 0x20) = rax_12[1]
        *(arg1 + 0x30) = rax_12[2]
        *(arg1 + 0x40) = rax_12[3]
        arg1[0x1b].d = *(rbx + 0x734)
        sub_142317190(rcx_12, &arg1[0x11], r8_6)
else if (rbx != 0)
    if ((*(rbx + 0x71a) & 0x20) == 0)
        goto label_14232981d
    
    int64_t* rax_7 = sub_140d3c6e0(&arg2[0x87])
    
    if (rax_7 != 0)
        void* rax_8 = sub_142591550()
        void* rcx_8 = rax_7[2]
        int64_t rdx_7 = sx.q(*(rax_8 + 0x38))
        
        if (rdx_7.d s<= *(rcx_8 + 0x38) && *(*(rcx_8 + 0x30) + (rdx_7 << 3)) == rax_8 + 0x30)
            rax_12 = sub_1408041d0((*(*rbx + 0x698))(rbx, &var_a8), &var_68)
            r8_6 = rbx
            rcx_12 = rax_7
            goto label_14232984c
return arg1
