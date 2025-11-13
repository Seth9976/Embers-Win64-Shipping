// 函数: sub_14227c2a0
// 地址: 0x14227c2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0xe0)
double zmm6[0x2] = arg3
double zmm7[0x2] = arg2
int64_t* rcx = rbx

if (rbx != 0)
    (*(*rbx + 0x108))(rcx, 
        "D:/Build/++UE4/Sync/Engine/Source/Runtime/Engine/Private/PhysicsEngine/PhysSubstepTasks.cpp", 
        0x167)
    rcx = *(arg1 + 0xe0)

(*(*rcx + 0x30))(rcx)
bool z

if (0 == *(arg1 + 0xac))
    *(arg1 + 0xac) = 0
    z = true
else
    *(arg1 + 0xac)
    z = false

int32_t var_138 = 0
int64_t rcx_1
rcx_1.b = z
int32_t var_134 = 1
int32_t var_128 = 0xffffffff
int32_t r8 = 0
int64_t var_124 = 0
int32_t rcx_2 = 0
void* rdi_2 = rcx_1 * 0x50 + arg1
int32_t r11 = *(rdi_2 + 0x28)
void* r9 = rdi_2 + 0x10
void* var_130 = r9

if (r11 != 0)
    void* rax_4 = *(r9 + 0x10)
    
    if (rax_4 != 0)
        r9 = rax_4
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_14227c39d:
        int32_t rax_11 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_11)
        int32_t var_134_1 = rax_11
        int32_t rax_12
        
        if (rax_11 == 0)
            rax_12 = 0x20
        else
            rax_12 = 0x1f - temp0_2
        
        var_124.d = r8 - rax_12 + 0x1f
        
        if (r8 - rax_12 + 0x1f s> r11)
            var_124.d = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_2)
            r8 += 0x20
            rcx_2 += 1
            var_124:4.d = r8
            var_138 = rcx_2
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            int32_t var_128_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_14227c39d
        
        var_124.d = r11

void* var_60 = rdi_2
int128_t var_70 = 0xffffffff
int16_t var_90 = 0
uint32_t zmm3[0x4] = var_138.o
uint64_t result = zmm3[0].q
float var_c8[0x4] = rdi_2.o
int128_t zmm0
zmm0.q = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
int128_t var_a8 = zmm0

