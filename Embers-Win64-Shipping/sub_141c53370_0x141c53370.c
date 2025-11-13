// 函数: sub_141c53370
// 地址: 0x141c53370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(arg1 + 0x10)

if (rdi == 0)
    return 

int32_t rax = 0
bool z_1

if (0 == rdi[1].d)
    rdi[1].d = 0
    z_1 = true
else
    rax = rdi[1].d
    z_1 = false

if (z_1)
    return 

while (true)
    bool z_2
    
    if (rax == rdi[1].d)
        rdi[1].d = rax + 1
        z_2 = true
    else
        rdi[1].d
        z_2 = false
    
    if (z_2)
        break
    
    rax = 0
    bool z_3
    
    if (0 == rdi[1].d)
        rdi[1].d = 0
        z_3 = true
    else
        rax = rdi[1].d
        z_3 = false
    
    if (z_3)
        return 

if (rdi == 0)
    return 

void* rsi_1 = *(arg1 + 8)

if (rsi_1 != 0)
    bool z_4
    
    if (0 == *(rsi_1 + 0x330))
        *(rsi_1 + 0x330) = 0
        z_4 = true
    else
        *(rsi_1 + 0x330)
        z_4 = false
    
    if (not(z_4))
        int64_t r14_1 = 0
        int64_t var_28 = 0
        int32_t var_1c_1 = 0
        EnterCriticalSection(rsi_1 + 0x290)
        int32_t rbp_1 = *(rsi_1 + 0x288)
        int32_t rax_2 = rbp_1
        
        if (rbp_1 s> 0)
            sub_1406105e0(&var_28)
            rax_2 = *(rsi_1 + 0x288)
            r14_1 = var_28
        
        memcpy(r14_1, rsi_1 + 0x254, rax_2 << 2)
        
        if (rsi_1 != -0x290)
            LeaveCriticalSection(rsi_1 + 0x290)
        
        if (*(rsi_1 + 0x340) s> 0)
            uint64_t var_38 = 0
            int32_t var_2c_1 = 0
            int32_t var_30_1 = rbp_1
            
            if (rbp_1 != 0)
                sub_140638750(&var_38, rbp_1, 0)
                memcpy(var_38, r14_1, rbp_1 << 2)
            
            sub_1405a9f90(rsi_1 + 0x338, &var_38)
            uint64_t rcx_8 = var_38
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
        
        if (r14_1 != 0)
            sub_140a74f90(r14_1)

rdi[1].d -= 1

if (rdi[1].d != 1)
    return 

(**rdi)(rdi)
int32_t rbx_2 = *(rdi + 0xc)
*(rdi + 0xc) -= 1

if (rbx_2 == 1)
    (*(*rdi + 8))(rdi, zx.q(rbx_2))
