// 函数: sub_141dd2a60
// 地址: 0x141dd2a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm6[0x4] = zx.o(0)

if (arg3 != 0)
    if (__andps_xmmxud_memxud(arg2, data_142d3f770)[0] f> 9.99999994e-09f)
        zmm6 = arg2
    else
        zmm6 = 0x4a1e3400

int32_t var_94 = 1
int32_t r10 = *(arg1 + 0x1c8)
int32_t rcx = 0
int32_t var_98 = 0
int32_t r8 = 0
int32_t var_88 = 0xffffffff
int64_t var_84 = 0

if (r10 != 0)
    void* rax_1 = *(arg1 + 0x1c0)
    void* r9 = arg1 + 0x1b0
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_2
    int32_t temp1_1
    temp0_2:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_141dd2b39:
        int32_t rax_8 = ((rdx_3 - 1) & rdx_3) ^ rdx_3
        uint64_t rflags_1
        int32_t temp0_3
        temp0_3, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_94_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_3
        
        var_84.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r10)
            var_84.d = r10
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_84:4.d = r8
            var_98 = rcx
            
            if (rdx_4.d s>= (temp1_1 + (temp0_2 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_141dd2b39
        
        var_84.d = r10

int32_t rdx_5 = *(arg1 + 0x1c8)
var_84.d = rdx_5
int128_t var_38 = 0xffffffff
uint32_t var_48[0x4] = var_98.o
int32_t r15 = 0xffffffff << (rdx_5 & 0x1f).b
int32_t r8_3 = rdx_5 s>> 5
int32_t r9_2 = rdx_5 & 0xffffffe0
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_88_2 = r15
uint32_t var_78[0x4] = (arg1 + 0x1a0).o
int96_t var_68 = var_48[0].12

if (rdx_5 != r10)
    void* rax_12 = *(arg1 + 0x1c0)
    void* r11_1 = arg1 + 0x1b0
    
    if (rax_12 != 0)
        r11_1 = rax_12
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10 - 1)
    int32_t rdx_9 = *(r11_1 + (sx.q(r8_3) << 2)) & r15
    
    if (rdx_9 != 0)
    label_141dd2c16:
        int32_t rax_18 = ((rdx_9 - 1) & rdx_9) ^ rdx_9
        uint64_t rflags_2
        int32_t temp0_5
        temp0_5, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rbx_1
        
        if (rax_18 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_5
        
        var_84.d = r9_2 - rbx_1 + 0x1f
        
        if (r9_2 - rbx_1 + 0x1f s> r10)
            var_84.d = r10
    else
        while (true)
            int64_t rcx_4 = sx.q(r8_3)
            r9_2 += 0x20
            r8_3 += 1
            
            if (rcx_4.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r11_1 + (rcx_4 << 2) + 4)
            var_88_2 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_141dd2c16
        
        var_84.d = r10

int32_t result

while (true)
    int32_t var_5c
    int64_t rdx_10 = sx.q(var_5c)
    
    if (rdx_10.d != (var_88_2.q u>> 0x20).d || var_68.q != arg1 + 0x1b0)
        result.b = 0
    else
        result.b = 1
    
    int64_t* rcx_6 = var_78[0].q
    
    if (result.b == 0 || rcx_6 != arg1 + 0x1a0)
        result.b = 1
    else
        result.b = 0
    
    if (result.b == 0)
        break
    
    int64_t* rbx_2 = *(*rcx_6 + rdx_10 * 0x10)
    
    if (rbx_2 != 0)
        void* rax_21 = sub_142546fa0()
        void* rcx_8 = rbx_2[2]
        int64_t rax_22 = sx.q(*(rax_21 + 0x38))
        
        if (rax_22.d s<= *(rcx_8 + 0x38) && *(*(rcx_8 + 0x30) + (rax_22 << 3)) == rax_21 + 0x30
                && (rbx_2[0x11].b & 1) != 0)
            (*(*rbx_2 + 0x890))(rbx_2, zmm6, 0, zx.q(arg4), var_98, arg1 + 0x1b0, var_88_2)
    
    var_68:8.d &= not.d(var_78[3])
    sub_14059bdd0(&var_78[2])

return result
