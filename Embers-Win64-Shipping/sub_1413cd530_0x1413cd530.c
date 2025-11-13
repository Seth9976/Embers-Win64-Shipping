// 函数: sub_1413cd530
// 地址: 0x1413cd530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 != 0)
    int32_t rcx = *(arg1 + 0xffc)
    int64_t rbp
    
    if (rcx == 0)
        rbp = zx.q(*(arg1 + 0xfd0))
        int32_t rax_1 = (rbp + 1).d
        *(arg1 + 0xfd0) = rax_1
        
        if (rax_1 s> *(arg1 + 0xfd4))
            sub_1405a4d70(arg1 + 0xfc8)
        
        int32_t rdi_1 = *(arg1 + 0xff0)
        void* rbx_1 = arg1 + 0xfd8
        sub_1405a4980(rbx_1, rdi_1 + 1)
        *(rbx_1 + 0x18) += 1
        void* rax_2 = *(rbx_1 + 0x10)
        
        if (rax_2 != 0)
            rbx_1 = rax_2
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rdi_1)
        int64_t rdx_5 = sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)
        *(rbx_1 + (rdx_5 << 2)) &= not.d(1 << (rdi_1.b & 0x1f))
    else
        rbp = sx.q(*(arg1 + 0xff8))
        int64_t r8 = *(arg1 + 0xfc8)
        int64_t rdx = sx.q(*(r8 + (rbp << 3) + 4))
        *(arg1 + 0xff8) = rdx.d
        *(arg1 + 0xffc) = rcx - 1
        
        if (rcx != 1)
            *(r8 + (rdx << 3)) = 0xffffffff
    
    void* rax_9 = *(arg1 + 0xfe8)
    void* r8_1 = arg1 + 0xfd8
    
    if (rax_9 != 0)
        r8_1 = rax_9
    
    int32_t temp2
    int32_t temp3
    temp2:temp3 = sx.q(rbp.d)
    void* rdx_8 = r8_1 + (sx.q((temp3 + (temp2 & 0x1f)) s>> 5) << 2)
    int64_t rax_14 = sx.q(rbp.d)
    *rdx_8 |= 1 << (rbp.b & 0x1f)
    *(*(arg1 + 0xfc8) + (rax_14 << 3)) = arg2
    return rax_14

int64_t* var_48
sub_1407453e0(&var_48, arg1 + 0xfc8)
int32_t var_2c
int32_t r8_2 = var_2c
void* var_38

if (r8_2 s>= *(var_38 + 0x18))
    return var_38

int64_t rax_16
int64_t* rdx_10
int64_t r9_1

while (true)
    rdx_10 = var_48
    rax_16 = *rdx_10
    r9_1 = *(rax_16 + (sx.q(r8_2) << 3))
    
    if (r9_1 == arg2)
        break
    
    int32_t var_3c
    int32_t var_30 = var_30 & not.d(var_3c)
    void var_40
    sub_14059bdd0(&var_40)
    r8_2 = var_2c
    
    if (r8_2 s>= *(var_38 + 0x18))
        return var_38

int64_t r11_1 = sx.q(r8_2)
void* r10_1 = &rdx_10[2]

if (*(rdx_10 + 0x34) != 0)
    *(rax_16 + (sx.q(rdx_10[6].d) << 3)) = r8_2

int64_t rax_20 = *rdx_10
int32_t rcx_13 = -1
*(rax_20 + (r11_1 << 3)) = 0xffffffff

if (*(rdx_10 + 0x34) s> 0)
    rcx_13 = rdx_10[6].d

*(rax_20 + (r11_1 << 3) + 4) = rcx_13
*(rdx_10 + 0x34) += 1
rdx_10[6].d = r8_2
void* rdx_11 = *(r10_1 + 0x10)

if (rdx_11 != 0)
    r10_1 = rdx_11

int32_t temp4_1
int32_t temp5_1
temp4_1:temp5_1 = sx.q(r8_2)
int64_t rdx_14 = sx.q((temp5_1 + (temp4_1 & 0x1f)) s>> 5)
*(r10_1 + (rdx_14 << 2)) &= not.d(rol.d(1, r8_2.b))
return j_sub_140a74f90(r9_1)
