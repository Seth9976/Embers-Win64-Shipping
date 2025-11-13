// 函数: sub_1422675f0
// 地址: 0x1422675f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
char r14 = 0
int32_t arg_18 = 0
int32_t* arg_28
int32_t* rsi = arg_28
void* r15 = arg2
int64_t* rbx = arg1
sub_141f851c0(arg1, arg2, arg3, arg4, rsi)
int64_t* rdi = r15 + 0x98
int64_t rax = *rdi
int128_t var_b0 = data_142f2cb30
(*(rax + 0x20))(rdi, &var_b0)
arg_18 = 0
int32_t var_e8
int64_t* rax_2 = sub_140b63b70(sub_141f8b910(rbx, &var_e8), &var_b0)
int16_t* const r12 = &data_142d40450
int16_t* const r8

if (rax_2[1].d == 0)
    r8 = &data_142d40450
else
    r8 = *rax_2

int16_t* var_a0
sub_140a2e390(&var_a0, u"STATE %s", r8)
sub_142409af0(rdi, &var_a0, &arg_18)
int16_t* rcx_5 = var_a0

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = var_b0.q

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int32_t var_d4 = 0
int32_t rcx_8 = *sub_140b5e500(&arg_18, 0x65)
int64_t rax_4 = sx.q(arg3[1].d)
int32_t var_d8 = rcx_8
int64_t var_c0

for (int64_t* i = *arg3; i != &i[rax_4]; i = &i[1])
    if (*i == var_d8.q)
        int32_t var_e0
        int32_t var_dc
        
        if (rbx[0x57] == 0)
            uint32_t rax_9 = zx.d(data_14399f638:1.b)
            uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(data_14399f638:2.b))
            uint32_t rax_10 = zx.d(data_14399f638.b)
            zmm0_1.d = zmm0_1.d f* 0.00392156886f
            uint128_t zmm1_1
            zmm1_1.d = _mm_cvtepi32_ps(zx.o(rax_9)).d f* 0.00392156886f
            var_c0.d = zmm0_1.d
            uint32_t rax_11 = zx.d(data_14399f638:3.b)
            var_c0:4.d = zmm1_1.d
            zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_10))
            int64_t rax_12 = *rdi
            zmm0_1.d = zmm0_1.d f* 0.00392156886f
            zmm1_1.d = _mm_cvtepi32_ps(zx.o(rax_11)).d f* 0.00392156886f
            int64_t var_b8
            var_b8.d = zmm0_1.d
            var_b8:4.d = zmm1_1.d
            (*(rax_12 + 0x20))(rdi, &var_c0)
            arg_18 = 0
            var_e8.q = 0
            var_e0.q = 0
            sub_1405947f0(&var_e8, 0x14)
            int32_t var_e0_2 = var_e0 + 0x14
            
            if (var_e0 + 0x14 s> var_dc)
                sub_140594770(&var_e8)
            
            UnDecorator::getReferenceType(var_e8.q, u"<<<< NO CAMERA >>>>", 0x28)
            sub_142409af0(rdi, &var_e8, &arg_18)
            int64_t rcx_20 = var_e8.q
            
            if (rcx_20 != 0)
                sub_140a74f90(rcx_20)
        else
            arg_18 = 0
            var_e8.q = 0
            var_e0.q = 0
            sub_1405947f0(&var_e8, 0x11)
            int32_t var_e0_1 = var_e0 + 0x11
            
            if (var_e0 + 0x11 s> var_dc)
                sub_140594770(&var_e8)
            
            UnDecorator::getReferenceType(var_e8.q, u"<<<< CAMERA >>>>", 0x22)
            sub_142409af0(rdi, &var_e8, &arg_18)
            int64_t rcx_13 = var_e8.q
            
            if (rcx_13 != 0)
                sub_140a74f90(rcx_13)
            
            int64_t* rcx_14 = rbx[0x57]
            (*(*rcx_14 + 0x620))(rcx_14, r15, arg3, arg4, rsi)
        break

int32_t* rax_14
int32_t zmm6
rax_14, zmm6 = sub_140b5e500(&arg_18, 0xce)
int32_t var_d4_1 = 0
int64_t rax_15 = sx.q(arg3[1].d)
var_d8 = *rax_14
int32_t var_d0
int64_t var_90

