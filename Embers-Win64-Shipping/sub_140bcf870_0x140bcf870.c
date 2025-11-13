// 函数: sub_140bcf870
// 地址: 0x140bcf870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13
int64_t var_28 = r13
sub_140b72cd0(-1)
sub_140a8d380()
*(arg1 + 0x20)
sub_140bc4510(*(arg1 + 0x18))
uint32_t dwTlsIndex = data_143e1a81c
int64_t var_68 = *(arg1 + 8)
int64_t var_60 = 0
char var_58 = 0
int32_t var_50 = 0
void* rax_1 = TlsGetValue(dwTlsIndex)
int128_t zmm6 = 0x3a83126f

while (true)
    r13.b = 0
    
    while (true)
        bool z_1
        
        if (0 == *(arg1 + 0x38))
            *(arg1 + 0x38) = 0
            z_1 = true
        else
            int64_t rax_2
            rax_2.b = *(arg1 + 0x38)
            z_1 = false
        
        if (not(z_1))
            return 0
        
        if (r13.b == 0)
            void arg_8
            sub_140cad130(&arg_8)
            int32_t* rax_4 = *(arg1 + 0x28)
            *rax_4 += 1
            char i_3
            char i
            
            do
                i, zmm6 = sub_140bcca30(*(arg1 + 0x10), rax_1)
                i_3 = i
                
                if (*(arg1 + 0x39) != 0)
                    r13.b = 1
                    i_3 = 1
                    break
            while (i != 0)
            int32_t* rax_5 = *(arg1 + 0x28)
            *rax_5 -= 1
            sub_140cad790()
            
            if (i_3 == 0)
                if (*(rax_1 + 0x18) != 0 || *(rax_1 + 0x28) != 0)
                    int64_t* i_1 = *(rax_1 + 0x10)
                    
                    for (void* r15_3 = &i_1[sx.q(*(rax_1 + 0x18)) * 2]; i_1 != r15_3; i_1 = &i_1[2])
                        uint64_t rbx_1 = zx.q(i_1[1].d)
                        int64_t* rdi_1 = *(rax_1 + 8)
                        sub_140a74f90(*i_1)
                        rdi_1[2]
                        rdi_1[2] -= rbx_1 * 0x30
                        *rdi_1
                        *rdi_1 += neg.q(zx.q(rbx_1.d))
                    
                    *(rax_1 + 0x18) = 0
                    
                    if (*(rax_1 + 0x1c) s<= 0xffffffff)
                        sub_1405a5410(rax_1 + 0x10, 0)
                    
                    int64_t* i_2 = *(rax_1 + 0x20)
                    
                    for (void* r15_6 = &i_2[sx.q(*(rax_1 + 0x28)) * 2]; i_2 != r15_6; i_2 = &i_2[2])
                        int32_t rbx_2 = i_2[1].d
                        void* rdi_2 = *(rax_1 + 8)
                        sub_140a74f90(*i_2)
                        *(rdi_2 + 0x10)
                        *(rdi_2 + 0x10) += neg.q(zx.q(rbx_2)) << 3
                        *(rdi_2 + 8)
                        *(rdi_2 + 8) += neg.q(zx.q(rbx_2))
                    
                    int32_t rax_12 = *(rax_1 + 0x2c)
                    *(rax_1 + 0x28) = 0
                    
                    if (rax_12 s< 0 && rax_12 != 0)
                        sub_1405a5410(rax_1 + 0x20, 0)
                
                sub_140ca9000(&var_68)
        else
            bool z_2
            
            if (0 == *(arg1 + 0x39))
                *(arg1 + 0x39) = 0
                z_2 = true
            else
                int64_t rax_3
                rax_3.b = *(arg1 + 0x39)
                z_2 = false
            
            if (z_2)
                break
            
            zmm6 = sub_140b73230(zmm6)
