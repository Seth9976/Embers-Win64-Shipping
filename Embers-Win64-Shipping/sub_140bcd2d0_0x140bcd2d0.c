// 函数: sub_140bcd2d0
// 地址: 0x140bcd2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = *(arg1 + 0x35)
int32_t r12 = 0
*arg2 = 0
bool cond:0 = data_143de5480 == 0
int32_t* r14 = arg2
char arg_8 = 0
uint32_t rax_1

if (not(cond:0))
    rax_1.b = GetCurrentThreadId() == data_143de5470

if (cond:0 || rax_1.b != 0)
    *(arg1 + 0xc00450) += 1
    arg_8 = 1

int32_t rbx = 0
int32_t var_58 = 0
void* rax_2 = TlsGetValue(data_143e1a81c)

while (true)
    bool z_1
    
    if (0 == *(arg1 + 0x1f0))
        *(arg1 + 0x1f0) = 0
        z_1 = true
    else
        *(arg1 + 0x1f0)
        z_1 = false
    
    bool z_2
    
    if (z_1)
        if (0 == *(arg1 + 0x1f4))
            *(arg1 + 0x1f4) = 0
            z_2 = true
        else
            *(arg1 + 0x1f4)
            z_2 = false
    
    char rax_3
    
    if (not(z_1) || not(z_2))
        rax_3 = 1
    else
        rax_3 = 0
    
    *(arg1 + 0x328) |= rax_3
    
    if (*(rax_2 + 0x18) != 0 || *(rax_2 + 0x28) != 0)
        int64_t* i = *(rax_2 + 0x10)
        
        for (void* rbp_3 = &i[sx.q(*(rax_2 + 0x18)) * 2]; i != rbp_3; i = &i[2])
            uint64_t rbx_1 = zx.q(i[1].d)
            int64_t* rdi_1 = *(rax_2 + 8)
            sub_140a74f90(*i)
            rdi_1[2]
            rdi_1[2] -= rbx_1 * 0x30
            *rdi_1
            *rdi_1 += neg.q(zx.q(rbx_1.d))
        
        *(rax_2 + 0x18) = 0
        
        if (*(rax_2 + 0x1c) s<= 0xffffffff)
            sub_1405a5410(rax_2 + 0x10, 0)
        
        int64_t* i_1 = *(rax_2 + 0x20)
        
        for (void* rbp_6 = &i_1[sx.q(*(rax_2 + 0x28)) * 2]; i_1 != rbp_6; i_1 = &i_1[2])
            int32_t rbx_2 = i_1[1].d
            void* rdi_2 = *(rax_2 + 8)
            sub_140a74f90(*i_1)
            *(rdi_2 + 0x10)
            *(rdi_2 + 0x10) += neg.q(zx.q(rbx_2)) << 3
            *(rdi_2 + 8)
            *(rdi_2 + 8) += neg.q(zx.q(rbx_2))
        
        int32_t rax_10 = *(rax_2 + 0x2c)
        *(rax_2 + 0x28) = 0
        
        if (rax_10 s< 0 && rax_10 != 0)
            sub_1405a5410(rax_2 + 0x20, 0)
        
        r14 = arg2
        rbx = var_58
    
    if (rax == 0)
        rbx += 1
        var_58 = rbx
        
        if ((rbx.b & 0x1f) == 0x1f)
            sub_140a7ddb0(sub_140a753a0(), 0)
    
    bool z_3
    
    if (0 == *(arg1 + 0x19))
        *(arg1 + 0x19) = 0
        z_3 = true
    else
        int64_t rax_14
        rax_14.b = *(arg1 + 0x19)
        z_3 = false
    
    if (not(z_3))
        break
    
    if (**(arg1 + 0x168) == 0)
        bool z_4
        
        if (0 == *(arg1 + 0x1f0))
            *(arg1 + 0x1f0) = 0
            z_4 = true
        else
            *(arg1 + 0x1f0)
            z_4 = false
        
        if (z_4)
            void** i_2 = *(arg1 + 0xc00430)
            
            for (void* rdi_3 = &i_2[sx.q(*(arg1 + 0xc00438))]; i_2 != rdi_3; i_2 = &i_2[1])
                if (sub_140bcca30(*i_2, rax_2) != 0)
                    goto label_140bcd4ef
            
            r12 = 2
            break
        
        sub_140bc4590(arg1)
        *r14 += 1
    else
        void* rbx_3 = nullptr
        void* rdx_3 = **(arg1 + 0x168)
        
        if (rdx_3 != 0)
            rbx_3 = *(rdx_3 + 8)
            int64_t rcx_10 = *(arg1 + 0x168)
            *(arg1 + 0x168) = rdx_3
            *(rdx_3 + 8) = 0
            j_sub_140a74f90(rcx_10)
        
        sub_140bcd970(rbx_3, 1)
    label_140bcd4ef:
        *r14 += 1
        rbx = var_58

if (arg_8 != 0)
    *(arg1 + 0xc00450) -= 1

return zx.q(r12)
