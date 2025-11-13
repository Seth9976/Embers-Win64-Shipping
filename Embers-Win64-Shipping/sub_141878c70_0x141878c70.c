// 函数: sub_141878c70
// 地址: 0x141878c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

pdb_internal::Array<struct DBI1::SrcMap>::Array<struct DBI1::SrcMap>(arg2)
int32_t rdx = *(arg1 + 0x18)

if (rdx s> *(arg2 + 0xc))
    sub_14090a730(arg2, rdx)

int64_t* i = *(arg1 + 8)

if (i != 0)
    int128_t zmm6
    int128_t var_38_1 = zmm6
    uint128_t zmm7
    uint128_t var_48_1 = zmm7
    
    do
        int128_t zmm0 = *(i + 8)
        int128_t* j = i[4]
        int64_t* rsi_1 = *i
        void** const var_80 = &data_142fe6b70
        int128_t var_78_1
        __builtin_memset(&var_78_1, 0, 0x14)
        int128_t var_90_1 = zmm0
        int32_t var_68
        
        for (; j != 0; j = *(j + 0x28))
            int128_t* rax_1 = j_sub_140a82f30(0x38)
            
            if (rax_1 != 0)
                *rax_1 = *j
                rax_1[1] = j[1]
                rax_1[2].q = j[2].q
                *(rax_1 + 0x28) = 0
                rax_1[3].q = 0
                void* rcx_2 = var_78_1:8.q
                
                if (rcx_2 == 0)
                    var_78_1.q = rax_1
                else
                    *(rcx_2 + 0x28) = rax_1
                    rax_1[3].q = var_78_1:8.q
                
                var_78_1:8.q = rax_1
                var_80[1](&var_80, zx.q(var_68 + 1))
        
        int64_t rbx_1 = sx.q(arg2[1].d)
        int64_t var_60_1 = 0
        int64_t var_58_1 = 0
        int32_t rax_3 = (rbx_1 + 1).d
        arg2[1].d = rax_3
        
        if (rax_3 s> *(arg2 + 0xc))
            sub_14090a6a0(arg2)
        
        int64_t* rbx_4 = rbx_1 * 0x60 + *arg2
        sub_141820800(rbx_4, rsi_1)
        rbx_4[0xa].d = 0
        
        if (*(rbx_4 + 0x54) != var_68)
            sub_1405a5130(&rbx_4[9], var_68)
        
        void* j_1 = var_78_1.q
        
        if (j_1 != 0)
            do
                int64_t r14_1 = sx.q(rbx_4[0xa].d)
                zmm6 = *(j_1 + 0x10)
                zmm7 = zx.o(*(j_1 + 0x20))
                int32_t rax_4 = (r14_1 + 1).d
                rbx_4[0xa].d = rax_4
                
                if (rax_4 s> *(rbx_4 + 0x54))
                    sub_1405a4df0(&rbx_4[9])
                
                int64_t rax_5 = rbx_4[9]
                int64_t rcx_9 = r14_1 * 3
                *(rax_5 + (rcx_9 << 3)) = zmm6
                *(rax_5 + (rcx_9 << 3) + 0x10) = zmm7.q
                j_1 = *(j_1 + 0x28)
            while (j_1 != 0)
            
            j_1 = var_78_1.q
        
        void** const rax_6 = &data_142fe6b70
        var_80 = &data_142fe6b70
        
        if (j_1 != 0)
            void* j_2
            
            do
                j_2 = *(j_1 + 0x28)
                j_sub_140a74f90(j_1)
                j_1 = j_2
                var_78_1.q = j_1
            while (j_2 != 0)
            rax_6 = var_80
        
        var_78_1:8.q = 0
        var_78_1.q = 0
        rax_6[1](&var_80, 0)
        i = i[7]
    while (i != 0)

return arg2
