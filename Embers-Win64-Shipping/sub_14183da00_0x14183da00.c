// 函数: sub_14183da00
// 地址: 0x14183da00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_58 = nullptr
int64_t* var_50 = nullptr

while (true)
    void* rdi_1 = **(arg1 + 0x48)
    
    if (rdi_1 == 0)
        break
    
    if (&var_58 != rdi_1 + 8)
        var_58 = *(rdi_1 + 8)
        *(rdi_1 + 8) = 0
        sub_1405aeff0(&var_50, rdi_1 + 0x10)
    
    void* rsi_1 = *(arg1 + 0x48)
    *(arg1 + 0x48) = rdi_1
    int128_t var_48 = zx.o(0)
    
    if (rdi_1 + 8 != &var_48)
        *(rdi_1 + 8) = 0
        sub_1405aeff0(rdi_1 + 0x10, &var_48:8)
        void* rcx_2 = var_48:8.q
        
        if (rcx_2 != 0)
            int32_t rax_3 = *(rcx_2 + 8)
            *(rcx_2 + 8) -= 1
            
            if (rax_3 == 1)
                int64_t* rbx_2 = var_48:8.q
                (**rbx_2)(rbx_2)
                int32_t rax_5 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (rax_5 == 1)
                    int64_t* rcx_4 = var_48:8.q
                    (*(*rcx_4 + 8))(rcx_4, 1)
    
    if (rsi_1 != 0)
        int64_t* rbx_3 = *(rsi_1 + 0x10)
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t rax_9 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (rax_9 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
        
        j_sub_140a74f90(rsi_1)
    
    void* rbx_4 = var_58
    
    if (rbx_4 != 0)
        char i
        
        do
            int64_t* rcx_8 = *(rbx_4 + 0x70)
            i = (*(*rcx_8 + 0x20))(rcx_8, 0xffffffff, 0)
        while (i == 0)

while (true)
    int64_t rbx_5 = sx.q(arg2[1].d)
    int32_t rax_12 = (rbx_5 + 1).d
    arg2[1].d = rax_12
    
    if (rax_12 s> *(arg2 + 0xc))
        sub_1405a4f90(arg2)
    
    int64_t* rdi_4 = (rbx_5 << 4) + *arg2
    *rdi_4 = 0
    rdi_4[1] = 0
    void* rsi_2 = **(arg1 + 0x38)
    
    if (rsi_2 == 0)
        break
    
    if (rdi_4 != rsi_2 + 8)
        int64_t rcx_10 = *rdi_4
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        *rdi_4 = *(rsi_2 + 8)
        *(rsi_2 + 8) = 0
        rdi_4[1].d = *(rsi_2 + 0x10)
        *(rdi_4 + 0xc) = *(rsi_2 + 0x14)
        *(rsi_2 + 0x10) = 0
    
    void* rdi_5 = *(arg1 + 0x38)
    *(arg1 + 0x38) = rsi_2
    void var_38
    
    if (rsi_2 + 8 != &var_38)
        int64_t rcx_11 = *(rsi_2 + 8)
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        *(rsi_2 + 8) = 0
        *(rsi_2 + 0x10) = 0
    
    if (rdi_5 != 0)
        int64_t rcx_12 = *(rdi_5 + 8)
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
        
        j_sub_140a74f90(rdi_5)

int64_t rax_17 = *arg2
int64_t rcx_15 = sx.q(arg2[1].d) * 2
int64_t rbx_7 = *(rax_17 + (rcx_15 << 3) - 0x10)
*(rax_17 + (rcx_15 << 3) - 0x10) = 0
*(rax_17 + (rcx_15 << 3) - 8) = 0
int64_t rdi_6 = sx.q(arg2[1].d)
int64_t r9 = *arg2
int32_t rdx_5 = rdi_6.d
int64_t rcx_16 = *((rdi_6 << 4) - 0x10 + r9)

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)
    rdx_5 = arg2[1].d
    r9 = *arg2

int32_t rax_19 = rdx_5 - (rdi_6 - 1).d

if (rax_19 != 1)
    memmove((rdi_6 << 4) - 0x10 + r9, (rdi_6 << 4) + r9, (rax_19 - 1) << 4)
    rdx_5 = arg2[1].d

int32_t rdx_9 = rdx_5 - 1
arg2[1].d = rdx_9

if (rbx_7 != 0)
    sub_140a74f90(rbx_7)
    rdx_9 = arg2[1].d

int32_t result = sub_140688010(*arg2, rdx_9, arg3)
int64_t* rcx_20 = var_50

if (rcx_20 != 0)
    result = rcx_20[1].d
    rcx_20[1].d -= 1
    
    if (result == 1)
        int64_t* rbx_8 = var_50
        result = (**rbx_8)(rbx_8)
        int32_t rbp_1 = *(rbx_8 + 0xc)
        *(rbx_8 + 0xc) -= 1
        
        if (rbp_1 == 1)
            int64_t* rcx_22 = var_50
            return (*(*rcx_22 + 8))(rcx_22, zx.q(rbp_1))

return result
