// 函数: sub_141dd2e20
// 地址: 0x141dd2e20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x5c) |= 2
sub_142453060(arg1)
*(arg1 + 0x5c) &= 0xfd
int32_t r10 = arg1[0x39].d
int32_t r8 = 0
int32_t var_84 = 1
int32_t var_88 = 0
int32_t rcx = 0
void* var_80 = &arg1[0x36]
int32_t var_78 = 0xffffffff
int32_t var_74 = 0
int32_t var_70 = 0

if (r10 != 0)
    void* rax_1 = arg1[0x38]
    void* r9_1 = &arg1[0x36]
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_3 = *r9_1
    int32_t var_74_2
    
    if (rdx_3 != 0)
    label_141dd2ee9:
        int32_t rax_8 = ((rdx_3 - 1) & rdx_3) ^ rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_84_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        int32_t var_74_1 = rcx - rax_9 + 0x1f
        
        if (rcx - rax_9 + 0x1f s> r10)
            var_74_2 = r10
    else
        while (true)
            int64_t rdx_4 = sx.q(r8)
            rcx += 0x20
            r8 += 1
            int32_t var_70_1 = rcx
            var_88 = r8
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            int32_t var_78_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141dd2ee9
        
        var_74_2 = r10

int32_t rdx_6 = arg1[0x39].d
int32_t var_74_3 = rdx_6
int128_t var_28 = 0xffffffff
int128_t var_38 = var_88.o
int32_t r15 = 0xffffffff << (rdx_6 & 0x1f).b
int32_t r8_2 = rdx_6 s>> 5
int32_t r9_3 = rdx_6 & 0xffffffe0
int64_t var_48 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_78_2 = r15
int128_t var_68 = (&arg1[0x34]).o
int128_t var_58 = var_38

if (rdx_6 != r10)
    void* rax_12 = arg1[0x38]
    void* r11_1 = &arg1[0x36]
    
    if (rax_12 != 0)
        r11_1 = rax_12
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10 - 1)
    int32_t rdx_10 = *(r11_1 + (sx.q(r8_2) << 2)) & r15
    int32_t var_74_5
    
    if (rdx_10 != 0)
    label_141dd2fb8:
        int32_t rax_18 = ((rdx_10 - 1) & rdx_10) ^ rdx_10
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rbx_1
        
        if (rax_18 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_4
        
        int32_t var_74_4 = r9_3 - rbx_1 + 0x1f
        
        if (r9_3 - rbx_1 + 0x1f s> r10)
            var_74_5 = r10
    else
        while (true)
            int64_t rcx_4 = sx.q(r8_2)
            r9_3 += 0x20
            r8_2 += 1
            
            if (rcx_4.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_10 = *(r11_1 + (rcx_4 << 2) + 4)
            var_78_2 = 0xffffffff
            
            if (rdx_10 != 0)
                goto label_141dd2fb8
        
        var_74_5 = r10

int32_t result

while (true)
    int64_t rdx_11 = sx.q(var_58:0xc.d)
    
    if (rdx_11.d != (var_78_2.q u>> 0x20).d || var_58.q != &arg1[0x36])
        result.b = 0
    else
        result.b = 1
    
    int64_t* rcx_6 = var_68.q
    
    if (result.b == 0 || rcx_6 != &arg1[0x34])
        result.b = 1
    else
        result.b = 0
    
    if (result.b == 0)
        break
    
    int64_t* rbx_4 = *(*rcx_6 + rdx_11 * 0x10)
    
    if (rbx_4 != 0)
        void* rax_20 = sub_1425881f0()
        void* rdx_12 = rbx_4[2]
        int64_t rax_21 = sx.q(*(rax_20 + 0x38))
        
        if (rax_21.d s<= *(rdx_12 + 0x38) && *(*(rdx_12 + 0x30) + (rax_21 << 3)) == rax_20 + 0x30
                && rbx_4 != arg1[0x26])
            void* rcx_8 = rbx_4[0x18]
            
            if (rcx_8 != 0 && *(rcx_8 + 0x14f) u> *(rbx_4 + 0x14f))
                void* rax_24 = sub_1425b0750()
                void* rdx_13 = rbx_4[2]
                int64_t rax_25 = sx.q(*(rax_24 + 0x38))
                
                if (rax_25.d s> *(rdx_13 + 0x38)
                        || *(*(rdx_13 + 0x30) + (rax_25 << 3)) != rax_24 + 0x30)
                    int64_t r8_5 = *rbx_4
                    (*(r8_5 + 0x4e0))(rbx_4, zx.q(*(rbx_4[0x18] + 0x14f)), r8_5)
                else
                    (*(*rbx_4 + 0x4e0))(rbx_4, 2)
    
    int32_t var_5c
    var_58:8.d &= not.d(var_5c)
    sub_14059bdd0(&var_68:8)

return result
