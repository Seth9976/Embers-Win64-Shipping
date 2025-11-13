// 函数: sub_141dba950
// 地址: 0x141dba950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x130)

if (rcx != 0 && rcx[0x18] == 0)
    (*(*rcx + 0x3d8))(rcx)

int32_t rcx_1 = 0
int32_t var_a4 = 1
int32_t var_a8 = 0
int32_t r10 = *(arg1 + 0x1c8)
int32_t r8 = 0
void* var_a0 = arg1 + 0x1b0
int32_t var_98 = 0xffffffff
int64_t var_94 = 0

if (r10 != 0)
    void* rax_2 = *(arg1 + 0x1c0)
    void* r9_1 = arg1 + 0x1b0
    
    if (rax_2 != 0)
        r9_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_141dbaa29:
        int32_t rax_9 = ((rdx_2 - 1) & rdx_2) ^ rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_a4_1 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        var_94.d = r8 - rax_10 + 0x1f
        
        if (r8 - rax_10 + 0x1f s> r10)
            var_94.d = r10
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx_1)
            r8 += 0x20
            rcx_1 += 1
            var_94:4.d = r8
            var_a8 = rcx_1
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9_1 + (rdx_3 << 2) + 4)
            int32_t var_98_1 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_141dbaa29
        
        var_94.d = r10

int32_t rdx_4 = *(arg1 + 0x1c8)
var_94.d = rdx_4
int128_t var_48 = 0xffffffff
int128_t var_58 = var_a8.o
int32_t rsi = 0xffffffff << (rdx_4 & 0x1f).b
int32_t r8_3 = rdx_4 s>> 5
int32_t r9_3 = rdx_4 & 0xffffffe0
int64_t var_68 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_98_2 = rsi
int128_t var_88 = (arg1 + 0x1a0).o
int128_t var_78 = var_58
uint64_t result

if (rdx_4 != r10)
    void* rax_13 = *(arg1 + 0x1c0)
    void* r11_1 = arg1 + 0x1b0
    
    if (rax_13 != 0)
        r11_1 = rax_13
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10 - 1)
    int32_t rdx_8 = *(r11_1 + (sx.q(r8_3) << 2)) & rsi
    
    if (rdx_8 != 0)
    label_141dbaaf6:
        int32_t rax_19 = ((rdx_8 - 1) & rdx_8) ^ rdx_8
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_19)
        int32_t rdi_1
        
        if (rax_19 == 0)
            rdi_1 = 0x20
        else
            rdi_1 = 0x1f - temp0_4
        
        result = zx.q(r9_3 - rdi_1 + 0x1f)
        var_94.d = result.d
        
        if (result.d s> r10)
            var_94.d = r10
    else
        while (true)
            int64_t rcx_5 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_8 = *(r11_1 + (rcx_5 << 2) + 4)
            var_98_2 = 0xffffffff
            
            if (rdx_8 != 0)
                goto label_141dbaaf6
        
        var_94.d = r10

while (true)
    int64_t rdx_9 = sx.q(var_78:0xc.d)
    
    if (rdx_9.d != (var_98_2.q u>> 0x20).d || var_78.q != arg1 + 0x1b0)
        result.b = 0
    else
        result.b = 1
    
    int64_t* rcx_7 = var_88.q
    
    if (result.b == 0 || rcx_7 != arg1 + 0x1a0)
        result.b = 1
    else
        result.b = 0
    
    if (result.b == 0)
        break
    
    int64_t* rbx_2 = *((rdx_9 << 4) + *rcx_7)
    void* const rax_28
    
    if (rbx_2 != 0)
        int32_t rax_22 = *(rbx_2 + 0xc)
        
        if (rax_22 s>= data_143e1d9b4)
            rax_28 = nullptr
        else
            int16_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(rax_22)
            uint32_t rdx_11 = zx.d(temp4_1)
            int32_t rax_24 = temp5_1 + rdx_11
            rax_28 = *(data_143e1d9a0 + (sx.q(rax_24 s>> 0x10) << 3))
                + sx.q(zx.d(rax_24.w) - rdx_11) * 0x18
    
    int64_t rax_21
    
    if (rbx_2 == 0 || ((*(rax_28 + 8) u>> 0x1d).b & 1) != 0)
        rax_21.b = 0
    else
        rax_21.b = 1
    
    if (rax_21.b != 0)
        void* rax_30 = sub_1425881f0()
        void* rcx_13 = rbx_2[2]
        int64_t rax_31 = sx.q(*(rax_30 + 0x38))
        
        if (rax_31.d s> *(rcx_13 + 0x38) || *(*(rcx_13 + 0x30) + (rax_31 << 3)) != rax_30 + 0x30)
            (*(*rbx_2 + 0x3d8))(rbx_2, arg2, zx.q(arg3))
    
    var_78:8.d &= not.d(var_88:0xc.d)
    sub_14059bdd0(&var_88:8)

if (arg3 == 0)
    int128_t zmm0 = zx.o(0)
    
    if (zmm0.d f!= *arg2 || zmm0.d f!= arg2[1] || zmm0.d f!= arg2[2])
        result.b = 0
    else
        result.b = 1
    
    if (result.b == 0)
        result = *(arg1 + 0x130)
        
        if (result != 0 && (*(result + 0x88) & 1) != 0)
            sub_141dee430(arg1)
            int64_t rdx_15
            rdx_15.b = 1
            return sub_141df03d0(arg1, rdx_15)

return result
