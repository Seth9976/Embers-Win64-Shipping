// 函数: sub_140d943d0
// 地址: 0x140d943d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_58 = 0
int32_t rsi = 4
*arg1 = data_1439ae521
*(arg1 + 0x128) = 0
*(arg1 + 0x130) = 0
*(arg1 + 0x134) = 4
arg1[0x138] = 0
int32_t rcx = arg2[1].d

if (rcx s> *(arg1 + 0x134))
    sub_140dbd360(&arg1[8], rcx)
    rcx = arg2[1].d

int128_t* rbx = *arg2
void* r12_1 = sx.q(rcx) * 0x58 + rbx

if (rbx != r12_1)
    do
        int64_t rdi_1 = sx.q(*(arg1 + 0x130))
        int32_t rax_2 = (rdi_1 + 1).d
        *(arg1 + 0x130) = rax_2
        
        if (rax_2 s> *(arg1 + 0x134))
            sub_140dbcd70(&arg1[8], rdi_1.d)
        
        void* rax_3 = *(arg1 + 0x128)
        int64_t rcx_3 = rdi_1 * 9
        void* rdx_2 = &arg1[8]
        
        if (rax_3 != 0)
            rdx_2 = rax_3
        
        *(rdx_2 + (rcx_3 << 3)) = *rbx
        *(rdx_2 + (rcx_3 << 3) + 0x10) = rbx[1]
        *(rdx_2 + (rcx_3 << 3) + 0x20) = rbx[2]
        *(rdx_2 + (rcx_3 << 3) + 0x30) = rbx[3].q
        *(rdx_2 + (rcx_3 << 3) + 0x38) = *(rbx + 0x38)
        void* rax_5 = rbx[4].q
        *(rdx_2 + (rcx_3 << 3) + 0x40) = rax_5
        
        if (rax_5 != 0)
            *(rax_5 + 8) += 1
        
        rbx += 0x58
    while (rbx != r12_1)
    
    rcx = arg2[1].d
    rbx = *arg2

int64_t* var_50
int128_t var_48
int64_t rax_6
int32_t* rcx_4
int64_t* rbx_1

if (rcx s<= 0)
    rbx_1 = var_58.q
    rcx_4 = &var_48
    rax_6 = 0
    var_48 = zx.o(0)
else
    rax_6 = *(rbx + 0x38)
    rbx_1 = rbx[4].q
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    var_58.q = rax_6
    var_50 = rbx_1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    rcx_4 = &var_58
    rsi = 3

*(arg1 + 0x140) = rax_6
int64_t rax_7 = *(rcx_4 + 8)
*(rcx_4 + 8) = 0
*(arg1 + 0x148) = rax_7
*rcx_4 = 0

if ((rsi.b & 4) != 0)
    int64_t* rdi_2 = var_48:8.q
    rsi &= 0xfffffffb
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            (**rdi_2)(rdi_2)
            int32_t temp2_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rdi_2 + 8))(rdi_2, 1)

if ((rsi.b & 2) != 0)
    rsi &= 0xfffffffd
    
    if (var_50 != 0)
        var_50[1].d -= 1
        
        if (var_50[1].d == 1)
            (**var_50)(var_50)
            int32_t temp4_1 = *(var_50 + 0xc)
            *(var_50 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*var_50 + 8))(var_50, 1)

if ((rsi.b & 1) != 0 && rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp5_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

*(arg1 + 0x150) = 0
*(arg1 + 0x158) = 0
int32_t rax_14 = arg2[1].d

if (rax_14 s> 0)
    sub_1405a5410(&arg1[0x150], rax_14)
    rax_14 = arg2[1].d

void* i = *arg2

for (void* rbp_1 = sx.q(rax_14) * 0x58 + i; i != rbp_1; i += 0x58)
    int64_t rsi_1 = sx.q(*(arg1 + 0x158))
    int32_t rax_16 = (rsi_1 + 1).d
    *(arg1 + 0x158) = rax_16
    
    if (rax_16 s> *(arg1 + 0x15c))
        sub_1405a4f90(&arg1[0x150])
    
    int64_t* rcx_15 = (rsi_1 << 4) + *(arg1 + 0x150)
    *rcx_15 = *(i + 0x48)
    void* rdx_5 = *(i + 0x50)
    rcx_15[1] = rdx_5
    
    if (rdx_5 != 0)
        *(rdx_5 + 8) += 1

sub_140d94ad0(arg2)
return arg1
