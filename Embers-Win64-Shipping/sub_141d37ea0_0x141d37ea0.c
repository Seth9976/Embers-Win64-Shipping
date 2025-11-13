// 函数: sub_141d37ea0
// 地址: 0x141d37ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_288
int64_t rax_1 = __security_cookie ^ &var_288
int64_t* var_268 = nullptr

while (true)
    void* r14_1 = **(arg1 + 0x38)
    
    if (r14_1 == 0)
        break
    
    int64_t* rbx_1
    
    if (&var_268 == r14_1 + 8)
        rbx_1 = var_268
    else
        int64_t* rsi_1 = var_268
        rbx_1 = *(r14_1 + 8)
        var_268 = rbx_1
        *(r14_1 + 8) = 0
        
        if (rsi_1 != 0)
            sub_140ae6d30(&rsi_1[4])
            sub_1405d5770(&rsi_1[2])
            sub_1405d5770(rsi_1)
            j_sub_140a74f90(rsi_1)
    
    void* r15_1 = *(arg1 + 0x38)
    *(arg1 + 0x38) = r14_1
    void var_258
    
    if (r14_1 + 8 != &var_258)
        int64_t* rsi_2 = *(r14_1 + 8)
        *(r14_1 + 8) = 0
        
        if (rsi_2 != 0)
            sub_140ae6d30(&rsi_2[4])
            sub_1405d5770(&rsi_2[2])
            sub_1405d5770(rsi_2)
            j_sub_140a74f90(rsi_2)
    
    if (r15_1 != 0)
        int64_t* rdi_2 = *(r15_1 + 8)
        
        if (rdi_2 != 0)
            sub_140ae6d30(&rdi_2[4])
            sub_1405d5770(&rdi_2[2])
            sub_1405d5770(rdi_2)
            j_sub_140a74f90(rdi_2)
        
        j_sub_140a74f90(r15_1)
    
    int64_t* i = *rbx_1
    
    for (void* rsi_5 = &i[sx.q(rbx_1[1].d) * 8]; i != rsi_5; i = &i[8])
        int64_t rax_3 = *i
        int64_t var_248 = rax_3
        void* var_238 = nullptr
        
        if (rax_3 != 0)
            void* rax_4 = i[2]
            void* rcx_13 = &i[4]
            
            if (rax_4 != 0)
                rcx_13 = rax_4
            
            (**rcx_13)(rcx_13, &var_238)
        
        sub_141d37b40(arg1 + 0x10, &var_248)
        
        if (var_248 != 0)
            void* rax_6 = var_238
            void var_228
            void* rcx_15 = &var_228
            
            if (rax_6 != 0)
                rcx_15 = rax_6
            
            (*(*rcx_15 + 0x10))(rcx_15)
    
    int64_t* i_1 = rbx_1[2]
    
    for (void* rsi_8 = &i_1[sx.q(rbx_1[3].d) * 8]; i_1 != rsi_8; i_1 = &i_1[8])
        int64_t rax_8 = *i_1
        int64_t var_208 = rax_8
        void* var_1f8 = nullptr
        
        if (rax_8 != 0)
            void* rax_9 = i_1[2]
            void* rcx_16 = &i_1[4]
            
            if (rax_9 != 0)
                rcx_16 = rax_9
            
            (**rcx_16)(rcx_16, &var_1f8)
        
        sub_141d37b40(arg1 + 0x20, &var_208)
        
        if (var_208 != 0)
            void* rax_11 = var_1f8
            void var_1e8
            void* rcx_18 = &var_1e8
            
            if (rax_11 != 0)
                rcx_18 = rax_11
            
            (*(*rcx_18 + 0x10))(rcx_18)
    
    int64_t* rdi_3 = rbx_1[4]
    void* rsi_11 = &rdi_3[sx.q(rbx_1[5].d) * 0xa]
    
    if (rdi_3 != rsi_11)
        void* rbx_2 = &rdi_3[4]
        
        do
            void* rax_14 = *rdi_3
            void* rdx_9 = nullptr
            int64_t rax_15 = *(rbx_2 - 0x10)
            int64_t var_78_1 = rax_15
            void* var_68 = nullptr
            
            if (rax_15 != 0)
                void* rax_16 = *rbx_2
                void* rcx_19 = rbx_2 + 0x10
                
                if (rax_16 != 0)
                    rcx_19 = rax_16
                
                (**rcx_19)(rcx_19, &var_68)
                rdx_9 = var_68
                rax_15 = var_78_1
            
            int64_t var_1c8 = rax_15
            void* var_1b8 = nullptr
            void var_58
            
            if (rax_15 != 0)
                void* rcx_20 = &var_58
                
                if (rdx_9 != 0)
                    rcx_20 = rdx_9
                
                (**rcx_20)(rcx_20, &var_1b8)
            
            sub_141d37b40(rax_14 + 0x3c0, &var_1c8)
            
            if (var_1c8 != 0)
                void* rax_19 = var_1b8
                void var_1a8
                void* rcx_23 = &var_1a8
                
                if (rax_19 != 0)
                    rcx_23 = rax_19
                
                (*(*rcx_23 + 0x10))(rcx_23)
            
            if (var_78_1 != 0)
                void* rax_21 = var_68
                void* rcx_24 = &var_58
                
                if (rax_21 != 0)
                    rcx_24 = rax_21
                
                (*(*rcx_24 + 0x10))(rcx_24)
            
            rdi_3 = &rdi_3[0xa]
            rbx_2 += 0x50
        while (rdi_3 != rsi_11)