if (0 s< *(result + 0x18))
    uint32_t i = zmm3[3]
    
    do
        int64_t* rdx_5 = sx.q(i) * 0xe0
        int64_t rcx_4 = *var_c8[0].q
        void* r12_1 = *(rdx_5 + rcx_4)
        void* rsi_1 = rdx_5 + rcx_4
        int64_t* rdi_3 = *sub_140962f60(r12_1)
        
        if (rdi_3 != 0)
            int64_t* rcx_7 = nullptr
            
            if ((*(*rdi_3 + 0x20))(rdi_3, "PxRigidBody") != 0)
                rcx_7 = rdi_3
            
            if (rcx_7 != 0)
                void arg_10
                char* rax_20
                int32_t r8_2
                int64_t r9_1
                rax_20, r8_2, r9_1 = (*(*rcx_7 + 0x178))(rcx_7, &arg_10)
                
                if ((*rax_20 & 1) != 0)
                    zmm6, zmm7 = sub_1422711f0(arg1, rsi_1 + 0x10, r12_1, zmm7)
                else
                    int32_t j = 0
                    
                    if (*(rsi_1 + 0x48) s> 0)
                        int64_t* r15_1 = nullptr
                        
                        do
                            int64_t* rdi_4 = *(r15_1 + *(rsi_1 + 0x40))
                            
                            if (rdi_4[1].d != 0)
                                int64_t* rcx_8 = *rdi_4
                                
                                if (rcx_8 != 0)
                                    char rax_23
                                    rax_23, r8_2, r9_1 = (*(*rcx_8 + 0x28))(rcx_8)
                                    
                                    if (rax_23 != 0)
                                        int64_t* rcx_9
                                        
                                        if (rdi_4[1].d == 0)
                                            rcx_9 = nullptr
                                        else
                                            rcx_9 = *rdi_4
                                        
                                        r8_2, r9_1 = (*(*rcx_9 + 0x50))(rcx_9, zmm6, r12_1)
                            
                            j += 1
                            r15_1 = &r15_1[1]
                        while (j s< *(rsi_1 + 0x48))
                    
                    int64_t* rdi_5 = *sub_140962f60(r12_1)
                    int64_t* r15_2
                    
                    if (rdi_5 == 0)
                        r15_2 = nullptr
                    else
                        char rax_27
                        rax_27, r8_2, r9_1 = (*(*rdi_5 + 0x20))(rdi_5, "PxRigidBody")
                        r15_2 = nullptr
                        
                        if (rax_27 != 0)
                            r15_2 = rdi_5
                    
                    int32_t j_1 = 0
                    char var_148
                    char var_140
                    
                    if (*(rsi_1 + 0x18) s> 0)
                        double (* rdi_6)[0x2] = nullptr
                        
                        do
                            int64_t rax_28 = *(rsi_1 + 0x10)
                            
                            if (*(rdi_6 + rax_28 + 0x18) == 0)
                                arg2 = *(rdi_6 + rax_28 + 4)
                                r9_1.b = 1
                                int64_t r10_1 = *r15_2
                                int32_t var_e8 = (*(rdi_6 + rax_28)).d
                                int32_t var_e4_1 = arg2[0].d
                                int32_t var_e0_1 = (*(rdi_6 + rax_28 + 8)).d
                                r8_2, r9_1 = (*(r10_1 + 0x148))(r15_2, &var_e8, 
                                    zx.q(sbb.d(r8_2, r8_2, *(rdi_6 + rax_28 + 0x19) != 0)) & 3, 
                                    r9_1, var_148, var_140, var_138, var_130, 0xffffffff)
                            else
                                zmm0 = *(rdi_6 + rax_28 + 0xc)
                                arg2 = *(rdi_6 + rax_28 + 0x10)
                                var_148 = 1
                                
                                if (*(rdi_6 + rax_28 + 0x1a) != 0)
                                    int32_t var_100 = zmm0.d
                                    int32_t var_fc_1 = arg2[0].d
                                    int32_t var_f8_1 = (*(rdi_6 + rax_28 + 0x14)).d
                                    zmm0 = *(rdi_6 + rax_28 + 4)
                                    int32_t var_f4 = (*(rdi_6 + rax_28))[0].d
                                    int32_t var_f0_1 = zmm0.d
                                    int32_t var_ec_1 = (*(rdi_6 + rax_28 + 8))[0].d
                                    r8_2, r9_1, zmm6, zmm7 =
                                        sub_1427eeda0(r15_2, &var_f4, &var_100, 0, 1)
                                else
                                    int32_t var_118 = zmm0.d
                                    int32_t var_114_1 = arg2[0].d
                                    int32_t var_110_1 = (*(rdi_6 + rax_28 + 0x14)).d
                                    zmm0 = *(rdi_6 + rax_28 + 4)
                                    float var_10c = (*(rdi_6 + rax_28))[0].d
                                    int32_t var_108_1 = zmm0.d
                                    int32_t var_104_1 = (*(rdi_6 + rax_28 + 8))[0].d
                                    r8_2, r9_1, zmm6, zmm7 =
                                        sub_1427ee9f0(r15_2, &var_10c, &var_118, 0, 1)
                            
                            j_1 += 1
                            rdi_6 += 0x1c
                        while (j_1 s< *(rsi_1 + 0x18))
                    
                    int64_t* rdi_7 = *sub_140962f60(r12_1)
                    int64_t* r14_1
                    
                    if (rdi_7 == 0)
                        r14_1 = nullptr
                    else
                        char rax_32
                        rax_32, r8_2, r9_1 = (*(*rdi_7 + 0x20))(rdi_7, "PxRigidBody")
                        r14_1 = nullptr
                        
                        if (rax_32 != 0)
                            r14_1 = rdi_7
                    
                    int32_t j_2 = 0
                    
                    if (*(rsi_1 + 0x28) s> 0)
                        int128_t* rdi_8 = nullptr
                        
                        do
                            int64_t rax_33 = *(rsi_1 + 0x20)
                            int64_t r10_2 = *r14_1
                            r9_1.b = 1
                            arg2 = *(rdi_8 + rax_33 + 4)
                            int32_t var_dc = (*(rdi_8 + rax_33)).d
                            int32_t var_d8_1 = arg2[0].d
                            int32_t var_d4_1 = (*(rdi_8 + rax_33 + 8)).d
                            r8_2, r9_1 = (*(r10_2 + 0x150))(r14_1, &var_dc, 
                                zx.q(sbb.d(r8_2, r8_2, *(rdi_8 + rax_33 + 0xc) != 0)) & 3, r9_1, 
                                var_148, var_140, var_138, var_130, 0xffffffff)
                            j_2 += 1
                            rdi_8 = &rdi_8[1]
                        while (j_2 s< *(rsi_1 + 0x28))
                    
                    int64_t* rdi_9 = *sub_140962f60(r12_1)
                    int64_t* r15_3
                    
                    if (rdi_9 == 0)
                        r15_3 = nullptr
                    else
                        r15_3 = nullptr
                        
                        if ((*(*rdi_9 + 0x20))(rdi_9, "PxRigidBody") != 0)
                            r15_3 = rdi_9
                    
                    int32_t j_3 = 0
                    
                    if (*(rsi_1 + 0x38) s> 0)
                        int64_t r14_2 = 0
                        
                        do
                            int32_t* rdx_12 = *(rsi_1 + 0x30) + r14_2
                            var_140 = *(rdx_12 + 0x15)
                            var_148 = rdx_12[5].b
                            zmm6, zmm7 =
                                sub_14225ed40(r15_3, rdx_12, rdx_12[3], rdx_12[4], var_148, var_140)
                            j_3 += 1
                            r14_2 += 0x18
                        while (j_3 s< *(rsi_1 + 0x38))
        
        zmm3[2] &= not.d(var_c8[3])
        sub_14059bdd0(&var_c8[2])
        result = zmm3[0].q
        i = zmm3[3]
    while (i s< *(result + 0x18))
    
    if (var_90.b != 0 && var_90:1.b != 0)
        result = sub_142264840(rdi_2, *(rdi_2 + 8) - *(rdi_2 + 0x34), 1)

if (not(zmm7[0].d f< 1f))
    result = sub_1422689a0(rdi_2, *(rdi_2 + 8) - *(rdi_2 + 0x34))

if (rbx == 0)
    return result

return (*(*rbx + 0x118))(rbx)
