// 函数: sub_141a56cc0
// 地址: 0x141a56cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = 0
int32_t var_94 = 1
int32_t var_98 = 0
int32_t rbx = arg1[0xe]
int32_t r9 = 0
void* var_90 = &arg1[8]
int32_t var_88 = 0xffffffff
int64_t var_84 = 0

if (rbx != 0)
    void* rax_1 = *(arg1 + 0x30)
    void* r10_1 = &arg1[8]
    
    if (rax_1 != 0)
        r10_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx - 1)
    int32_t rcx = *r10_1
    
    if (rcx != 0)
    label_141a56d6a:
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
        
        var_84.d = r9 - rax_9 + 0x1f
        
        if (r9 - rax_9 + 0x1f s> rbx)
            var_84.d = rbx
    else
        while (true)
            int64_t rcx_1 = sx.q(r8)
            r9 += 0x20
            r8 += 1
            var_84:4.d = r9
            var_98 = r8
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = *(r10_1 + (rcx_1 << 2) + 4)
            var_88 = 0xffffffff
            
            if (rcx != 0)
                goto label_141a56d6a
        
        var_84.d = rbx

int32_t rdx_3 = arg1[0xe]
double zmm2[0x2] = var_88.o
double var_38[0x2] = zmm2
int32_t rsi = 0xffffffff << (rdx_3.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_2 = rdx_3 s>> 5
int32_t r9_3 = rdx_3 & 0xffffffe0
int64_t var_58 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_88_1 = rsi
var_84.d = rdx_3
int128_t var_78 = (&arg1[4]).o
int96_t var_68 = var_48:8.12

if (rdx_3 != rbx)
    void* rax_11 = *(arg1 + 0x30)
    void* r10_2 = &arg1[8]
    
    if (rax_11 != 0)
        r10_2 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx - 1)
    int32_t rdx_7 = *(r10_2 + (sx.q(r8_2) << 2)) & rsi
    
    if (rdx_7 != 0)
    label_141a56e32:
        int32_t rax_18 = neg.d(rdx_7) & rdx_7
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
            int64_t rcx_6 = sx.q(r8_2)
            r9_3 += 0x20
            r8_2 += 1
            
            if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_7 = *(r10_2 + (rcx_6 << 2) + 4)
            var_88_1 = 0xffffffff
            
            if (rdx_7 != 0)
                goto label_141a56e32
        
        var_84.d = rbx

while (true)
    int32_t var_5c
    int64_t rax_20 = sx.q(var_5c)
    int64_t rcx_8 = var_78.q
    
    if (rax_20.d == (var_88_1.q u>> 0x20).d && var_68.q == &arg1[8] && rcx_8 == &arg1[4])
        void* result = sub_140d3c6e0(arg1)
        
        if (result != 0)
            int64_t r9_5 = *result
            var_98.q = 0
            int64_t var_90_1 = 0
            result = (*(r9_5 + 0x278))(result, arg1, &var_98, r9_5, var_98, var_90_1, var_88_1)
            int32_t* rbx_1 = var_98.q
            void* rdi_4 = &rbx_1[sx.q(var_90_1.d) * 4]
            
            if (rbx_1 != rdi_4)
                do
                    result = sub_141a569e0(arg1, rbx_1)
                    rbx_1 = &rbx_1[4]
                while (rbx_1 != rdi_4)
                
                rbx_1 = var_98.q
            
            if (rbx_1 != 0)
                return sub_140a74f90(rbx_1)
        
        return result
    
    int32_t* rsi_2 = rax_20 * 0x38 + *rcx_8
    
    if (rsi_2[4].b != 0)
        void* i_1 = *(rsi_2 + 0x20)
        void* i = &rsi_2[6]
        
        if (i_1 != 0)
            i = i_1
        
        for (void* rdi_1 = i + (sx.q(rsi_2[0xa]) << 3); i != rdi_1; i += 8)
            if (sub_140d3c6e0(i) == 0)
                sub_141a569e0(arg1, rsi_2)
                break
    
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
