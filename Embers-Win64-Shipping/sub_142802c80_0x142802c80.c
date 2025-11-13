// 函数: sub_142802c80
// 地址: 0x142802c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
int64_t* rsi = arg2
int64_t* rax_1 = (*(*arg2 + 0xb0))(arg2)
int32_t rax_2 = (*(*rsi + 0xa8))(rsi)
void* r14 = rax_1[1]
int32_t rbx = 0
int64_t* arg_28
int64_t* rdi = arg_28
char var_c8[0x80]

if (rax_2 != 0 && r14 != 0)
    if (rax_2 != 0)
        do
            char const* const rdx
            int64_t r8
            
            if (rbx == 0 || (rbx.b & 3) != 0)
                r8 = 1
                rdx = &data_1434cf410
            else
                r8 = 4
                rdx = "\n\t\t\t"
            
            (**rdi)(rdi, rdx, r8)
            int64_t* rax_4 = sub_1427e39a0(rdi, r14)
            int64_t r9 = *rax_4
            (*r9)(rax_4, &data_1434cf410, 1, r9)
            memset(&var_c8, 0, 0x80)
            arg6 = _mm_cvtps_pd(*(r14 + 0xc))
            physx::shdfnd::snprintf(&var_c8, 0x80, "%g")
            
            if (var_c8[0] != 0)
                int64_t r8_1 = -1
                
                do
                    r8_1 += 1
                while (var_c8[r8_1] != 0)
                
                (**rax_4)(rax_4, &var_c8, r8_1)
            
            rbx += 1
            r14 += 0x10
        while (rbx u< rax_2)
        
        rsi = arg_10
    
    arg_28.b = 0
    (**rdi)(rdi, &arg_28, 1, arg6)
    (*(*arg4 + 0x10))(arg4, "Particles", rdi[4])
    rdi[3] = 0

(*(*rax_1 + 8))(rax_1)
sub_142806f70(arg4, arg3, "Fabric", (*(*rsi + 0xa0))(rsi))
int64_t* var_118 = rdi[2]
void* var_110 = nullptr
int64_t var_108 = 0
int32_t rax_13 = (*(*rsi + 0x268))(rsi)
int64_t rdx_5 = *rsi
int32_t rax_14 = (*(rdx_5 + 0x280))(rsi, rdx_5)
int64_t rdx_6 = *rsi
uint64_t rbx_2 = zx.q(rax_14 * 2)
int32_t var_100 = rbx_2.d
int32_t rax_15 = (*(rdx_6 + 0x2a0))(rsi, rdx_6)
int64_t rdx_7 = *rsi
uint64_t r13_1 = zx.q(rax_15)
int32_t var_f4 = r13_1.d
int32_t rax_16 = (*(rdx_7 + 0x2b8))(rsi, rdx_7)
int64_t rdx_8 = *rsi
int64_t rax_17 = (*(rdx_8 + 0x2d8))(rsi, rdx_8)
arg_28.b = 0
int32_t var_f0 = rax_17.d
sub_142809ec0(&var_118, 
    (rax_16 + rax_17.d + (rax_17 << 3).d + ((rax_13 + r13_1.d) << 2) + rbx_2.d) << 2, &arg_28)
int32_t* r15_4 = (zx.q(rax_13) << 4) + var_110
void* r12_1 = &r15_4[rbx_2]
void* r13_3 = (r13_1 << 4) + r12_1
void* rcx_22 = (zx.q(rax_16) << 2) + r13_3
(*(*rsi + 0x2e0))(rsi, arg5, r15_4, r12_1, r13_3, rcx_22, var_118, var_110, var_108, var_100, 
    rax_13, var_f0)

if (rax_13 != 0 && var_110 != 0)
    int32_t rbx_3 = 0
    
    if (rax_13 != 0)
        void* r14_2 = var_110
        
        do
            char const* const rdx_14
            int64_t r8_5
            
            if (rbx_3 == 0 || (rbx_3.b & 3) != 0)
                r8_5 = 1
                rdx_14 = &data_1434cf410
            else
                r8_5 = 4
                rdx_14 = "\n\t\t\t"
            
            (**rdi)(rdi, rdx_14, r8_5)
            int64_t* rax_22 = sub_1427e39a0(rdi, r14_2)
            int64_t r9_3 = *rax_22
            (*r9_3)(rax_22, &data_1434cf410, 1, r9_3)
            memset(&var_c8, 0, 0x80)
            arg6 = _mm_cvtps_pd(*(r14_2 + 0xc))
            physx::shdfnd::snprintf(&var_c8, 0x80, "%g")
            
            if (var_c8[0] != 0)
                int64_t r8_6 = -1
                
                do
                    r8_6 += 1
                while (var_c8[r8_6] != 0)
                
                (**rax_22)(rax_22, &var_c8, r8_6)
            
            rbx_3 += 1
            r14_2 += 0x10
        while (rbx_3 u< rax_13)
    
    arg_28.b = 0
    (**rdi)(rdi, &arg_28, 1, arg6)
    (*(*arg4 + 0x10))(arg4, "CollisionSpheres", rdi[4])
    rbx_2 = zx.q(var_100)
    rdi[3] = 0