int64_t var_188 = 0
int128_t* var_178 = nullptr
int128_t var_168
int128_t zmm2
int128_t zmm3

while (true)
    void* rcx_25 = **(arg1 + 0x18)
    
    if (rcx_25 == 0)
        break
    
    int128_t zmm4
    int128_t zmm5
    
    if (&var_188 != rcx_25 + 0x10)
        zmm2 = var_188.o
        zmm3 = var_178.o
        zmm4 = var_168
        int128_t var_158
        zmm5 = var_158
        var_188.o = *(rcx_25 + 0x10)
        var_178.o = *(rcx_25 + 0x20)
        var_168 = *(rcx_25 + 0x30)
        var_158 = *(rcx_25 + 0x40)
        *(rcx_25 + 0x10) = zmm2
        *(rcx_25 + 0x20) = zmm3
        *(rcx_25 + 0x30) = zmm4
        *(rcx_25 + 0x40) = zmm5
    
    void* rbx_3 = *(arg1 + 0x18)
    *(arg1 + 0x18) = rcx_25
    int64_t var_108 = 0
    int128_t* var_f8_1 = nullptr
    
    if (rcx_25 + 0x10 != &var_108)
        zmm5 = *(rcx_25 + 0x10)
        zmm2 = *(rcx_25 + 0x20)
        zmm3 = *(rcx_25 + 0x30)
        zmm4 = *(rcx_25 + 0x40)
        *(rcx_25 + 0x10) = var_108.o
        *(rcx_25 + 0x20) = var_f8_1.o
        int128_t var_e8
        *(rcx_25 + 0x30) = var_e8
        int128_t var_d8
        *(rcx_25 + 0x40) = var_d8
        var_108.o = zmm5
        var_f8_1.o = zmm2
        var_e8 = zmm3
        var_d8 = zmm4
        
        if (zmm5.q != 0)
            int128_t* rcx_26 = &var_e8
            
            if (var_f8_1 != 0)
                rcx_26 = var_f8_1
            
            (*(*rcx_26 + 0x10))(rcx_26)
    
    if (rbx_3 != 0)
        if (*(rbx_3 + 0x10) != 0)
            void* rax_28 = *(rbx_3 + 0x20)
            void* rcx_27 = rbx_3 + 0x30
            
            if (rax_28 != 0)
                rcx_27 = rax_28
            
            (*(*rcx_27 + 0x10))(rcx_27)
        
        j_sub_140a74f90(rbx_3)
    
    int128_t* rcx_29 = &var_168
    
    if (var_178 != 0)
        rcx_29 = var_178
    
    var_188((*(*rcx_29 + 8))(rcx_29))

