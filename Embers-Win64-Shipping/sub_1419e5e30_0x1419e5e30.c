// 函数: sub_1419e5e30
// 地址: 0x1419e5e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x28)
*(arg1 + 0x60) = rax
*(arg1 + 0x64) = rax
int128_t zmm6
float zmm7
zmm6, zmm7 = sub_1419e0fb0(arg1)
*(arg1 + 0x38) += 1
void* rsi = arg1 + 0x50
*(rsi + 8) = 0

if (*(rsi + 0xc) != 0)
    sub_1405c5570(rsi, 0)

int32_t i = 0
int64_t* var_108 = nullptr
int64_t var_100 = 0

if (*(arg1 + 0x30) s> 0)
    float var_58_1 = zmm7
    
    do
        sub_140d19010(arg1, 
            NewObject with empty name can't be used to create default subobjects (inside of UObject "
        "derived class constructor) as it produces incon")
        void* rax_2
        int128_t zmm2_1
        int128_t zmm3_1
        float zmm6_1
        float zmm7_1
        rax_2, zmm2_1, zmm3_1, zmm6_1, zmm7_1 =
            sub_140d2dfc0(sub_1419e8550(), arg1, 0, 0, 0, 0, 0, 0, 0)
        int32_t rcx_4 = *(arg1 + 0x64) * 0xbb38435 + 0x3619636b
        *(arg1 + 0x64) = rcx_4
        int32_t rax_3 = 0
        
        if (0 == *(arg1 + 0x38))
            *(arg1 + 0x38) = 0
        else
            rax_3 = *(arg1 + 0x38)
        
        void* var_f8 = rax_2
        int64_t var_98[0x2]
        var_98[0] = 0
        int64_t var_88_1 = 0
        void* var_f0_1 = arg1
        int32_t rdx
        int32_t var_e4_1 = rdx
        int32_t var_e0_1 = rax_3
        int32_t var_e8_1 = int.d(((rcx_4 u>> 9 | 0x3f800000) - zmm6_1) * zmm7_1)
        void* var_d8
        void** rax_4 = sub_1419dda50(&var_d8, 3, &var_f8, &var_98, zmm2_1, zmm3_1)
        int64_t r15_1 = sx.q(var_100.d)
        int32_t rcx_9 = (r15_1 + 1).d
        var_100.d = rcx_9
        
        if (rcx_9 s> var_100:4.d)
            sub_1405a4f90(&var_108)
        
        void** rcx_13 = &var_108[r15_1 * 2]
        *rcx_13 = *rax_4
        rcx_13[1] = rax_4[1]
        rax_4[1] = 0
        *rax_4 = nullptr
        int64_t* var_d0
        
        if (var_d0 != 0)
            var_d0[1].d -= 1
            
            if (var_d0[1].d == 1)
                (**var_d0)(var_d0)
                int32_t rax_9 = *(var_d0 + 0xc)
                *(var_d0 + 0xc) -= 1
                
                if (rax_9 == 1)
                    (*(*var_d0 + 8))(var_d0, 1)
        
        i += 1
    while (i s< *(arg1 + 0x30))

void var_c8
_vfprintf_p_l(&var_c8, u"Simulate ProceduralFoliage...", u"ProceduralFoliage")
sub_140b0e800(data_143ddb418, &var_c8, 1, 1)
int32_t r12
r12.b = 0
int32_t r15_2 = 0

