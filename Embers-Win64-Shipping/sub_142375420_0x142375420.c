// 函数: sub_142375420
// 地址: 0x142375420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int512_t zmm1 = sub_140ce8e10(arg1, arg2)
int64_t* rdx = arg2[1]
int64_t rcx = *rdx
int32_t arg_8
bool cond:1

if (rcx + 4 u> rdx[1])
    int32_t rax_2
    rax_2.b = arg2[0xe] != 0
    arg_8 = rax_2
    (*(*arg2 + 0x150))(arg2, &arg_8, 4)
    cond:1 = arg_8 != 0
else
    cond:1 = *rcx != 0
    *rdx = rcx + 4

uint64_t r15
r15.b = cond:1
int16_t* const r12 = &data_142d40450
char arg_10 = r15.b
int16_t* var_d8

if (r15.b == 0 && (arg2[5].b & 1) != 0)
    int64_t* rax_4 = sub_140d21830(arg1, &var_d8, 0, 0)
    int16_t* const r9_1
    
    if (rax_4[1].d == 0)
        r9_1 = &data_142d40450
    else
        r9_1 = *rax_4
    
    zmm1 = sub_140af98a0("Unknown", 0x13f, 
        This platform requires cooked packages, and audio data was not cooked into %s.", r9_1)
    int16_t* rcx_3 = var_d8
    
    if (rcx_3 != 0)
        zmm1 = sub_140a74f90(rcx_3)
    
    sub_140afbb40()

(*(*arg2 + 0x1d8))(arg2, &data_1439a9418)

if ((arg2[5].b & 1) != 0 && arg2[8].d s>= 0x188)
    int32_t rax_6
    rax_6, zmm1 = sub_140b4e7c0(arg2, &data_1439a9418)
    
    if (rax_6 s< 0xc)
        arg_8.q = 0
        (*(*arg2 + 0x140))(arg2, &arg_8)

uint64_t r14
r14.b = 0
arg_8.b = 0

if ((arg2[5].b & 2) != 0 || arg2[0xe] != 0)
    int64_t* rcx_8 = arg2[0xe]
    
    if (rcx_8 != 0)
        int16_t** rax_10 = (*(*rcx_8 + 0x38))(rcx_8, &var_d8)
        int16_t* rdx_5
        
        if (rax_10[1].d == 0)
            rdx_5 = &data_142d40450
        else
            rdx_5 = *rax_10
        
        char rax_11
        rax_11, zmm1 = sub_14236bfb0(arg1, rdx_5)
        int16_t* rcx_10 = var_d8
        r14 = zx.q(rax_11)
        arg_8.b = rax_11
        
        if (rcx_10 != 0)
            zmm1 = sub_140a74f90(rcx_10)
else
    char rax_8
    rax_8, zmm1 = sub_14236bfb0(arg1, nullptr)
    r14 = zx.q(rax_8)
    arg_8.b = rax_8

int64_t r13
r13.b = 0

if ((arg2[5].b & 1) == 0)
    int64_t* rcx_11 = arg2[0xe]
    
    if (rcx_11 != 0)
        r13 = 0
        
        if ((*(*rcx_11 + 0xd8))(rcx_11, 0) != 0)
            r13 = 1
else
    r13 = 1

char var_e8
char var_e0

if (r15.b == 0)
    zmm1 = sub_140bcfa90(&arg1[0x54], arg2, arg1, zmm1, 0xff, 0)
else if (r14.b == 0 || r13.b == 0)
    int64_t* r15_1 = arg2[0xe]
    
    if (r15_1 == 0)
        var_e0 = 0
        var_e8 = 1
        zmm1 = sub_140bd01d0(&arg1[0x5a], arg2, arg1, nullptr, zmm1, 1, 0, 1)
    else
        int64_t* var_c8 = nullptr
        int32_t var_c0_1 = 0
        
        if ((*(*r15_1 + 0x98))(r15_1) == 0)
            int64_t arg_18
            (*(*r15_1 + 0x160))(r15_1, &arg_18, arg1)
            int64_t var_b0
            int64_t* rax_18 = (*(*r15_1 + 0x38))(r15_1, &var_b0)
            int16_t* rcx_15
            
            if (rax_18[1].d == 0)
                rcx_15 = &data_142d40450
            else
                rcx_15 = *rax_18
            
            char* rax_19
            rax_19, zmm1 = sub_141e5f7c0(rcx_15)
            int64_t rcx_16 = var_b0
            char* rsi_1 = rax_19
            
            if (rcx_16 != 0)
                zmm1 = sub_140a74f90(rcx_16)
            
            int64_t r9_2 = *arg1
            (*(r9_2 + 0x338))(arg1, arg_18, rsi_1, r9_2)
            
            if (rsi_1 == 0)
                int64_t rsi_5 = sx.q(var_c0_1)
                int32_t rax_28 = (rsi_5 + 1).d
                var_c0_1 = rax_28
                
                if (rax_28 s> 0)
                    sub_1405a4d70(&var_c8)
                
                var_c8[rsi_5] = arg_18
            else
                int64_t var_a0
                int64_t* rax_20 = sub_140b63b70(&arg_18, &var_a0)
                int16_t* r14_1
                
                if (rax_20[1].d == 0)
                    r14_1 = &data_142d40450
                else
                    r14_1 = *rax_20
                
                int32_t rdx_11 = 0
                var_d8 = nullptr
                int32_t rcx_19 = 0
                int64_t var_d0_1 = 0
                
                if (r14_1 != 0 && *r14_1 != 0)
                    int64_t rsi_2 = -1
                    
                    do
                        rsi_2 += 1
                    while (r14_1[rsi_2] != 0)
                    
                    if (rsi_2.d + 1 s> 0)
                        sub_1405947f0(&var_d8, rsi_2.d + 1)
                        rcx_19 = var_d0_1:4.d
                        rdx_11 = var_d0_1.d
                    
                    int32_t rax_21 = rdx_11 + rsi_2.d + 1
                    var_d0_1.d = rax_21
                    
                    if (rax_21 s> rcx_19)
                        sub_140594770(&var_d8)
                    
                    UnDecorator::getReferenceType(var_d8, r14_1, (rsi_2.d + 1) * 2)
                    rsi_1 = rax_19
                
                int64_t rcx_23 = var_a0
                
                if (rcx_23 != 0)
                    sub_140a74f90(rcx_23)
                
                sub_142364d30(rsi_1, &var_d8)
                
                if (var_d0_1.d != 0)
                    r12 = var_d8
                
                int64_t var_b8
                zmm1 = sub_140b58260(&var_b8, r12, 1)
                int64_t rsi_4 = sx.q(var_c0_1)
                int32_t rax_22 = (rsi_4 + 1).d
                var_c0_1 = rax_22
                
                if (rax_22 s> 0)
                    sub_1405a4d70(&var_c8)
                
                var_c8[rsi_4] = var_b8
                int16_t* rcx_28 = var_d8
                
                if (rcx_28 != 0)
                    zmm1 = sub_140a74f90(rcx_28)
                
                r14 = zx.q(arg_8.b)
        
        char rax_25 = (*(*r15_1 + 0xd8))(r15_1, 0x13)
        char rax_27
        
        if (rax_25 != 0)
            rax_27 = (*(*r15_1 + 0xd8))(r15_1, 0x14)
        
        char rdx_17
        
        if (rax_25 == 0 || rax_27 == 0)
            rdx_17 = 0
        else
            rdx_17 = 1
        
        var_e0 = rdx_17
        var_e8 = rdx_17 ^ 1
        zmm1 = sub_140bd01d0(&arg1[0x5a], arg2, arg1, &var_c8, zmm1, 1, 0, var_e8)
        int64_t* rcx_33 = var_c8
        
        if (rcx_33 != 0)
            zmm1 = sub_140a74f90(rcx_33)
    
    r15 = zx.q(arg_10)

int32_t result = sub_1409ac860(arg2, &arg1[0x58], zmm1)

if (r14.b != 0 && r15.b != 0 && r13.b != 0)
    result = sub_141e6b5f0(arg1, arg2, zmm1)

if ((arg2[5].b & 1) != 0)
    uint128_t zmm0_1
    
    if ((*(arg1 + 0x16d) & 1) == 0)
        char rax_31 = *(arg1 + 0x16e)
        
        if ((rax_31 & 4) != 0)
            zmm0_1 = arg1[0x3c].d
        else if ((rax_31 & 8) == 0)
            zmm0_1 = sub_141e630f0(arg1[0x2d].b)
            arg1[0x3c].d = zmm0_1.d
            uint128_t zmm1_1
            
            if (not(zmm0_1.d f< 0f))
                zmm1_1 = _mm_cvtepi32_ps(zx.o(arg1[0x41].d))
            
            if (zmm0_1.d f< 0f || not(zmm1_1.d f>= zmm0_1.d))
                zmm0_1 = _mm_cvtepi32_ps(zx.o(arg1[0x41].d))
                arg1[0x3c].d = zmm0_1.d
            
            *(arg1 + 0x16e) |= 4
        else
            zmm0_1 = _mm_cvtepi32_ps(zx.o(arg1[0x41].d))
            *(arg1 + 0x16e) = rax_31 | 4
            arg1[0x3c].d = zmm0_1.d
    else
        zmm0_1 = _mm_cvtepi32_ps(zx.o(arg1[0x41].d))
    
    arg1[0x41].d = int.d(zmm0_1.d)
    result = sub_141e644e0()
    
    if (result.b != 0)
        void* rax_33 = arg1[0x5d]
        
        if (rax_33 == 0)
            result = 0
        else
            result = *(rax_33 + 0x18)
        
        char rcx_39 = *(arg1 + 0x16c)
        
        if (rcx_39 != 1)
            if (rcx_39 == 2 && result u> 1)
                int64_t* rax_35 = sub_1405f7040(sub_141f88540())
                int64_t var_78_1 = 0
                void** const var_68_1 = &data_142d42d18
                int64_t (* var_88)() = sub_140594850
                return (*(*rax_35 + 0xe8))(rax_35, arg1, 1, &var_88, 0xff, 0, var_e8, var_e0)
        else if (result u> 1)
            return sub_142374470(arg1, rcx_39)

return result
