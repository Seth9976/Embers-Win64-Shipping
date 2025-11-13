// 函数: sub_140d24d80
// 地址: 0x140d24d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax = zx.q(arg3[5].b)

if ((rax.b & 1) == 0 || arg1[1] s<= 0 || *(arg1 + 8) == -1 || data_143de542d != 0)
    rax.b = 0
    return rax

int64_t rbx

if (rax.b s>= 0)
    rbx.b = 0
else if ((*(*arg3 + 0x18))(arg3) == 0)
    rbx.b = 0
else
    rbx.b = 1

int64_t r12_1 = sx.q(arg1[1]) + *(arg1 + 8)

if (arg3[8].d s< 0x190 || *(arg3 + 0x44) s< 0)
    rax.b = 1
else
    rax.b = 0

int32_t rax_7

if ((rbx.b & rax.b) == 0)
    char rax_2
    
    if ((arg4 & rbx.b) != 0)
        rax_2 = sub_140d2c930(arg3)
    
    void* var_140
    
    if ((arg4 & rbx.b) == 0 || rax_2 == 0)
        (*(*arg3 + 0x178))(arg3, *(arg1 + 8))
        
        if (rbx.b != 0)
            void* rax_10 = (*(*arg3 + 0x18))(arg3)
            void* const rbx_3 = rax_10
            
            if (rax_10 == 0 || *(rax_10 + 0x98) != 1)
                rbx_3 = nullptr
            
            int32_t rcx_10 = arg1[1]
            void* const rdx_5 = nullptr
            var_140 = nullptr
            int32_t var_134_1 = 0
            int32_t var_138_1 = rcx_10
            
            if (rcx_10 s> 0)
                sub_1405daba0(&var_140)
                rcx_10 = arg1[1]
                rdx_5 = var_140
            
            (*(*arg3 + 0x150))(arg3, rdx_5, sx.q(rcx_10))
            (*(*arg3 + 0x20))(arg3)
            sub_140cd0ab0(rbx_3, &var_140)
            (*(*arg3 + 0x178))(arg3, *(arg1 + 8))
            void* rcx_16 = var_140
            
            if (rcx_16 != 0)
                sub_140a74f90(rcx_16)
        
        int32_t rax_14 = *arg1
        int32_t rdx_8 = 0
        arg2[0xd].d = 0
        
        if (*(arg2 + 0x6c) != rax_14)
            sub_1405c5510(&arg2[0xc], rax_14)
            rdx_8 = arg2[0xd].d
        
        int32_t r8_3 = *arg1 + rdx_8
        arg2[0xd].d = r8_3
        
        if (r8_3 s> *(arg2 + 0x6c))
            sub_1405daba0(&arg2[0xc])
        
        int32_t i = 0
        void** var_108
        sub_140b4c130(&var_108, arg3)
        int64_t var_70 = 0
        var_108 = &data_142e89240
        int32_t rcx_20 = 0
        int32_t var_68_1 = 0
        int32_t* var_60_1 = &i
        int32_t var_64_1 = 0
        int64_t* var_58_1 = arg2
        
        if (i s< *arg1)
            do
                (*(*arg2 + 0x2b8))(arg2, &i, &var_108)
            while (i s< *arg1)
            
            rcx_20 = var_68_1
        
        int64_t* rbx_4 = arg2[0x14]
        
        if (rcx_20 != 0)
            if (rbx_4 == 0)
                int64_t* rax_18 = j_sub_140a82f30(zx.q((&rbx_4[2]).d))
                rbx_4 = rax_18
                
                if (rax_18 == 0)
                    rbx_4 = nullptr
                else
                    *rax_18 = 0
                    rax_18[1] = 0
                
                arg2[0x14] = rbx_4
            
            if (rbx_4 != &var_70)
                void* rcx_23 = *rbx_4
                int32_t i_2 = rbx_4[1].d
                
                if (i_2 != 0)
                    int64_t* r12_2 = rcx_23 + 0x10
                    int32_t i_1
                    
                    do
                        int64_t rcx_24 = *r12_2
                        
                        if (rcx_24 != 0)
                            sub_140a74f90(rcx_24)
                        
                        r12_2 = &r12_2[5]
                        i_1 = i_2
                        i_2 -= 1
                    while (i_1 != 1)
                    rcx_23 = *rbx_4
                
                if (rcx_23 != 0)
                    sub_140a74f90(rcx_23)
                
                *rbx_4 = var_70
                var_70 = 0
                rbx_4[1].d = var_68_1
                *(rbx_4 + 0xc) = var_64_1
                var_68_1.q = 0
        else if (rbx_4 != 0)
            sub_140846450(rbx_4)
            j_sub_140a74f90(rbx_4)
            arg2[0x14] = 0
        
        sub_140846450(&var_70)
        sub_140b4cb40(&var_108)
        (*(*arg3 + 0x20))(arg3)
        
        if (*(arg2 + 0xc) s> data_143e1d994)
            arg2[0x13].d = 0
            
            if (*(arg2 + 0x9c) != 0)
                sub_1405c5570(&arg2[0x12], 0)
            
            sub_140b4c2a0(&var_108)
            char var_de
            char var_de_1 = var_de | 0x20
            var_108 = &data_142eaedd8
            void* var_78_1 = &arg2[0x12]
            sub_140b552a0(&var_108, 0)
            char var_df
            char var_df_1 = var_df & 0xbf
            i = 0
            
            if (*arg1 s> 0)
                do
                    (*(*arg2 + 0x2b8))(arg2, &i, &var_108)
                while (i s< *arg1)
            
            sub_140b4cb40(&var_108)
        
        rax_7.b = 1
    else
        void* rax_4 = (*(*arg3 + 0x18))(arg3)
        void* rdi_1 = rax_4
        
        if (rax_4 == 0 || *(rax_4 + 0x98) != 1)
            rdi_1 = nullptr
        
        char arg_18 = 0
        char* var_120_1 = &arg_18
        var_140 = rdi_1
        void*** (* var_128)() = j_sub_140d16b40
        void* rax_5 = sub_140a756e0(&var_128, &data_1439aad84)
        int128_t var_48 = *arg1
        void var_38
        sub_140d3a3a0(&var_38, arg2)
        void** var_118 = &var_140
        int128_t* var_110_1 = &var_48
        int32_t var_130
        sub_140d140a0(rax_5 + 0x10, &var_130, &var_118, nullptr)
        (*(*arg3 + 0x178))(arg3, r12_1)
        rax_7.b = 0
else
    int32_t rbx_1 = *arg1
    *arg1 = 0
    sub_140d1a5e0(arg1, arg2)
    *arg1 = rbx_1
    (*(*arg3 + 0x178))(arg3, r12_1)
    rax_7.b = 0

return rax_7
