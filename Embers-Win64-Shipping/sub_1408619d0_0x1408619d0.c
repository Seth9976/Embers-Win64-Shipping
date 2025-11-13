// 函数: sub_1408619d0
// 地址: 0x1408619d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
uint64_t result = *(arg2 + 0x10)
void* rdi = arg2
int32_t r15 = *(arg2 + 0x24)
int32_t r14 = *(result + 8)
int32_t rsi_1 = r14 - r15

if (r14 s> 0)
    arg2.b = 1
    void* rax_2 = sub_1407e7150(*(rdi + 0x18), arg2.b)
    sub_1407e6590(rax_2, r14, 0)
    *(rax_2 + 0xb0) = r14
    char rax_3
    uint64_t rdx_3
    rax_3, rdx_3 = sub_14085d8d0(arg1 + 0x7b8, ***(rdi + 0x10))
    int64_t rbx_1 = 0
    
    if (rax_3 != 0)
        void var_f8
        
        if (rsi_1 s> 0)
            sub_14084a050(arg1 + 0x7b8, 0, *(rdi + 0x18), 0, 0)
            sub_14084a050(arg1 + 0x7b8, 1, arg1 + 0x380, 0, 0)
            int64_t var_98_1 = 0
            int32_t var_90_1 = 0
            int32_t var_8c_1 = 0xc
            int64_t var_58_1 = 0
            int32_t var_50_1 = 0
            int32_t var_4c_1 = 0xc
            void* rax_9 = ***(rdi + 0x10)
            sub_14084a2f0(arg1, (((zx.q(*(rax_9 + 0x660)) & 1) + 0x21) << 4) + rax_9, arg1 + 0x7b8, 
                &var_f8)
            sub_14084f100(arg1 + 0x7b8, rsi_1, &var_f8)
            
            if (var_58_1 != 0)
                sub_140a74f90(var_58_1)
            
            if (var_98_1 != 0)
                sub_140a74f90(var_98_1)
        
        int64_t var_118
        
        if (data_143ce42c4 != 0 || *(*(rdi + 8) + 0x31) != 0)
            var_118 = 0
            int32_t var_110_1 = 0
            sub_1405947f0(&var_118, 0x1a)
            int32_t rax_11 = var_110_1 + 0x1a
            var_110_1 = rax_11
            
            if (rax_11 s> 0)
                sub_140594770(&var_118)
            
            UnDecorator::getReferenceType(var_118, u"System Data - Post Update", 0x34)
            sub_1407ebce0(rax_2, 0, r14)
            int64_t rcx_16 = var_118
            
            if (rcx_16 != 0)
                sub_140a74f90(rcx_16)
            
            var_118 = 0
            int32_t var_110_2 = 0
            sub_1405947f0(&var_118, 0x1e)
            int32_t rax_12 = var_110_2 + 0x1e
            var_110_2 = rax_12
            
            if (rax_12 s> 0)
                sub_140594770(&var_118)
            
            UnDecorator::getReferenceType(var_118, u"Update Instance Paramter Data", 0x3c)
            sub_1407ebce0(*(arg1 + 0x418), 0, r14)
            int64_t rcx_21 = var_118
            
            if (rcx_21 != 0)
                sub_140a74f90(rcx_21)
        
        if (r15 s> 0 && data_14396fee0 != 0)
            sub_14084a050(arg1 + 0x7b8, 0, *(rdi + 0x18), rsi_1, 0)
            sub_14084a050(arg1 + 0x7b8, 1, arg1 + 0x380, rsi_1, 0)
            void* rdx_13 = ***(rdi + 0x10)
            int128_t var_108 = *(rdx_13 + ((zx.q(*(rdx_13 + 0x660)) & 1) + 0x21) * 0x10)
            var_108:4.d = 0x461c4000
            var_108.d = 0x38d1b717
            int64_t var_98_2 = 0
            int32_t var_90_2 = 0
            int32_t var_8c_2 = 0xc
            int64_t var_58_2 = 0
            int32_t var_50_2 = 0
            int32_t var_4c_2 = 0xc
            sub_14084a2f0(arg1, &var_108, arg1 + 0x7b8, &var_f8)
            sub_14084f100(arg1 + 0x7b8, r15, &var_f8)
            
            if (data_143ce42c4 != 0 || *(*(rdi + 8) + 0x31) != 0)
                var_118 = 0
                int32_t var_110_3 = 0
                sub_1405947f0(&var_118, 0x28)
                int32_t rax_19 = var_110_3 + 0x28
                var_110_3 = rax_19
                
                if (rax_19 s> 0)
                    sub_140594770(&var_118)
                
                UnDecorator::getReferenceType(var_118, System Data - Post Update (new systems)", 
                    0x50)
                sub_1407ebce0(rax_2, rsi_1, r15)
                int64_t rcx_31 = var_118
                
                if (rcx_31 != 0)
                    sub_140a74f90(rcx_31)
                
                var_118 = 0
                int32_t var_110_4 = 0
                sub_1405947f0(&var_118, 0x2c)
                int32_t rax_20 = var_110_4 + 0x2c
                var_110_4 = rax_20
                
                if (rax_20 s> 0)
                    sub_140594770(&var_118)
                
                UnDecorator::getReferenceType(var_118, 
                    Update Instance Paramter Data (new systems)", 0x58)
                sub_1407ebce0(*(arg1 + 0x418), rsi_1, r15)
                int64_t rcx_36 = var_118
                
                if (rcx_36 != 0)
                    sub_140a74f90(rcx_36)
            
            if (var_58_2 != 0)
                sub_140a74f90(var_58_2)
            
            if (var_98_2 != 0)
                sub_140a74f90(var_98_2)
    else
        int64_t* rax_4 = *(rdi + 0x10)
        int64_t* rcx_4 = *rax_4
        rdx_3 = sx.q(rax_4[1].d) << 3 u>> 3
        
        if (rcx_4 u> &rcx_4[rax_4[1]])
            rdx_3 = 0
        
        if (rdx_3 != 0)
            do
                void* rax_7 = *rcx_4
                
                if (*(rax_7 + 0x6e8) != 4)
                    *(rax_7 + 0x6e8) = 4
                
                rcx_4 = &rcx_4[1]
                rbx_1 += 1
            while (rbx_1 != rdx_3)
    
    rdx_3.b = 1
    result = sub_1407ecfd0(*(rdi + 0x18), rdx_3.b)

__security_check_cookie(rax_1 ^ &var_148)
return result
