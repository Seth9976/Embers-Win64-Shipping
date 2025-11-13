// 函数: sub_141dcfa80
// 地址: 0x141dcfa80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = 0
int32_t var_84 = 1
int32_t var_88 = 0
int32_t r10 = *(arg1 + 0x1c8)
int32_t r9 = 0
void* var_80 = arg1 + 0x1b0
int32_t var_78 = 0xffffffff
int64_t var_74 = 0

if (r10 != 0)
    void* rax_1 = *(arg1 + 0x1c0)
    void* r11_1 = arg1 + 0x1b0
    
    if (rax_1 != 0)
        r11_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rcx = *r11_1
    
    if (rcx != 0)
    label_141dcfb2c:
        int32_t rax_8 = ((rcx - 1) & rcx) ^ rcx
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_84_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_74.d = r9 - rax_9 + 0x1f
        
        if (r9 - rax_9 + 0x1f s> r10)
            var_74.d = r10
    else
        while (true)
            int64_t rcx_1 = sx.q(r8)
            r9 += 0x20
            r8 += 1
            var_74:4.d = r9
            var_88 = r8
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = *(r11_1 + (rcx_1 << 2) + 4)
            int32_t var_78_1 = 0xffffffff
            
            if (rcx != 0)
                goto label_141dcfb2c
        
        var_74.d = r10

int32_t rdx_3 = *(arg1 + 0x1c8)
var_74.d = rdx_3
int128_t var_28 = 0xffffffff
int128_t var_38 = var_88.o
int32_t r12 = 0xffffffff << (rdx_3 & 0x1f).b
int32_t r8_2 = rdx_3 s>> 5
int32_t r9_3 = rdx_3 & 0xffffffe0
int64_t var_48 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_78_2 = r12
int128_t var_68 = (arg1 + 0x1a0).o
int128_t var_58 = var_38
uint64_t result

if (rdx_3 != r10)
    void* rax_12 = *(arg1 + 0x1c0)
    void* r11_2 = arg1 + 0x1b0
    
    if (rax_12 != 0)
        r11_2 = rax_12
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10 - 1)
    int32_t rdx_7 = *(r11_2 + (sx.q(r8_2) << 2)) & r12
    
    if (rdx_7 != 0)
    label_141dcfc06:
        int32_t rax_18 = ((rdx_7 - 1) & rdx_7) ^ rdx_7
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rbx_1
        
        if (rax_18 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_4
        
        result = zx.q(r9_3 - rbx_1 + 0x1f)
        var_74.d = result.d
        
        if (result.d s> r10)
            var_74.d = r10
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_2)
            r9_3 += 0x20
            r8_2 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_7 = *(r11_2 + (rcx_5 << 2) + 4)
            var_78_2 = 0xffffffff
            
            if (rdx_7 != 0)
                goto label_141dcfc06
        
        var_74.d = r10

while (true)
    int64_t rdx_8 = sx.q(var_58:0xc.d)
    
    if (rdx_8.d != (var_78_2.q u>> 0x20).d || var_58.q != arg1 + 0x1b0)
        result.b = 0
    else
        result.b = 1
    
    int64_t* rcx_7 = var_68.q
    
    if (result.b == 0 || rcx_7 != arg1 + 0x1a0)
        result.b = 1
    else
        result.b = 0
    
    if (result.b == 0)
        break
    
    int64_t* rbx_2 = *(*rcx_7 + rdx_8 * 0x10)
    
    if (rbx_2 != 0)
        void* rax_21 = sub_142577430()
        void* rcx_9 = rbx_2[2]
        int64_t rax_22 = sx.q(*(rax_21 + 0x38))
        
        if (rax_22.d s<= *(rcx_9 + 0x38) && *(*(rcx_9 + 0x30) + (rax_22 << 3)) == rax_21 + 0x30
                && (rbx_2[0x11].b & 1) != 0 && (*(rbx_2 + 0x20a) & 0x30) != 0)
            sub_141ee8490(rbx_2)
    
    int32_t var_5c
    var_58:8.d &= not.d(var_5c)
    sub_14059bdd0(&var_68:8)

int32_t i = 0

if (*(arg1 + 0x128) s> 0)
    int64_t rdi_4 = 0
    
    do
        result = *(arg1 + 0x120)
        void* r8_4 = *(rdi_4 + result)
        
        if (r8_4 != 0)
            int32_t rax_26 = *(r8_4 + 0xc)
            void* const rax_30
            
            if (rax_26 s>= data_143e1d9b4)
                rax_30 = nullptr
            else
                uint32_t rdx_10 = zx.d(rax_26.w)
                
                if (rax_26 s< 0)
                    rax_26 += 0xffff
                    rdx_10 -= 0x10000
                
                rax_30 = *(data_143e1d9a0 + (sx.q(rax_26 s>> 0x10) << 3)) + sx.q(rdx_10) * 0x18
            
            result = zx.q(*(rax_30 + 8) u>> 0x1d)
            
            if ((result.b & 1) == 0)
                result = sub_141dcfa80(r8_4)
        
        i += 1
        rdi_4 += 8
    while (i s< *(arg1 + 0x128))

return result
