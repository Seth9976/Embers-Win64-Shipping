// 函数: sub_14183a3d0
// 地址: 0x14183a3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = *(arg2 + 0x28)
int32_t r9 = 0
int32_t var_94 = 1
int32_t var_98 = 0
void* var_90 = arg2 + 0x10
int32_t var_88 = 0xffffffff
int64_t var_84 = 0
int32_t r8 = 0

if (rbx != 0)
    void* rax_1 = *(arg2 + 0x20)
    void* r10_1 = arg2 + 0x10
    
    if (rax_1 != 0)
        r10_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx - 1)
    int32_t rcx = *r10_1
    
    if (rcx != 0)
    label_14183a47a:
        int32_t rax_8 = neg.d(rcx) & rcx
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_94_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_84.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> rbx)
            var_84.d = rbx
    else
        while (true)
            int64_t rcx_1 = sx.q(r9)
            r8 += 0x20
            r9 += 1
            var_84:4.d = r8
            var_98 = r9
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = *(r10_1 + (rcx_1 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rcx != 0)
                goto label_14183a47a
        
        var_84.d = rbx

int32_t rdx_2 = *(arg2 + 0x28)
int128_t var_38 = 0xffffffff
int32_t r14 = 0xffffffff << (rdx_2.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_3 = rdx_2 s>> 5
int32_t r9_2 = rdx_2 & 0xffffffe0
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_88_2 = r14
var_84.d = rdx_2
int128_t var_78 = arg2.o
int96_t var_68 = var_48:8.12

if (rdx_2 != rbx)
    void* rax_11 = *(arg2 + 0x20)
    void* r10_2 = arg2 + 0x10
    
    if (rax_11 != 0)
        r10_2 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx - 1)
    int32_t rdx_6 = *(r10_2 + (sx.q(r8_3) << 2)) & r14
    
    if (rdx_6 != 0)
    label_14183a542:
        int32_t rax_18 = neg.d(rdx_6) & rdx_6
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t r11_1
        
        if (rax_18 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_84.d = r9_2 - r11_1 + 0x1f
        
        if (r9_2 - r11_1 + 0x1f s> rbx)
            var_84.d = rbx
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_3)
            r9_2 += 0x20
            r8_3 += 1
            
            if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_6 = *(r10_2 + (rcx_6 << 2) + 4)
            var_88_2 = 0xffffffff
            
            if (rdx_6 != 0)
                goto label_14183a542
        
        var_84.d = rbx

while (true)
    int32_t result_1
    int64_t result = sx.q(result_1)
    int64_t* rdx_7 = var_78.q
    
    if (result.d == (var_88_2.q u>> 0x20).d && var_68.q == arg2 + 0x10 && rdx_7 == arg2)
        return result
    
    int64_t r8_4 = *arg1
    void* rax_20 = (*(r8_4 + 0x1c8))(arg1, *rdx_7 + result * 0x18, r8_4)
    
    if (rax_20 != 0)
        int128_t* i = *(rax_20 + 0x48)
        
        for (void* rdi_1 = i + sx.q(*(rax_20 + 0x50)) * 0x18; i != rdi_1; i += 0x18)
            void arg_10
            sub_140acafe0(arg3, &arg_10, i, nullptr)
    
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