if (var_188 != 0)
    int128_t* rcx_31 = &var_168
    
    if (var_178 != 0)
        rcx_31 = var_178
    
    (*(*rcx_31 + 0x10))(rcx_31)

EnterCriticalSection(arg1 + 0x40)
int64_t var_148 = 0
int128_t* var_138 = nullptr
int128_t var_128

while (true)
    void* rcx_33 = **(arg1 + 0x28)
    
    if (rcx_33 == 0)
        break
    
    int128_t zmm4_1
    int128_t zmm5_1
    
    if (&var_148 != rcx_33 + 0x10)
        zmm2 = var_148.o
        zmm3 = var_138.o
        zmm4_1 = var_128
        int128_t var_118
        zmm5_1 = var_118
        var_148.o = *(rcx_33 + 0x10)
        var_138.o = *(rcx_33 + 0x20)
        var_128 = *(rcx_33 + 0x30)
        var_118 = *(rcx_33 + 0x40)
        *(rcx_33 + 0x10) = zmm2
        *(rcx_33 + 0x20) = zmm3
        *(rcx_33 + 0x30) = zmm4_1
        *(rcx_33 + 0x40) = zmm5_1
    
    void* rbx_4 = *(arg1 + 0x28)
    *(arg1 + 0x28) = rcx_33
    int64_t var_c8 = 0
    int128_t* var_b8_1 = nullptr
    
    if (rcx_33 + 0x10 != &var_c8)
        zmm5_1 = *(rcx_33 + 0x10)
        zmm2 = *(rcx_33 + 0x20)
        zmm3 = *(rcx_33 + 0x30)
        zmm4_1 = *(rcx_33 + 0x40)
        *(rcx_33 + 0x10) = var_c8.o
        *(rcx_33 + 0x20) = var_b8_1.o
        int128_t var_a8
        *(rcx_33 + 0x30) = var_a8
        int128_t var_98
        *(rcx_33 + 0x40) = var_98
        var_c8.o = zmm5_1
        var_b8_1.o = zmm2
        var_a8 = zmm3
        var_98 = zmm4_1
        
        if (zmm5_1.q != 0)
            int128_t* rcx_34 = &var_a8
            
            if (var_b8_1 != 0)
                rcx_34 = var_b8_1
            
            (*(*rcx_34 + 0x10))(rcx_34)
    
    if (rbx_4 != 0)
        if (*(rbx_4 + 0x10) != 0)
            void* rax_40 = *(rbx_4 + 0x20)
            void* rcx_35 = rbx_4 + 0x30
            
            if (rax_40 != 0)
                rcx_35 = rax_40
            
            (*(*rcx_35 + 0x10))(rcx_35)
        
        j_sub_140a74f90(rbx_4)
    
    int128_t* rcx_37 = &var_128
    int64_t var_260 = 0
    
    if (var_138 != 0)
        rcx_37 = var_138
    
    var_148((*(*rcx_37 + 8))(rcx_37), &var_260)

int64_t result = LeaveCriticalSection(arg1 + 0x40)

if (var_148 != 0)
    int128_t* rcx_40 = &var_128
    
    if (var_138 != 0)
        rcx_40 = var_138
    
    result = (*(*rcx_40 + 0x10))(rcx_40)

int64_t* rbx_5 = var_268

if (rbx_5 != 0)
    sub_140ae6d30(&rbx_5[4])
    sub_1405d5770(&rbx_5[2])
    sub_1405d5770(rbx_5)
    result = j_sub_140a74f90(rbx_5)

__security_check_cookie(rax_1 ^ &var_288)
return result
