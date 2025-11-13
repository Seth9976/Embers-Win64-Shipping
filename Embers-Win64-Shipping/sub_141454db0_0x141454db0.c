// 函数: sub_141454db0
// 地址: 0x141454db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t i_4 = zx.q(arg2[1].d)
int64_t* r14 = arg2
int32_t rax = *(arg3 + 0xdc0)
void* r12 = arg10
sub_141447b00(r12)
int64_t j_4
uint64_t var_88
uint64_t i_3
uint64_t rdx

if (i_4.d s<= 0)
    rdx.b = 0
else
    int64_t j_7 = 0
    i_3 = i_4
    j_4 = 0
    void* r15_1 = r12 + 0x70
    void* r13_1 = r12 + 0x18
    void* r14_1 = r12 + 0x38
    void* rbp_1 = r12 + 0x50
    void* rsi_1 = r12 + 0x100
    uint64_t i
    
    do
        int64_t rdi = *arg2
        sub_1422e48a0(arg4)
        int64_t rbx_1 = j_7 + rdi
        int64_t rdi_1 = sx.q(*(r15_1 + 0x18))
        var_88 = rbx_1 + 0x26f0
        int32_t rax_4 = (rdi_1 + 1).d
        *(r15_1 + 0x18) = rax_4
        
        if (rax_4 s> *(r15_1 + 0x1c))
            sub_1408092e0(r15_1, rdi_1.d)
        
        void* rax_5 = *(r15_1 + 0x10)
        void* rcx_3 = r15_1
        
        if (rax_5 != 0)
            rcx_3 = rax_5
        
        *(rcx_3 + (rdi_1 << 3)) = rbx_1
        int64_t rdi_2 = sx.q(*(arg10 + 0xa0))
        int32_t rax_6 = (rdi_2 + 1).d
        *(arg10 + 0xa0) = rax_6
        
        if (rax_6 s> *(arg10 + 0xa4))
            sub_141104cf0(arg10 + 0x90, rdi_2.d)
        
        void* rax_7 = *(arg10 + 0x98)
        void* rcx_5 = arg10 + 0x90
        
        if (rax_7 != 0)
            rcx_5 = rax_7
        
        *(rcx_5 + (rdi_2 << 1)) = 0
        int64_t rdi_3 = sx.q(*(r13_1 + 0x18))
        int32_t rax_8 = (rdi_3 + 1).d
        *(r13_1 + 0x18) = rax_8
        
        if (rax_8 s> *(r13_1 + 0x1c))
            sub_1408092e0(r13_1, rdi_3.d)
        
        void* rax_9 = *(r13_1 + 0x10)
        void* rcx_7 = r13_1
        
        if (rax_9 != 0)
            rcx_7 = rax_9
        
        *(rcx_7 + (rdi_3 << 3)) = rbx_1 + 0x1d70
        int64_t rdi_4 = sx.q(*(r14_1 + 0x10))
        int32_t rax_10 = (rdi_4 + 1).d
        *(r14_1 + 0x10) = rax_10
        
        if (rax_10 s> *(r14_1 + 0x14))
            sub_140bcee10(r14_1, rdi_4.d)
        
        void* rax_11 = *(r14_1 + 8)
        void* rcx_9 = r14_1
        
        if (rax_11 != 0)
            rcx_9 = rax_11
        
        *(rcx_9 + (rdi_4 << 2)) = 0
        int64_t rdi_5 = sx.q(*(rbp_1 + 0x18))
        int32_t rax_12 = (rdi_5 + 1).d
        *(rbp_1 + 0x18) = rax_12
        
        if (rax_12 s> *(rbp_1 + 0x1c))
            sub_1408092e0(rbp_1, rdi_5.d)
        
        void* rax_13 = *(rbp_1 + 0x10)
        void* rcx_11 = rbp_1
        
        if (rax_13 != 0)
            rcx_11 = rax_13
        
        *(rcx_11 + (rdi_5 << 3)) = rbx_1 + 0x1dd0
        int64_t rdi_6 = sx.q(*(rsi_1 + 0x18))
        int32_t rax_14 = (rdi_6 + 1).d
        *(rsi_1 + 0x18) = rax_14
        
        if (rax_14 s> *(rsi_1 + 0x1c))
            sub_1408092e0(rsi_1, rdi_6.d)
        
        void* rax_15 = *(rsi_1 + 0x10)
        void* rcx_13 = rsi_1
        r12 = arg10
        
        if (rax_15 != 0)
            rcx_13 = rax_15
        
        j_7 = j_4 + 0x5240
        i = i_3
        i_3 -= 1
        j_4 = j_7
        *(rcx_13 + (rdi_6 << 3)) = var_88
        *(r12 + 0xd0) = arg5
        *(r12 + 0xd8) = arg6
        *(r12 + 0xe0) = arg7
    while (i != 1)
    i_4 = zx.q(i_4.d)
    r14 = arg2
    
    if (i_4.d s<= 0)
        rdx.b = 0
    else
        char rax_19
        rax_19, rdx = sub_1422eb5d0(*r14)
        
        if (rax_19 != 0 || *(*r14 + 0xd7c) != 0)
            rdx.b = 1
        else
            rdx.b = 0