int64_t* rbx_5

if (rbx_2.d == 0 || r15_4 == 0)
    rbx_5 = arg4
else
    int32_t rbx_4 = 0
    
    if (var_100 != 0)
        do
            uint32_t rcx_32
            
            if (rbx_4 != 0)
                rcx_32 = rbx_4 u/ 0x12 * 9
            
            char const* const rdx_20
            int64_t r8_8
            
            if (rbx_4 == 0 || rbx_4 != rcx_32 * 2)
                r8_8 = 1
                rdx_20 = &data_1434cf410
            else
                r8_8 = 4
                rdx_20 = "\n\t\t\t"
            
            (**rdi)(rdi, rdx_20, r8_8)
            *r15_4
            sub_1427e3ab0(rdi)
            rbx_4 += 1
            r15_4 = &r15_4[1]
        while (rbx_4 u< var_100)
    
    arg_28.b = 0
    (**rdi)(rdi, &arg_28, 1)
    rbx_5 = arg4
    (*(*rbx_5 + 0x10))(rbx_5, "CollisionSpherePairs", rdi[4])
    rdi[3] = 0

if (var_f4 != 0 && r12_1 != 0)
    int32_t rbx_6 = 0
    
    if (var_f4 != 0)
        do
            char const* const rdx_23
            int64_t r8_10
            
            if (rbx_6 == 0 || (rbx_6.b & 3) != 0)
                r8_10 = 1
                rdx_23 = &data_1434cf410
            else
                r8_10 = 4
                rdx_23 = "\n\t\t\t"
            
            (**rdi)(rdi, rdx_23, r8_10)
            int64_t* rax_31 = sub_1427e39a0(rdi, r12_1)
            int64_t r9_4 = *rax_31
            (*r9_4)(rax_31, &data_1434cf410, 1, r9_4)
            memset(&var_c8, 0, 0x80)
            arg6 = _mm_cvtps_pd(*(r12_1 + 0xc))
            physx::shdfnd::snprintf(&var_c8, 0x80, "%g")
            
            if (var_c8[0] != 0)
                int64_t r8_11 = -1
                
                do
                    r8_11 += 1
                while (var_c8[r8_11] != 0)
                
                (**rax_31)(rax_31, &var_c8, r8_11)
            
            rbx_6 += 1
            r12_1 += 0x10
        while (rbx_6 u< var_f4)
    
    arg_28.b = 0
    (**rdi)(rdi, &arg_28, 1, arg6)
    rbx_5 = arg4
    (*(*rbx_5 + 0x10))(rbx_5, "CollisionPlanes", rdi[4])
    rdi[3] = 0

if (rax_16 != 0 && r13_3 != 0)
    int32_t rbx_7 = 0
    
    if (rax_16 != 0)
        do
            uint32_t rcx_46
            
            if (rbx_7 != 0)
                rcx_46 = rbx_7 u/ 0x12 * 9
            
            char const* const rdx_29
            int64_t r8_13
            
            if (rbx_7 == 0 || rbx_7 != rcx_46 * 2)
                r8_13 = 1
                rdx_29 = &data_1434cf410
            else
                r8_13 = 4
                rdx_29 = "\n\t\t\t"
            
            (**rdi)(rdi, rdx_29, r8_13)
            *r13_3
            sub_1427e3ab0(rdi)
            rbx_7 += 1
            r13_3 += 4
        while (rbx_7 u< rax_16)
    
    arg_28.b = 0
    (**rdi)(rdi, &arg_28, 1)
    rbx_5 = arg4
    (*(*rbx_5 + 0x10))(rbx_5, "CollisionConvexMasks", rdi[4])
    rdi[3] = 0

int32_t rbx_10

if (var_f0 == 0 || rcx_22 == 0)
    rbx_10 = 0