if (var_100.d s> 0)
    int64_t* r14 = var_108
    
    while (true)
        void* rbx_3 = *r14
        bool rax_15
        
        if (rbx_3 == 0)
            rax_15 = false
        else
            int64_t* r9_4 = *(rbx_3 + 0x70)
            int64_t rdx_7 = int.q(1000000.0) s/ 0x2710
            int32_t rcx_19
            
            if (int.q(1000000.0) s/ 0x2710 s>= 0)
                rcx_19 = -1
                
                if (rdx_7 s< 0xffffffff)
                    rcx_19 = rdx_7.d
            else
                rcx_19 = 0
            
            rax_15 = (*(*r9_4 + 0x20))(r9_4, zx.q(rcx_19), 0)
            rbx_3 = *r14
            rax_15 = rax_15 != 0
        
        if (rax_15 != 0)
            while (true)
                bool z_1
                
                if (0 == *(rbx_3 + 0x78))
                    *(rbx_3 + 0x78) = 0
                    z_1 = true
                else
                    int64_t rax_23
                    rax_23.b = *(rbx_3 + 0x78)
                    z_1 = false
                
                if (not(z_1))
                    break
                
                int64_t* rcx_26 = *(rbx_3 + 0x70)
                (*(*rcx_26 + 0x20))(rcx_26, 0xffffffff, 0)
            
            int64_t arg_20
            sub_140d3a3a0(&arg_20, *(rbx_3 + 0x80))
            int64_t rbx_5 = sx.q(*(arg1 + 0x58))
            rsi = arg1 + 0x50
            int32_t rax_25 = (rbx_5 + 1).d
            *(rsi + 8) = rax_25
            
            if (rax_25 s> *(rsi + 0xc))
                sub_1405a4d70(rsi)
            
            r15_2 += 1
            r14 = &r14[2]
            *(*rsi + (rbx_5 << 3)) = arg_20
            
            if (r15_2 s>= var_100.d)
                break
        else
            void var_b0
            int64_t* rax_16 =
                _vfprintf_p_l(&var_b0, Simulate ProceduralFoliage...", ProceduralFoliage")
            sub_140b283e0(data_143ddb418, r15_2, var_100.d, rax_16)
            int64_t* var_a8
            
            if (var_a8 != 0)
                var_a8[1].d -= 1
                
                if (var_a8[1].d == 1)
                    (**var_a8)(var_a8)
                    int32_t rax_19 = *(var_a8 + 0xc)
                    *(var_a8 + 0xc) -= 1
                    
                    if (rax_19 == 1)
                        (*(*var_a8 + 8))(var_a8, 1)
            
            int64_t* rcx_25 = data_143ddb418
            
            if ((*(*rcx_25 + 0x50))(rcx_25) != 0 && r12.b == 0)
                *(arg1 + 0x38) += 1
                r12.b = 1

int32_t result
int512_t zmm6_3
result, zmm6_3 = sub_140b137c0(data_143ddb418)
zmm6_3.o = zmm6

if (r12.b == 0)
    void* i_1 = *(arg1 + 0x40)
    
    for (void* rsi_3 = (sx.q(*(arg1 + 0x48)) << 5) + i_1; i_1 != rsi_3; i_1 += 0x20)
        void* rcx_33 = *(i_1 + 8)
        
        if (rcx_33 != 0)
            int64_t* rdi_1 = *(rcx_33 + 0x10)
            void* rax_27 = rdi_1[0x23]
            
            if (rax_27 == 0)
                (*(*rdi_1 + 0x390))(rdi_1)
                rax_27 = rdi_1[0x23]
                rcx_33 = *(i_1 + 8)
            
            result = *(rax_27 + 0x360)
            *(rcx_33 + 0x360) = result
else
    *(rsi + 8) = 0
    
    if (*(rsi + 0xc) != 0)
        result = sub_1405c5570(rsi, 0)

int64_t* var_c0

if (var_c0 != 0)
    result = var_c0[1].d
    var_c0[1].d -= 1
    
    if (result == 1)
        (**var_c0)(var_c0)
        result = *(var_c0 + 0xc)
        *(var_c0 + 0xc) -= 1
        
        if (result == 1)
            result = (*(*var_c0 + 8))(var_c0, 1)

int32_t i_3 = var_100.d

if (i_3 != 0)
    void* rdi_3 = &var_108[1]
    int32_t i_2
    
    do
        int64_t* rbx_7 = *rdi_3
        
        if (rbx_7 != 0)
            result = rbx_7[1].d
            rbx_7[1].d -= 1
            
            if (result == 1)
                (**rbx_7)(rbx_7)
                result = *(rbx_7 + 0xc)
                *(rbx_7 + 0xc) -= 1
                
                if (result == 1)
                    result = (*(*rbx_7 + 8))(rbx_7, 1)
        
        rdi_3 += 0x10
        i_2 = i_3
        i_3 -= 1
    while (i_2 != 1)

int64_t* rcx_38 = var_108

if (rcx_38 == 0)
    return result

return sub_140a74f90(rcx_38)
