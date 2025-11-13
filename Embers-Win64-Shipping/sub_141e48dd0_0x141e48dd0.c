// 函数: sub_141e48dd0
// 地址: 0x141e48dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int32_t rbx = 0
int32_t var_2c = 8
void* var_38 = nullptr
int32_t var_30 = 0
uint64_t result
void var_78

if ((arg2[5].b & 2) == 0)
    sub_141e39960(arg2, &var_78, arg3)
    result = sub_141e3d230(arg1 + 0x60, var_30)
    
    if (var_30 s> 0)
        do
            void* rcx_10 = &var_78
            
            if (var_38 != 0)
                rcx_10 = var_38
            
            result = sub_141e352c0(arg1 + 0x60, rcx_10 + (sx.q(rbx) << 3))
            rbx += 1
        while (rbx s< var_30)
else
    int32_t rdx_1 = *(arg1 + 0x68) - *(arg1 + 0x94)
    
    if (rdx_1 != 8)
        sub_140775b80(&var_78, rdx_1)
    
    int32_t r9_1 = *(arg1 + 0x88)
    void* r8_1 = arg1 + 0x70
    int32_t var_c8_1 = 0
    int32_t rcx_1 = 0
    int32_t var_c4_1 = 1
    void* var_c0 = r8_1
    int32_t var_b8_1 = 0xffffffff
    int64_t var_b4_1 = 0
    
    if (r9_1 != 0)
        void* rax_2 = *(r8_1 + 0x10)
        
        if (rax_2 != 0)
            r8_1 = rax_2
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r9_1 - 1)
        int32_t rdx_4 = *r8_1
        
        if (rdx_4 != 0)
        label_141e48e96:
            int32_t rax_9 = neg.d(rdx_4) & rdx_4
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
            int32_t var_c4_2 = rax_9
            int32_t rax_10
            
            if (rax_9 == 0)
                rax_10 = 0x20
            else
                rax_10 = 0x1f - temp0_2
            
            var_b4_1.d = rcx_1 - rax_10 + 0x1f
            
            if (rcx_1 - rax_10 + 0x1f s> r9_1)
                var_b4_1.d = r9_1
        else
            while (true)
                int64_t rdx_5 = sx.q(rbx)
                rcx_1 += 0x20
                rbx += 1
                var_b4_1:4.d = rcx_1
                var_c8_1 = rbx
                
                if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_4 = *(r8_1 + (rdx_5 << 2) + 4)
                var_b8_1 = 0xffffffff
                
                if (rdx_4 != 0)
                    goto label_141e48e96
            
            var_b4_1.d = r9_1
    
    int128_t var_88_1 = 0xffffffff
    arg3.o = var_c8_1.o
    var_c8_1.o = (arg1 + 0x60).o
    int64_t var_a8_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
    var_b8_1.o = arg3.o
    
    if (0 s< r9_1)
        int32_t i_1
        int32_t i = i_1
        
        do
            int64_t rbx_1 = sx.q(var_30)
            int32_t rax_12 = (rbx_1 + 1).d
            var_30 = rax_12
            
            if (rax_12 s> var_2c)
                sub_140809370(&var_78, rbx_1.d)
            
            void* rcx_4 = &var_78
            
            if (var_38 != 0)
                rcx_4 = var_38
            
            void* r8_2 = rcx_4 + (rbx_1 << 3)
            
            if (r8_2 != 0)
                *r8_2 = *((sx.q(i) << 7) + *var_c8_1.q)
            
            var_b4_1:4.d &= not.d(var_c0:4.d)
            sub_14059bdd0(&var_c0)
            i = i_1
        while (i s< *(var_b8_1.q + 0x18))
    
    result = sub_141e39960(arg2, &var_78, arg3)

if (var_38 != 0)
    result = sub_140a74f90(var_38)

__security_check_cookie(rax_1 ^ &var_e8)
return result