for (int64_t* i_1 = *arg3; i_1 != &i_1[rax_15]; i_1 = &i_1[1])
    if (*i_1 == var_d8.q)
        int64_t rax_17 = *rbx
        var_c0 = 0
        int32_t var_b8_1 = 0
        (*(rax_17 + 0xc60))(rbx, &var_c0)
        uint32_t rax_19 = zx.d(data_14399f630:1.b)
        uint128_t zmm0_2 = _mm_cvtepi32_ps(zx.o(data_14399f630:2.b))
        uint32_t rax_20 = zx.d(data_14399f630.b)
        zmm0_2.d = zmm0_2.d f* zmm6
        uint128_t zmm1_2
        zmm1_2.d = _mm_cvtepi32_ps(zx.o(rax_19)).d f* zmm6
        var_e8 = zmm0_2.d
        uint32_t rax_21 = zx.d(data_14399f630:3.b)
        int32_t var_e4_1 = zmm1_2.d
        zmm0_2 = _mm_cvtepi32_ps(zx.o(rax_20))
        int64_t rax_22 = *rdi
        zmm0_2.d = zmm0_2.d f* zmm6
        zmm1_2.d = _mm_cvtepi32_ps(zx.o(rax_21)).d f* zmm6
        int32_t var_e0_3 = zmm0_2.d
        int32_t var_dc_1 = zmm1_2.d
        (*(rax_22 + 0x20))(rdi, &var_e8)
        arg_18 = 0
        var_e8.q = 0
        var_e0_3.q = 0
        sub_1405947f0(&var_e8, 0x15)
        int32_t var_e0_4 = var_e0_3 + 0x15
        
        if (var_e0_3 + 0x15 s> var_dc_1)
            sub_140594770(&var_e8)
        
        UnDecorator::getReferenceType(var_e8.q, u"<<<< INPUT STACK >>>", 0x2a)
        int32_t zmm6_1 = sub_142409af0(rdi, &var_e8, &arg_18)
        int64_t rcx_29 = var_e8.q
        
        if (rcx_29 != 0)
            sub_140a74f90(rcx_29)
        
        int64_t rsi_1 = sx.q(var_b8_1 - 1)
        uint128_t zmm0_3
        uint128_t zmm1_3
        
        if (var_b8_1 - 1 s>= 0)
            int64_t temp1_1
            
            do
                void* r15_1 = *(*(var_c0 + (rsi_1 << 3)) + 0xa0)
                uint32_t rax_28 = zx.d(data_14399f630:1.b)
                zmm0_3 = _mm_cvtepi32_ps(zx.o(data_14399f630:2.b))
                uint32_t rax_29 = zx.d(data_14399f630.b)
                zmm0_3.d = zmm0_3.d f* zmm6_1
                zmm1_3.d = _mm_cvtepi32_ps(zx.o(rax_28)).d f* zmm6_1
                var_d0 = zmm0_3.d
                uint32_t rax_30 = zx.d(data_14399f630:3.b)
                int32_t var_cc_1 = zmm1_3.d
                zmm0_3 = _mm_cvtepi32_ps(zx.o(rax_29))
                int64_t rax_31 = *rdi
                zmm0_3.d = zmm0_3.d f* zmm6_1
                zmm1_3.d = _mm_cvtepi32_ps(zx.o(rax_30)).d f* zmm6_1
                int32_t var_c8_1 = zmm0_3.d
                int32_t var_c4_1 = zmm1_3.d
                (*(rax_31 + 0x20))(rdi, &var_d0)
                int64_t rax_32 = var_c0
                arg_18 = 0
                int64_t rax_33 = *(*(rax_32 + (rsi_1 << 3)) + 0x18)
                int16_t* rcx_43
                
                if (r15_1 == 0)
                    var_e8.q = rax_33
                    sub_140b63b70(&var_e8, &var_a0)
                    int16_t* r8_8 = &data_142d40450
                    int32_t var_98
                    
                    if (var_98 != 0)
                        r8_8 = var_a0
                    
                    sub_140a2e390(&var_b0, u" %s", r8_8)
                    zmm6_1 = sub_142409af0(rdi, &var_b0, &arg_18)
                    int64_t rcx_42 = var_b0.q
                    
                    if (rcx_42 != 0)
                        sub_140a74f90(rcx_42)
                    
                    rcx_43 = var_a0
                else
                    var_d8.q = rax_33
                    int16_t* var_70
                    sub_140b63b70(&var_d8, &var_70)
                    var_e8.q = *(r15_1 + 0x18)
                    int16_t* var_80
                    sub_140b63b70(&var_e8, &var_80)
                    int16_t* const r8_6 = &data_142d40450
                    int32_t var_78
                    
                    if (var_78 != 0)
                        r8_6 = var_80
                    
                    sub_140a2e390(&var_90, u" %s.%s", r8_6)
                    zmm6_1 = sub_142409af0(rdi, &var_90, &arg_18)
                    int64_t rcx_37 = var_90
                    
                    if (rcx_37 != 0)
                        sub_140a74f90(rcx_37)
                    
                    int16_t* rcx_38 = var_80
                    
                    if (rcx_38 != 0)
                        sub_140a74f90(rcx_38)
                    
                    rcx_43 = var_70
                
                if (rcx_43 != 0)
                    sub_140a74f90(rcx_43)
                
                temp1_1 = rsi_1
                rsi_1 -= 1
            while (temp1_1 - 1 s>= 0)
            rbx = arg1
            r15 = arg_10
        
        int64_t* rcx_44 = rbx[0x69]
        
        if (rcx_44 == 0)
            uint32_t rax_37 = zx.d(data_14399f638:1.b)
            zmm0_3 = _mm_cvtepi32_ps(zx.o(data_14399f638:2.b))
            uint32_t rax_38 = zx.d(data_14399f638.b)
            zmm0_3.d = zmm0_3.d f* zmm6_1
            zmm1_3.d = _mm_cvtepi32_ps(zx.o(rax_37)).d f* zmm6_1
            var_d0 = zmm0_3.d
            uint32_t rax_39 = zx.d(data_14399f638:3.b)
            int32_t var_cc_2 = zmm1_3.d
            zmm0_3 = _mm_cvtepi32_ps(zx.o(rax_38))
            int64_t rax_40 = *rdi
            zmm0_3.d = zmm0_3.d f* zmm6_1
            zmm1_3.d = _mm_cvtepi32_ps(zx.o(rax_39)).d f* zmm6_1
            int32_t var_c8_2 = zmm0_3.d
            int32_t var_c4_2 = zmm1_3.d
            (*(rax_40 + 0x20))(rdi, &var_d0)
            arg_10.d = 0
            var_e8.q = 0
            var_e0_4.q = 0
            sub_1405947f0(&var_e8, 9)
            int32_t var_e0_5 = var_e0_4 + 9
            
            if (var_e0_4 + 9 s> var_dc_1)
                sub_140594770(&var_e8)
            
            UnDecorator::getReferenceType(var_e8.q, u"NO INPUT", 0x12)
            sub_142409af0(rdi, &var_e8, &arg_10)
            int64_t rcx_50 = var_e8.q
            
            if (rcx_50 != 0)
                sub_140a74f90(rcx_50)
            
            rsi = arg_28
        else
            rsi = arg_28
            (*(*rcx_44 + 0x278))(rcx_44, r15, arg3, arg4, rsi)
        
        int64_t rcx_51 = var_c0
        
        if (rcx_51 != 0)
            sub_140a74f90(rcx_51)
        
        break

