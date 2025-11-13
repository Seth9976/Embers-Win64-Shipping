// 函数: sub_141405350
// 地址: 0x141405350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
int64_t r12
int64_t var_10 = r12
uint64_t var_178 = 0
int64_t var_170_1
__builtin_memset(&var_170_1, 0, 0x14)
void* var_128 = nullptr
int32_t var_120 = 0
int32_t var_fc = 0x80
int64_t var_118
__builtin_memset(&var_118, 0, 0x1c)
int32_t var_f8 = 0xffffffff
int32_t var_f4 = 0
void* var_e8 = nullptr
int32_t var_e0 = 0
int32_t var_158 = 0xffffffff
int64_t var_168
sub_140d3cc80(sub_142577430(), &var_168, 1, 0x10, 0)
int32_t var_160
int32_t rdx_1 = var_160
int32_t i = var_158 + 1
int64_t r8_1 = var_168
int32_t i_1 = i

if (i s< rdx_1)
    while (*(r8_1 + (sx.q(i) << 3)) == 0)
        int32_t i_2 = i + 1
        i_1 = i_2
        i = i_2
        
        if (i_2 s>= rdx_1)
            break

while (i s>= 0)
    if (i s>= rdx_1)
        break
    
    int64_t* r13_1 = *(r8_1 + (sx.q(i) << 3))
    
    if ((r13_1[0x11].b & 2) != 0 && r13_1[0x7d] != 0)
        int32_t rax_5 = var_170_1:4.d
        var_170_1.d = 0
        
        if (rax_5 s< 0 && rax_5 != 0)
            sub_1405c5570(&var_178, 0)
        
        r12.b = 0
        (*(*r13_1 + 0x680))(r13_1, &var_178, 0)
        
        if (var_170_1.d s> 0)
            int32_t r14_1 = 0
        label_1414054d7:
            
            if (r14_1 s>= 0 && r14_1 s< arg1[1].d)
                int64_t* rcx_5 = *(*arg1 + (sx.q(r14_1) << 3))
                int64_t rax_9 = (*(*rcx_5 + 0x348))(rcx_5)
                
                if (rax_9 != 0)
                    int32_t rdx_3 = var_170_1.d
                    int32_t rbx_1 = 0
                    
                    if (rdx_3 s> 0)
                        int64_t rdi_1 = 0
                        
                        while (true)
                            int64_t* rcx_7 = *(rdi_1 + var_178)
                            
                            if (rcx_7 != 0)
                                char rax_11
                                
                                if (rcx_7 != rax_9)
                                    rax_11 = (*(*rcx_7 + 0x278))(rcx_7, rax_9)
                                
                                if (rcx_7 == rax_9 || rax_11 != 0)
                                    r12.b = 1
                                    break
                                
                                rdx_3 = var_170_1.d
                            
                            rbx_1 += 1
                            rdi_1 += 8
                            
                            if (rbx_1 s>= rdx_3)
                                r14_1 += 1
                                goto label_1414054d7
            
            if (r12.b != 0)
                void* rsi_2 = *(r13_1[0x7d] + 0x110)
                int64_t r9_1 = *(rsi_2 + 0xf0)
                int64_t var_150 = r9_1
                uint32_t rcx_9 = (r9_1 u>> 4).d
                int32_t rdx_6 = (0x9e3779b9 - rcx_9) ^ rcx_9 << 8
                int32_t r10_3 = neg.d(rcx_9 + rdx_6) ^ rdx_6 u>> 0xd
                int32_t rcx_12 = (rcx_9 - rdx_6 - r10_3) ^ r10_3 u>> 0xc
                int32_t rdx_9 = (rdx_6 - rcx_12 - r10_3) ^ rcx_12 << 0x10
                int32_t r10_6 = (r10_3 - rdx_9 - rcx_12) ^ rdx_9 u>> 5
                int32_t rcx_15 = (rcx_12 - rdx_9 - r10_6) ^ r10_6 u>> 3
                int32_t rdx_12 = (rdx_9 - rcx_15 - r10_6) ^ rcx_15 << 0xa
                int32_t r10_9 = (r10_6 - rdx_12 - rcx_15) ^ rdx_12 u>> 0xf
                void* rbx_2
                
                if (var_120 == var_f4)
                labelid_1e:
                    rbx_2 = sub_1413b8b20(&var_128, r10_9, &var_150)
                else
                    void var_f0
                    void* rcx_16 = &var_f0
                    
                    if (var_e8 != 0)
                        rcx_16 = var_e8
                    
                    int32_t rax_32 = *(rcx_16 + ((sx.q(var_e0 - 1) & sx.q(r10_9)) << 2))
                    
                    if (rax_32 == 0xffffffff)
                    label_14140564a:
                        rbx_2 = sub_1413b8b20(&var_128, r10_9, &var_150)
                    else
                        void* r8_2 = var_128
                        int64_t rcx_18
                        
                        while (true)
                            rcx_18 = sx.q(rax_32) << 5
                            
                            if (*(r8_2 + rcx_18) == r9_1)
                                break
                            
                            rax_32 = *(r8_2 + rcx_18 + 0x18)
                            
                            if (rax_32 == 0xffffffff)
                                goto label_14140564a_2
                        
                        if (rax_32 == 0xffffffff)
                        label_14140564a_1:
                            rbx_2 = sub_1413b8b20(&var_128, r10_9, &var_150)
                        else
                            void* rbx_3 = rcx_18 + r8_2
                            
                            if (rbx_3 == 0)
                            label_14140564a_2:
                                rbx_2 = sub_1413b8b20(&var_128, r10_9, &var_150)
                            else
                                rbx_2 = rbx_3 + 8
                
                int64_t rdi_2 = sx.q(*(rbx_2 + 8))
                int32_t rcx_20 = (rdi_2 + 1).d
                *(rbx_2 + 8) = rcx_20
                
                if (rcx_20 s> *(rbx_2 + 0xc))
                    sub_1405a4d70(rbx_2)
                
                *(*rbx_2 + (rdi_2 << 3)) = rsi_2
        
        r8_1 = var_168
        rdx_1 = var_160
        i = i_1
    
    int32_t i_3 = i + 1
    i_1 = i_3
    i = i_3
    
    if (i_3 s< rdx_1)
        while (*(r8_1 + (sx.q(i) << 3)) == 0)
            int32_t i_4 = i + 1
            i_1 = i_4
            i = i_4
            
            if (i_4 s>= rdx_1)
                break

