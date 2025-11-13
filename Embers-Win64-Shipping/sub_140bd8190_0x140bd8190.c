// 函数: sub_140bd8190
// 地址: 0x140bd8190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int32_t* rdi = *arg1
int64_t r15
r15.b = 0
void* rbp_2 = &rdi[sx.q(arg1[1].d) * 0x28]

if (rdi != rbp_2)
    void* rbx_1 = &rdi[0xc]
    
    do
        int32_t rcx
        rcx.b = sub_140b5b8a0(*(rbx_1 - 0x2c), 0) == 0
        int32_t rcx_1
        
        if ((*(rbx_1 - 0x28) != 0 | rcx.b) == 0)
            rcx_1.b = sub_140b5b8a0(*(rbx_1 - 0x1c), 0) == 0
        
        if ((*(rbx_1 - 0x28) != 0 | rcx.b) != 0 || (*(rbx_1 - 0x18) != 0 | rcx_1.b) != 0)
            int32_t rcx_2
            rcx_2.b = sub_140b5b8a0(*(rbx_1 - 0x14), 0) == 0
            int32_t rcx_3
            
            if ((*(rbx_1 - 0x10) != 0 | rcx_2.b) == 0)
                rcx_3.b = sub_140b5b8a0(*(rbx_1 - 4), 0) == 0
            
            if (((*(rbx_1 - 0x10) != 0 | rcx_2.b) != 0 || (*rbx_1 != 0 | rcx_3.b) != 0)
                    && sub_140be0fa0(rbx_1 - 0x2c) != 0 && sub_140be0fa0(rbx_1 - 0x14) != 0)
                int32_t rcx_6
                
                if (*(rbx_1 - 4) != *(rbx_1 - 0x1c))
                    rcx_6.b = sub_140b5b8a0(*(rbx_1 - 0x24), 0) == 0
                
                if ((*(rbx_1 - 4) == *(rbx_1 - 0x1c) || (*(rbx_1 - 0x20) != 0 | rcx_6.b) == 0)
                        && sub_140bd87f0(rdi) != 0)
                    r15.b = 1
                    
                    if ((*(rbx_1 - 0x2c) != *(rbx_1 - 0x14) || *(rbx_1 - 0x24) != *(rbx_1 - 0xc)
                            || *(rbx_1 - 0x1c) != *(rbx_1 - 4)) && *(rbx_1 + 0x28) - *(rbx_1 + 0x54) s> 0)
                        void var_e8
                        sub_140bd5710(&var_e8, rdi)
                        int128_t var_cc
                        int128_t var_e4_1 = var_cc
                        int64_t var_bc
                        int64_t var_d4_1 = var_bc
                        sub_140bd87f0(&var_e8)
                        int32_t var_50_1 = 0
                        int64_t var_58
                        
                        if (var_58 != 0)
                            sub_140a74f90(var_58)
                        
                        int64_t var_98
                        sub_1405e1b50(&var_98, 0)
                        int64_t var_78
                        
                        if (var_78 != 0)
                            sub_140a74f90(var_78)
                        
                        int64_t rcx_13 = var_98
                        
                        if (rcx_13 != 0)
                            sub_140a74f90(rcx_13)
        
        rdi = &rdi[0x28]
        rbx_1 += 0xa0
    while (rdi != rbp_2)

__security_check_cookie(rax_1 ^ &var_108)
return zx.q(r15.b)
