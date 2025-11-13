// 函数: sub_1418a2400
// 地址: 0x1418a2400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
void* r15 = arg1
int64_t* rcx = *(arg1 + 0x70)
int64_t result = (*(*rcx + 0x10))(rcx)
void var_130

if (result == 0 && *sub_140b162a0(r15 + 0x180, &var_130, arg2) != 0xffffffff)
    int64_t var_158 = 0
    int64_t var_150_1 = 0
    void* rdx_1
    
    while (true)
        rdx_1 = **(r15 + 0x288)
        
        if (rdx_1 == 0)
            break
        
        int128_t zmm0_1 = *(rdx_1 + 8)
        int64_t rcx_2 = *(r15 + 0x288)
        *(r15 + 0x288) = rdx_1
        var_158.o = zmm0_1
        int64_t var_138_1 = 0
        *(rdx_1 + 8) = 0.o
        j_sub_140a74f90(rcx_2)
        
        if (*(r15 + 0x1e8) != *(r15 + 0x214))
            int32_t rax_6 = sub_140a6b260(&var_158, 0x10)
            void* rcx_4 = *(r15 + 0x220)
            void* r12_2 = r15 + 0x218
            int64_t r13_2 = sx.q(*(r15 + 0x228)) - 1
            
            if (rcx_4 != 0)
                r12_2 = rcx_4
            
            int32_t i = *(r12_2 + ((sx.q(rax_6) & r13_2) << 2))
            
            if (i != 0xffffffff)
                int64_t r10_1 = *(r15 + 0x1e0)
                
                do
                    int64_t i_4 = sx.q(i)
                    int64_t rax_9 = i_4 * 3
                    void* r8_2 = r10_1 + (rax_9 << 3)
                    int32_t rcx_9 = (*(r10_1 + (rax_9 << 3) + 0xc) ^ var_150_1:4.d)
                        | (*(r10_1 + (rax_9 << 3) + 8) ^ var_150_1.d) | (*(r8_2 + 4) ^ var_158:4.d)
                        | (var_158.d ^ *r8_2)
                    
                    if (rcx_9 == 0)
                        if (*(r15 + 0x1e8) != *(r15 + 0x214))
                            int64_t rax_17 = i_4 * 3
                            int64_t rax_19 = sx.q(*(r10_1 + (rax_17 << 3) + 0x14)) & r13_2
                            void* rcx_10 = r12_2 + (rax_19 << 2)
                            int32_t j = *(r12_2 + (rax_19 << 2))
                            
                            if (j != 0xffffffff)
                                do
                                    if (j == i)
                                        *rcx_10 = *(r10_1 + (rax_17 << 3) + 0x10)
                                        goto label_1418a25ec
                                    
                                    int64_t j_1 = sx.q(j)
                                    int64_t rcx_12 = j_1 + ((j_1 + 1) << 1)
                                    j = *(r10_1 + (rcx_12 << 3))
                                    rcx_10 = r10_1 + (rcx_12 << 3)
                                while (j != 0xffffffff)
                                
                                sub_1405c3640(r15 + 0x1e0, i, j + 2)
                                break
                        
                    label_1418a25ec:
                        sub_1405c3640(r15 + 0x1e0, i, 1)
                        break
                    
                    i = *(r8_2 + 0x10)
                while (i != 0xffffffff)
    
    int64_t* rcx_15 = *(r15 + 0x70)
    int32_t rbx_2 = *(r15 + 0x60)
    void** const var_68 = &data_142da2668
    int32_t* (* var_88)(int64_t* arg1, int64_t* arg2) = j_sub_14189ee70
    void*** var_78_1 = nullptr
    void* var_60_1 = r15
    int32_t rax_22 = (*(*rcx_15 + 0x20))(rcx_15, rdx_1)
    int64_t* rcx_16 = *(r15 + 0x78)
    
    if (rax_22 s>= rbx_2)
        rbx_2 = rax_22
    
    void* var_168
    (*(*rcx_16 + 0x28))(rcx_16, &var_168, zx.q(rbx_2), &var_88)
    int32_t var_160
    int32_t r14_2 = var_160
    void** const var_a8 = &data_142da2668
    int32_t* (* var_c8_1)(int64_t* arg1, int64_t* arg2) = sub_1418a0500
    int32_t rsi_2 = r14_2
    void*** var_b8_1 = nullptr
    void* var_a0_1 = r15
    
    if (r14_2 != 0)
        r14_2 = 0
        int32_t i_1 = 0
        bool r12_1 = var_c8_1(sub_14059bf50(&var_a8), var_168) == 0
        
        do
            int64_t i_5 = sx.q(i_1)
            
            for (i_1 += 1; i_1 s< rsi_2; i_1 += 1)
                void** const* rcx_19 = &var_a8
                
                if (var_b8_1 != 0)
                    rcx_19 = var_b8_1
                
                int32_t rcx_21
                rcx_21.b = var_c8_1((*rcx_19)[1](rcx_19), (sx.q(i_1) << 4) + var_168) == 0
                
                if (zx.d(r12_1) != rcx_21)
                    break
            
            int32_t rdi_5 = i_1 - i_5.d
            
            if (r12_1 != 0)
                if (r14_2 != i_5.d)
                    memmove((sx.q(r14_2) << 4) + var_168, (i_5 << 4) + var_168, rdi_5 << 4)
                
                r14_2 += rdi_5
            
            r12_1 ^= 1
        while (i_1 s< rsi_2)
        
        r15 = arg1
        rsi_2 = r14_2
        var_160 = r14_2
    
    int32_t rax_29 = *(r15 + 0x64)
    
    if (rsi_2 s<= rax_29)
        rax_29 = rsi_2
    
    int32_t var_15c
    
    if (rax_29 s> rsi_2)
        var_160 = rax_29
        int32_t i_3 = rax_29 - rsi_2
        r14_2 = rax_29
        
        if (rax_29 s> var_15c)
            sub_1405a4f90(&var_168)
            r14_2 = var_160
        
        int64_t* rax_32 = (sx.q(rsi_2) << 4) + var_168
        
        if (i_3 != 0)
            int32_t i_2
            
            do
                *rax_32 = 0
                rax_32[1] = 0
                rax_32 = &rax_32[2]
                i_2 = i_3
                i_3 -= 1
            while (i_2 != 1)
            r14_2 = var_160
    else if (rax_29 s< rsi_2 && rsi_2 != rax_29)
        r14_2 -= rsi_2 - rax_29
        var_160 = r14_2
    
    void* rdx_12 = var_168
    void* r8_10 = (sx.q(r14_2) << 4) + rdx_12
    
    if (rdx_12 == r8_10)
    label_1418a281b:
        var_160 = r14_2 + 1
        
        if (r14_2 + 1 s> var_15c)
            sub_1405a4f90(&var_168)
        
        *(var_168 + sx.q(r14_2) * 0x10) = *arg2
    else
        while (true)
            int32_t rcx_30 = (*(rdx_12 + 4) ^ *(arg2 + 4)) | (*(rdx_12 + 8) ^ arg2[1].d)
                | (*(rdx_12 + 0xc) ^ *(arg2 + 0xc)) | (*rdx_12 ^ *arg2)
            
            if (rcx_30 == 0)
                break
            
            rdx_12 += 0x10
            
            if (rdx_12 == r8_10)
                goto label_1418a281b
        
        if (((rdx_12 - var_168) s>> 4).d == 0xffffffff)
            goto label_1418a281b
    
    int64_t* rcx_34 = *(r15 + 0x88)
    (*(*rcx_34 + 8))(rcx_34, &var_168)
    int32_t rbx_5 = 0
    
    if (var_160 s> 0)
        do
            bool z_1
            
            if (0 == *(r15 + 0x94))
                *(r15 + 0x94) = 0
                z_1 = true
            else
                *(r15 + 0x94)
                z_1 = false
            
            if (not(z_1))
                break
            
            sub_1418a4b00(r15, (sx.q(rbx_5) << 4) + var_168)
            rbx_5 += 1
        while (rbx_5 s< var_160)
    
    int64_t* rcx_36 = *(r15 + 0x70)
    int64_t result_1 = (*(*rcx_36 + 0x10))(rcx_36, arg2)
    
    if (*(r15 + 0xa0) != 0 && *(r15 + 0xe8) - *(r15 + 0x114) s> 0)
        void var_120
        int64_t* rax_44 = sub_14077e140(&var_120, r15 + 0xe0)
        void* rdx_22 = *(r15 + 0xb0)
        void* rcx_40 = r15 + 0xc0
        
        if (rdx_22 != 0)
            rcx_40 = rdx_22
        
        int64_t rdx_23 = *rcx_40
        (*(r15 + 0xa0))((*(rdx_23 + 8))(rcx_40, rdx_23), rax_44)
        rax_44[9].d = 0
        int64_t rcx_42 = rax_44[8]
        
        if (rcx_42 != 0)
            sub_140a74f90(rcx_42)
        
        rax_44[1].d = 0
        
        if (*(rax_44 + 0xc) != 0)
            sub_1405a5130(rax_44, 0)
        
        rax_44[6].d = 0xffffffff
        *(rax_44 + 0x34) = 0
        sub_14059a8e0(&rax_44[2], 0)
        int64_t rcx_45 = rax_44[4]
        
        if (rcx_45 != 0)
            sub_140a74f90(rcx_45)
        
        int64_t rcx_46 = *rax_44
        
        if (rcx_46 != 0)
            sub_140a74f90(rcx_46)
    
    if (var_c8_1 != 0)
        void** const* rcx_47 = &var_a8
        
        if (var_b8_1 != 0)
            rcx_47 = var_b8_1
        
        (*rcx_47)[2](rcx_47)
    
    void* rcx_48 = var_168
    
    if (rcx_48 != 0)
        sub_140a74f90(rcx_48)
    
    if (var_88 != 0)
        void** const* rcx_49 = &var_68
        
        if (var_78_1 != 0)
            rcx_49 = var_78_1
        
        (*rcx_49)[2](rcx_49)
    
    result = result_1

__security_check_cookie(rax_1 ^ &var_188)
return result
