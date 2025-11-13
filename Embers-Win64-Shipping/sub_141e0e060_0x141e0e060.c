// 函数: sub_141e0e060
// 地址: 0x141e0e060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_9 = 0
int128_t zmm6 = arg2
int64_t rax = arg1[4]
int32_t rax_1 = arg1[0x23].d
void* result_1 = nullptr
void* result_2 = nullptr
int32_t i_7 = 0
int64_t var_78 = 0

if (rax_1 s> 0)
    sub_14092fa50(&result_2, rax_1)
    i_9 = var_78.d
    rax_1 = arg1[0x23].d
    result_1 = result_2
    i_7 = i_9

int32_t r11 = 0
int32_t r13 = 0
int32_t r12 = 0
int64_t* i_4 = nullptr
int32_t var_84 = 0

if (rax_1 s> 0)
    int64_t* r15_1 = nullptr
    
    while (true)
        int64_t rdi_1 = arg1[0x22]
        
        if (*(r15_1 + rdi_1 + 8) != 0)
            void* rdi_2 = *(r15_1 + rdi_1)
            
            if (rdi_2 != 0)
                int64_t r9_1 = *(rdi_2 + 0x50)
                
                if (r9_1 == 0)
                    if ((*(*arg1 + 0x2f0))(arg1, rdi_2).b == 0)
                        void* rbx_2 = *(rdi_2 + 0x48)
                        
                        if (rbx_2 == 0)
                            int32_t rcx_14
                            rcx_14.b = sub_140b5b8a0(*(rdi_2 + 0x40), 0).b == 0
                            rax_1.b = *(rdi_2 + 0x44) != 0
                            rax_1.b |= rcx_14.b
                            
                            if (rax_1.b != 0)
                                int64_t var_98
                                zmm6 = sub_141e42040(rdi_2, &var_98)
                                bool cond:0_1 = (*(arg1 + 0x31) & 0x20) == 0
                                int64_t var_50_1 = var_98
                                int64_t* var_60 = arg1
                                void* var_58_1 = rdi_2
                                
                                if (cond:0_1)
                                    sub_141df3580(&var_60, arg1)
                                else
                                    void* rcx_16 = arg1[4]
                                    int64_t** var_68_1 = &var_60
                                    int64_t (* var_70)(int64_t* arg1, int64_t* arg2) = sub_141df5980
                                    sub_141f3b3b0(rcx_16, &var_70)
                        else
                            void* const rbx_3 = *(rbx_2 + 0x20)
                            void* rax_16
                            int64_t rax_17
                            void* rdx_13
                            
                            if (rbx_3 != 0)
                                rax_16 = sub_14246bfb0()
                                rdx_13 = *(rbx_3 + 0x10)
                                rax_17 = sx.q(*(rax_16 + 0x38))
                            
                            if (rbx_3 == 0 || rax_17.d s> *(rdx_13 + 0x38)
                                    || *(*(rdx_13 + 0x30) + (rax_17 << 3)) != rax_16 + 0x30)
                                rbx_3 = nullptr
                            
                            int64_t* rcx_13 = *(rdi_2 + 0x48)
                            (*(*rcx_13 + 0x268))(rcx_13, arg1[4], rbx_3)
                else
                    void* r10_1 = arg1[0x2e]
                    void* rcx_2 = r10_1
                    void* r8_2 = sx.q(arg1[0x2f].d) * 0xb8 + r10_1
                    int32_t rdx_9
                    
                    if (r10_1 != r8_2)
                        while (true)
                            int64_t rdx_2 = *(rcx_2 + 0x48)
                            int64_t rax_2
                            
                            if (rdx_2 == 0 || rdx_2 != *(rdi_2 + 0x48))
                                rax_2 = *(rcx_2 + 0x50)
                                
                                if (rax_2 == 0 || rax_2 != r9_1)
                                    if (rdx_2 != 0 || rax_2 != 0)
                                        rax_2.b = 1
                                    
                                    if (rax_2.b != 0 || *(rcx_2 + 0x40) != *(rdi_2 + 0x40))
                                        rax_2.b = 0
                                    else
                                        rax_2.b = 1
                                else
                                    rax_2.b = 1
                            else
                                rax_2.b = 1
                            
                            if (rax_2.b != 0)
                                break
                            
                            rcx_2 += 0xb8
                            
                            if (rcx_2 == r8_2)
                                goto label_141e0e1ae
                        
                        rdx_9 = ((rcx_2 - r10_1) s/ 0xb8).d
                    
                    if (r10_1 == r8_2 || rdx_9 == 0xffffffff)
                    label_141e0e1ae:
                        int64_t rbx_1 = sx.q(r13)
                        r13 = (rbx_1 + 1).d
                        
                        if (r13 s> r11)
                            sub_1405a4d70(&i_4)
                        
                        i_4[rbx_1] = rdi_2
                    else
                        int64_t r9_2 = sx.q(rdx_9) * 0xb8
                        *(r10_1 + r9_2 + 0x60) = &data_142e0b890
                        *(r10_1 + r9_2) = &data_142e0b890
                        int32_t rax_10 = arg1[0x2f].d
                        int32_t r8_5 = rax_10 - rdx_9 - 1
                        
                        if (r8_5 s>= 1)
                            r8_5 = 1
                        
                        if (r8_5 != 0)
                            int64_t rcx_9 = arg1[0x2e]
                            memcpy(rcx_9 + r9_2, sx.q(rax_10 - r8_5) * 0xb8 + rcx_9, r8_5 * 0xb8)
                            rax_10 = arg1[0x2f].d
                        
                        arg1[0x2f].d = rax_10 - 1
                    
                    int64_t i_11 = sx.q(i_9)
                    int32_t i_10 = (i_11 + 1).d
                    i_7 = i_10
                    var_78.d = i_10
                    
                    if (i_10 s> var_78:4.d)
                        sub_14092f900(&result_2)
                        i_7 = var_78.d
                        result_1 = result_2
                    
                    sub_141df22d0(i_11 * 0xb8 + result_1, rdi_2)
                
                r11 = var_84
        
        r12 += 1
        r15_1 = &r15_1[2]
        
        if (r12 s>= arg1[0x23].d)
            break
        
        i_9 = i_7