int64_t j_5 = sx.q(i_4.d)
char var_a8 = rdx.b
int32_t r13_2 = 0
int32_t var_98 = 0
int64_t j_6 = j_5
int32_t rcx_15
rcx_15.b = *(*(arg1 + 8) + 8) s>= 3

if (sx.q(rax) s> 0)
    char* i_1 = nullptr
    char* i_2 = nullptr
    
    do
        char rcx_16 = i_1[*arg8]
        
        if (rcx_16 != 0)
            int32_t j = 0
            char rbx_5 = rcx_16 | 3
            
            if (rdx.b == 0)
                rbx_5 = rcx_16
            
            bool cond:1_1 = *(r12 + 0x68) s<= 0
            void* r15_2 = *(*(arg3 + 0xdb8) + (i_1 << 3))
            void* var_68_1 = r15_2
            int64_t rax_31 = *(arg3 + 0xde8) + sx.q(r13_2) * 0x28
            int32_t rax_32 = *(r15_2 + 0xd8)
            *(r12 + 0xc8) = *(r15_2 + 8)
            
            if (not(cond:1_1))
                int64_t rdi_7 = 0
                
                do
                    void* rcx_19 = *(r12 + 0x60)
                    void* rdx_9 = r12 + 0x50
                    rdi_7 += 8
                    
                    if (rcx_19 != 0)
                        rdx_9 = rcx_19
                    
                    void* rdx_10 = r12 + 0x50
                    *(*(rdx_9 + rdi_7 - 8) + 0x470) = rax_32
                    void* rcx_21 = *(r12 + 0x60)
                    
                    if (rcx_21 != 0)
                        rdx_10 = rcx_21
                    
                    j += 1
                    *(*(rdx_10 + rdi_7 - 8) + 0x474) = 0
                while (j s< *(r12 + 0x68))
            
            int32_t j_1 = 0
            
            if (*(r12 + 0xa0) s> 0)
                int64_t rdx_11 = 0
                
                do
                    void* rax_33 = *(r12 + 0x98)
                    void* rcx_23 = r12 + 0x90
                    rdx_11 += 2
                    
                    if (rax_33 != 0)
                        rcx_23 = rax_33
                    
                    j_1 += 1
                    *(rcx_23 + rdx_11 - 2) = 0
                while (j_1 s< *(r12 + 0xa0))
            
            int128_t zmm6 = sub_141460fc0(r14, arg9, r15_2, zmm6)
            
            if (r13_2 s> 0)
                int64_t rdi_8 = 0
                
                if (j_5 s> 0)
                    int64_t r8_1 = 0
                    
                    do
                        void* rax_34 = *(r12 + 0x28)
                        void* rdx_13 = r12 + 0x18
                        r8_1 += 0x5240
                        
                        if (rax_34 != 0)
                            rdx_13 = rax_34
                        
                        void* rdx_14 = *(rdx_13 + (rdi_8 << 3))
                        rdi_8 += 1
                        *(*(*r14 + r8_1 - 0x34c0) + (i_1 << 2) - 4) = *(rdx_14 + 8)
                    while (rdi_8 s< j_5)
            
            int64_t* rcx_26 = *(r15_2 + 8)
            uint32_t rbx_6 = zx.d(rbx_5)
            uint32_t var_94_1 = rbx_6
            int32_t* var_c0
            void* var_b8
            int64_t var_b0
            (*(*rcx_26 + 0x58))(rcx_26, arg4, arg4, zx.q(rbx_6), r12, var_c0, var_b8, var_b0, 
                var_a8, j_4, var_98, rax, var_88, i_2, rcx_15, i_3, var_68_1, rax_31, j_6)
            int64_t rdi_9 = 0
            
            if (j_5 s> 0)
                int64_t r8_3 = 0
                
                do
                    void* rax_38 = *(r12 + 0x28)
                    void* rdx_16 = r12 + 0x18
                    r8_3 += 0x5240
                    
                    if (rax_38 != 0)
                        rdx_16 = rax_38
                    
                    void* rdx_17 = *(rdx_16 + (rdi_9 << 3))
                    rdi_9 += 1
                    *(*(*r14 + r8_3 - 0x34c0) + (i_1 << 2)) = *(rdx_17 + 8)
                while (rdi_9 s< j_5)
                
                int32_t r12_2 = 1
                var_88 = 0
                int64_t j_3 = j_5
                int32_t var_a4_1 = 1
                j_4 = j_3
                uint64_t r13_3 = 0
                int64_t j_2
                
                do
                    if ((rbx_6 & r12_2) != 0)
                        int64_t* rbx_8 = *r14 + r13_3
                        void* rbp_4 = (sx.q(var_98) << 4) + rbx_8[0x2cb]
                        int64_t rdi_10 = sx.q(rbx_8[0x3b5].d)
                        int32_t rax_41 = rbx_8[0x3af].d
                        int32_t k = rbx_8[0x3b5].d
                        
                        if (rax_41 s> rdi_10.d)
                            rbx_8[0x3b5].d = rax_41
                            int32_t r15_4 = rax_41 - rdi_10.d
                            
                            if (rax_41 s> *(rbx_8 + 0x1dac))
                                zmm6 = sub_14113b710(&rbx_8[0x3b4], rdi_10.d)
                            
                            if (r15_4 != 0)
                                __builtin_memset(rbx_8[0x3b4] + (rdi_10 << 2), 0, zx.q(r15_4) << 2)
                            
                            r15_2 = var_68_1
                            j_3 = j_4
                        else if (rax_41 s< rdi_10.d && rax_41 != rdi_10.d)
                            rbx_8[0x3b5].d = rax_41
                            zmm6 = sub_141460e90(&rbx_8[0x3b4])
                            j_3 = j_4
                        
                        if (k s< rbx_8[0x3af].d)
                            do
                                var_b0 = rax_31
                                int64_t k_1 = sx.q(k)
                                var_b8 = r15_2
                                var_c0 = rbx_8[0x3b4] + (k_1 << 2)
                                zmm6 = sub_141448480(rcx_15, 0, rbp_4, rbx_8[0x3ae] + k_1 * 0x18, 
                                    rbx_8, var_c0)
                                k += 1
                            while (k s< rbx_8[0x3af].d)
                            
                            r12_2 = var_a4_1
                            r13_3 = var_88
                            j_3 = j_4
                        
                        rbx_6 = var_94_1
                        r14 = arg2
                    
                    r12_2 = rol.d(r12_2, 1)
                    r13_3 += 0x5240
                    j_2 = j_3
                    j_3 -= 1
                    var_a4_1 = r12_2
                    j_4 = j_3
                    var_88 = r13_3
                while (j_2 != 1)
                i_1 = i_2
                j_5 = j_6
                r13_2 = var_98
        
        r13_2 += 1
        r12 = arg10
        i_1 = &i_1[1]
        rdx = zx.q(var_a8)
        var_98 = r13_2
        i_2 = i_1
    while (i_1 s< sx.q(rax))

return sub_1422f00e0(arg1 + 0xb0) __tailcall
