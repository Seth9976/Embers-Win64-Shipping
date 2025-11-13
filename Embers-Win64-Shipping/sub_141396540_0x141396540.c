// 函数: sub_141396540
// 地址: 0x141396540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142134440()
char arg_10 = 0
int32_t result_1 = &arg_10
void*** (* var_98)() = j_sub_140597fc0
int64_t* rax_1 = sub_140a756e0(&var_98, &data_143958018) + 0x10
int64_t* var_58 = rax_1
int64_t rcx_1 = *rax_1
int64_t rcx_2 = rax_1[2]
char var_40 = 0
uint64_t result_2 = rax_1[3]
rax_1[3] = &var_58
int64_t* rax_2 = var_58
rax_2[4].d += 1
int32_t result_3 = (*arg3).d
int32_t rax_4 = *(arg3 + 8) + 0x3f
var_98 = arg2
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rax_4)
result_1 = result_3
int32_t rdi_1 = ((temp0 & 0x3f) + temp1) s>> 6
int64_t r15 = 0
int128_t var_78

if (sub_140b011d0() == 0)
    int32_t rbx_1 = 0
    
    if (rdi_1 s> 0)
        do
            sub_141389560(&var_98, rbx_1)
            rbx_1 += 1
        while (rbx_1 s< rdi_1)
else
    var_78 = var_98.o
    int64_t var_88
    int64_t var_68_1 = var_88
    sub_14137de80(rdi_1, &var_78, 4)

uint64_t result = sub_141270d10()

if (data_143f0f21f != 0)
    uint64_t rdx_4 = zx.q(data_143f0f1a0)
    result = zx.q(*(&data_143f025fc + sx.q(rdx_4.d) * 0x14) u>> 0x13)
    
    if ((result.b & 1) != 0)
        result = data_143f13cd8
        
        if (test_bit(result, rdx_4))
            result = *(arg2 + 0x10)
            
            if (*(result + 0x11a) - 4 u> 1)
                int64_t* i = *arg3
                var_98 = &data_142f6bdf0
                void*** (* var_88_1)() = arg2 + 0xd80
                var_78.q = &var_98
                int32_t var_60_1 = *(arg2 + 8)
                result_1 = 0xffffffff
                var_78:8.q = arg2
                int64_t var_68_2 = 0
                result = &i[sx.q(*(arg3 + 8))]
                arg_10.q = result
                
                if (i != result)
                    do
                        void* rsi_1 = *i
                        int64_t* rcx_7 = *(rsi_1 + 8)
                        result = (*(*rcx_7 + 0x40))(rcx_7)
                        
                        if (result.b != 0)
                            result = sx.q(*(rsi_1 + 0x50))
                            
                            if (result.d s> 0)
                                int32_t rcx_8 = -1
                                char* rdx_6 = *(rsi_1 + 0x48) + 0x9a
                                uint64_t r8 = result
                                uint64_t j
                                
                                do
                                    int32_t rax_14 = rcx_8
                                    rcx_8 = sx.d(*rdx_6)
                                    rdx_6 = &rdx_6[0xb0]
                                    
                                    if (rax_14 s>= rcx_8)
                                        rcx_8 = rax_14
                                    
                                    j = r8
                                    r8 -= 1
                                while (j != 1)
                                int32_t j_5 = *(rsi_1 + 0x108)
                                int32_t j_4 = rcx_8 + 1
                                
                                if (j_5 != 0)
                                    int64_t* rdi_3 = *(rsi_1 + 0x100) + 8
                                    int32_t j_1
                                    
                                    do
                                        int64_t rcx_9 = *rdi_3
                                        
                                        if (rcx_9 != 0)
                                            sub_140a74f90(rcx_9)
                                        
                                        rdi_3 = &rdi_3[3]
                                        j_1 = j_5
                                        j_5 -= 1
                                    while (j_1 != 1)
                                
                                int32_t rdi_4 = 0
                                *(rsi_1 + 0x108) = 0
                                
                                if (*(rsi_1 + 0x10c) != j_4)
                                    sub_1405a5130(rsi_1 + 0x100, j_4)
                                    rdi_4 = *(rsi_1 + 0x108)
                                
                                int32_t rax_15 = rdi_4 + j_4
                                *(rsi_1 + 0x108) = rax_15
                                
                                if (rax_15 s> *(rsi_1 + 0x10c))
                                    sub_1405a4df0(rsi_1 + 0x100)
                                
                                result = *(rsi_1 + 0x100)
                                
                                if (j_4 != 0)
                                    result = result + sx.q(rdi_4) * 0x18 + 0x10
                                    int32_t j_2
                                    
                                    do
                                        *(result - 8) = 0
                                        *result = 0
                                        *(result + 4) = 2
                                        result += 0x18
                                        j_2 = j_4
                                        j_4 -= 1
                                    while (j_2 != 1)
                                
                                int32_t j_3 = 0
                                
                                if (*(rsi_1 + 0x50) s> 0)
                                    do
                                        void* rbx_3 = *(rsi_1 + 0x48) + r15
                                        result = sub_1413ccf90(&var_78, rbx_3, -1, *(rsi_1 + 8))
                                        
                                        if (result_1 s>= 0)
                                            int64_t rcx_14 = sx.q(*(rbx_3 + 0x9a)) * 3
                                            int64_t rax_19 = *(rsi_1 + 0x100)
                                            int64_t r14_1 = sx.q(*(rax_19 + (rcx_14 << 3) + 0x10))
                                            void* rbx_4 = rax_19 + (rcx_14 << 3)
                                            int32_t rax_20 = (r14_1 + 1).d
                                            *(rbx_4 + 0x10) = rax_20
                                            
                                            if (rax_20 s> *(rbx_4 + 0x14))
                                                sub_140bcee10(rbx_4, r14_1.d)
                                            
                                            void* rax_21 = *(rbx_4 + 8)
                                            
                                            if (rax_21 != 0)
                                                rbx_4 = rax_21
                                            
                                            result = zx.q(result_1)
                                            *(rbx_4 + (r14_1 << 2)) = result.d
                                            result_1 = 0xffffffff
                                        
                                        j_3 += 1
                                        r15 += 0xb0
                                    while (j_3 s< *(rsi_1 + 0x50))
                                    
                                    r15 = 0
                        
                        i = &i[1]
                    while (i != arg_10.q)

if (var_40 == 0)
    int64_t* rax_22 = var_58
    char var_40_1 = 1
    rax_22[4].d -= 1
    int64_t* rcx_16 = var_58
    
    if (rcx_2 != rcx_16[2])
        sub_140b16b40(rcx_16, rcx_2)
        rcx_16 = var_58
    
    *rcx_16 = rcx_1
    result = result_2
    var_58[3] = result

return result
