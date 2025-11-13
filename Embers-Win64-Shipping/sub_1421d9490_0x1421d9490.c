// 函数: sub_1421d9490
// 地址: 0x1421d9490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b33630("ParticleUpdate")
void* rcx = arg1[1]
void* rbp = rcx

if (rcx != 0)
    int32_t i = 0
    
    if (*(rcx + 0x70) s> 0)
        int64_t r14_1 = 0
        
        do
            void* rax_1 = *(rcx + 0x68)
            void* rcx_1 = rcx + 8
            void* rbx_1 = *arg1
            
            if (rax_1 != 0)
                rcx_1 = rax_1
            
            int64_t rdi_1 = sx.q(*(rbx_1 + 0x3e8))
            int64_t rbp_1 = *(rcx_1 + r14_1)
            int32_t rax_2 = (rdi_1 + 1).d
            *(rbx_1 + 0x3e8) = rax_2
            
            if (rax_2 s> *(rbx_1 + 0x3ec))
                sub_1405a4d70(rbx_1 + 0x3e0)
            
            i += 1
            r14_1 += 8
            *(*(rbx_1 + 0x3e0) + (rdi_1 << 3)) = rbp_1
            rbp = arg1[1]
            rcx = rbp
        while (i s< *(rbp + 0x70))

void* r14_2 = *arg1
int64_t* rcx_3 = *(r14_2 + 0x108)
void var_28
sub_142076cb0(&var_28, (*(*rcx_3 + 0x240))(rcx_3), 0, 1, *(r14_2 + 0x168) u>> 1 & 1)
void* rdx_3 = *(r14_2 + 0x178)
void* rbx_3 = rdx_3

if (rdx_3 != 0)
    int32_t i_1 = 0
    
    if (*(rdx_3 + 0x70) s> 0)
        int64_t rsi_1 = 0
        
        do
            void* rax_6 = *(rdx_3 + 0x68)
            void* rcx_5 = rdx_3 + 8
            rbx_3 = rdx_3
            
            if (rax_6 != 0)
                rcx_5 = rax_6
            
            int64_t* rcx_6 = *(rcx_5 + rsi_1)
            
            if (rcx_6 != 0)
                (*(*rcx_6 + 0x18))(rcx_6, r14_2)
                rbx_3 = *(r14_2 + 0x178)
            
            i_1 += 1
            rsi_1 += 8
            rdx_3 = rbx_3
        while (i_1 s< *(rbx_3 + 0x70))

if (rbx_3 != rbp && rbx_3 != 0)
    int32_t i_2 = 0
    
    if (*(rbx_3 + 0x70) s> 0)
        int64_t rsi_2 = 0
        
        do
            void* rax_8 = *(rbx_3 + 0x68)
            void* rcx_7 = rbx_3 + 8
            
            if (rax_8 != 0)
                rcx_7 = rax_8
            
            int64_t* rcx_8 = *(rcx_7 + rsi_2)
            
            if (rcx_8 != 0)
                (**rcx_8)(rcx_8, 1)
            
            i_2 += 1
            rsi_2 += 8
        while (i_2 s< *(rbx_3 + 0x70))
    
    *(rbx_3 + 0x70) = 0
    
    if (*(rbx_3 + 0x74) s<= 0xffffffff)
        sub_140809940(rbx_3 + 8, 0)
    
    int64_t rcx_10 = *(rbx_3 + 0x68)
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    j_sub_140a74f90(rbx_3)

*(r14_2 + 0x178) = rbp
sub_1421e0f30(r14_2)
sub_142079870(&var_28)
return sub_140b37f60("ParticleUpdate") __tailcall
