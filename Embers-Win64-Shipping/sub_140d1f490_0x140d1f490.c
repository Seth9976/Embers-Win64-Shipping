// 函数: sub_140d1f490
// 地址: 0x140d1f490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
void* r14 = arg1
uint32_t i

if (data_14399ea98() == 0)
    i = sub_140d3ae10(r14)
    
    if (i == 0)
        int64_t r13_1 = 0
        int128_t zmm6 = zx.o(0)
        
        do
            if (*(r14 + 0x18) == 0)
                i = sub_140d23160(r14)
                
                if (i.b == 0)
                    break
            
            sub_140d3e080(r14)
            bool cond:0_1 = *(r14 + 0x18) == 0
            uint64_t r12_1 = 0
            uint64_t var_d0_1 = 0
            int32_t j_4 = 0
            uint64_t var_e8 = 0
            int32_t rsi_1 = 0
            int64_t var_e0_1 = 0
            int32_t var_f4_1 = 0
            uint64_t var_98 = 0
            int64_t var_90_1
            __builtin_memset(&var_90_1, 0, 0x24)
            int32_t var_6c_1 = 0x80
            int32_t var_68_1 = 0xffffffff
            int32_t var_64_1 = 0
            int64_t var_58_1 = 0
            int32_t var_50_1 = 0
            
            if (not(cond:0_1))
                void* r14_1 = r14 + 0x10
                void* var_b0_1 = r14_1
                
                do
                    int64_t rdi_1 = sx.q(*(r14_1 + 8))
                    
                    if (rdi_1.d != 0)
                        int32_t rdx_1 = j_4 + rdi_1.d
                        
                        if (rdx_1 s> rsi_1)
                            sub_1405c5570(&var_e8, rdx_1)
                            r12_1 = var_e8
                            j_4 = var_e0_1.d
                            var_f4_1 = var_e0_1:4.d
                            var_d0_1 = r12_1
                        
                        memcpy(r12_1 + (sx.q(j_4) << 3), *r14_1, (rdi_1 << 3).d)
                        j_4 += rdi_1.d
                        var_e0_1.d = j_4
                    
                    *(r14_1 + 8) = 0
                    
                    if (*(r14_1 + 0xc) s<= 0xffffffff)
                        sub_1405c5570(r14_1, 0)
                    
                    char var_f8
                    sub_140d14c10(r12_1, j_4, var_f8)
                    
                    if (j_4 s> 0)
                        uint64_t rdi_2 = r12_1
                        uint64_t j_3 = zx.q(j_4)
                        uint64_t j
                        
                        do
                            uint64_t rsi_2 = *rdi_2
                            
                            if (((*(rsi_2 + 8) u>> 0xa).b & 1) != 0)
                                zmm6 = sub_140cc45a0(sub_140d3cb50(rsi_2) + 0x200, rsi_2)
                            
                            rdi_2 += 8
                            j = j_3
                            j_3 -= 1
                        while (j != 1)
                    
                    if (*(arg1 + 0x18) != 0)
                        rsi_1 = var_f4_1
                    else
                        char var_f7 = 0
                        char* var_a0_1 = &var_f7
                        void*** (* var_a8)() = sub_140884c50
                        void* rax_8 = sub_140a756e0(&var_a8, &data_14397f5f0)
                        char rcx_10 = *(rax_8 + 0x20)
                        void* rax_9 = rax_8 + 0x20
                        *rax_9 = 1
                        
                        if (j_4 s> 0)
                            uint64_t rsi_4 = r12_1
                            uint64_t j_2 = zx.q(j_4)
                            uint64_t j_1
                            
                            do
                                int64_t* r14_2 = *rsi_4
                                int64_t rax_10 = sub_140d3cb50(r14_2)
                                
                                if (rax_10 != 0 && rax_10 != r13_1)
                                    zmm6 = sub_140cba580(rax_10, zmm6)
                                    r13_1 = rax_10
                                
                                sub_140cd85e0(r14_2)
                                rsi_4 += 8
                                j_1 = j_2
                                j_2 -= 1
                            while (j_1 != 1)
                            r12_1 = var_d0_1
                        
                        *rax_9 = rcx_10
                        
                        if (data_143de5452 == 0)
                            uint64_t rsi_5 = r12_1
                            int64_t r14_3 = r12_1 + (sx.q(j_4) << 3)
                            
                            if (r12_1 != r14_3)
                                do
                                    int64_t* rdi_4 = *rsi_5
                                    
                                    if (rdi_4 != 0)
                                        void* rax_12 = sub_140bdf670()
                                        void* rcx_14 = rdi_4[2]
                                        int64_t rax_13 = sx.q(*(rax_12 + 0x38))
                                        
                                        if (rax_13.d s<= *(rcx_14 + 0x38)
                                                && *(*(rcx_14 + 0x30) + (rax_13 << 3))
                                                == rax_12 + 0x30 && rdi_4[0x23] == 0)
                                            (*(*rdi_4 + 0x390))(rdi_4, rax_13)
                                    
                                    rsi_5 += 8
                                while (rsi_5 != r14_3)
                        
                        if (data_14399fa4c != 0 || data_1439aa890 == 0 || data_1439aa894 == 0)
                            r13_1 = 0
                        else
                            r13_1 = 0
                            
                            if (data_143e1d99c == 0)
                                int64_t rsi_6 = 0
                                uint64_t r14_4 = r12_1
                                int64_t rcx_16 = r12_1 + (sx.q(j_4) << 3)
                                uint64_t r15_4 = (rcx_16 - r12_1 + 7) u>> 3
                                
                                if (r12_1 u> rcx_16)
                                    r15_4 = 0
                                
                                if (r15_4 != 0)
                                    do
                                        int64_t* rdi_5 = *r14_4
                                        
                                        if ((*(*rdi_5 + 0x18))(rdi_5) != 0)
                                            (*(*rdi_5 + 0x28))(rdi_5)
                                        
                                        r14_4 += 8
                                        rsi_6 += 1
                                    while (rsi_6 != r15_4)
                        
                        rsi_1 = var_f4_1
                        j_4 = 0
                        var_e0_1.d = 0
                        
                        if (rsi_1 s< 0 && rsi_1 != 0)
                            sub_1405c5570(&var_e8, 0)
                            r12_1 = var_e8
                            rsi_1 = var_e0_1:4.d
                            j_4 = var_e0_1.d
                            var_d0_1 = r12_1
                            var_f4_1 = rsi_1
                    
                    r14_1 = var_b0_1
                while (*(arg1 + 0x18) != 0)
                
                r14 = arg1
            
            zmm6 = sub_140cd9730(sub_140cdbb20())
            int64_t* var_c8 = nullptr
            int32_t rcx_21 = 0
            int32_t var_c0_1 = 0
            int64_t* r15_5 = nullptr
            
            if (&var_c8 != r14 + 0x20)
                r15_5 = *(r14 + 0x20)
                *(r14 + 0x20) = 0
                rcx_21 = *(r14 + 0x28)
                int32_t var_c0_2 = rcx_21
                *(r14 + 0x28) = 0
                var_c8 = r15_5
            
            int64_t rsi_7 = 0
            int64_t* rdi_6 = r15_5
            void* rcx_22 = &r15_5[sx.q(rcx_21)]
            uint64_t r14_8 = (rcx_22 - r15_5 + 7) u>> 3
            
            if (r15_5 u> rcx_22)
                r14_8 = 0
            
            if (r14_8 != 0)
                do
                    void* rax_24 = *rdi_6
                    
                    if (rax_24 != 0 && *(rax_24 + 0x2d8) != 0)
                        void* rcx_23 = *(rax_24 + 0xa0)
                        
                        if (rcx_23 != 0)
                            zmm6 = sub_140ccddc0(rcx_23)
                    
                    rdi_6 = &rdi_6[1]
                    rsi_7 += 1
                while (rsi_7 != r14_8)
            
            if (data_143e1d970 s< 2)
                sub_140ba92a0()
            
            if (r15_5 != 0)
                sub_140a74f90(r15_5)
            
            int32_t var_50_2 = 0
            
            if (var_58_1 != 0)
                sub_140a74f90(var_58_1)
            
            var_90_1.d = 0
            
            if (var_90_1:4.d != 0)
                sub_1405a5410(&var_98, 0)
            
            int32_t var_68_2 = 0xffffffff
            int32_t var_64_2 = 0
            int64_t var_88
            sub_14059a8e0(&var_88, 0)
            int64_t var_78
            
            if (var_78 != 0)
                sub_140a74f90(var_78)
            
            uint64_t rcx_29 = var_98
            
            if (rcx_29 != 0)
                sub_140a74f90(rcx_29)
            
            if (r12_1 != 0)
                sub_140a74f90(r12_1)
            
            r14 = arg1
            i = sub_140d3ae10(r14)
        while (i == 0)
    
    if (data_143de5480 != 0)
        i.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || i.b != 0)
        data_143e1d970 -= 1
    
    data_1439aaa30 += 1
    
    if (*(r14 + 0xc) == 0 && data_143de5452 == 0)
        i = sub_140d3ae20(r14)
else
    i = sub_140d3ae10(r14)

__security_check_cookie(rax_1 ^ &var_118)
return i