else
    int32_t rsi_6 = 0
    
    if (var_f0 != 0)
        void* r14_5 = rcx_22 + 0x18
        
        do
            char const* const rdx_32
            int64_t r8_15
            
            if (rsi_6 == 0 || (rsi_6.b & 3) != 0)
                r8_15 = 1
                rdx_32 = &data_1434cf410
            else
                r8_15 = 4
                rdx_32 = "\n\t\t\t"
            
            (**rdi)(rdi, rdx_32, r8_15)
            int64_t* rax_40 = sub_1427e39a0(rdi, r14_5 - 0x18)
            int64_t r9_5 = *rax_40
            (*r9_5)(rax_40, &data_1434cf410, 1, r9_5)
            int64_t* rax_41 = sub_1427e39a0(rax_40, r14_5 - 0xc)
            int64_t r9_6 = *rax_41
            (*r9_6)(rax_41, &data_1434cf410, 1, r9_6)
            sub_1427e39a0(rax_41, r14_5)
            rsi_6 += 1
            r14_5 += 0x24
        while (rsi_6 u< var_f0)
        
        rbx_5 = arg4
    
    arg_28.b = 0
    (**rdi)(rdi, &arg_28, 1)
    (*(*rbx_5 + 0x10))(rbx_5, "CollisionTriangles", rdi[4])
    rbx_10 = 0
    rdi[3] = 0

int64_t* r12_2 = arg_10
int32_t rax_45 = (*(*r12_2 + 0x1b0))(r12_2)
int32_t rdx_38 = rax_45 << 4

if (var_108.d u< rdx_38)
    arg_10.b = 0
    sub_142809ec0(&var_118, rdx_38, &arg_10)

void* r13_4 = var_110
(*(*r12_2 + 0x1a8))(r12_2, r13_4)

if (rax_45 != 0 && r13_4 != 0)
    if (rax_45 != 0)
        void* r14_6 = r13_4
        
        do
            char const* const rdx_40
            int64_t r8_18
            
            if (rbx_10 == 0 || (rbx_10.b & 3) != 0)
                r8_18 = 1
                rdx_40 = &data_1434cf410
            else
                r8_18 = 4
                rdx_40 = "\n\t\t\t"
            
            (**rdi)(rdi, rdx_40, r8_18)
            int64_t* rax_48 = sub_1427e39a0(rdi, r14_6)
            int64_t r9_7 = *rax_48
            (*r9_7)(rax_48, &data_1434cf410, 1, r9_7)
            memset(&var_c8, 0, 0x80)
            _mm_cvtps_pd(*(r14_6 + 0xc))
            physx::shdfnd::snprintf(&var_c8, 0x80, "%g")
            
            if (var_c8[0] != 0)
                int64_t r8_19 = -1
                
                do
                    r8_19 += 1
                while (var_c8[r8_19] != 0)
                
                (**rax_48)(rax_48, &var_c8, r8_19)
            
            rbx_10 += 1
            r14_6 += 0x10
        while (rbx_10 u< rax_45)
    
    arg_10.b = 0
    (**rdi)(rdi, &arg_10, 1)
    (*(*arg4 + 0x10))(arg4, "ParticleAccelerations", rdi[4])
    rbx_10 = 0
    rdi[3] = 0

void* rsi_8 = r13_4
int64_t rax_53 = (*(*r12_2 + 0x360))(r12_2)
int32_t r14_7 = rax_53.d
int32_t rdx_44 = (rax_53 << 2).d

if (var_108.d u< rdx_44)
    arg_10.b = 0
    sub_142809ec0(&var_118, rdx_44, &arg_10)
    r13_4 = var_110

int64_t r8_22 = *r12_2
(*(r8_22 + 0x358))(r12_2, rsi_8, r8_22)
int64_t* rsi_9

if (r14_7 == 0 || rsi_8 == 0)
    rsi_9 = arg4
else
    if (r14_7 != 0)
        do
            uint32_t rcx_74
            
            if (rbx_10 != 0)
                rcx_74 = rbx_10 u/ 0x12 * 9
            
            char const* const rdx_48
            int64_t r8_23
            
            if (rbx_10 == 0 || rbx_10 != rcx_74 * 2)
                r8_23 = 1
                rdx_48 = &data_1434cf410
            else
                r8_23 = 4
                rdx_48 = "\n\t\t\t"
            
            (**rdi)(rdi, rdx_48, r8_23)
            *rsi_8
            sub_1427e3ab0(rdi)
            rbx_10 += 1
            rsi_8 += 4
        while (rbx_10 u< r14_7)
    
    arg_10.b = 0
    (**rdi)(rdi, &arg_10, 1)
    rsi_9 = arg4
    (*(*rsi_9 + 0x10))(rsi_9, "SelfCollisionIndices", rdi[4])
    rbx_10 = 0
    rdi[3] = 0

