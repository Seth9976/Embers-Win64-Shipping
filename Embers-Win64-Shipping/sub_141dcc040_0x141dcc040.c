// 函数: sub_141dcc040
// 地址: 0x141dcc040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_94 = 1
int32_t rbx = *(arg1 + 0x1c8)
int32_t rcx = 0
void* var_90 = arg1 + 0x1b0
int32_t r8 = 0
int32_t var_98 = 0
int32_t var_88 = 0xffffffff
int64_t var_84 = 0

if (rbx != 0)
    void* rax_1 = *(arg1 + 0x1c0)
    void* r9_1 = arg1 + 0x1b0
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_141dcc0e8:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
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
            int64_t rdx_3 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_84:4.d = r8
            var_98 = rcx
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_141dcc0e8
        
        var_84.d = rbx

int32_t rdx_4 = *(arg1 + 0x1c8)
int128_t var_38 = 0xffffffff
int32_t r14 = 0xffffffff << (rdx_4.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_3 = rdx_4 s>> 5
int32_t r9_3 = rdx_4 & 0xffffffe0
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_88_2 = r14
var_84.d = rdx_4
int128_t var_78 = (arg1 + 0x1a0).o
int96_t var_68 = var_48:8.12

if (rdx_4 != rbx)
    void* rax_11 = *(arg1 + 0x1c0)
    void* r10_1 = arg1 + 0x1b0
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx - 1)
    int32_t rdx_8 = *(r10_1 + (sx.q(r8_3) << 2)) & r14
    
    if (rdx_8 != 0)
    label_141dcc1b2:
        int32_t rax_18 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t r11_1
        
        if (rax_18 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_4
        
        var_84.d = r9_3 - r11_1 + 0x1f
        
        if (r9_3 - r11_1 + 0x1f s> rbx)
            var_84.d = rbx
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = *(r10_1 + (rcx_5 << 2) + 4)
            var_88_2 = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_141dcc1b2
        
        var_84.d = rbx

while (true)
    int32_t var_5c
    int64_t rcx_7 = sx.q(var_5c)
    int64_t* rax_20 = var_78.q
    
    if (rcx_7.d == (var_88_2.q u>> 0x20).d && var_68.q == arg1 + 0x1b0 && rax_20 == arg1 + 0x1a0)
        return sub_140bd4c20(*arg2, arg2[1].d, arg3)
    
    int64_t* rbx_1 = *(*rax_20 + rcx_7 * 0x10)
    
    if (rbx_1 != 0)
        int32_t rax_22 = *(rbx_1 + 0xc)
        void* const rax_26
        
        if (rax_22 s>= data_143e1d9b4)
            rax_26 = nullptr
        else
            uint32_t rdx_9 = zx.d(rax_22.w)
            
            if (rax_22 s< 0)
                rax_22 += 0xffff
                rdx_9 -= 0x10000
            
            rax_26 = *(data_143e1d9a0 + (sx.q(rax_22 s>> 0x10) << 3)) + sx.q(rdx_9) * 0x18
        
        if (((*(rax_26 + 8) u>> 0x1d).b & 1) == 0 && (*(*rbx_1 + 0x1b8))(rbx_1) != 0)
            int64_t rsi_1 = sx.q(arg2[1].d)
            int32_t rax_31 = (rsi_1 + 1).d
            arg2[1].d = rax_31
            
            if (rax_31 s> *(arg2 + 0xc))
                sub_1405a4d70(arg2)
            
            *(*arg2 + (rsi_1 << 3)) = rbx_1
            (*(*rbx_1 + 0x1d0))(rbx_1, arg2)
    
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
