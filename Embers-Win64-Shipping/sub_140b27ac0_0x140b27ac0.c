// 函数: sub_140b27ac0
// 地址: 0x140b27ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rbx = *arg2
int64_t rbp = sx.q(arg2[1].d)
int32_t arg_8 = 0
int16_t* rdx = &rbx[rbp]
uint64_t var_48
uint64_t var_38
uint64_t* rcx_9
int32_t rbx_2

if (rdx == rbx)
label_140b27b03:
    var_38 = 0
    int32_t var_30_1 = rbp.d
    
    if (rbp.d != 0)
        sub_1405a4c70(&var_38, rbp.d, 0)
        memcpy(var_38, rbx, rbp.d * 2)
    else
        int32_t var_2c_1 = 0
    
    rcx_9 = &var_38
    rbx_2 = 1
else
    while (true)
        rdx -= 2
        
        if (*rdx == 0x2e)
            break
        
        if (rdx == rbx)
            goto label_140b27b03
    
    int32_t rdx_2 = ((rdx - rbx) s>> 1).d
    
    if (rdx_2 == 0xffffffff)
        goto label_140b27b03
    
    int32_t rdi_1 = (rbp - 1).d
    
    if (rbp.d == 0)
        rdi_1 = 0
    
    void* rcx = &rbx[sx.q(rdi_1)]
    
    if (rcx != rbx)
        while (true)
            int16_t rax_2 = *(rcx - 2)
            rcx -= 2
            
            if (rax_2 == 0x2f)
                break
            
            if (rax_2 == 0x5c)
                break
            
            if (rcx == rbx)
                goto label_140b27b74
        
        int32_t rcx_2 = ((rcx - rbx) s>> 1).d
        
        if (rcx_2 != 0xffffffff && rcx_2 s> rdx_2)
            goto label_140b27b03
    
label_140b27b74:
    int16_t* const rsi_1 = &data_142d40450
    
    if (rbp.d != 0)
        rsi_1 = rbx
    
    if (rdx_2 s< 0)
        rdi_1 = 0
    else if (rdx_2 s< rdi_1)
        rdi_1 = rdx_2
    
    uint64_t rbx_1 = 0
    int32_t rdx_3 = 0
    var_48 = 0
    int32_t rax_3 = 0
    int32_t var_40_1 = 0
    int32_t var_3c_1 = 0
    
    if (rsi_1 != 0 && *rsi_1 != 0 && rdi_1 s> 0)
        if (rdi_1 + 1 s> 0)
            sub_1405947f0(&var_48, rdi_1 + 1)
            rax_3 = var_3c_1
            rdx_3 = var_40_1
            rbx_1 = var_48
        
        int32_t rbp_2 = rdx_3 + 1 + rdi_1
        
        if (rbp_2 s> rax_3)
            sub_140594770(&var_48)
            rbx_1 = var_48
        
        UnDecorator::getReferenceType(rbx_1, rsi_1, rdi_1 * 2)
        *(rbx_1 + (sx.q(rbp_2) << 1) - 2) = 0
    
    rcx_9 = &var_48
    rbx_2 = 2

*arg1 = *rcx_9
*rcx_9 = 0
arg1[1].d = rcx_9[1].d
*(arg1 + 0xc) = *(rcx_9 + 0xc)
rcx_9[1] = 0

if ((rbx_2.b & 2) != 0)
    uint64_t rcx_10 = var_48
    rbx_2 &= 0xfffffffd
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)

if ((rbx_2.b & 1) != 0)
    uint64_t rcx_11 = var_38
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)

int32_t rcx_14 = arg3[1].d
int32_t rax_8 = rcx_14 - 1

if (rcx_14 == 0)
    rax_8 = 0

if (rax_8 != 0 && **arg3 != 0x2e)
    int32_t rdx_8 = arg1[1].d
    int32_t rax_10
    rax_10.b = rdx_8 s<= 0
    int32_t rbx_3 = rdx_8 - 1
    
    if (rdx_8 s<= 0)
        rbx_3 = 0
    
    int32_t rax_12 = rax_10 + 1 + rdx_8
    arg1[1].d = rax_12
    
    if (rax_12 s> *(arg1 + 0xc))
        sub_140594770(arg1)
    
    int64_t rcx_13 = sx.q(rbx_3)
    *(*arg1 + (rcx_13 << 1)) = 0x2e
    *(*arg1 + (rcx_13 << 1) + 2) = 0
    rcx_14 = arg3[1].d

int32_t r8_4 = rcx_14 - 1

if (rcx_14 == 0)
    r8_4 = 0

sub_140a20ba0(arg1, *arg3, r8_4)
return arg1