void* r14_8 = r13_4
int32_t rax_59 = (*(*r12_2 + 0x1f8))(r12_2)
int32_t r13_5 = var_108.d
int32_t rdx_52 = rax_59 << 4

if (r13_5 u< rdx_52)
    arg_10.b = 0
    sub_142809ec0(&var_118, rdx_52, &arg_10)
    r13_5 = var_108.d

(*(*r12_2 + 0x1f0))(r12_2, r14_8)

if (rax_59 != 0 && r14_8 != 0)
    if (rax_59 != 0)
        do
            char const* const rdx_54
            int64_t r8_26
            
            if (rbx_10 == 0 || (rbx_10.b & 3) != 0)
                r8_26 = 1
                rdx_54 = &data_1434cf410
            else
                r8_26 = 4
                rdx_54 = "\n\t\t\t"
            
            (**rdi)(rdi, rdx_54, r8_26)
            int64_t* rax_62 = sub_1427e39a0(rdi, r14_8)
            int64_t r9_8 = *rax_62
            (*r9_8)(rax_62, &data_1434cf410, 1, r9_8)
            memset(&var_c8, 0, 0x80)
            _mm_cvtps_pd(*(r14_8 + 0xc))
            physx::shdfnd::snprintf(&var_c8, 0x80, "%g")
            
            if (var_c8[0] != 0)
                int64_t r8_27 = -1
                
                do
                    r8_27 += 1
                while (var_c8[r8_27] != 0)
                
                (**rax_62)(rax_62, &var_c8, r8_27)
            
            rbx_10 += 1
            r14_8 += 0x10
        while (rbx_10 u< rax_59)
        
        rsi_9 = arg4
    
    arg_10.b = 0
    (**rdi)(rdi, &arg_10, 1)
    (*(*rsi_9 + 0x10))(rsi_9, "MotionConstraints", rdi[4])
    rbx_10 = 0
    rdi[3] = 0

int32_t rax_67 = (*(*r12_2 + 0x220))(r12_2)
int32_t rdx_59 = rax_67 << 4

if (r13_5 u< rdx_59)
    arg_10.b = 0
    sub_142809ec0(&var_118, rdx_59, &arg_10)

void* r13_6 = var_110
(*(*r12_2 + 0x218))(r12_2, r13_6)

if (rax_67 != 0 && r13_6 != 0)
    if (rax_67 != 0)
        void* r14_9 = r13_6
        
        do
            char const* const rdx_61
            int64_t r8_30
            
            if (rbx_10 == 0 || (rbx_10.b & 3) != 0)
                r8_30 = 1
                rdx_61 = &data_1434cf410
            else
                r8_30 = 4
                rdx_61 = "\n\t\t\t"
            
            (**rdi)(rdi, rdx_61, r8_30)
            int64_t* rax_70 = sub_1427e39a0(rdi, r14_9)
            int64_t r9_9 = *rax_70
            (*r9_9)(rax_70, &data_1434cf410, 1, r9_9)
            memset(&var_c8, 0, 0x80)
            _mm_cvtps_pd(*(r14_9 + 0xc))
            physx::shdfnd::snprintf(&var_c8, 0x80, "%g")
            
            if (var_c8[0] != 0)
                int64_t r8_31 = -1
                
                do
                    r8_31 += 1
                while (var_c8[r8_31] != 0)
                
                (**rax_70)(rax_70, &var_c8, r8_31)
            
            rbx_10 += 1
            r14_9 += 0x10
        while (rbx_10 u< rax_67)
        
        rsi_9 = arg4
    
    arg_10.b = 0
    (**rdi)(rdi, &arg_10, 1)
    (*(*rsi_9 + 0x10))(rsi_9, "SeparationConstraints", rdi[4])
    rbx_10 = 0
    rdi[3] = 0

int32_t rax_75 = (*(*r12_2 + 0x378))(r12_2)
int32_t rdx_66 = rax_75 << 4

if (var_108.d u< rdx_66)
    arg_10.b = 0
    sub_142809ec0(&var_118, rdx_66, &arg_10)
    r13_6 = var_110

(*(*r12_2 + 0x370))(r12_2, r13_6)

