// 函数: sub_141156bb0
// 地址: 0x141156bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15

if (arg3 == 0)
    r15 = -1
else
    int64_t rax = *(arg3 + 0x20)
    
    if (rax == 0)
        r15 = -1
    else
        char rcx = *(rax + 0x138)
        
        if ((rcx & 0x10) == 0)
            r15 = -1
        else if ((rcx & 8) == 0)
            r15.b = *(rax + 0x13c) == 0
        else
            r15 = 2

if (r15 == 0xffffffff)
    int64_t i = 0
    void* rbx_3 = arg1 + 0x50
    
    do
        if (i != -1 && *rbx_3 != 0)
            *rbx_3 = 0
            *(rbx_3 - 8) = 0
            
            if (*(rbx_3 - 4) != 0)
                sub_140775b80(rbx_3 - 0x50, 0)
            
            *(arg1 + 0x160) -= 1
        
        i += 1
        rbx_3 += 0x58
    while (i s< 4)
    
    return 

int64_t* rcx_1 = *(arg3 + 0x20)
int64_t var_88
(*(*rcx_1 + 0x10))(rcx_1, &var_88)
int64_t* var_58
sub_1407453e0(&var_58, arg2)
int64_t var_48
int32_t i_2

for (int32_t i_1 = i_2; i_1 s< *(var_48 + 0x18); i_1 = i_2)
    void* rdi_1 = *(sx.q(i_1) * 0x30 + *var_58 + 0x20)
    
    if (rdi_1 != 0 && rdi_1 != arg3)
        int64_t* r8 = *(rdi_1 + 0x20)
        char r9_1 = r8[0x27].b
        char rdx_4 = r9_1 & 8
        int32_t r14_1
        
        if (rdx_4 == 0)
            r14_1 = *(rdi_1 + 0x60)
        else
            r14_1 = *(r8 + 0xfc)
        
        if (r14_1 != 0xffffffff)
            void* rbx_2 = sx.q(r14_1) * 0x58 + arg1
            
            if (*(rbx_2 + 0x50) != 0 && r8 != 0 && (r9_1 & 0x10) != 0)
                int32_t rsi_1
                
                if (rdx_4 == 0)
                    rsi_1.b = *(r8 + 0x13c) == 0
                else
                    rsi_1 = 2
                
                if (r15 s< 2 || rsi_1 u< 2)
                    int32_t var_7c
                    uint128_t zmm1_1 = var_7c
                    uint64_t var_78 = var_88
                    int32_t var_80
                    int32_t var_70_1 = var_80
                    uint64_t var_6c_1 = (_mm_unpacklo_ps(zmm1_1, zmm1_1.q)).q
                    int32_t var_60_1 = zmm1_1.d
                    int32_t var_64_1 = zmm1_1.d
                    
                    if ((*(*r8 + 8))(r8, &var_78) != 0)
                        if (rsi_1 s>= r15)
                            sub_141123c40(arg1, r14_1)
                            
                            if (*(arg1 + 0x160) s<= 0)
                                break
                        else
                            int64_t rsi_2 = sx.q(*(rbx_2 + 0x48))
                            int32_t rax_9 = (rsi_2 + 1).d
                            *(rbx_2 + 0x48) = rax_9
                            
                            if (rax_9 s> *(rbx_2 + 0x4c))
                                sub_1407752f0(rbx_2, rsi_2.d)
                            
                            void* rax_10 = *(rbx_2 + 0x40)
                            
                            if (rax_10 != 0)
                                rbx_2 = rax_10
                            
                            *(rbx_2 + (rsi_2 << 3)) = rdi_1
    
    int32_t var_4c
    int32_t var_40 = var_40 & not.d(var_4c)
    void var_50
    sub_14059bdd0(&var_50)
