// 函数: sub_141d41630
// 地址: 0x141d41630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *arg2
*arg2 = 0
int64_t* i = *rbx
void* var_58
void var_48

for (void* rsi_2 = &i[sx.q(rbx[1].d) * 8]; i != rsi_2; i = &i[8])
    int64_t rax_1 = *i
    void* rdx = nullptr
    var_58 = nullptr
    
    if (rax_1 != 0)
        void* rax_2 = i[2]
        void* rcx = &i[4]
        
        if (rax_2 != 0)
            rcx = rax_2
        
        (**rcx)(rcx, &var_58)
        rdx = var_58
    
    void* rcx_1 = &var_48
    
    if (rdx != 0)
        rcx_1 = rdx
    
    rax_1((*(*rcx_1 + 8))(rcx_1, rdx))
    
    if (rax_1 != 0)
        void* rax_6 = var_58
        void* rcx_3 = &var_48
        
        if (rax_6 != 0)
            rcx_3 = rax_6
        
        (*(*rcx_3 + 0x10))(rcx_3)

int64_t* i_1 = rbx[2]
int64_t arg_10

for (void* rsi_5 = &i_1[sx.q(rbx[3].d) * 8]; i_1 != rsi_5; i_1 = &i_1[8])
    int64_t rax_8 = *i_1
    void* rdx_2 = nullptr
    var_58 = nullptr
    
    if (rax_8 != 0)
        void* rax_9 = i_1[2]
        void* rcx_4 = &i_1[4]
        
        if (rax_9 != 0)
            rcx_4 = rax_9
        
        (**rcx_4)(rcx_4, &var_58)
        rdx_2 = var_58
    
    arg_10 = 0
    void* rcx_5 = &var_48
    
    if (rdx_2 != 0)
        rcx_5 = rdx_2
    
    rax_8((*(*rcx_5 + 8))(rcx_5, rdx_2), &arg_10)
    
    if (rax_8 != 0)
        void* rax_13 = var_58
        void* rcx_7 = &var_48
        
        if (rax_13 != 0)
            rcx_7 = rax_13
        
        (*(*rcx_7 + 0x10))(rcx_7)

void* rdi = rbx[4]
void* r14_2 = sx.q(rbx[5].d) * 0x50 + rdi

if (rdi != r14_2)
    void* rsi_6 = rdi + 0x20
    
    do
        int64_t rax_16 = *(rsi_6 - 0x10)
        void* rdx_5 = nullptr
        var_58 = nullptr
        
        if (rax_16 != 0)
            void* rax_17 = *rsi_6
            void* rcx_8 = rsi_6 + 0x10
            
            if (rax_17 != 0)
                rcx_8 = rax_17
            
            (**rcx_8)(rcx_8, &var_58)
            rdx_5 = var_58
        
        void* rcx_9 = &var_48
        arg_10 = *rdi
        
        if (rdx_5 != 0)
            rcx_9 = rdx_5
        
        rax_16((*(*rcx_9 + 8))(rcx_9, rdx_5), &arg_10)
        
        if (rax_16 != 0)
            void* rax_22 = var_58
            void* rcx_11 = &var_48
            
            if (rax_22 != 0)
                rcx_11 = rax_22
            
            (*(*rcx_11 + 0x10))(rcx_11)
        
        rdi += 0x50
        rsi_6 += 0x50
    while (rdi != r14_2)

sub_140ae6d30(&rbx[4])
sub_1405d5770(&rbx[2])
sub_1405d5770(rbx)
return j_sub_140a74f90(rbx) __tailcall
