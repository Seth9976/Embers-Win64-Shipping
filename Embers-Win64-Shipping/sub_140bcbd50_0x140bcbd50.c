// 函数: sub_140bcbd50
// 地址: 0x140bcbd50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx
rdx.b = 1
(*(*arg1 + 0x18))(arg1, rdx)
int64_t* rcx = data_143e1a820

if (rcx != 0)
    (*(*rcx + 0x50))(rcx, 0xffffffff)
    rcx = data_143e1a820

(*(*rcx + 0x18))(rcx)
EnterCriticalSection(&arg1[0x1b])
int32_t rcx_2 = 0
int32_t var_94 = 1
int32_t var_98 = 0
int32_t r11 = arg1[6].d
int32_t r8 = 0
void* var_90 = &arg1[3]
int32_t var_88 = 0xffffffff
int64_t var_84 = 0

if (r11 != 0)
    void* rax_3 = arg1[5]
    void* r9_1 = &arg1[3]
    
    if (rax_3 != 0)
        r9_1 = rax_3
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_140bcbe38:
        int32_t rax_10 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
        int32_t var_94_1 = rax_10
        int32_t rax_11
        
        if (rax_10 == 0)
            rax_11 = 0x20
        else
            rax_11 = 0x1f - temp0_2
        
        var_84.d = r8 - rax_11 + 0x1f
        
        if (r8 - rax_11 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_2)
            r8 += 0x20
            rcx_2 += 1
            var_84:4.d = r8
            var_98 = rcx_2
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            var_88 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_140bcbe38
        
        var_84.d = r11

int32_t rdx_5 = arg1[6].d
double zmm2[0x2] = var_88.o
double var_38[0x2] = zmm2
int32_t r15 = 0xffffffff << (rdx_5.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_3 = rdx_5 s>> 5
int32_t r9_3 = rdx_5 & 0xffffffe0
int64_t var_58 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_88_1 = r15
var_84.d = rdx_5
int128_t var_78 = (&arg1[1]).o
int96_t var_68 = var_48:8.12

if (rdx_5 != r11)
    void* rax_13 = arg1[5]
    void* r10_1 = &arg1[3]
    
    if (rax_13 != 0)
        r10_1 = rax_13
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_9 = *(r10_1 + (sx.q(r8_3) << 2)) & r15
    
    if (rdx_9 != 0)
    label_140bcbf02:
        int32_t rax_20 = neg.d(rdx_9) & rdx_9
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_20)
        int32_t rdi_1
        
        if (rax_20 == 0)
            rdi_1 = 0x20
        else
            rdi_1 = 0x1f - temp0_4
        
        var_84.d = r9_3 - rdi_1 + 0x1f
        
        if (r9_3 - rdi_1 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rcx_7 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_7.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_9 = *(r10_1 + (rcx_7 << 2) + 4)
            var_88_1 = 0xffffffff
            
            if (rdx_9 != 0)
                goto label_140bcbf02
        
        var_84.d = r11

while (true)
    int32_t var_5c
    int64_t rax_22 = sx.q(var_5c)
    int64_t* rdx_10 = var_78.q
    
    if (rax_22.d == (var_88_1.q u>> 0x20).d && var_68.q == &arg1[3] && rdx_10 == &arg1[1])
        int32_t r9_6 = arg1[0xc].d
        
        if (r9_6 != *(arg1 + 0x8c))
            sub_140af98a0("Unknown", 0xb0, 
                Initial load is complete, but we still have %d waiting packages.", 
                zx.q(r9_6 - *(arg1 + 0x8c)))
            sub_140afbb40()
        
        if (data_143de5452 != 0)
            uint64_t r9_8 = zx.q(arg1[0x16].d)
            
            if (r9_8.d != 0)
                sub_140af98a0("Unknown", 0xb8, 
                    Initial load is complete, but we still have %d imports to fire (listed above).", 
                    r9_8)
                sub_140afbb40()
        
        void* result = sub_140bc5a40(&arg1[1], 0)
        arg1[0x16].d = 0
        
        if (*(arg1 + 0xb4) != 0)
            result = sub_140638c50(&arg1[0x15], 0)
        
        if (arg1 == -0xd8)
            return result
        
        return LeaveCriticalSection(&arg1[0x1b])
    
    int64_t rcx_9 = rax_22 * 5
    int64_t rax_23 = *rdx_10
    int32_t* rdi_2 = rax_23 + (rcx_9 << 3)
    
    if (*(rax_23 + (rcx_9 << 3) + 0xc) != 2 && rdi_2[6].b == 0 && data_143de5452 != 0)
        int64_t* rax_24 = sub_140b63b70(rdi_2, &var_98)
        int16_t* const r9_5
        
        if (rax_24[1].d == 0)
            r9_5 = &data_142d40450
        else
            r9_5 = *rax_24
        
        int32_t var_a0_1 = rdi_2[3]
        int32_t var_a8_1 = rdi_2[2]
        sub_140af98a0("Unknown", 0xa8, 
            %s (%d) was not complete (%d) after registration was complete.", r9_5)
        int64_t rcx_11 = var_98.q
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        sub_140afbb40()
    
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
