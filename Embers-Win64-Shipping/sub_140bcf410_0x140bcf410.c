// 函数: sub_140bcf410
// 地址: 0x140bcf410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp
void* var_8 = rbp
int64_t* rdi
int64_t* var_18 = rdi
uint32_t rax = GetCurrentThreadId()
*(arg1 + 0x278)
*(arg1 + 0x260) = rax
sub_140bc4510(arg1 + 0x3d0)
sub_140b72cd0(-1)
sub_140a8d380()
void* rax_1 = TlsGetValue(data_143e1a81c)
sub_140bc6b30(arg1 + 0x280)
void* var_78 = arg1 + 0x388
int64_t var_70 = 0
int64_t r12
r12.b = 0
char var_68 = 0
int128_t zmm6 = zx.o(0)
int32_t var_60 = 0

while (true)
    bool z_1
    
    if (0 == *(arg1 + 0x18))
        *(arg1 + 0x18) = 0
        z_1 = true
    else
        int64_t rax_2
        rax_2.b = *(arg1 + 0x18)
        z_1 = false
    
    if (not(z_1))
        break
    
    if (r12.b == 0)
        bool z_4
        
        if (0 == *(arg1 + 0x1f0))
            *(arg1 + 0x1f0) = 0
            z_4 = true
        else
            *(arg1 + 0x1f0)
            z_4 = false
        
        bool z_5
        
        if (z_4)
            if (0 == *(arg1 + 0x1f4))
                *(arg1 + 0x1f4) = 0
                z_5 = true
            else
                *(arg1 + 0x1f4)
                z_5 = false
        
        char rax_3
        
        if (not(z_4) || not(z_5))
            rax_3 = 1
        else
            rax_3 = 0
        
        *(arg1 + 0x328) |= rax_3
        void arg_8
        sub_140cad130(&arg_8)
        
        while (true)
            rdi.b = 0
            bool z_6
            
            if (0 == *(arg1 + 0x1f0))
                *(arg1 + 0x1f0) = 0
                z_6 = true
            else
                *(arg1 + 0x1f0)
                z_6 = false
            
            if (not(z_6))
                rdi = nullptr
                
                if (sub_140bc4590(arg1) != 0)
                    rdi = 1
            
        label_140bcf591:
            int64_t* rbx_1 = *(arg1 + 0xc00430)
            rbp.b = 0
            void* r14_1 = &rbx_1[sx.q(*(arg1 + 0xc00438))]
            
            if (rbx_1 != r14_1)
                while (true)
                    char rax_10
                    rax_10, zmm6 = sub_140bcca30(*rbx_1, rax_1)
                    
                    if (rax_10 != 0)
                        rbp.b = 1
                        rdi = 1
                    
                    if (*(arg1 + 0x19) != 0)
                        goto label_140bcf68f
                    
                    void* rcx_9 = data_143e1adf0
                    bool z_7
                    
                    if (0 == *(rcx_9 + 8))
                        *(rcx_9 + 8) = 0
                        z_7 = true
                    else
                        *(rcx_9 + 8)
                        z_7 = false
                    
                    if (not(z_7))
                        goto label_140bcf68f
                    
                    rbx_1 = &rbx_1[1]
                    
                    if (rbx_1 == r14_1)
                        if (rbp.b != 0)
                            goto label_140bcf591
                        
                        break
            
            if (*(arg1 + 0x19) == 0)
                void* rcx_10 = data_143e1adf0
                bool z_8
                
                if (0 == *(rcx_10 + 8))
                    *(rcx_10 + 8) = 0
                    z_8 = true
                else
                    *(rcx_10 + 8)
                    z_8 = false
                
                if (z_8)
                    while (**(arg1 + 0x168) != 0)
                        int32_t rdx_5
                        rdx_5.b = rdi.b == 0
                        int32_t rax_17
                        rax_17, zmm6 = sub_140bcd970(*(**(arg1 + 0x168) + 8), rdx_5)
                        
                        if (rax_17 != 2)
                            break
                        
                        void* rdx_6 = **(arg1 + 0x168)
                        
                        if (rdx_6 != 0)
                            int64_t rcx_14 = *(arg1 + 0x168)
                            *(arg1 + 0x168) = rdx_6
                            *(rdx_6 + 8) = 0
                            j_sub_140a74f90(rcx_14)
                        
                        rdi.b = 1
                    
                    if (rdi.b == 0)
                        break
                    
                    continue
            
        label_140bcf68f:
            
            if (*(arg1 + 0x34) == 0)
                void* i = *(arg1 + 0x20)
                
                for (void* rdi_3 = (sx.q(*(arg1 + 0x28)) << 6) + i; i != rdi_3; i += 0x40)
                    char temp0_2 = *(i + 0x39)
                    *(i + 0x39) = 1
                    int64_t rax_19
                    rax_19.b = temp0_2
                    sub_140be3360(*(i + 8))
                
                while (true)
                    int32_t rax_20 = 0
                    
                    if (0 == *(arg1 + 0x30))
                        *(arg1 + 0x30) = 0
                    else
                        rax_20 = *(arg1 + 0x30)
                    
                    if (rax_20 s<= 0)
                        break
                    
                    sub_140b732d0(zmm6.d)
                
                *(arg1 + 0x34) = 1
            
            int64_t* rcx_16 = *(arg1 + 0x40)
            (*(*rcx_16 + 0x10))(rcx_16)
            r12.b = 1
            rdi = 1
            break
        
        sub_140cad790()
        int32_t rax_22 = 0
        
        if (0 == *(arg1 + 0x170))
            *(arg1 + 0x170) = 0
        else
            rax_22 = *(arg1 + 0x170)
        
        int32_t rax_23 = 0
        
        if (0 == *(arg1 + 0x174))
            *(arg1 + 0x174) = 0
        else
            rax_23 = *(arg1 + 0x174)
        
        rax_23.b = rax_23 s> 0
        
        if (rax_22 s> 0 || rax_23.b != 0)
            rax_23.b = 1
        
        if (rdi.b == 0)
            if (rax_23.b == 0)
                sub_140ca9000(&var_78)
            else
                if (*(rax_1 + 0x18) != 0 || *(rax_1 + 0x28) != 0)
                    int64_t* i_1 = *(rax_1 + 0x10)
                    
                    for (void* rbp_3 = &i_1[sx.q(*(rax_1 + 0x18)) * 2]; i_1 != rbp_3; i_1 = &i_1[2])
                        uint64_t rbx_2 = zx.q(i_1[1].d)
                        rdi = *(rax_1 + 8)
                        sub_140a74f90(*i_1)
                        rdi[2]
                        rdi[2] -= rbx_2 * 0x30
                        *rdi
                        *rdi += neg.q(zx.q(rbx_2.d))
                    
                    *(rax_1 + 0x18) = 0
                    
                    if (*(rax_1 + 0x1c) s<= 0xffffffff)
                        sub_1405a5410(rax_1 + 0x10, 0)
                    
                    int64_t* i_2 = *(rax_1 + 0x20)
                    
                    for (rbp = &i_2[sx.q(*(rax_1 + 0x28)) * 2]; i_2 != rbp; i_2 = &i_2[2])
                        int32_t rbx_3 = i_2[1].d
                        rdi = *(rax_1 + 8)
                        sub_140a74f90(*i_2)
                        rdi[2]
                        rdi[2] += neg.q(zx.q(rbx_3)) << 3
                        rdi[1]
                        rdi[1] += neg.q(zx.q(rbx_3))
                    
                    int32_t rax_30 = *(rax_1 + 0x2c)
                    *(rax_1 + 0x28) = 0
                    
                    if (rax_30 s< 0 && rax_30 != 0)
                        sub_1405a5410(rax_1 + 0x20, 0)
                
                sub_140ca9000(&var_78)
    else
        bool z_2
        
        if (0 == *(arg1 + 0x19))
            *(arg1 + 0x19) = 0
            z_2 = true
        else
            *(arg1 + 0x19)
            z_2 = false
        
        if (z_2)
            void* rcx_4 = data_143e1adf0
            bool z_3
            
            if (0 == *(rcx_4 + 8))
                *(rcx_4 + 8) = 0
                z_3 = true
            else
                *(rcx_4 + 8)
                z_3 = false
            
            if (z_3)
                int64_t* rcx_5 = *(arg1 + 0x48)
                (*(*rcx_5 + 0x10))(rcx_5)
                r12.b = 0
                
                if (*(arg1 + 0x34) == 0)
                    continue
                else
                    void* i_3 = *(arg1 + 0x20)
                    
                    for (void* rdx_3 = (sx.q(*(arg1 + 0x28)) << 6) + i_3; i_3 != rdx_3; i_3 += 0x40)
                        char temp0_1 = *(i_3 + 0x39)
                        *(i_3 + 0x39) = 0
                        int64_t rax_6
                        rax_6.b = temp0_1
                    
                    *(arg1 + 0x34) = 0
                    continue
        
        zmm6 = sub_140b73230(0x3a83126f)

return 0
