// 函数: sub_14236ce50
// 地址: 0x14236ce50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_141dc37c0(arg4, arg3)
int64_t* rdi = rax
float zmm0[0x4]
float zmm1[0x4]
float zmm6[0x4]

if (rax == 0)
    if ((*(arg4 + 0x181) & 1) == 0)
        sub_141dba8d0(arg4, arg5)
    
    rdi = sub_141dba860(arg4, arg3)
    
    if ((*(arg4 + 0x181) & 4) != 0 && arg1[0x44].d s> 0)
        uint8_t rcx_3 = *(arg1 + 0x16d)
        zmm0 = *(arg4 + 0x1fc)
        zmm1 = arg1[0x1f].d
        void* var_68_1 = &arg1[0x43]
        int64_t var_90 = *(arg4 + 0x28)
        int64_t var_88_1 = *(arg4 + 8)
        float var_78_1 = zmm0[0]
        char var_70
        uint8_t var_70_1 = rcx_3 u>> 6 | (var_70 & 0xfc)
        float var_74_1 = zmm1[0]
        float var_60_1 = (*(arg4 + 0x19c))[0]
        int64_t* var_80_1 = rdi
        zmm6 = sub_1423b3be0(&var_90)

if ((*(arg1 + 0x16b) & 1) != 0 || (*(arg5 + 0x1c4) & 4) != 0)
    rdi[0x20].d &= 0xfffffff7

uint64_t result = zx.q(rdi[0x20].d)

