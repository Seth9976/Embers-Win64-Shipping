// 函数: sub_141e537e0
// 地址: 0x141e537e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int64_t* r15 = *arg2
uint64_t rsi = arg3
void* r13_2 = &r15[sx.q(arg2[1].d) * 2]
uint64_t var_c0 = arg3
int64_t var_a8 = 0
int32_t var_a0 = 0
int32_t var_7c = 0x80
int64_t var_98
__builtin_memset(&var_98, 0, 0x1c)
int32_t var_78 = 0xffffffff
int32_t var_74 = 0
int64_t var_68 = 0
int32_t var_60 = 0
void* const var_d8

if (r15 != r13_2)
    do
        arg3.b = 1
        void* rax_2
        rax_2, arg3 = sub_141e5fc50(arg1, r15, arg3.b)
        
        if (rax_2 != 0)
            void var_b0
            
            if (*(rax_2 + 0x18) != 0)
                sub_141e4c4c0(&var_a8, &var_b0, rax_2 + 0x18, nullptr)
            int64_t rax_3 = *arg1
            var_d8 = nullptr
            int32_t var_d0
            var_d0.q = 0
            (*(rax_3 + 0x358))(arg1, r15, &var_d8)
            void* const rax_4 = var_d8
            int64_t rdi_1 = sx.q(var_d0)
            void* i = rax_4 + rdi_1 * 0x28
            
            if (rax_4 != i)
                int32_t* rsi_1 = rax_4 + 0x20
                
                do
                    int32_t rcx_4
                    rcx_4.b = sub_140b5b8a0(rsi_1[-4], 0) == 0
                    
                    if ((rsi_1[-3] != 0 | rcx_4.b) != 0)
                        int32_t rbx_3 = var_a0 - var_74 + *rsi_1
                        
                        if (rbx_3 s> var_a0 - var_74)
                            sub_1409d9850(&var_a8, rbx_3)
                            int32_t rdx_5
                            
                            if (rbx_3 u< 4)
                                rdx_5 = 1
                            else
                                uint32_t rbx_4 = rbx_3 u>> 1
                                uint64_t rflags_1
                                int32_t temp0_1
                                temp0_1, rflags_1 = _bit_scan_reverse(rbx_4 + 8)
                                int32_t rcx_8
                                
                                if (rbx_4 == 0xfffffff8)
                                    rcx_8 = 0x20
                                else
                                    rcx_8 = 0x1f - temp0_1
                                
                                int32_t rcx_10 = rcx_8 << 0x1a s>> 0x1f
                                uint64_t rflags_2
                                int32_t temp0_2
                                temp0_2, rflags_2 = _bit_scan_reverse(rbx_4 + 7)
                                char rdx_4
                                
                                if (rcx_10 == 0)
                                    rdx_4 = 0x20
                                else
                                    rdx_4 = 0x1f - temp0_2.b
                                
                                rdx_5 = 1 << ((not.d(rcx_10)).b & (0x20 - rdx_4))
                            
                            if (var_60 == 0 || var_60 s< rdx_5)
                                var_60 = rdx_5
                                sub_141e68940(&var_a8)
                        
                        int64_t* j = *(rsi_1 - 8)
                        
                        for (void* rdi_2 = &j[sx.q(*rsi_1) * 3]; j != rdi_2; j = &j[3])
                            void var_ac
                            sub_141e4c4c0(&var_a8, &var_ac, j, nullptr)
                    
                    rsi_1 = &rsi_1[0xa]
                while (&rsi_1[-8] != i)
                
                rdi_1 = zx.q(var_d0)
                rax_4 = var_d8
            
            if (rdi_1.d != 0)
                int64_t* rbx_6 = rax_4 + 0x18
                int32_t i_1
                
                do
                    sub_1408464b0(rbx_6)
                    rbx_6 = &rbx_6[5]
                    i_1 = rdi_1.d
                    rdi_1 = zx.q(rdi_1.d - 1)
                while (i_1 != 1)
                rax_4 = var_d8
            
            if (rax_4 != 0)
                sub_140a74f90(rax_4)
        
        r15 = &r15[2]
    while (r15 != r13_2)
    
    rsi = var_c0

var_d8 = nullptr
int32_t var_d0_1 = 0
sub_1407473e0(&var_d8, rsi)
(*(*arg1 + 0x368))(arg1, sub_141e54b80(&var_a8, &var_c0), &var_d8, zx.q(arg4), var_d8, var_d0_1, 
    arg4)
int32_t i_4
int32_t i_3 = i_4

if (i_3 != 0)
    int64_t* rbx_9 = var_c0 + 8
    int32_t i_2
    
    do
        int64_t rcx_21 = *rbx_9
        
        if (rcx_21 != 0)
            sub_140a74f90(rcx_21)
        
        rbx_9 = &rbx_9[3]
        i_2 = i_3
        i_3 -= 1
    while (i_2 != 1)

uint64_t rcx_22 = var_c0

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

int32_t var_60_1 = 0

if (var_68 != 0)
    sub_140a74f90(var_68)

sub_140597460(&var_a8)
uint64_t result = sub_140745b20(rsi)
__security_check_cookie(rax_1 ^ &var_f8)
return result