if (rax_75 != 0 && r13_6 != 0)
    if (rax_75 != 0)
        void* r14_10 = r13_6
        
        do
            char const* const rdx_68
            int64_t r8_34
            
            if (rbx_10 == 0 || (rbx_10.b & 3) != 0)
                r8_34 = 1
                rdx_68 = &data_1434cf410
            else
                r8_34 = 4
                rdx_68 = "\n\t\t\t"
            
            (**rdi)(rdi, rdx_68, r8_34)
            int64_t* rax_78 = sub_1427e39a0(rdi, r14_10)
            int64_t r9_10 = *rax_78
            (*r9_10)(rax_78, &data_1434cf410, 1, r9_10)
            memset(&var_c8, 0, 0x80)
            _mm_cvtps_pd(*(r14_10 + 0xc))
            physx::shdfnd::snprintf(&var_c8, 0x80, "%g")
            
            if (var_c8[0] != 0)
                int64_t r8_35 = -1
                
                do
                    r8_35 += 1
                while (var_c8[r8_35] != 0)
                
                (**rax_78)(rax_78, &var_c8, r8_35)
            
            rbx_10 += 1
            r14_10 += 0x10
        while (rbx_10 u< rax_75)
        
        rsi_9 = arg4
    
    arg_10.b = 0
    (**rdi)(rdi, &arg_10, 1)
    (*(*rsi_9 + 0x10))(rsi_9, "RestPositions", rdi[4])
    rdi[3] = 0

int64_t rax_83 = (*(*r12_2 + 0x2f0))(r12_2)
int64_t rdx_72 = *r12_2
int32_t r15_10 = (rax_83 << 2).d
uint64_t r14_11 = zx.q((*(rdx_72 + 0x300))(r12_2, rdx_72))
uint64_t r8_38 = zx.q(r15_10) << 2
uint64_t rax_86 = r14_11 * 0xc

if (rax_86 u< r8_38)
    rax_86 = zx.q(r8_38.d)

if (var_108.d u< rax_86.d)
    arg_10.b = 0
    sub_142809ec0(&var_118, rax_86.d, &arg_10)
    r13_6 = var_110

(*(*r12_2 + 0x308))(r12_2, r13_6)

if (r14_11.d != 0 && r13_6 != 0)
    int32_t i = 0
    
    if (r14_11.d != 0)
        void* rsi_13 = r13_6
        
        do
            uint32_t rcx_117
            
            if (i != 0)
                rcx_117 = i u/ 6 * 3
            
            char const* const rdx_77
            int64_t r8_40
            
            if (i == 0 || i != rcx_117 * 2)
                r8_40 = 1
                rdx_77 = &data_1434cf410
            else
                r8_40 = 4
                rdx_77 = "\n\t\t\t"
            
            (**rdi)(rdi, rdx_77, r8_40)
            sub_1427e39a0(rdi, rsi_13)
            i += 1
            rsi_13 += 0xc
        while (i u< r14_11.d)
        
        rsi_9 = arg4
    
    arg_10.b = 0
    (**rdi)(rdi, &arg_10, 1)
    (*(*rsi_9 + 0x10))(rsi_9, "VirtualParticleWeights", rdi[4])
    rdi[3] = 0

(*(*r12_2 + 0x2f8))(r12_2, r13_6)

if (r15_10 != 0 && r13_6 != 0)
    int32_t rbx_11 = 0
    
    if (r15_10 != 0)
        void* rsi_14 = r13_6
        
        do
            uint32_t rcx_124
            
            if (rbx_11 != 0)
                rcx_124 = rbx_11 u/ 0x12 * 9
            
            char const* const rdx_83
            int64_t r8_42
            
            if (rbx_11 == 0 || rbx_11 != rcx_124 * 2)
                r8_42 = 1
                rdx_83 = &data_1434cf410
            else
                r8_42 = 4
                rdx_83 = "\n\t\t\t"
            
            (**rdi)(rdi, rdx_83, r8_42)
            *rsi_14
            sub_1427e3ab0(rdi)
            rbx_11 += 1
            rsi_14 += 4
        while (rbx_11 u< r15_10)
        
        rsi_9 = arg4
    
    arg_10.b = 0
    (**rdi)(rdi, &arg_10, 1)
    (*(*rsi_9 + 0x10))(rsi_9, "VirtualParticles", rdi[4])
    rdi[3] = 0

int64_t* var_e8 = rdi[2]
int64_t* var_128_1 = arg3
int64_t var_e0 = 0
int64_t var_d8 = 0
sub_1427e1380(&var_e8, r12_2)
int32_t rax_99 = var_d8:4.d

if ((rax_99 & 0x7fffffff) != 0 && rax_99 s>= 0 && var_e0 != 0)
    int64_t* rcx_131 = *var_e8
    (*(*rcx_131 + 0x10))(rcx_131, var_e0)

int32_t result = var_108:4.d

if ((result & 0x7fffffff) == 0 || result s< 0 || r13_6 == 0)
    return result

int64_t* rcx_132 = *var_118
return (*(*rcx_132 + 0x10))(rcx_132, r13_6)
