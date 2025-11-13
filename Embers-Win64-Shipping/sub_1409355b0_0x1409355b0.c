// 函数: sub_1409355b0
// 地址: 0x1409355b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int64_t var_a8 = 0
int64_t var_a0 = 0
int64_t r15 = 0
int32_t rdx = 0
int32_t r9 = 0
int64_t rdi = -1

if (arg2 != 0 && *arg2 != 0)
    int64_t rsi_1 = -1
    
    do
        rsi_1 += 1
    while (arg2[rsi_1] != 0)
    
    if (rsi_1.d + 1 s> 0)
        sub_1405947f0(&var_a8, rsi_1.d + 1)
        r9 = var_a0:4.d
        rdx = var_a0.d
        r15 = var_a8
    
    int32_t rax_1 = rdx + rsi_1.d + 1
    var_a0.d = rax_1
    
    if (rax_1 s> r9)
        sub_140594770(&var_a8)
        r15 = var_a8
    
    UnDecorator::getReferenceType(r15, arg2, (rsi_1.d + 1) * 2)

int64_t* rsi_3 = *(arg1 + 8)
int32_t arg_8
sub_14062d6e0(rsi_3, &arg_8, &var_a8)
int64_t rax_2 = sx.q(arg_8)
void* const rcx_4

if (rax_2.d == 0xffffffff)
    rcx_4 = nullptr
else
    rcx_4 = *rsi_3 + rax_2 * 0x28

int64_t* result = rcx_4 + 0x10

if (rcx_4 == 0)
    result = nullptr

void* rcx_5

if (result != 0)
    rcx_5 = *result

if (result == 0 || rcx_5 == 0 || *(rcx_5 + 8) != 6)
    rsi_3.b = 0
else
    rsi_3.b = 1

if (r15 != 0)
    result, arg4 = sub_140a74f90(r15)

if (rsi_3.b != 0)
    int32_t rdx_5 = 0
    var_a8 = 0
    int32_t rcx_7 = 0
    int64_t var_a0_1 = 0
    
    if (arg2 != 0 && *arg2 != 0)
        do
            rdi += 1
        while (arg2[rdi] != 0)
        
        if (rdi.d + 1 s> 0)
            sub_1405947f0(&var_a8, rdi.d + 1)
            rcx_7 = var_a0_1:4.d
            rdx_5 = var_a0_1.d
        
        int32_t rax_4 = rdx_5 + rdi.d + 1
        var_a0_1.d = rax_4
        
        if (rax_4 s> rcx_7)
            sub_140594770(&var_a8)
        
        UnDecorator::getReferenceType(var_a8, arg2, (rdi.d + 1) * 2)
    
    int64_t* rax_5 = sub_140b752e0(*(arg1 + 8), &var_a8, arg4)
    int64_t* rdi_2 = rax_5[1]
    void* r15_1 = *rax_5
    
    if (rdi_2 != 0)
        rdi_2[1].d += 1
    
    int64_t rcx_12 = var_a8
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    int32_t r10_1 = *(r15_1 + 0x28)
    void* r8_5 = r15_1 + 0x10
    var_a8.d = 0
    int32_t rcx_13 = 0
    var_a8:4.d = 1
    void* var_a0_2 = r8_5
    int32_t var_98_1 = 0xffffffff
    int64_t var_94_1 = 0
    
    if (r10_1 != 0)
        void* rax_6 = *(r8_5 + 0x10)
        
        if (rax_6 != 0)
            r8_5 = rax_6
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r10_1 - 1)
        int32_t rdx_11 = *r8_5
        
        if (rdx_11 != 0)
        label_1409357b6:
            int32_t rax_13 = neg.d(rdx_11) & rdx_11
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_13)
            var_a8:4.d = rax_13
            int32_t rax_14
            
            if (rax_13 == 0)
                rax_14 = 0x20
            else
                rax_14 = 0x1f - temp0_2
            
            var_94_1.d = rcx_13 - rax_14 + 0x1f
            
            if (rcx_13 - rax_14 + 0x1f s> r10_1)
                var_94_1.d = r10_1
        else
            while (true)
                int64_t rdx_12 = sx.q(rbx)
                rcx_13 += 0x20
                rbx += 1
                var_94_1:4.d = rcx_13
                var_a8.d = rbx
                
                if (rdx_12.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_11 = *(r8_5 + (rdx_12 << 2) + 4)
                var_98_1 = 0xffffffff
                
                if (rdx_11 != 0)
                    goto label_1409357b6
            
            var_94_1.d = r10_1
    
    int32_t rdx_14 = *(r15_1 + 0x28)
    double zmm2[0x2] = var_98_1.o
    double var_48_1[0x2] = zmm2
    int128_t var_58_1 = var_a8.o
    int32_t r12_1 = 0xffffffff << (rdx_14.b & 0x1f)
    int32_t r9_2 = rdx_14 & 0xffffffe0
    int32_t r8_7 = rdx_14 s>> 5
    int64_t var_68_1 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
    int32_t var_98_2 = r12_1
    var_94_1.d = rdx_14
    arg4.o = var_58_1
    int128_t var_88 = r15_1.o
    int128_t var_78_1 = arg4.o
    
    if (rdx_14 != r10_1)
        void* rax_16 = *(r15_1 + 0x20)
        void* r11_1 = r15_1 + 0x10
        
        if (rax_16 != 0)
            r11_1 = rax_16
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r10_1 - 1)
        int32_t rdx_18 = *(r11_1 + (sx.q(r8_7) << 2)) & r12_1
        
        if (rdx_18 != 0)
        label_140935882:
            int32_t rax_23 = neg.d(rdx_18) & rdx_18
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_23)
            int32_t rsi_4
            
            if (rax_23 == 0)
                rsi_4 = 0x20
            else
                rsi_4 = 0x1f - temp0_4
            
            var_94_1.d = r9_2 - rsi_4 + 0x1f
            
            if (r9_2 - rsi_4 + 0x1f s> r10_1)
                var_94_1.d = r10_1
        else
            while (true)
                int64_t rcx_18 = sx.q(r8_7)
                r9_2 += 0x20
                r8_7 += 1
                
                if (rcx_18.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_18 = *(r11_1 + (rcx_18 << 2) + 4)
                var_98_2 = 0xffffffff
                
                if (rdx_18 != 0)
                    goto label_140935882
            
            var_94_1.d = r10_1
    
    while (true)
        result = sx.q(var_78_1:0xc.d)
        int64_t* rdx_19 = var_88.q
        
        if (result.d == (var_98_2.q u>> 0x20).d && var_78_1.q == r15_1 + 0x10 && rdx_19 == r15_1)
            break
        
        void* rcx_20 = result * 5
        int64_t rax_25 = *rdx_19
        sub_140917df0(arg3, rax_25 + (rcx_20 << 3), 
            sub_140b74df0(*(rax_25 + (rcx_20 << 3) + 0x10), &var_a8))
        int64_t rcx_23 = var_a8
        
        if (rcx_23 != 0)
            sub_140a74f90(rcx_23)
        
        var_78_1:8.d &= not.d(var_88:0xc.d)
        sub_14059bdd0(&var_88:8)
    
    if (rdi_2 != 0)
        rdi_2[1].d -= 1
        
        if (rdi_2[1].d == 1)
            result = (**rdi_2)(rdi_2)
            int32_t temp5_1 = *(rdi_2 + 0xc)
            *(rdi_2 + 0xc) -= 1
            
            if (temp5_1 == 1)
                return (*(*rdi_2 + 8))(rdi_2, 1)

return result
