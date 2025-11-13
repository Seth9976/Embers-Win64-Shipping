// 函数: sub_142036aa0
// 地址: 0x142036aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int32_t arg_8 = 0
(*(*arg1 + 0x7c8))()
(*(*arg1 + 0x150))(arg1)
sub_1425690c0(arg2, *(arg2[0x53] + 0x38))

if (sub_1424b2a30(arg1, arg2) == 0)
    void* rdi_1 = arg2[0x45]
    int64_t* rcx_6 = *(rdi_1 + 0x258)
    
    if (rcx_6 != 0 && (*(*rcx_6 + 0x28))(rcx_6) != 0)
        int64_t* rax_7 = sub_141dc8400(arg1)
        int64_t* rcx_8 = *(rdi_1 + 0x258)
        char rax_8
        
        if (rcx_8 != 0)
            int64_t rdx_3 = *rcx_8
            rax_8 = (*(rdx_3 + 0x28))(rcx_8, rdx_3)
        
        int64_t var_58
        int64_t var_38
        int64_t* rcx_10
        int32_t rdi_2
        
        if (rcx_8 == 0 || rax_8 == 0)
            var_58 = 0
            int32_t var_50_1 = 0
            sub_1405947f0(&var_58, 8)
            int32_t rax_10 = var_50_1 + 8
            var_50_1 = rax_10
            
            if (rax_10 s> 0)
                sub_140594770(&var_58)
            
            UnDecorator::getReferenceType(var_58, u"INVALID", 0x10)
            rcx_10 = &var_58
            rdi_2 = 2
        else
            int64_t* rcx_9 = *(rdi_1 + 0x258)
            int64_t r8_1 = *rcx_9
            rcx_10 = (*(r8_1 + 0x30))(rcx_9, &var_38, r8_1)
            rdi_2 = 1
        
        int64_t var_48 = *rcx_10
        *rcx_10 = 0
        int32_t var_40_1 = rcx_10[1].d
        int32_t var_3c_1 = *(rcx_10 + 0xc)
        rcx_10[1] = 0
        
        if ((2 & rdi_2.b) != 0)
            int64_t rcx_14 = var_58
            rdi_2 &= 0xfffffffd
            
            if (rcx_14 != 0)
                sub_140a74f90(rcx_14)
        
        if ((rdi_2.b & 1) != 0)
            int64_t rcx_15 = var_38
            
            if (rcx_15 != 0)
                sub_140a74f90(rcx_15)
        
        (*(*rax_7 + 0x308))(rax_7, &var_48)
        int64_t rcx_17 = var_48
        
        if (rcx_17 != 0)
            sub_140a74f90(rcx_17)
else
    int32_t arg_14 = 0
    sub_142569290(arg2, (*sub_140b5e500(&arg_8, 0x142)).q)

int64_t* rcx_18 = arg1[0x4f]

if (rcx_18 != 0)
    (*(*rcx_18 + 0x650))(rcx_18, arg2)

sub_1424b29f0(arg1, arg2)
int64_t rbp
rbp.b = 0
int32_t rdx_9 = data_143a2e0f8
int32_t rcx_21 = data_143a2e104 + 1
data_143a2e104 = rcx_21
int64_t rsi_2 = sx.q(rdx_9 - 1)

if (rdx_9 - 1 s>= 0)
    int64_t rdi_4 = rsi_2 << 4
    int64_t temp0_1
    
    do
        int64_t rax_17 = data_143a2e0f0
        
        if (*(rdi_4 + rax_17 + 8) == 0)
            rbp.b = 1
        else
            int64_t* rcx_22 = *(rdi_4 + rax_17)
            
            if (rcx_22 == 0)
                rbp.b = 1
            else if ((*(*rcx_22 + 0x50))(rcx_22, arg1, arg2) == 0)
                rbp.b = 1
        
        rdi_4 -= 0x10
        temp0_1 = rsi_2
        rsi_2 -= 1
    while (temp0_1 - 1 s>= 0)
    rcx_21 = data_143a2e104
    rdx_9 = data_143a2e0f8

data_143a2e104 = rcx_21 - 1

if (rbp.b != 0 && rcx_21 - 1 s<= 0)
    int32_t rsi_3 = rdx_9
    
    if (rdx_9 s> 0)
        int64_t* rdi_5 = nullptr
        
        do
            int64_t rax_20 = data_143a2e0f0
            
            if (*(rdi_5 + rax_20 + 8) == 0)
                sub_1405a4880(&data_143a2e0f0, rbx, 1, 1)
            else
                int64_t* rcx_24 = *(rdi_5 + rax_20)
                
                if (rcx_24 == 0)
                    sub_1405a4880(&data_143a2e0f0, rbx, 1, 1)
                else if ((*(*rcx_24 + 0x20))(rcx_24) != 0)
                    sub_1405a4880(&data_143a2e0f0, rbx, 1, 1)
                else
                    rbx += 1
                    rdi_5 = &rdi_5[2]
            
            rdx_9 = data_143a2e0f8
        while (rbx s< rdx_9)
    
    int32_t rax_23 = rdx_9 * 2
    
    if (rax_23 s<= 2)
        rax_23 = 2
    
    data_143a2e100 = rax_23
    
    if (rsi_3 s> rax_23 && data_143a2e0fc != rdx_9)
        sub_1405a5410(&data_143a2e0f0, rdx_9)

return sub_1424b2750(arg1, arg2) __tailcall
