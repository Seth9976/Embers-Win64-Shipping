// 函数: sub_140af4f20
// 地址: 0x140af4f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const r12 = &data_142d40450
int16_t* rbx

if (arg4[1].d == 0)
    rbx = &data_142d40450
else
    rbx = *arg4

sub_140b3ac40(&data_1439a90f0, rbx)
int32_t rax = *(arg3 + 0xc)
int64_t* rbx_1 = *arg3
int32_t i_3 = arg3[1].d

if (rax s< 0)
    if (i_3 != 0)
        int32_t i
        
        do
            int64_t rcx_1 = *rbx_1
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            rbx_1 = &rbx_1[2]
            i = i_3
            i_3 -= 1
        while (i != 1)
        rax = *(arg3 + 0xc)
    
    arg3[1].d = 0
    
    if (rax != 0)
        sub_14061cd70(arg3, 0)
else
    if (i_3 != 0)
        int32_t i_1
        
        do
            int64_t rcx = *rbx_1
            
            if (rcx != 0)
                sub_140a74f90(rcx)
            
            rbx_1 = &rbx_1[2]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    arg3[1].d = 0

int64_t* result = sub_140aefb30(arg1, arg4, 0)
int64_t* result_2 = result

if (result == 0)
    result.b = 0
else
    int64_t var_d8 = 0
    int64_t r14_1 = 0
    int64_t var_d0_1 = 0
    int32_t rdx_2 = 0
    int32_t rcx_4 = 0
    
    if (arg2 != 0 && *arg2 != 0)
        int64_t rdi = -1
        
        do
            rdi += 1
        while (arg2[rdi] != 0)
        
        if (rdi.d + 1 s> 0)
            sub_1405947f0(&var_d8, rdi.d + 1)
            rcx_4 = var_d0_1:4.d
            rdx_2 = var_d0_1.d
            r14_1 = var_d8
        
        int32_t rax_1 = rdx_2 + rdi.d + 1
        var_d0_1.d = rax_1
        
        if (rax_1 s> rcx_4)
            sub_140594770(&var_d8)
            r14_1 = var_d8
        
        UnDecorator::getReferenceType(r14_1, arg2, (rdi.d + 1) * 2)
    
    int32_t result_1
    sub_140a452d0(result_2, &result_1, &var_d8)
    result = sx.q(result_1)
    void* const rdi_3
    
    if (result.d == 0xffffffff)
        rdi_3 = nullptr
    else
        rdi_3 = result * 0xb8 + *result_2
    
    void* r15_1 = rdi_3 + 0x10
    
    if (rdi_3 == 0)
        r15_1 = nullptr
    
    if (r14_1 != 0)
        sub_140a74f90(r14_1)
    
    if (r15_1 == 0)
        result.b = 0
    else
        int32_t* rcx_10 = rdi_3 + 0x44
        
        if (rdi_3 == 0)
            rcx_10 = 0x34
        
        int32_t* rax_2 = rdi_3 + 0x18
        
        if (rdi_3 == 0)
            rax_2 = 8
        
        int32_t rdx_7 = *rax_2 - *rcx_10
        
        if (rdx_7 s> *(arg3 + 0xc))
            sub_14061cd70(arg3, rdx_7)
        
        int32_t r11_1 = *(r15_1 + 0x28)
        void* r9 = r15_1 + 0x10
        int32_t var_c8 = 0
        int32_t rcx_12 = 0
        int32_t var_c4_1 = 1
        int32_t r8_3 = 0
        void* var_c0_1 = r9
        int32_t var_b8_1 = 0xffffffff
        int64_t var_b4_1 = 0
        
        if (r11_1 != 0)
            void* rax_3 = *(r9 + 0x10)
            
            if (rax_3 != 0)
                r9 = rax_3
            
            int32_t temp3_1
            int32_t temp4_1
            temp3_1:temp4_1 = sx.q(r11_1 - 1)
            int32_t rdx_10 = *r9
            
            if (rdx_10 != 0)
            label_140af5158:
                int32_t rax_10 = neg.d(rdx_10) & rdx_10
                uint64_t rflags_1
                int32_t temp0_1
                temp0_1, rflags_1 = _bit_scan_reverse(rax_10)
                int32_t var_c4_2 = rax_10
                int32_t rax_11
                
                if (rax_10 == 0)
                    rax_11 = 0x20
                else
                    rax_11 = 0x1f - temp0_1
                
                var_b4_1.d = r8_3 - rax_11 + 0x1f
                
                if (r8_3 - rax_11 + 0x1f s> r11_1)
                    var_b4_1.d = r11_1
            else
                while (true)
                    int64_t rdx_11 = sx.q(rcx_12)
                    r8_3 += 0x20
                    rcx_12 += 1
                    var_b4_1:4.d = r8_3
                    var_c8 = rcx_12
                    
                    if (rdx_11.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_10 = *(r9 + (rdx_11 << 2) + 4)
                    var_b8_1 = 0xffffffff
                    
                    if (rdx_10 != 0)
                        goto label_140af5158
                
                var_b4_1.d = r11_1
        
        double zmm4_1[0x2] = var_b8_1.o
        void* var_40_1 = r15_1
        double var_60_1[0x2] = var_c8.o
        int16_t var_70_1 = 0
        int128_t var_58
        int128_t var_98_1 = var_58
        int128_t var_a8 = r15_1.o
        double rcx_14 = zmm4_1[0]
        zmm4_1[0] = (_mm_unpackhi_pd(zmm4_1, zmm4_1[0])).q
        double var_88_1[0x2] = zmm4_1
        
        if ((rcx_14 u>> 0x20).d s< *(var_58.q + 0x18))
            int32_t i_2 = var_98_1:0xc.d
            
            do
                int64_t r8_6 = sx.q(i_2) * 6
                int64_t r9_1 = *var_a8.q
                int32_t rax_16 = *(r9_1 + (r8_6 << 3) + 0x20)
                int64_t rdx_12 = r9_1 + (r8_6 << 3)
                int32_t rcx_16 = rax_16 - 1
                int64_t* rax_17 = 0x18
                
                if (rax_16 == 0)
                    rcx_16 = 0
                
                if (rcx_16 s<= 0)
                    rax_17 = 8
                
                if (*(rax_17 + rdx_12 + 8) != 0)
                    *(rax_17 + rdx_12)
                
                int64_t* rax_18 = sub_140b63b70(r9_1 + (r8_6 << 3), &var_c8)
                int16_t* const r8_7
                
                if (rax_18[1].d == 0)
                    r8_7 = &data_142d40450
                else
                    r8_7 = *rax_18
                
                sub_140a2e390(&var_d8, u"%s=%s", r8_7)
                int64_t rdi_5 = sx.q(arg3[1].d)
                int32_t rax_19 = (rdi_5 + 1).d
                arg3[1].d = rax_19
                
                if (rax_19 s> *(arg3 + 0xc))
                    sub_1405a4f90(arg3)
                
                int64_t* rcx_22 = (rdi_5 << 4) + *arg3
                *rcx_22 = 0
                *rcx_22 = var_d8
                var_d8 = 0
                rcx_22[1].d = var_d0_1.d
                *(rcx_22 + 0xc) = var_d0_1:4.d
                int64_t rcx_23 = var_d8
                var_d0_1 = 0
                
                if (rcx_23 != 0)
                    sub_140a74f90(rcx_23)
                
                int64_t rcx_24 = var_c8.q
                
                if (rcx_24 != 0)
                    sub_140a74f90(rcx_24)
                
                var_98_1:8.d &= not.d(var_a8:0xc.d)
                sub_14059bdd0(&var_a8:8)
                i_2 = var_98_1:0xc.d
            while (i_2 s< *(var_98_1.q + 0x18))
            
            if (var_70_1.b != 0 && var_70_1:1.b != 0)
                sub_140a6d3f0(r15_1, *(r15_1 + 8) - *(r15_1 + 0x34), 1)
        
        int16_t** rax_26 = arg4
        
        if (rax_26[1].d != 0)
            r12 = *rax_26
        
        sub_140aeb3d0(&data_14399fec8, r12, arg2)
        result.b = 1

return result
