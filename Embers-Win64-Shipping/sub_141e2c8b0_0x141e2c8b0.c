// 函数: sub_141e2c8b0
// 地址: 0x141e2c8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
void* rax_2 = arg2[0x15]

if (rax_2 == 0)
    rax_2 = sub_141ee69e0(arg2)

int64_t result
int512_t zmm3_1
float zmm6[0x4]
int128_t zmm7_1
result, zmm3_1, zmm6, zmm7_1 = sub_14243ac50(rax_2)

if (result.d != 1)
    result = (*(*arg1 + 0x2a8))(arg1, arg2, arg3)
    
    if (result == 0)
        result = arg1[6]
    else
        arg1[6] = result
    
    if (result != 0)
        int64_t rdi_1 = 0
        void* var_98_1 = nullptr
        int32_t var_90_1 = 0
        int32_t var_8c_1 = 8
        void var_d8
        float zmm0_1[0x4] = sub_141e22a40(arg2, &var_d8)
        (*(*arg1 + 0x2b0))(arg1, arg2)
        void* r14_1 = &var_d8
        int64_t* rbx_1 = nullptr
        
        if (var_98_1 != 0)
            r14_1 = var_98_1
        
        int128_t var_88
        __builtin_memset(&var_88, 0, 0x18)
        void* r12_1 = r14_1 + (sx.q(var_90_1) << 3)
        void* rcx_9
        void var_128
        void* var_e8_1
        
        if (r14_1 == r12_1)
        label_141e2ca52:
            int32_t var_168
            int64_t var_160
            char var_158
            int64_t var_150
            char var_148
            int64_t var_138
            char rax_17
            
            if (rbx_1 == 0)
                sub_140d19010(arg2, 
                    NewObject with empty name can't be used to create default subobjects (inside of "
                "UObject derived class constructor) as it produces incon")
                var_138 = 0
                var_148 = 0
                var_150 = 0
                var_158 = 0
                var_160 = 0
                var_168 = 0
                rbx_1 = sub_140d2dfc0(sub_14255cbc0(), arg2, 0, 0, var_168, var_160, var_158, 
                    var_150, var_148)
                rax_17 = (not.d(*(arg1 + 0x54))).b
            else
            label_141e2ca5b:
                rax_17 = 0
            
            char rcx_14 = *(rbx_1 + 0x432) & 0x7b
            *(rbx_1 + 0x431) |= 0x10
            *(rbx_1 + 0x89) &= 0x7f
            float temp0_1[0x4] = _mm_unpacklo_ps(0x3f800000, 0x3f800000)
            var_88:8.d = 0x3f800000
            *(rbx_1 + 0x432) = (rax_17 << 7 | rcx_14) & 0xfb
            int32_t var_130_1 = var_88:8.d
            rbx_1[0x97].d = 0
            var_138 = temp0_1.q
            sub_141f49070(rbx_1, &var_138)
            *(rbx_1 + 0x431) |= 0x20
            var_138 = 0
            float zmm0_2 = sub_140d3a3a0(&rbx_1[0xaa], arg2)
            rbx_1[0xab] = 0
            sub_141f37820(0, &rbx_1[0xac], rbx_1 + 0x561, rbx_1 + 0x562)
            void* rdx_10 = arg1[6]
            
            if (rbx_1[0x81] != rdx_10)
                sub_14219e4a0(rbx_1, rdx_10, zmm0_2)
            
            if ((rbx_1[0x11].b & 1) == 0)
                void* rax_19 = arg2[0x15]
                
                if (rax_19 == 0)
                    rax_19 = sub_141ee69e0(arg2)
                
                sub_141ef14c0(rbx_1, rax_19, 0)
            
            var_138 = 0
            sub_141f32b40(rbx_1, arg2, &data_143f3f280, 0)
            int64_t r9_3
            int32_t zmm6_1
            r9_3, zmm3_1, zmm6_1, zmm7_1 = sub_142185b40(rbx_1, 1)
            var_e8_1 = nullptr
            int32_t var_e0_2 = 0
            r9_3.b = 1
            int32_t var_dc_2 = 8
            (*(*rbx_1 + 0x958))(rbx_1, &var_128, arg1, r9_3, var_168, var_160, var_158, var_150, 
                var_148)
            rcx_9 = var_e8_1
            void* r14_3 = &var_128
            
            if (rcx_9 != 0)
                r14_3 = rcx_9
            
            int64_t r12_4 = sx.q(var_e0_2) << 3
            uint64_t r12_5 = r12_4 u>> 3
            
            if (r14_3 u> r14_3 + r12_4)
                r12_5 = 0
            
            if (r12_5 != 0)
                do
                    int64_t* rbx_4 = *r14_3
                    (*(*rbx_4 + 0x1f8))(rbx_4)
                    (*(*rbx_4 + 0x208))(rbx_4, arg1[7], arg1[8], zx.q(arg1[9].b), zmm6_1)
                    rdi_1 += 1
                    r14_3 += 8
                while (rdi_1 != r12_5)
                
                rcx_9 = var_e8_1
        else
            int64_t rdx_4
            int64_t* rbx_2
            
            while (true)
                rbx_2 = *r14_1
                
                if ((*(rbx_2 + 0x8a) & 1) != 0)
                    var_e8_1 = nullptr
                    int32_t var_e0_1 = 0
                    int32_t var_dc_1 = 8
                    (*(*rbx_2 + 0x958))(rbx_2, &var_128, arg1, 0)
                    rdx_4 = sx.q(var_e0_1)
                    
                    if (rdx_4.d s> 0)
                        break
                    
                    if (var_e8_1 != 0)
                        sub_140a74f90(var_e8_1)
                else if ((*(rbx_2 + 0x431) & 0x10) != 0)
                    int64_t rcx_7 = 2
                    
                    if (rbx_2[0x81] == arg1[6])
                        rcx_7.b = rbx_2[4] != arg2
                    
                    *(&var_88 + (rcx_7 << 3)) = rbx_2
                
                r14_1 += 8
                
                if (r14_1 == r12_1)
                    rbx_1 = var_88.q
                    
                    if (rbx_1 != 0)
                        goto label_141e2ca5b
                    
                    rbx_1 = var_88:8.q
                    
                    if (rbx_1 != 0)
                        goto label_141e2ca5b
                    
                    int64_t* var_78
                    rbx_1 = var_78
                    goto label_141e2ca52
            
            if (arg1[6] == rbx_2[0x81] || rbx_2[4] != arg2)
                rcx_9 = var_e8_1
                int64_t r12_2 = rdx_4 << 3
                void* r14_2 = &var_128
                
                if (rcx_9 != 0)
                    r14_2 = rcx_9
                
                uint64_t r12_3 = r12_2 u>> 3
                
                if (r14_2 u> r14_2 + r12_2)
                    r12_3 = 0
                
                if (r12_3 != 0)
                    do
                        int64_t* rbx_3 = *r14_2
                        (*(*rbx_3 + 0x1f8))(rbx_3)
                        (*(*rbx_3 + 0x208))(rbx_3, arg1[7], arg1[8], zx.q(arg1[9].b), zmm0_1[0])
                        rdi_1 += 1
                        r14_2 += 8
                    while (rdi_1 != r12_3)
                    
                    rcx_9 = var_e8_1
            else
                (*(*rbx_2 + 0x3a0))(rbx_2, 0)
                rcx_9 = var_e8_1
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        zmm3_1.o = zmm7_1
        int512_t zmm6_2
        result, zmm6_2 = sub_14246c2b0(arg1, arg2)
        zmm6_2.o = zmm6
        
        if (var_98_1 != 0)
            result = sub_140a74f90(var_98_1)

__security_check_cookie(rax_1 ^ &var_188)
return result
