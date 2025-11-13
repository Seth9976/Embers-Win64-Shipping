// 函数: sub_141e82850
// 地址: 0x141e82850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = *(arg1 + 0x4c0)
int32_t rdi = 0
int32_t r14_1 = r14 - 1

if (r14 - 1 s>= 0)
    int64_t r15_1 = sx.q(r14_1) << 3
    int64_t r12_1 = r15_1
    int32_t temp4_1
    
    do
        int64_t* rbx_1 = *(r15_1 + *(arg1 + 0x4b8))
        
        if (rbx_1 != 0)
            char rax_3 = *(rbx_1 + 0x183) & 0x10
            
            if (arg2 != 0)
                if (rax_3 != 0)
                    sub_141ddc0a0(rbx_1, (*(arg1 + 0xa8)).d, 1)
                
                goto label_141e8291e
            
            if (rax_3 == 0)
                bool z_2
                
                if (0 == *(rbx_1 + 0x18c))
                    *(rbx_1 + 0x18c) = 0
                    z_2 = true
                else
                    *(rbx_1 + 0x18c)
                    z_2 = false
                
                if (z_2)
                label_141e8291e:
                    *(rbx_1 + 0x18c) = 0
                    int32_t rcx_3 = *(arg1 + 0x4c0)
                    int32_t rax_9 = rcx_3 - r14_1 - 1
                    
                    if (rax_9 s>= 1)
                        rax_9 = 1
                    
                    if (rax_9 != 0)
                        int64_t rdi_1 = *(arg1 + 0x4b8)
                        memcpy(r12_1 + rdi_1, rdi_1 + (sx.q(rcx_3 - rax_9) << 3), rax_9 << 3)
                        rcx_3 = *(arg1 + 0x4c0)
                        rdi = 0
                    
                    *(arg1 + 0x4c0) = rcx_3 - 1
                    (**rbx_1)(rbx_1, 1)
            else if (sub_141ddc0a0(rbx_1, (*(arg1 + 0xa8)).d, 0) != 0)
                bool z_1
                
                if (0 == *(rbx_1 + 0x18c))
                    *(rbx_1 + 0x18c) = 0
                    z_1 = true
                else
                    *(rbx_1 + 0x18c)
                    z_1 = false
                
                if (z_1 != 0)
                    goto label_141e8291e
        
        r12_1 -= 8
        r15_1 -= 8
        temp4_1 = r14_1
        r14_1 -= 1
    while (temp4_1 - 1 s>= 0)

int32_t var_c4 = 1
int32_t r10 = *(arg1 + 0x478)
void* r9 = arg1 + 0x460
void* var_c0 = r9
int32_t rcx_7 = 0
int32_t var_c8 = 0
int32_t var_b8 = 0xffffffff
int64_t var_b4 = 0

