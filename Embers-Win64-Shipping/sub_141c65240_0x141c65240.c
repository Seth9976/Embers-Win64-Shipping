// 函数: sub_141c65240
// 地址: 0x141c65240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg2[1]

if (rbx == 0)
    return 

int32_t rax = 0
bool z_1

if (0 == rbx[1].d)
    rbx[1].d = 0
    z_1 = true
else
    rax = rbx[1].d
    z_1 = false

if (z_1)
    return 

while (true)
    bool z_2
    
    if (rax == rbx[1].d)
        rbx[1].d = rax + 1
        z_2 = true
    else
        rbx[1].d
        z_2 = false
    
    if (z_2)
        break
    
    rax = 0
    bool z_3
    
    if (0 == rbx[1].d)
        rbx[1].d = 0
        z_3 = true
    else
        rax = rbx[1].d
        z_3 = false
    
    if (z_3)
        return 

if (rbx == 0)
    return 

void* rsi_1 = *arg2

if (rsi_1 != 0)
    int64_t* r8 = *(rsi_1 + 0x130)
    
    if (r8 == 0)
        int32_t rdx = *(arg1 + 0x124)
        *(arg1 + 0xe8) = 0
        
        if (rdx s> *(arg1 + 0xec))
            sub_140775b10(arg1 + 0xe0, rdx)
        
        int64_t r12_1 = sx.q(*(arg1 + 0x124))
        int64_t r15_1 = sx.q(*(arg1 + 0xe8))
        int32_t rax_1 = (r15_1 + r12_1).d
        *(arg1 + 0xe8) = rax_1
        
        if (rax_1 s> *(arg1 + 0xec))
            sub_140775270(arg1 + 0xe0)
        
        memset(*(arg1 + 0xe0) + (r15_1 << 2), 0, r12_1 << 2)
        
        if (arg2[2] == 0)
            sub_141c67b00(rsi_1, arg1 + 0xe0)
        else
            sub_141c67b00(rsi_1, arg1 + 0xe0)
            int64_t* rcx_5 = arg2[2]
            void* var_58 = arg1 + 0xe0
            int32_t var_50_1 = *(rsi_1 + 0x120)
            int64_t var_48_1 = *(arg1 + 0x180)
            void* var_40_1 = arg1 + 0x150
            (*(*rcx_5 + 0x10))(rcx_5, &var_58, arg3)
    else if (arg2[3] == 0)
        sub_141c689e0(rsi_1, arg3)
    else
        int64_t* rcx_6 = arg2[4]
        
        if (rcx_6 != 0)
            (*(*rcx_6 + 0x18))(rcx_6)
        else
            int64_t* arg_20
            int64_t* rax_8 = (*(*r8 + 0x30))(r8, &arg_20)
            
            if (&arg2[4] != rax_8)
                int64_t* rcx_8 = arg2[4]
                arg2[4] = *rax_8
                *rax_8 = 0
                
                if (rcx_8 != 0)
                    (**rcx_8)(rcx_8, 1)
            
            int64_t* rcx_9 = arg_20
            
            if (rcx_9 != 0)
                (**rcx_9)(rcx_9, 1)
        
        sub_141c689e0(rsi_1, arg2[4])
        int64_t* rcx_11 = arg2[3]
        (*(*rcx_11 + 0x10))(rcx_11, arg2[4], *(rsi_1 + 0x180), arg3, *(arg1 + 0x180))
    
    *(arg1 + 0x160) = *(rsi_1 + 0x160)

rbx[1].d -= 1

if (rbx[1].d != 1)
    return 

(**rbx)(rbx)
int32_t rdi_3 = *(rbx + 0xc)
*(rbx + 0xc) -= 1

if (rdi_3 == 1)
    (*(*rbx + 8))(rbx, zx.q(rdi_3))