if ((result.b & 8) == 0)
    zmm0 = *(arg1 + 0x1fc)
    zmm0[0] = zmm0[0] f* *(arg5 + 0x5c)
    float var_58_1[0x4] = zmm6
    rdi[0x19].d = zmm0[0]
    rdi[0x1a].d = (*(arg5 + 0x64))[0]
    *(rdi + 0xcc) = arg5[0xc].d[0]
    zmm1 = arg1[0x40].d
    zmm1[0] = zmm1[0] f* arg5[0xf].d
    *(rdi + 0x144) = zmm1[0]
    int32_t rcx_9 = ((zx.d(*(arg5 + 0x1c4)) << 3 ^ result.d) & 0x40) ^ result.d
    rdi[0x20].d = rcx_9
    int32_t rcx_10 = rcx_9 ^ ((zx.d(*(arg5 + 0x1c4)) << 3 ^ rcx_9) & 0x80)
    rdi[0x20].d = rcx_10
    *(rdi + 0x12c) = arg5[0x36].d
    *(rdi + 0x134) = *(arg5 + 0x1bc)
    *(rdi + 0x13c) = *(arg5 + 0x1b4)
    rdi[0x28].d = arg5[0x37].d
    rdi[0x27].d = arg5[0x38].d
    int32_t r8_3 = ((zx.d(*(arg4 + 0x181)) ^ rcx_10) & 2) ^ rcx_10
    rdi[0x20].d = r8_3
    *(rdi + 0xfc) = *(arg5 + 0x7c)
    rdi[0x47].b = *(arg4 + 0x184)
    *(rdi + 0x154) = arg5[0x10].d
    rdi[0x2b].d = arg5[0x30].d
    *(rdi + 0x15c) = *(arg5 + 0x84)
    rdi[0x2c].d = arg5[0x11].d
    *(rdi + 0x164) = *(arg5 + 0x8c)
    rdi[0x2d].d = arg5[0x12].d
    
    if (*(arg1 + 0x204) s<= 2)
        rdi[0x15] = arg5[0x35]
    
    zmm6 = zx.o(0)
    rdi[1] = arg5[2]
    int64_t rdx_3 = arg5[2]
    uint64_t rbx
    
    if (rdx_3 == 0)
        *(rdi + 0xe4) = 0
        *(rdi + 0xec) = 0
        *(rdi + 0xf4) = 0
        int32_t rcx_23 = ((zx.d(*(arg4 + 0x181)) & 0xffffff80) * 2) | (r8_3 & 0xfffffeff)
        rdi[0x20].d = rcx_23
        int32_t rcx_24 = rcx_23 ^ ((zx.d(*(arg4 + 0x182)) << 9 ^ rcx_23) & 0x200)
        rdi[0x20].d = rcx_24
        int32_t rcx_25 = rcx_24 ^ ((zx.d(*(arg4 + 0x182)) << 9 ^ rcx_24) & 0x400)
        rdi[0x20].d = rcx_25
        rdi[0x20].d = ((zx.d(*(arg4 + 0x182)) << 9 ^ rcx_25) & 0x800) ^ rcx_25
        rbx.b = *(arg4 + 0x181) u>> 6
        rbx.b &= 1
    else
        int32_t* rax_25 = sub_141e7ed00(arg2, rdx_3)
        zmm0 = rdi[0x1a].d
        zmm0[0] = zmm0[0] f* *rax_25
        rdi[0x1a].d = zmm0[0]
        zmm0 = rax_25[1]
        zmm0[0] = zmm0[0] f* *(rdi + 0x144)
        *(rdi + 0x144) = zmm0[0]
        zmm1 = rax_25[0xe]
        zmm1[0] = zmm1[0] f* rax_25[0x15]
        float temp0_1[0x4] = _mm_max_ss(zmm1[0], zmm6[0])
        temp0_1[0] = temp0_1[0] f* *(rdi + 0x15c)
        *(rdi + 0x15c) = temp0_1[0]
        rdi[0x26].d = rax_25[2]
        *(rdi + 0xe4) = rax_25[6]
        zmm0 = rax_25[7]
        zmm0[0] = zmm0[0] f* *(arg5 + 0x64)
        rdi[0x1d].d = zmm0[0]
        zmm1 = rax_25[8]
        zmm1[0] = zmm1[0] f* *(arg5 + 0x64)
        *(rdi + 0xec) = zmm1[0]
        *(rdi + 0xf4) = rax_25[5]
        int32_t rax_29
        
        if (*(arg4 + 0x181) s>= 0)
            rax_29 = 0
        
        if (*(arg4 + 0x181) s< 0 || (rax_25[9].b & 4) != 0)
            rax_29 = 0x100
        
        rdi[0x20].d &= 0xfffffeff
        rdi[0x20].d |= rax_29
        int32_t rdx_4
        
        if ((*(arg4 + 0x182) & 1) == 0)
            rdx_4 = 0
        
        if ((*(arg4 + 0x182) & 1) != 0 || (rax_25[9].b & 8) != 0)
            rdx_4 = 0x200
        
        int32_t rax_32 = (rdi[0x20].d & 0xfffffdff) | rdx_4
        rdi[0x20].d = rax_32
        int32_t rdx_5
        
        if ((*(arg4 + 0x182) & 4) == 0)
            rdx_5 = 0
        
        if ((*(arg4 + 0x182) & 4) != 0 || (rax_25[9].b & 0x10) != 0)
            rdx_5 = 0x800
        
        int32_t rax_34 = (rax_32 & 0xfffff7ff) | rdx_5
        rdi[0x20].d = rax_34
        int32_t rdx_6
        
        if ((*(arg4 + 0x182) & 2) == 0)
            rdx_6 = 0
        
        if ((*(arg4 + 0x182) & 2) != 0 || (rax_25[9].b & 0x40) != 0)
            rdx_6 = 0x400
        
        rdi[0x20].d = (rax_34 & 0xfffffbff) | rdx_6
        rdi[0x25].d = zx.d(rax_25[0xb].b)
        
        if ((rax_25[9].b & 1) == 0)
            int64_t rax_47 = *(rax_25 + 0x30)
            
            if (rax_47 != 0)
                rdi[0xe] = rax_47
        else
            int64_t* rax_38 = sub_142475900()
            void* rdx_7 = rax_38[0x23]
            
            if (rdx_7 == 0)
                int64_t rdx_8 = *rax_38
                (*(rdx_8 + 0x390))(rax_38, rdx_8)
                rdx_7 = rax_38[0x23]
            
            int64_t var_b8 = *(rdx_7 + 0xe0)
            int32_t var_c8 = 0xffffffff
            int64_t var_c4_1 = 0
            int64_t var_b0
            sub_140596d10(&var_b0, rdx_7 + 0xe8)
            uint64_t rax_40 = sub_140d3c6e0(&var_c8)
            rbx = rax_40
            
            if (rax_40 != 0)
            label_14236d2e7:
                void* rax_44 = sub_1425a1cd0()
                void* rdx_11 = *(rbx + 0x10)
                int64_t rax_45 = sx.q(*(rax_44 + 0x38))
                
                if (rax_45.d s> *(rdx_11 + 0x38)
                        || *(*(rdx_11 + 0x30) + (rax_45 << 3)) != rax_44 + 0x30)
                    rbx = 0
            else if (var_b8 == 0)
                rbx = 0
            else
                if (rax_40.d == data_1439aaa30)
                    data_1439aaa30 = 0
                else
                    rax_40 = zx.q(data_1439aaa30)
                
                if (rax_40.d != var_c4_1:4.d || var_c8 != 0xffffffff)
                    void* rax_41
                    rax_41, zmm6 = sub_140d2bce0(&var_b8)
                    sub_140d3a3a0(&var_c8, rax_41)
                    
                    if (rax_41 != 0 || data_143e1d7b4 == 0)
                        int32_t rax_42 = 0
                        
                        if (0 == data_1439aaa30)
                            data_1439aaa30 = 0
                        else
                            rax_42 = data_1439aaa30
                        
                        var_c4_1:4.d = rax_42
                    
                    uint64_t rax_43 = sub_140d3c6e0(&var_c8)
                    rbx = rax_43
                    
                    if (rax_43 != 0)
                        goto label_14236d2e7
                    
                    rbx = 0
                else
                    rbx = 0
            
            int64_t rcx_19 = var_b0
            rdi[0xe] = rbx
            
            if (rcx_19 != 0)
                sub_140a74f90(rcx_19)
        
        if ((rax_25[9].b & 0x20) != 0)
            zmm0 = arg5[0xe].d
            zmm0[0] = zmm0[0] f* rdi[0x1a].d
            rdi[0x1a].d = zmm0[0]
            zmm1 = arg5[0xe].d
            zmm0 = *(rdi + 0xec)
            zmm1[0] = zmm1[0] f* rdi[0x1d].d
            rdi[0x1d].d = zmm1[0]
            zmm0[0] = zmm0[0] f* arg5[0xe].d
            *(rdi + 0xec) = zmm0[0]
        
        if ((*(arg4 + 0x181) & 0x40) != 0 || (rax_25[9].b & 2) != 0)
            rbx.b = 1
        else
            rbx.b = 0
    
    rdi[0x20].d ^= (zx.d(*(arg1 + 0x16e)) << 0xe ^ rdi[0x20].d) & 0x4000
    int64_t rax_65 = arg5[0x13]
    
    if (rax_65 != 0)
        rdi[0xe] = rax_65
    else
        rax_65 = (*(*arg1 + 0x2d0))(arg1)
        
        if (rax_65 != 0)
            rdi[0xe] = rax_65
    
    if (rbx.b == 0)
        zmm0 = *(arg5 + 0x74)
        
        if (not(zmm0[0] < zmm6[0]))
            zmm6 = __minss_xmmss_memss(zmm0[0], 0x42c80000)
    else
        zmm6 = 0x7e7fffff
    
    rdi[0x1c].d = zmm6[0]
    float zmm2[0x4] = *(arg5 + 0x30)
    float var_98_1 = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
    rdi[0x29] = (_mm_unpacklo_ps(zmm2, _mm_shuffle_ps(zmm2, zmm2, 0x55)[0].q)).q
    rdi[0x2a].d = var_98_1
    int32_t rax_69 = rdi[0x20].d | 4
    *rdi = arg1
    rdi[0x20].d = rax_69 & 0xffffffef
    
    if (&rdi[0x16] != arg5)
        int64_t rsi_2 = sx.q(arg5[1].d)
        int64_t rax_71 = *arg5
        int32_t r8_6 = *(rdi + 0xbc)
        rdi[0x17].d = rsi_2.d
        
        if (rsi_2.d != 0 || r8_6 != 0)
            sub_1405a4be0(&rdi[0x16], rsi_2.d, r8_6)
            memcpy(rdi[0x16], rax_71, (rsi_2 << 4).d)
        else
            *(rdi + 0xbc) = 0
    
    int32_t rax_72
    
    if ((*(arg1 + 0x16b) & 1) == 0)
        rax_72 = 0
    
    if ((*(arg1 + 0x16b) & 1) != 0 || (*(arg5 + 0x1c4) & 4) != 0)
        rax_72 = 2
    
    rdi[0x1f].d = rax_72
    rdi[0x20].d ^= (zx.d(*(arg5 + 0x1c4)) << 7 ^ rdi[0x20].d) & 0x1000
    int32_t rax_77 = rdi[0x20].d
    rdi[0x20].d = ((zx.d(*(arg5 + 0x1c4)) << 4 ^ rax_77) & 0x20) ^ rax_77
    
    if (sub_141e631e0(rdi) != 0)
        *(rdi + 0x104) = *(arg5 + 0x184)
        char rax_80 = sub_141e80840(arg2)
        int32_t rax_81
        
        if (rax_80 != 0)
            rax_81 = 1
        
        if (rax_80 == 0 || *(arg5 + 0x184) != 0)
            rax_81 = *(arg5 + 0x184)
        
        *(rdi + 0x104) = rax_81
        
        if (*(arg5 + 0x1c4) s< 0 && *(arg1 + 0x204) == 2)
            zmm0 = sub_141e63200(rdi)
            zmm0[0] = zmm0[0] * 0.5f
            rdi[0x19].d = zmm0[0]
    
    rdi[0x2e].b = arg5[0x1a].b
    rdi[0x42].d = *(arg5 + 0xe4)
    rdi[0x3e].d = arg5[0x2a].d
    *(rdi + 0x1f4) = *(arg5 + 0x154)
    *(rdi + 0x1f5) = *(arg5 + 0x155)
    
    if (&rdi[0x3f] != &arg5[0x2b])
        int32_t rsi_3 = arg5[0x2c].d
        int64_t r15_1 = arg5[0x2b]
        int32_t r8_9 = *(rdi + 0x204)
        rdi[0x40].d = rsi_3
        
        if (rsi_3 != 0 || r8_9 != 0)
            sub_1405c4b20(&rdi[0x3f], rsi_3, r8_9)
            memcpy(rdi[0x3f], r15_1, rsi_3 * 0x1c)
        else
            *(rdi + 0x204) = 0
    
    rdi[0x41] = arg5[0x2d]
    void* rax_89 = &arg5[0x2e]
    *(rdi + 0x174) = *(arg5 + 0xd4)
    *(rdi + 0x17c) = *(arg5 + 0xdc)
    
    if (&rdi[0x43] != rax_89)
        int32_t i_2 = rdi[0x44].d
        
        if (i_2 != 0)
            int64_t* rbx_6 = rdi[0x43] + 0x90
            int32_t i
            
            do
                int64_t rcx_39 = *rbx_6
                
                if (rcx_39 != 0)
                    sub_140a74f90(rcx_39)
                
                rbx_6[-0xe] = &data_142d6a040
                int64_t rcx_40 = rbx_6[-3]
                
                if (rcx_40 != 0)
                    sub_140a74f90(rcx_40)
                
                sub_1405ae180(&rbx_6[-0xd])
                rbx_6 = &rbx_6[0x15]
                i = i_2
                i_2 -= 1
            while (i != 1)
            rax_89 = &arg5[0x2e]
        
        sub_141e6d890(&rdi[0x43], *rax_89, *(rax_89 + 8), *(rdi + 0x224), 0)
    
    rdi[0x1b].d = arg5[0xd].d
    *(rdi + 0xdc) = *(arg5 + 0x6c)
    sub_141c51740(&rdi[0xf], &arg5[0x14])
    
    if ((*(rdi[0x18] + 0x182) & 8) == 0)
        rdi[0x20].d ^= (zx.d(*(arg5 + 0x1c4)) ^ rdi[0x20].d) & 1
    
    int32_t* r15_3 = &arg5[0x17]
    void* r13_2 = rdi - arg5
    int64_t i_3 = 2
    int64_t i_1
    
    do
        void* r12_2 = r13_2 - 0x30 + r15_3
        void** rax_96 = &r15_3[-2]
        
        if (r12_2 != rax_96)
            int32_t j_1 = *(r15_3 + r13_2 - 0x28)
            
            if (j_1 != 0)
                int64_t* rbx_8 = *r12_2 + 0x98
                int32_t j
                
                do
                    int64_t rcx_44 = *rbx_8
                    
                    if (rcx_44 != 0)
                        sub_140a74f90(rcx_44)
                    
                    rbx_8[-0xe] = &data_142d6a040
                    int64_t rcx_45 = rbx_8[-3]
                    
                    if (rcx_45 != 0)
                        sub_140a74f90(rcx_45)
                    
                    sub_1405ae180(&rbx_8[-0xd])
                    rbx_8 = &rbx_8[0x16]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                r12_2 = r13_2 - 0x30 + r15_3
                rax_96 = &r15_3[-2]
            
            sub_14234d340(r12_2, *rax_96, *r15_3, *(r15_3 + r13_2 - 0x24), 0)
        
        r15_3 = &r15_3[4]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rdi[0x21] = arg5[0x31]
    rdi[0x22] = arg5[0x32]
    rdi[0x23] = arg5[0x34]
    rdi[0x24] = arg5[0x33]
    result = sub_141e64620(rdi)
    
    if (result.b != 0)
        int64_t rsi_4 = sx.q(arg6[1].d)
        int32_t rax_101 = (rsi_4 + 1).d
        arg6[1].d = rax_101
        
        if (rax_101 s> *(arg6 + 0xc))
            sub_1405a4d70(arg6)
        
        result = *arg6
        *(result + (rsi_4 << 3)) = rdi
        *(arg4 + 0x180) &= 0xef
    else if (rdi[0x1f].d == 2)
        *(arg4 + 0x180) &= 0xef
    else if (rax == 0)
        return sub_141dd4b30(arg4, arg3)

return result