if (r10 != 0)
    void* rax_13 = *(r9 + 0x10)
    void* r8_3 = r9
    
    if (rax_13 != 0)
        r8_3 = rax_13
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10 - 1)
    int32_t rdx_5 = *r8_3
    
    if (rdx_5 != 0)
    label_141e82a13:
        int32_t rax_20 = neg.d(rdx_5) & rdx_5
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_20)
        int32_t var_c4_1 = rax_20
        int32_t arg_18 = temp0_1
        int32_t rax_21
        
        if (rax_20 == 0)
            rax_21 = 0x20
        else
            rax_21 = 0x1f - temp0_1
        
        var_b4.d = rdi - rax_21 + 0x1f
        
        if (rdi - rax_21 + 0x1f s> r10)
            var_b4.d = r10
    else
        while (true)
            int64_t rdx_6 = sx.q(rcx_7)
            rdi += 0x20
            rcx_7 += 1
            var_b4:4.d = rdi
            var_c8 = rcx_7
            
            if (rdx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_5 = *(r8_3 + (rdx_6 << 2) + 4)
            int32_t var_b8_1 = 0xffffffff
            
            if (rdx_5 != 0)
                goto label_141e82a13
        
        var_b4.d = r10
    
    r9 = arg1 + 0x460

int32_t rdx_7 = *(arg1 + 0x478)
int32_t rbx_2 = *(r9 + 0x18)
int128_t var_58 = var_c8.o
int32_t r15_2 = 0xffffffff << (rdx_7.b & 0x1f)
int32_t rdi_4 = rdx_7 s>> 5
int128_t var_48 = 0xffffffff
int32_t r8_5 = rdx_7 & 0xffffffe0
int32_t var_a8 = rdi_4
int64_t var_68 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_98 = r15_2
int32_t var_94 = rdx_7
int32_t var_90 = r8_5
int128_t var_88 = (arg1 + 0x450).o
int128_t var_78 = var_58

if (rdx_7 != rbx_2)
    void* rax_23 = *(r9 + 0x10)
    
    if (rax_23 != 0)
        r9 = rax_23
    
    int32_t temp5_1
    int32_t temp6_1
    temp5_1:temp6_1 = sx.q(rbx_2 - 1)
    int32_t rdx_11 = *(r9 + (sx.q(rdi_4) << 2)) & r15_2
    int32_t var_94_2
    
    if (rdx_11 != 0)
    label_141e82af5:
        int32_t rax_30 = neg.d(rdx_11) & rdx_11
        uint64_t rflags_2
        int32_t temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_30)
        int32_t arg_20 = temp0_3
        int32_t r11_1
        
        if (rax_30 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_3
        
        int32_t var_94_1 = r8_5 - r11_1 + 0x1f
        
        if (r8_5 - r11_1 + 0x1f s> rbx_2)
            var_94_2 = rbx_2
    else
        while (true)
            int64_t rcx_12 = sx.q(rdi_4)
            r8_5 += 0x20
            rdi_4 += 1
            int32_t var_90_1 = r8_5
            int32_t var_a8_1 = rdi_4
            
            if (rcx_12.d s>= (temp6_1 + (temp5_1 & 0x1f)) s>> 5)
                break
            
            rdx_11 = *(r9 + (rcx_12 << 2) + 4)
            var_98 = 0xffffffff
            
            if (rdx_11 != 0)
                goto label_141e82af5
        
        var_94_2 = rbx_2
    r9 = arg1 + 0x460

while (true)
    int64_t rcx_14 = sx.q(var_78:0xc.d)
    int64_t* rax_32 = var_88.q
    
    if (rcx_14.d == (var_98.q u>> 0x20).d && var_78.q == r9 && rax_32 == arg1 + 0x450)
        int32_t result = *(arg1 + 0x458)
        
        if (result != *(arg1 + 0x484))
            int32_t rax_48 = *(arg1 + 0x45c)
            *(arg1 + 0x458) = 0
            
            if (rax_48 s< 0 && rax_48 != 0)
                sub_1405a5410(arg1 + 0x450, 0)
            
            *(arg1 + 0x480) = 0xffffffff
            *(arg1 + 0x484) = 0
            result = sub_140774790(arg1 + 0x460)
            int64_t rcx_29 = sx.q(*(arg1 + 0x498))
            void* rdi_5 = arg1 + 0x488
            void* rdx_18 = *(rdi_5 + 8)
            
            if (rcx_29 s> 0)
                result = -1
                
                if (rdx_18 != 0)
                    rdi_5 = rdx_18
                
                __builtin_memset(rdi_5, 0xffffffff, rcx_29 << 2)
        
        return result
    
    int64_t* i = *(*rax_32 + rcx_14 * 0x10)
    int32_t arg_8
    sub_1405ba450(arg1 + 0x3f0, &arg_8, i)
    int64_t rax_34 = sx.q(arg_8)
    int64_t rcx_17
    
    if (rax_34.d == 0xffffffff)
        rcx_17 = 0
    else
        rcx_17 = *(arg1 + 0x3f0) + rax_34 * 0x28
    
    int64_t rax_36 = rcx_17 + 8
    
    if (rcx_17 == 0)
        rax_36 = 0
    
    if (rax_36 == 0)
        int32_t zmm0_1 = sub_141dcfd60(i, arg2)
        int64_t* rcx_21 = i[3]
        
        if (rcx_21 != 0 && sub_14236bbe0(rcx_21, zmm0_1) == 0)
            *(arg1 + 0x7a0) -= 1
        
        char rcx_22 = *(i + 0x183)
        bool z_3
        
        if (arg2 == 0)
            if (0 == *(i + 0x18c))
                *(i + 0x18c) = 0
                z_3 = true
            else
                *(i + 0x18c)
                z_3 = false
        
        if (arg2 == 0 && (not(z_3) || (rcx_22 & 0x10) != 0))
            int64_t* rdx_16 = *(arg1 + 0x4b8)
            int64_t r8_8 = sx.q(*(arg1 + 0x4c0))
            int64_t* rax_39 = rdx_16
            void* rcx_23 = &rdx_16[r8_8]
            
            if (rdx_16 != rcx_23)
                while (*rax_39 != i)
                    rax_39 = &rax_39[1]
                    
                    if (rax_39 == rcx_23)
                        goto label_141e82c3d
            
            if (rdx_16 == rcx_23 || ((rax_39 - rdx_16) s>> 3).d == 0xffffffff)
            label_141e82c3d:
                int32_t rax_42 = (r8_8 + 1).d
                *(arg1 + 0x4c0) = rax_42
                
                if (rax_42 s> *(arg1 + 0x4c4))
                    sub_1405a4d70(arg1 + 0x4b8)
                
                *((r8_8 << 3) + *(arg1 + 0x4b8)) = i
        else
            *(i + 0x18c)
            *(i + 0x18c) = 0
            (**i)(i, 1)
    else
        sub_141eefcf0(i[5], 0)
        sub_1405c2e50(arg1 + 0x3f0, i)
        (**i)(i, 1)
    
    var_78:8.d &= not.d(var_88:0xc.d)
    sub_14059bdd0(&var_88:8)
    r9 = arg1 + 0x460
