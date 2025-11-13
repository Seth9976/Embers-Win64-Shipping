// 函数: sub_140935d10
// 地址: 0x140935d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_98 = 0
int32_t rdx = 0
int32_t var_90 = 0
int32_t var_8c = 0
int64_t rbx = -1
int64_t r14 = 0
int32_t r9 = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rdi_1 = -1
    
    do
        rdi_1 += 1
    while (arg2[rdi_1] != 0)
    
    if (rdi_1.d + 1 s> 0)
        sub_1405947f0(&var_98, rdi_1.d + 1)
        r9 = var_8c
        rdx = var_90
        r14 = var_98
    
    int32_t rax_1 = rdx + rdi_1.d + 1
    int32_t var_90_1 = rax_1
    
    if (rax_1 s> r9)
        sub_140594770(&var_98)
        r14 = var_98
    
    UnDecorator::getReferenceType(r14, arg2, (rdi_1.d + 1) * 2)

int64_t* rdi_3 = *(arg1 + 8)
int32_t arg_8
sub_14062d6e0(rdi_3, &arg_8, &var_98)
int64_t rax_2 = sx.q(arg_8)
void* const rcx_4

if (rax_2.d == 0xffffffff)
    rcx_4 = nullptr
else
    rcx_4 = *rdi_3 + rax_2 * 0x28

int64_t* result = rcx_4 + 0x10

if (rcx_4 == 0)
    result = nullptr

void* rcx_5

if (result != 0)
    rcx_5 = *result

if (result == 0 || rcx_5 == 0 || *(rcx_5 + 8) != 6)
    rdi_3.b = 0
else
    rdi_3.b = 1

if (r14 != 0)
    result, arg4 = sub_140a74f90(r14)

if (rdi_3.b != 0)
    var_98 = 0
    int32_t rdx_5 = 0
    int32_t var_90_2 = 0
    int32_t rcx_7 = 0
    int32_t var_8c_1 = 0
    
    if (arg2 != 0 && *arg2 != 0)
        do
            rbx += 1
        while (arg2[rbx] != 0)
        
        if (rbx.d + 1 s> 0)
            sub_1405947f0(&var_98, rbx.d + 1)
            rcx_7 = var_8c_1
            rdx_5 = var_90_2
        
        int32_t rax_4 = rdx_5 + rbx.d + 1
        var_90_2 = rax_4
        
        if (rax_4 s> rcx_7)
            sub_140594770(&var_98)
        
        UnDecorator::getReferenceType(var_98, arg2, (rbx.d + 1) * 2)
    
    int64_t* rax_5 = sub_140b752e0(*(arg1 + 8), &var_98, arg4)
    int64_t* rbx_2 = rax_5[1]
    void* r15_1 = *rax_5
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1
    
    int64_t rcx_12 = var_98
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    int32_t r10_1 = *(r15_1 + 0x28)
    void* r9_1 = r15_1 + 0x10
    var_98:4.d = 1
    int32_t rcx_13 = 0
    var_98.d = 0
    int32_t r8_5 = 0
    var_90_2.q = r9_1
    int32_t var_88_1 = 0xffffffff
    int64_t var_84_1 = 0
    
    if (r10_1 != 0)
        void* rax_6 = *(r9_1 + 0x10)
        
        if (rax_6 != 0)
            r9_1 = rax_6
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r10_1 - 1)
        int32_t rdx_11 = *r9_1
        
        if (rdx_11 != 0)
        label_140935f28:
            int32_t rax_13 = neg.d(rdx_11) & rdx_11
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_13)
            var_98:4.d = rax_13
            int32_t rax_14
            
            if (rax_13 == 0)
                rax_14 = 0x20
            else
                rax_14 = 0x1f - temp0_2
            
            var_84_1.d = r8_5 - rax_14 + 0x1f
            
            if (r8_5 - rax_14 + 0x1f s> r10_1)
                var_84_1.d = r10_1
        else
            while (true)
                int64_t rdx_12 = sx.q(rcx_13)
                r8_5 += 0x20
                rcx_13 += 1
                var_84_1:4.d = r8_5
                var_98.d = rcx_13
                
                if (rdx_12.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_11 = *(r9_1 + (rdx_12 << 2) + 4)
                var_88_1 = 0xffffffff
                
                if (rdx_11 != 0)
                    goto label_140935f28
            
            var_84_1.d = r10_1
    
    int32_t rdx_13 = *(r15_1 + 0x28)
    double zmm2[0x2] = var_88_1.o
    double var_38_1[0x2] = zmm2
    int128_t var_48_1 = var_98.o
    int32_t r12_1 = 0xffffffff << (rdx_13.b & 0x1f)
    int32_t r9_3 = rdx_13 & 0xffffffe0
    int32_t r8_8 = rdx_13 s>> 5
    int64_t var_58_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    int32_t var_88_2 = r12_1
    var_84_1.d = rdx_13
    arg4.o = var_48_1
    int128_t var_78 = r15_1.o
    int96_t var_68_1 = arg4.12
    
    if (rdx_13 != r10_1)
        void* rax_16 = *(r15_1 + 0x20)
        void* r11_1 = r15_1 + 0x10
        
        if (rax_16 != 0)
            r11_1 = rax_16
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r10_1 - 1)
        int32_t rdx_17 = *(r11_1 + (sx.q(r8_8) << 2)) & r12_1
        
        if (rdx_17 != 0)
        label_140935ff4:
            int32_t rax_23 = neg.d(rdx_17) & rdx_17
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_23)
            int32_t rdi_4
            
            if (rax_23 == 0)
                rdi_4 = 0x20
            else
                rdi_4 = 0x1f - temp0_4
            
            var_84_1.d = r9_3 - rdi_4 + 0x1f
            
            if (r9_3 - rdi_4 + 0x1f s> r10_1)
                var_84_1.d = r10_1
        else
            while (true)
                int64_t rcx_18 = sx.q(r8_8)
                r9_3 += 0x20
                r8_8 += 1
                
                if (rcx_18.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_17 = *(r11_1 + (rcx_18 << 2) + 4)
                var_88_2 = 0xffffffff
                
                if (rdx_17 != 0)
                    goto label_140935ff4
            
            var_84_1.d = r10_1
    
    while (true)
        int32_t result_1
        result = sx.q(result_1)
        int64_t* rdx_18 = var_78.q
        
        if (result.d == (var_88_2.q u>> 0x20).d && var_68_1.q == r15_1 + 0x10 && rdx_18 == r15_1)
            break
        
        void* rcx_20 = result * 5
        var_98 = 0
        int64_t rax_25 = *rdx_18
        var_90_2.q = 0
        int64_t* rcx_21 = *(rax_25 + (rcx_20 << 3) + 0x10)
        
        if ((*(*rcx_21 + 0x58))(rcx_21, &var_98) != 0)
            sub_140917df0(arg3, rax_25 + (rcx_20 << 3), &var_98)
        
        int64_t rcx_23 = var_98
        
        if (rcx_23 != 0)
            sub_140a74f90(rcx_23)
        
        var_68_1:8.d &= not.d(var_78:0xc.d)
        sub_14059bdd0(&var_78:8)
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            result = (**rbx_2)(rbx_2)
            int32_t temp5_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp5_1 == 1)
                return (*(*rbx_2 + 8))(rbx_2, 1)

return result