int32_t r14 = 0

if (arg1[0x2f].d s<= 0)
label_141e0e45f:
    int512_t zmm3
    
    for (int64_t* i = i_4; i != &i[sx.q(r13)]; i = &i[1])
        void* r13_1 = *i
        
        if ((*(*arg1 + 0x310))(arg1, *(r13_1 + 0x50)) != 0)
            void* const r15_3 = *(*(r13_1 + 0x50) + 0x20)
            void* rax_31
            int64_t rax_32
            void* rdx_22
            
            if (r15_3 != 0)
                rax_31 = sub_14246bfb0()
                rdx_22 = *(r15_3 + 0x10)
                rax_32 = sx.q(*(rax_31 + 0x38))
            
            if (r15_3 == 0 || rax_32.d s> *(rdx_22 + 0x38)
                    || *(*(rdx_22 + 0x30) + (rax_32 << 3)) != rax_31 + 0x30)
                r15_3 = nullptr
            
            int64_t* rbx_5 = *(r13_1 + 0x50)
            int64_t rdi_4 = *rbx_5
            int128_t zmm0_1
            zmm0_1, zmm6 = sub_141e40f60(r13_1)
            zmm3.o = zmm0_1
            (*(rdi_4 + 0x268))(rbx_5, rax, r15_3, zmm3)
    
    if (&arg1[0x2e] != &result_2)
        int32_t i_5 = arg1[0x2f].d
        void* rcx_25 = arg1[0x2e]
        
        if (i_5 != 0)
            int32_t i_1
            
            do
                *(rcx_25 + 0x60) = &data_142e0b890
                *rcx_25 = &data_142e0b890
                rcx_25 += 0xb8
                i_1 = i_5
                i_5 -= 1
            while (i_1 != 1)
            rcx_25 = arg1[0x2e]
        
        if (rcx_25 != 0)
            sub_140a74f90(rcx_25)
        
        arg1[0x2e] = result_1
        arg1[0x2f].d = i_7
        *(arg1 + 0x17c) = var_78:4.d
        i_7 = 0
        result_1 = nullptr
    
    void* rcx_26 = arg1[0x2e]
    void* i_2 = sx.q(arg1[0x2f].d) * 0xb8 + rcx_26
    
    if (rcx_26 != i_2)
        int64_t* rbx_7 = rcx_26 + 0x50
        
        do
            if ((*(*arg1 + 0x310))(arg1, *rbx_7) != 0)
                void* const rdi_5 = *(*rbx_7 + 0x20)
                void* rax_41
                int64_t rax_42
                void* rdx_25
                
                if (rdi_5 != 0)
                    rax_41 = sub_14246bfb0()
                    rdx_25 = *(rdi_5 + 0x10)
                    rax_42 = sx.q(*(rax_41 + 0x38))
                
                if (rdi_5 == 0 || rax_42.d s> *(rdx_25 + 0x38)
                        || *(*(rdx_25 + 0x30) + (rax_42 << 3)) != rax_41 + 0x30)
                    rdi_5 = nullptr
                
                int64_t* rcx_29 = *rbx_7
                zmm3.o = zmm6
                (*(*rcx_29 + 0x270))(rcx_29, rax, rdi_5, zmm3)
            
            rbx_7 = &rbx_7[0x17]
        while (&rbx_7[-0xa] != i_2)
else
    int64_t r12_1 = 0
    int64_t rdi_3 = 0
    
    while (true)
        int64_t r15_2 = arg1[0x2e]
        int64_t rdx_18 = *(rdi_3 + r15_2 + 0x50)
        
        if (rdx_18 != 0 && (*(*arg1 + 0x310))(arg1, rdx_18).b != 0)
            void* const rbx_4 = *(*(rdi_3 + r15_2 + 0x50) + 0x20)
            void* rax_23
            int64_t rax_24
            void* rdx_19
            
            if (rbx_4 != 0)
                rax_23 = sub_14246bfb0()
                rdx_19 = *(rbx_4 + 0x10)
                rax_24 = sx.q(*(rax_23 + 0x38))
            
            if (rbx_4 == 0 || rax_24.d s> *(rdx_19 + 0x38)
                    || *(*(rdx_19 + 0x30) + (rax_24 << 3)) != rax_23 + 0x30)
                rbx_4 = nullptr
            
            int64_t* rcx_20 = *(rdi_3 + r15_2 + 0x50)
            (*(*rcx_20 + 0x278))(rcx_20, rax, rbx_4)
        
        if (r12_1 s< 0 || r14 s>= arg1[0x2f].d)
            rax_1.b = 0
        else
            rax_1.b = 1
        
        if (rax_1.b == 0)
            break
        
        r14 += 1
        r12_1 += 1
        rdi_3 += 0xb8
        
        if (r14 s>= arg1[0x2f].d)
            goto label_141e0e45f

int64_t* i_8 = i_4

if (i_8 != 0)
    sub_140a74f90(i_8)

int32_t i_6 = i_7
void* result = result_1

if (i_6 != 0)
    int32_t i_3
    
    do
        *(result + 0x60) = &data_142e0b890
        *result = &data_142e0b890
        result += 0xb8
        i_3 = i_6
        i_6 -= 1
    while (i_3 != 1)

if (result_1 == 0)
    return result

return sub_140a74f90(result_1)
