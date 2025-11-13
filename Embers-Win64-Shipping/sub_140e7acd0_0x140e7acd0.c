// 函数: sub_140e7acd0
// 地址: 0x140e7acd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax

if (arg1[0x2e].b == 0 || arg2 != 0)
    rax = 0
else
    rax = 1

arg1[0x2e].b = arg2
char arg_10

if (rax == 0)
    int64_t* i = arg1[0x57]
    void* rbx_9 = &i[sx.q(arg1[0x58].d) * 2]
    arg_10 = 0
    
    for (; i != rbx_9; i = &i[2])
        void* rdx_3 = *i
        
        if (rdx_3 != 0 && *(rdx_3 + 0x20) != 0)
            sub_140e5a170(&arg_10, rdx_3)
else
    sub_140e5ecc0(&arg1[0x3a], 0)
    int64_t* i_1 = arg1[0x57]
    void* rbx_2 = &i_1[sx.q(arg1[0x58].d) * 2]
    arg_10 = 0
    
    for (; i_1 != rbx_2; i_1 = &i_1[2])
        void* rdx = *i_1
        
        if (rdx != 0 && *(rdx + 0x20) != 0)
            sub_140e5a190(&arg_10, rdx)
    
    *(arg1 + 0x171) = 0
    int64_t* i_2 = arg1[0x57]
    void* rbx_5 = &i_2[sx.q(arg1[0x58].d) * 2]
    arg_10 = 0
    
    for (; i_2 != rbx_5; i_2 = &i_2[2])
        void* rdx_1 = *i_2
        
        if (rdx_1 != 0 && *(rdx_1 + 0x20) != 0)
            j_sub_140e558b0(&arg_10, rdx_1)
    
    if (arg1[0x25].d != *(arg1 + 0x154))
        void* var_48
        sub_1407453e0(&var_48, &arg1[0x24])
        void* var_38
        int32_t i_4
        
        for (int32_t i_3 = i_4; i_3 s< *(var_38 + 0x18); i_3 = i_4)
            int64_t* rdi = *((sx.q(i_3) << 5) + *var_48 + 0x10)
            
            if (rdi != 0)
                rdi[1].d -= 1
                
                if (rdi[1].d == 1)
                    (**rdi)(rdi)
                    int32_t temp3_1 = *(rdi + 0xc)
                    *(rdi + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rdi + 8))(rdi, 1)
            
            int32_t var_3c
            int32_t var_30 = var_30 & not.d(var_3c)
            void var_40
            sub_14059bdd0(&var_40)
        
        arg1[0x25].d = 0
        
        if (*(arg1 + 0x12c) s<= 0xffffffff)
            sub_1405a51b0(&arg1[0x24], 0)
        
        arg1[0x2a].d = 0xffffffff
        *(arg1 + 0x154) = 0
        sub_140774790(&arg1[0x26])
        int64_t rcx_12 = sx.q(arg1[0x2d].d)
        void* rdi_1 = &arg1[0x2b]
        void* rax_9 = *(rdi_1 + 8)
        
        if (rcx_12 s> 0)
            if (rax_9 != 0)
                rdi_1 = rax_9
            
            __builtin_memset(rdi_1, 0xffffffff, rcx_12 << 2)
int64_t* rax_11 = (*(*arg1 + 0x1c8))(arg1)
int64_t rbp
rbp.b = 0
*(rax_11 + 0x14) += 1
int32_t rcx_15 = *(rax_11 + 0x14)
int32_t rax_12 = rax_11[1].d
int64_t rbx_10 = sx.q(rax_12 - 1)

if (rax_12 - 1 s>= 0)
    int64_t rdi_3 = rbx_10 << 4
    int64_t temp1_1
    
    do
        int64_t rax_14 = *rax_11
        
        if (*(rdi_3 + rax_14 + 8) == 0)
            rbp.b = 1
        else
            int64_t* rcx_16 = *(rdi_3 + rax_14)
            
            if (rcx_16 == 0)
                rbp.b = 1
            else if ((*(*rcx_16 + 0x50))(rcx_16, zx.q(arg2)) == 0)
                rbp.b = 1
        
        rdi_3 -= 0x10
        temp1_1 = rbx_10
        rbx_10 -= 1
    while (temp1_1 - 1 s>= 0)
    rcx_15 = *(rax_11 + 0x14)

*(rax_11 + 0x14) = rcx_15 - 1

if (rbp.b == 0)
    return rcx_15 - 1

return sub_140599630(rax_11, 0) __tailcall