if (r8_1 != 0)
    sub_140a74f90(r8_1)

void var_d8
sub_1413bded0(&var_d8, &var_128)

if (sub_140a80f40() == 0)
    uint32_t rax_37
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_37.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_37.b == 0))
        void var_140
        int64_t* rax_38 = sub_1413dc590(&var_140, nullptr, 0xff)
        sub_1413bded0(*rax_38 + 0x10, &var_d8)
        void* rcx_32 = *rax_38
        int32_t r8_4 = rax_38[2].d
        int64_t* rdx_22 = rax_38[1]
        int64_t* rbx_5 = *(rcx_32 + 0x68)
        int64_t* var_148_1 = rbx_5
        int32_t* rdi_3 = &rbx_5[9]
        
        if (rbx_5 != 0)
            *rdi_3 += 1
            rbx_5 = var_148_1
        
        sub_14106e0b0(rcx_32, rdx_22, r8_4, 1)
        
        if (rbx_5 != 0)
            int32_t rsi_3 = *rdi_3
            *rdi_3 -= 1
            
            if (rsi_3 == 1)
                sub_140a2f6e0(var_148_1)
    else
        void var_88
        sub_1413bded0(&var_88, &var_d8)
        sub_1413c7990(&var_88, &data_143f02b98)
        int32_t var_40_1 = 0
        int64_t var_48
        
        if (var_48 != 0)
            sub_140a74f90(var_48)
        
        sub_140597460(&var_88)
else
    sub_1413c7990(&var_d8, &data_143f02b98)

int32_t var_90 = 0
int64_t var_98

if (var_98 != 0)
    sub_140a74f90(var_98)

sub_140597460(&var_d8)
int32_t var_e0_1 = 0

if (var_e8 != 0)
    sub_140a74f90(var_e8)

void* result = sub_140597460(&var_128)
uint64_t rcx_38 = var_178

if (rcx_38 != 0)
    result = sub_140a74f90(rcx_38)

__security_check_cookie(rax_1 ^ &var_1a8)
return result