int64_t* rax_42
int32_t zmm6_2
rax_42, zmm6_2 = sub_140b58170(&arg_28, "ForceFeedback", 1)

for (int64_t* i_2 = *arg3; i_2 != &i_2[sx.q(arg3[1].d)]; i_2 = &i_2[1])
    if (*i_2 == *rax_42)
        uint32_t rax_45 = zx.d(data_14399f630:1.b)
        uint128_t zmm0_4 = _mm_cvtepi32_ps(zx.o(data_14399f630:2.b))
        uint32_t rax_46 = zx.d(data_14399f630.b)
        zmm0_4.d = zmm0_4.d f* zmm6_2
        uint128_t zmm1_4
        zmm1_4.d = _mm_cvtepi32_ps(zx.o(rax_45)).d f* zmm6_2
        var_d0 = zmm0_4.d
        uint32_t rax_47 = zx.d(data_14399f630:3.b)
        int32_t var_cc_3 = zmm1_4.d
        zmm0_4 = _mm_cvtepi32_ps(zx.o(rax_46))
        int64_t rax_48 = *rdi
        zmm0_4.d = zmm0_4.d f* zmm6_2
        zmm1_4.d = _mm_cvtepi32_ps(zx.o(rax_47)).d f* zmm6_2
        int32_t var_c8_3 = zmm0_4.d
        int32_t var_c4_3 = zmm1_4.d
        (*(rax_48 + 0x20))(rdi, &var_d0)
        zmm1_4 = rbx[0x77].d
        wchar16 const* const r8_13 = u"false"
        float zmm3_1[0x2] = rbx[0x76].d
        float zmm2_1[0x2] = *(rbx + 0x3b4)
        bool cond:0_1 = (rbx[0x87].b & 0x20) != 0
        zmm0_4 = _mm_cvtps_pd((*(rbx + 0x3bc)).q)
        
        if (cond:0_1)
            r8_13 = u"true"
        
        arg_28.d = 0
        zmm1_4 = _mm_cvtps_pd(zmm1_4.q)
        uint64_t var_f8_1 = zmm0_4.q
        _mm_cvtps_pd(zmm3_1)
        uint64_t var_100_1 = zmm1_4.q
        float var_108_3[0x2] = _mm_cvtps_pd(zmm2_1)
        sub_140a2e390(&var_b0, Force Feedback - Enabled: %s LL: %.2f LS: %.2f RL: %.2f RS: %.2f", 
            r8_13)
        sub_142409af0(rdi, &var_b0, &arg_28)
        int64_t rcx_57 = var_b0.q
        
        if (rcx_57 != 0)
            sub_140a74f90(rcx_57)
        
        void* rax_49 = rbx[0x54]
        arg_28.d = 0
        
        if (rax_49 == 0)
            r12 = u"none"
        else
            arg_10 = *(rax_49 + 0x18)
            int16_t** rax_51 = sub_140b63b70(&arg_10, &var_90)
            
            if (rax_51[1].d != 0)
                r12 = *rax_51
            
            r14 = 1
        
        sub_140a2e390(&var_b0, u"Pawn: %s", r12)
        sub_142409af0(rdi, &var_b0, &arg_28)
        int64_t rcx_61 = var_b0.q
        
        if (rcx_61 != 0)
            sub_140a74f90(rcx_61)
        
        if ((r14 & 1) != 0)
            int64_t rcx_62 = var_90
            
            if (rcx_62 != 0)
                sub_140a74f90(rcx_62)
        
        break

int32_t result = *(rdi + 0x1ac)
*rsi = result
return result
