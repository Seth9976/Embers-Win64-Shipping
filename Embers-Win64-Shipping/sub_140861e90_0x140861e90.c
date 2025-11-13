// 函数: sub_140861e90
// 地址: 0x140861e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
sub_140b33630("Niagara")
sub_140d3c6e0(arg1 + 0x20)
int64_t* rax_2 = sub_140865dd0(*(arg1 + 0x38))
int64_t* rbp = rax_2
void* rax_3 = sub_140d3c6e0(arg1 + 0x20)
void* rbx = rax_3

while (*(arg1 + 0xcf8) s> 0)
    int64_t rdx_1 = sx.q(*(arg1 + 0xcf8))
    void* r15_1 = *(*(arg1 + 0xcf0) + (rdx_1 << 3) - 8)
    *(arg1 + 0xcf8) = (rdx_1 - 1).d
    int32_t rax_6 = sub_14084aae0(r15_1)
    
    if (rax_6 != *(arg1 + 0x30))
        void var_60
        int64_t* rax_7 = sub_140865fa0(rbp, &var_60, rax_6, rbx)
        int64_t* rbx_1 = rax_7[1]
        void* r12_1 = *rax_7
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
        
        void* rbp_1 = &rbx_1[1]
        int64_t* var_58
        
        if (var_58 != 0)
            rbp_1 = &rbx_1[1]
            var_58[1].d -= 1
            
            if (var_58[1].d == 1)
                (**var_58)(var_58)
                rbp_1 = &rbx_1[1]
                int32_t rax_10 = *(var_58 + 0xc)
                *(var_58 + 0xc) -= 1
                
                if (rax_10 == 1)
                    (*(*var_58 + 8))(var_58, 1)
                    rbp_1 = &rbx_1[1]
        
        sub_140860680(r12_1, arg1, r15_1)
        
        if (rbx_1 != 0)
            int32_t rax_12 = *rbp_1
            *rbp_1 -= 1
            
            if (rax_12 == 1)
                (**rbx_1)(rbx_1)
                int32_t rax_14 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (rax_14 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
        
        rbx = rax_3
        rbp = rax_2

int32_t i = 0
*(arg1 + 0xcf8) = 0

if (*(arg1 + 0xcfc) s<= 0xffffffff)
    sub_1405c5570(arg1 + 0xcf0, 0)

if (*(arg1 + 0xce8) s> 0)
    int64_t* var_80_1 = nullptr
    int64_t* rdi_2 = nullptr
    
    do
        void* r13_1 = *(rdi_2 + *(arg1 + 0xce0))
        int32_t rax_19
        
        if (((*(r13_1 + 0x6b8) u>> 4).b & 1) == 0)
            rax_19 = sub_14084aae0(r13_1)
        
        if (((*(r13_1 + 0x6b8) u>> 4).b & 1) != 0 || rax_19 == *(arg1 + 0x30))
            i += 1
            rdi_2 = &rdi_2[1]
            var_80_1 = rdi_2
        else
            int32_t rax_20 = *(arg1 + 0xce8)
            int32_t rdx_6 = rax_20 - i - 1
            
            if (rdx_6 s>= 1)
                rdx_6 = 1
            
            if (rdx_6 != 0)
                int64_t rcx_12 = *(arg1 + 0xce0)
                memcpy(rcx_12 + (sx.q(i) << 3), rcx_12 + (sx.q(rax_20 - rdx_6) << 3), rdx_6 << 3)
                rax_20 = *(arg1 + 0xce8)
            
            *(arg1 + 0xce8) = rax_20 - 1
            sub_1405c53d0(arg1 + 0xce0)
            
            if (i s>= 0 && i s< *(arg1 + 0xce8))
                *(*(*(arg1 + 0xce0) + rdi_2) + 0x10) = i
            
            *(r13_1 + 0x10) = 0xffffffff
            void var_50
            int64_t* rax_26 = sub_140865fa0(rbp, &var_50, rax_19, rax_3)
            int64_t* rdi_3 = rax_26[1]
            void* rbp_2 = *rax_26
            
            if (rdi_3 != 0)
                rdi_3[1].d += 1
            
            int64_t* var_48
            
            if (var_48 != 0)
                var_48[1].d -= 1
                
                if (var_48[1].d == 1)
                    (**var_48)(var_48)
                    int32_t rax_29 = *(var_48 + 0xc)
                    *(var_48 + 0xc) -= 1
                    
                    if (rax_29 == 1)
                        (*(*var_48 + 8))(var_48, 1)
            
            void* var_70 = rbp_2
            int64_t* rcx_19 = rdi_3
            int64_t* var_68_1 = rcx_19
            
            if (rdi_3 != 0)
                rdi_3[1].d += 1
                rcx_19 = var_68_1
            
            if (&var_70 != r13_1 + 0x18)
                int128_t zmm1_1 = var_70.o
                int128_t var_40_1 = zmm1_1
                var_70.o = *(r13_1 + 0x18)
                rcx_19 = var_68_1
                *(r13_1 + 0x18) = zmm1_1
            
            if (rcx_19 != 0)
                rcx_19[1].d -= 1
                
                if (rcx_19[1].d == 1)
                    (**var_68_1)(var_68_1)
                    int32_t rax_34 = *(var_68_1 + 0xc)
                    *(var_68_1 + 0xc) -= 1
                    
                    if (rax_34 == 1)
                        (*(*var_68_1 + 8))(var_68_1, 1)
            
            int64_t rbp_3 = sx.q(*(rbp_2 + 0xce8))
            int32_t rax_36 = (rbp_3 + 1).d
            *(rbp_2 + 0xce8) = rax_36
            
            if (rax_36 s> *(rbp_2 + 0xcec))
                sub_1405a4d70(rbp_2 + 0xce0)
            
            *(*(rbp_2 + 0xce0) + (rbp_3 << 3)) = r13_1
            *(r13_1 + 0x10) = rbp_3.d
            
            if (rdi_3 != 0)
                rdi_3[1].d -= 1
                
                if (rdi_3[1].d == 1)
                    (**rdi_3)(rdi_3)
                    int32_t rax_40 = *(rdi_3 + 0xc)
                    *(rdi_3 + 0xc) -= 1
                    
                    if (rax_40 == 1)
                        (*(*rdi_3 + 8))(rdi_3, 1)
            
            rdi_2 = var_80_1
        
        rbp = rax_2
    while (i s< *(arg1 + 0xce8))

int64_t result = sub_140b37f60("Niagara")
__security_check_cookie(rax_1 ^ &var_a8)
return result
