// 函数: sub_142697020
// 地址: 0x142697020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
uint64_t result = __security_cookie ^ &var_168
uint64_t result_1 = result
void* r14 = *(arg1 + 0x68)
void* rsi = arg1
void* var_108 = r14
int64_t i_3 = sx.q(*(r14 + 0x24))

if (i_3.d s> 0)
    int64_t r15_1 = 0
    bool cond:0_1 = (*(arg3 + 0x54) & 4) == 0
    int64_t var_140 = 0
    int64_t var_138_1 = 0
    
    if (not(cond:0_1))
        int32_t rdi_1 = (i_3 + 1).d
        var_138_1.d = rdi_1
        
        if (rdi_1 s> 0)
            sub_1406105e0(&var_140)
            r15_1 = var_140
        
        memset(r15_1, 0, sx.q(rdi_1) << 2)
    
    int32_t r13_1 = 1
    result = zx.q(arg3[1].d - *(arg3 + 0x34))
    
    if (i_3.d s> result.d)
        sub_141e69820(arg3, i_3.d)
        
        if (i_3.d u< 4)
            result = 1
        else
            uint32_t rax_3 = i_3.d u>> 1
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_3 + 8)
            int32_t rcx_3
            
            if (rax_3 == 0xfffffff8)
                rcx_3 = 0x20
            else
                rcx_3 = 0x1f - temp0_2
            
            uint64_t rflags_2
            char temp0_3
            temp0_3, rflags_2 = _bit_scan_reverse(rax_3 + 7)
            
            if (rax_3 == 0xfffffff9)
                result = 1
            else
                result = zx.q(1 << ((not.d(rcx_3 << 0x1a s>> 0x1f)).b & (0x20 - (0x1f - temp0_3))))
        
        int32_t rcx_8 = arg3[9].d
        
        if (rcx_8 == 0 || rcx_8 s< result.d)
            arg3[9].d = result.d
            result = sub_142691d20(arg3)
    
    int64_t i_2 = i_3
    int64_t i_1 = i_3
    
    if (i_3.d s> 0)
        int32_t* rbx = 4
        int32_t* var_118_1 = 4
        int64_t i
        
        do
            int128_t* rsi_1
            
            if (r13_1 != 0)
                rsi_1 = (zx.q(r13_1 - 1) << 5) + *r14
            else
                rsi_1 = nullptr
            
            int32_t rax_7 = *(rsi_1 + 0x14) & 0x3fffffff
            int128_t* r14_3
            
            if (rax_7 == 0)
                r14_3 = nullptr
            else
                r14_3 = (zx.q(rax_7 - 1) << 5) + *var_108
            
            int64_t var_e8 = 0
            int64_t var_e0_1 = 0
            void* var_78_1 = nullptr
            int32_t var_70_1 = 0
            int32_t var_6c_1 = 6
            char var_68_1 = 0
            var_e8 = *(rsi_1 + 0x18)
            
            if (r14_3 != 0)
                int64_t var_e0_2 = *(r14_3 + 0x18)
            
            int32_t var_d8_1 = (*(rsi_1 + 0xc)).d
            int32_t var_d4_1 = rsi_1[1].d.d
            int32_t var_d0_1 = 0
            bool var_67
            uint8_t rcx_11 = ((*(rsi_1 + 0x14) u>> 0x1e).b & 1) | (var_67 & 0xfe) | 4
            int32_t var_cc_1 = (*rsi_1 ^ 0x80000000).d
            int32_t var_c8_1 = (*(rsi_1 + 8) ^ 0x80000000).d
            int32_t var_c4_1 = (*(rsi_1 + 4)).d
            void* var_148 = nullptr
            int32_t* var_120 = nullptr
            sub_142610d20(arg2, *(rsi_1 + 0x18), &var_120, &var_148)
            void* rcx_13 = var_148
            bool rdx_4 = false
            
            if (rcx_13 != 0)
                rdx_4 = *(rcx_13 + 0x1f) u>= 0x40
            
            var_67 = (rdx_4 * 2) | (rcx_11 & 0xfd)
            char rdx_5 = *(arg3 + 0x54)
            
            if ((rdx_5 & 2) != 0)
                int32_t j = 0
                char var_68_2 = *(rcx_13 + 0x1e)
                
                if (*(rcx_13 + 0x1e) u> 0)
                    void* rdi_2 = 4
                    
                    do
                        int64_t rbx_1 = sx.q(var_70_1)
                        uint64_t rdx_6 = zx.q(*(rdi_2 + rcx_13)) * 3
                        int64_t rcx_14 = *(var_120 + 0x18)
                        int32_t rax_16 = (rbx_1 + 1).d
                        int32_t var_130_1 = (*(rcx_14 + (rdx_6 << 2)) ^ 0x80000000).d
                        int32_t var_128_1 = (*(rcx_14 + (rdx_6 << 2) + 4)).d
                        int32_t var_12c_1 = (*(rcx_14 + (rdx_6 << 2) + 8) ^ 0x80000000).d
                        var_70_1 = rax_16
                        void var_c0
                        
                        if (rax_16 s> var_6c_1)
                            sub_142692d60(&var_c0, rbx_1.d)
                        
                        int64_t rcx_16 = rbx_1 * 3
                        void* rdx_8 = &var_c0
                        
                        if (var_78_1 != 0)
                            rdx_8 = var_78_1
                        
                        j += 1
                        rdi_2 += 2
                        *(rdx_8 + (rcx_16 << 2)) = var_130_1.q
                        *(rdx_8 + (rcx_16 << 2) + 8) = var_128_1
                        rcx_13 = var_148
                    while (j s< zx.d(*(rcx_13 + 0x1e)))
                    
                    rdx_5 = *(arg3 + 0x54)
                    rbx = var_118_1
                    i_1 = i_2
                
                r15_1 = var_140
            
            if ((rdx_5 & 4) != 0 && r14_3 != 0)
                uint128_t zmm0
                zmm0.d = (*(r14_3 + 4)).d f- var_c4_1
                int128_t zmm1
                zmm1.d = (*r14_3 ^ 0x80000000).d f- var_cc_1
                int128_t zmm2
                zmm2.d = (*(r14_3 + 8) ^ 0x80000000).d f- var_c8_1
                zmm0.d = zmm0.d f* zmm0.d
                zmm1.d = zmm1.d f* zmm1.d
                zmm2.d = zmm2.d f* zmm2.d
                zmm2.d = zmm2.d f+ zmm1.d
                zmm2.d = zmm2.d f+ zmm0.d
                zmm0.d = _mm_sqrt_ss(0, zmm2.d).d f+
                    *(r15_1 + ((zx.q(*(rsi_1 + 0x14)) & 0x3fffffff) << 2))
                int32_t var_d0_2 = zmm0.d
                *(rbx + r15_1) = zmm0.d
            
            void var_100
            result = sub_14266e8b0(arg3, &var_100, &var_e8, nullptr)
            
            if (var_78_1 != 0)
                result = sub_140a74f90(var_78_1)
            
            r14 = var_108
            rbx = &rbx[1]
            r13_1 += 1
            var_118_1 = rbx
            i = i_1
            i_1 -= 1
            i_2 = i_1
        while (i != 1)
        rsi = arg1
    
    if ((*(arg3 + 0x54) & 1) != 0)
        void* r10_1 = *(rsi + 0x18)
        
        if (r10_1 != 0)
            result = zx.q(arg3[1].d)
            int64_t r10_2 = *(r10_1 + 0x18)
            int32_t result_2
            
            if (result.d == *(arg3 + 0x34))
            label_14269748e:
                result_2 = -1
            else
                void* r8_6 = arg3[8]
                void* r9_4 = &arg3[7]
                result = sx.q(arg3[9].d) - 1
                
                if (r8_6 != 0)
                    r9_4 = r8_6
                
                result_2 = *(r9_4 + ((sx.q((r10_2 u>> 0x20).d * 0x17 + r10_2.d) & result) << 2))
                
                if (result_2 == 0xffffffff)
                label_14269748e_1:
                    result_2 = -1
                else
                    int64_t rdx_12 = *arg3
                    
                    while (true)
                        result = sx.q(result_2)
                        uint64_t rcx_22 = result * 0x12
                        
                        if (*(rdx_12 + (rcx_22 << 3)) == r10_2)
                            break
                        
                        result_2 = *(rdx_12 + (rcx_22 << 3) + 0x88)
                        
                        if (result_2 == 0xffffffff)
                            goto label_14269748e_1
            
            arg3[0xa].d = result_2
    
    if (r15_1 != 0)
        result = sub_140a74f90(r15_1)

__security_check_cookie(result_1 ^ &var_168)
return result
