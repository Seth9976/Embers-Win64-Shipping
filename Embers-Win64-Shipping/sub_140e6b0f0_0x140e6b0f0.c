// 函数: sub_140e6b0f0
// 地址: 0x140e6b0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_94 = 1
void* r10 = arg1 + 0x1f0
int32_t arg_8 = 0
int32_t r11 = *(r10 + 0x28)
void* r13 = r10 + 0x10
arg_8.q = r10
int32_t var_98 = 0
int32_t rsi = 0
void* var_90 = r13
int32_t rcx = 0
int32_t var_88 = 0xffffffff
int32_t r8 = 0
int64_t var_84 = 0

if (r11 != 0)
    void* rax_1 = *(r13 + 0x10)
    void* r9_1 = r13
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_2 = *r9_1
    
    if (rdx_2 != 0)
    label_140e6b1a8:
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
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_84.d = r11
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
                goto label_140e6b1a8
        
        var_84.d = r11

int32_t rdx_4 = *(r10 + 0x28)
int128_t var_38 = 0xffffffff
uint64_t r14 = zx.q(0xffffffff << (rdx_4.b & 0x1f))
int128_t var_48 = var_98.o
int32_t r8_3 = rdx_4 s>> 5
int32_t r9_3 = rdx_4 & 0xffffffe0
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_88_2 = r14.d
var_84.d = rdx_4
int128_t var_78 = r10.o
int96_t var_68 = var_48:8.12

if (rdx_4 != r11)
    void* rax_11 = *(r13 + 0x10)
    void* r10_1 = r13
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_8 = *(r10_1 + (sx.q(r8_3) << 2)) & r14.d
    
    if (rdx_8 != 0)
    label_140e6b272:
        int32_t rax_18 = neg.d(rdx_8) & rdx_8
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rbx_1
        
        if (rax_18 == 0)
            rbx_1 = 0x20
        else
            rbx_1 = 0x1f - temp0_4
        
        var_84.d = r9_3 - rbx_1 + 0x1f
        
        if (r9_3 - rbx_1 + 0x1f s> r11)
            var_84.d = r11
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
                goto label_140e6b272
        
        var_84.d = r11
    
    r10 = arg_8.q

int64_t* rdi = arg_8.q
int64_t* rbx_2 = arg_8.q

while (true)
    int32_t result_1
    int64_t result = sx.q(result_1)
    int64_t rcx_7 = var_78.q
    
    if (result.d == (var_88_2.q u>> 0x20).d && var_68.q == r13 && rcx_7 == r10)
        int64_t* rbx_5 = arg2[1]
        
        if (rbx_5 != 0)
            rbx_5[1].d -= 1
            
            if (rbx_5[1].d == 1)
                (**rbx_5)(rbx_5)
                int32_t temp6_1 = *(rbx_5 + 0xc)
                *(rbx_5 + 0xc) -= 1
                
                if (temp6_1 == 1)
                    (*(*rbx_5 + 8))(rbx_5, 1)
        
        result.b = 0
        return result
    
    result = result * 0x30 + *rcx_7
    
    if (*(result + 0x10) s> 0)
        rsi |= 3
        int64_t rax_22 = *(result + 8)
        int64_t rbx_4 = sx.q(*(result + 0x10)) * 2
        r14 = *(rax_22 + (rbx_4 << 3) - 0x10)
        rbx_2 = *(rax_22 + (rbx_4 << 3) - 8)
        
        if (rbx_2 != 0)
            *(rbx_2 + 0xc) += 1
        
        rdi = rbx_2
        
        if (rbx_2 != 0)
            int32_t rax_23 = rbx_2[1].d
            
            if (rax_23 == 0)
                rdi = nullptr
            else
                rbx_2[1].d = rax_23 + 1
            
            int32_t temp9_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp9_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
            
            rbx_2 = nullptr
        
        if (rdi == 0)
            r14 = 0
    
    if (*(result + 0x10) s<= 0 || r14 != *arg2)
        r14.b = 0
    else
        r14.b = 1
    
    if ((rsi.b & 2) != 0)
        rsi &= 0xfffffffd
        
        if (rdi != 0)
            rdi[1].d -= 1
            
            if (rdi[1].d == 1)
                (**rdi)(rdi)
                int32_t temp8_1 = *(rdi + 0xc)
                *(rdi + 0xc) -= 1
                
                if (temp8_1 == 1)
                    (*(*rdi + 8))(rdi, 1)
    
    if ((rsi.b & 1) != 0)
        rsi &= 0xfffffffe
        
        if (rbx_2 != 0)
            int32_t temp7_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)
    
    if (r14.b != 0)
        int64_t* rbx_6 = arg2[1]
        
        if (rbx_6 != 0)
            rbx_6[1].d -= 1
            
            if (rbx_6[1].d == 1)
                (**rbx_6)(rbx_6)
                int32_t temp11_1 = *(rbx_6 + 0xc)
                *(rbx_6 + 0xc) -= 1
                
                if (temp11_1 == 1)
                    (*(*rbx_6 + 8))(rbx_6, 1)
        
        result.b = 1
        return result
    
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
    r10 = arg_8.q
